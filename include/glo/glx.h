#ifndef GLO_GLX_H_
#define GLO_GLX_H_

#if !__has_include(<X11/Xlib.h>)
  #error "Xlib.h wasn't found."
#else

#ifdef GLX_H
  #error GLX header already included (API: glx), remove previous include!
#endif
#define GLX_H 1


#include <X11/X.h>
#include <X11/Xlib.h>
#include <X11/Xutil.h>

#include <glo/gl.h>

#define GLO_GLX
#define GLO_OPTION_GLX_LOADER

#ifdef __cplusplus
extern "C" {
#endif

#ifndef GLO_PLATFORM_H_
#define GLO_PLATFORM_H_

#ifndef GLO_PLATFORM_WIN32
  #if defined(_WIN32) || defined(__WIN32__) || defined(WIN32) || defined(__MINGW32__)
    #define GLO_PLATFORM_WIN32 1
  #else
    #define GLO_PLATFORM_WIN32 0
  #endif
#endif

#ifndef GLO_PLATFORM_APPLE
  #ifdef __APPLE__
    #define GLO_PLATFORM_APPLE 1
  #else
    #define GLO_PLATFORM_APPLE 0
  #endif
#endif

#ifndef GLO_PLATFORM_EMSCRIPTEN
  #ifdef __EMSCRIPTEN__
    #define GLO_PLATFORM_EMSCRIPTEN 1
  #else
    #define GLO_PLATFORM_EMSCRIPTEN 0
  #endif
#endif

#ifndef GLO_PLATFORM_UWP
  #if defined(_MSC_VER) && !defined(GLO_INTERNAL_HAVE_WINAPIFAMILY)
    #ifdef __has_include
      #if __has_include(<winapifamily.h>)
        #define GLO_INTERNAL_HAVE_WINAPIFAMILY 1
      #endif
    #elif _MSC_VER >= 1700 && !_USING_V110_SDK71_
      #define GLO_INTERNAL_HAVE_WINAPIFAMILY 1
    #endif
  #endif

  #ifdef GLO_INTERNAL_HAVE_WINAPIFAMILY
    #include <winapifamily.h>
    #if !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) && WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
      #define GLO_PLATFORM_UWP 1
    #endif
  #endif

  #ifndef GLO_PLATFORM_UWP
    #define GLO_PLATFORM_UWP 0
  #endif
#endif

#ifdef __GNUC__
  #define GLO_GNUC_EXTENSION __extension__
#else
  #define GLO_GNUC_EXTENSION
#endif

#define GLO_UNUSED(x) (void)(x)

#ifndef GLO_API_CALL
  #if defined(GLO_API_CALL_EXPORT)
    #if GLO_PLATFORM_WIN32 || defined(__CYGWIN__)
      #if defined(GLO_API_CALL_EXPORT_BUILD)
        #if defined(__GNUC__)
          #define GLO_API_CALL __attribute__ ((dllexport)) extern
        #else
          #define GLO_API_CALL __declspec(dllexport) extern
        #endif
      #else
        #if defined(__GNUC__)
          #define GLO_API_CALL __attribute__ ((dllimport)) extern
        #else
          #define GLO_API_CALL __declspec(dllimport) extern
        #endif
      #endif
    #elif defined(__GNUC__) && defined(GLO_API_CALL_EXPORT_BUILD)
      #define GLO_API_CALL __attribute__ ((visibility ("default"))) extern
    #else
      #define GLO_API_CALL extern
    #endif
  #else
    #define GLO_API_CALL extern
  #endif
#endif

#ifdef APIENTRY
  #define GLO_API_PTR APIENTRY
#elif GLO_PLATFORM_WIN32
  #define GLO_API_PTR __stdcall
#else
  #define GLO_API_PTR
#endif

#ifndef GLAPI
#define GLAPI GLO_API_CALL
#endif

#ifndef GLAPIENTRY
#define GLAPIENTRY GLO_API_PTR
#endif

#define GLO_MAKE_VERSION(major, minor) (major * 10000 + minor)
#define GLO_VERSION_MAJOR(version) (version / 10000)
#define GLO_VERSION_MINOR(version) (version % 10000)

#define GLO_GENERATOR_VERSION "2.0.8"

typedef void (*GLOapiproc)(void);

typedef GLOapiproc (*GLOloadfunc)(const char *name);
typedef GLOapiproc (*GLOuserptrloadfunc)(void *userptr, const char *name);

typedef void (*GLOprecallback)(const char *name, GLOapiproc apiproc, int len_args, ...);
typedef void (*GLOpostcallback)(void *ret, const char *name, GLOapiproc apiproc, int len_args, ...);

#endif /* GLO_PLATFORM_H_ */

#define GLX_3DFX_FULLSCREEN_MODE_MESA 0x2
#define GLX_3DFX_WINDOW_MODE_MESA 0x1
#define GLX_ACCUM_ALPHA_SIZE 17
#define GLX_ACCUM_BLUE_SIZE 16
#define GLX_ACCUM_BUFFER_BIT 0x00000080
#define GLX_ACCUM_BUFFER_BIT_SGIX 0x00000080
#define GLX_ACCUM_GREEN_SIZE 15
#define GLX_ACCUM_RED_SIZE 14
#define GLX_ALPHA_SIZE 11
#define GLX_AUX0_EXT 0x20E2
#define GLX_AUX1_EXT 0x20E3
#define GLX_AUX2_EXT 0x20E4
#define GLX_AUX3_EXT 0x20E5
#define GLX_AUX4_EXT 0x20E6
#define GLX_AUX5_EXT 0x20E7
#define GLX_AUX6_EXT 0x20E8
#define GLX_AUX7_EXT 0x20E9
#define GLX_AUX8_EXT 0x20EA
#define GLX_AUX9_EXT 0x20EB
#define GLX_AUX_BUFFERS 7
#define GLX_AUX_BUFFERS_BIT 0x00000010
#define GLX_AUX_BUFFERS_BIT_SGIX 0x00000010
#define GLX_BACK_BUFFER_AGE_EXT 0x20F4
#define GLX_BACK_EXT 0x20E0
#define GLX_BACK_LEFT_BUFFER_BIT 0x00000004
#define GLX_BACK_LEFT_BUFFER_BIT_SGIX 0x00000004
#define GLX_BACK_LEFT_EXT 0x20E0
#define GLX_BACK_RIGHT_BUFFER_BIT 0x00000008
#define GLX_BACK_RIGHT_BUFFER_BIT_SGIX 0x00000008
#define GLX_BACK_RIGHT_EXT 0x20E1
#define GLX_BAD_ATTRIBUTE 2
#define GLX_BAD_CONTEXT 5
#define GLX_BAD_ENUM 7
#define GLX_BAD_HYPERPIPE_CONFIG_SGIX 91
#define GLX_BAD_HYPERPIPE_SGIX 92
#define GLX_BAD_SCREEN 1
#define GLX_BAD_VALUE 6
#define GLX_BAD_VISUAL 4
#define GLX_BIND_TO_MIPMAP_TEXTURE_EXT 0x20D2
#define GLX_BIND_TO_TEXTURE_RGBA_EXT 0x20D1
#define GLX_BIND_TO_TEXTURE_RGB_EXT 0x20D0
#define GLX_BIND_TO_TEXTURE_TARGETS_EXT 0x20D3
#define GLX_BLENDED_RGBA_SGIS 0x8025
#define GLX_BLUE_SIZE 10
#define GLX_BUFFER_CLOBBER_MASK_SGIX 0x08000000
#define GLX_BUFFER_SIZE 2
#define GLX_BUFFER_SWAP_COMPLETE_INTEL_MASK 0x04000000
#define GLX_BufferSwapComplete 1
#define GLX_COLOR_INDEX_BIT 0x00000002
#define GLX_COLOR_INDEX_BIT_SGIX 0x00000002
#define GLX_COLOR_INDEX_TYPE 0x8015
#define GLX_COLOR_INDEX_TYPE_SGIX 0x8015
#define GLX_COLOR_SAMPLES_NV 0x20B3
#define GLX_CONFIG_CAVEAT 0x20
#define GLX_CONTEXT_ALLOW_BUFFER_BYTE_ORDER_MISMATCH_ARB 0x2095
#define GLX_CONTEXT_COMPATIBILITY_PROFILE_BIT_ARB 0x00000002
#define GLX_CONTEXT_CORE_PROFILE_BIT_ARB 0x00000001
#define GLX_CONTEXT_DEBUG_BIT_ARB 0x00000001
#define GLX_CONTEXT_ES2_PROFILE_BIT_EXT 0x00000004
#define GLX_CONTEXT_ES_PROFILE_BIT_EXT 0x00000004
#define GLX_CONTEXT_FLAGS_ARB 0x2094
#define GLX_CONTEXT_FORWARD_COMPATIBLE_BIT_ARB 0x00000002
#define GLX_CONTEXT_MAJOR_VERSION_ARB 0x2091
#define GLX_CONTEXT_MINOR_VERSION_ARB 0x2092
#define GLX_CONTEXT_MULTIGPU_ATTRIB_AFR_NV 0x20AC
#define GLX_CONTEXT_MULTIGPU_ATTRIB_MULTICAST_NV 0x20AD
#define GLX_CONTEXT_MULTIGPU_ATTRIB_MULTI_DISPLAY_MULTICAST_NV 0x20AE
#define GLX_CONTEXT_MULTIGPU_ATTRIB_NV 0x20AA
#define GLX_CONTEXT_MULTIGPU_ATTRIB_SINGLE_NV 0x20AB
#define GLX_CONTEXT_OPENGL_NO_ERROR_ARB 0x31B3
#define GLX_CONTEXT_PRIORITY_HIGH_EXT 0x3101
#define GLX_CONTEXT_PRIORITY_LEVEL_EXT 0x3100
#define GLX_CONTEXT_PRIORITY_LOW_EXT 0x3103
#define GLX_CONTEXT_PRIORITY_MEDIUM_EXT 0x3102
#define GLX_CONTEXT_PROFILE_MASK_ARB 0x9126
#define GLX_CONTEXT_RELEASE_BEHAVIOR_ARB 0x2097
#define GLX_CONTEXT_RELEASE_BEHAVIOR_FLUSH_ARB 0x2098
#define GLX_CONTEXT_RELEASE_BEHAVIOR_NONE_ARB 0
#define GLX_CONTEXT_RESET_ISOLATION_BIT_ARB 0x00000008
#define GLX_CONTEXT_RESET_NOTIFICATION_STRATEGY_ARB 0x8256
#define GLX_CONTEXT_ROBUST_ACCESS_BIT_ARB 0x00000004
#define GLX_COPY_COMPLETE_INTEL 0x8181
#define GLX_COVERAGE_SAMPLES_NV 100001
#define GLX_DAMAGED 0x8020
#define GLX_DAMAGED_SGIX 0x8020
#define GLX_DEPTH_BUFFER_BIT 0x00000020
#define GLX_DEPTH_BUFFER_BIT_SGIX 0x00000020
#define GLX_DEPTH_SIZE 12
#define GLX_DEVICE_ID_NV 0x20CD
#define GLX_DIRECT_COLOR 0x8003
#define GLX_DIRECT_COLOR_EXT 0x8003
#define GLX_DONT_CARE 0xFFFFFFFF
#define GLX_DOUBLEBUFFER 5
#define GLX_DRAWABLE_TYPE 0x8010
#define GLX_DRAWABLE_TYPE_SGIX 0x8010
#define GLX_EVENT_MASK 0x801F
#define GLX_EVENT_MASK_SGIX 0x801F
#define GLX_EXCHANGE_COMPLETE_INTEL 0x8180
#define GLX_EXTENSIONS 0x3
#define GLX_EXTENSION_NAME "GLX"
#define GLX_FBCONFIG_ID 0x8013
#define GLX_FBCONFIG_ID_SGIX 0x8013
#define GLX_FLIP_COMPLETE_INTEL 0x8182
#define GLX_FLOAT_COMPONENTS_NV 0x20B0
#define GLX_FRAMEBUFFER_SRGB_CAPABLE_ARB 0x20B2
#define GLX_FRAMEBUFFER_SRGB_CAPABLE_EXT 0x20B2
#define GLX_FRONT_EXT 0x20DE
#define GLX_FRONT_LEFT_BUFFER_BIT 0x00000001
#define GLX_FRONT_LEFT_BUFFER_BIT_SGIX 0x00000001
#define GLX_FRONT_LEFT_EXT 0x20DE
#define GLX_FRONT_RIGHT_BUFFER_BIT 0x00000002
#define GLX_FRONT_RIGHT_BUFFER_BIT_SGIX 0x00000002
#define GLX_FRONT_RIGHT_EXT 0x20DF
#define GLX_GENERATE_RESET_ON_VIDEO_MEMORY_PURGE_NV 0x20F7
#define GLX_GPU_CLOCK_AMD 0x21A4
#define GLX_GPU_FASTEST_TARGET_GPUS_AMD 0x21A2
#define GLX_GPU_NUM_PIPES_AMD 0x21A5
#define GLX_GPU_NUM_RB_AMD 0x21A7
#define GLX_GPU_NUM_SIMD_AMD 0x21A6
#define GLX_GPU_NUM_SPI_AMD 0x21A8
#define GLX_GPU_OPENGL_VERSION_STRING_AMD 0x1F02
#define GLX_GPU_RAM_AMD 0x21A3
#define GLX_GPU_RENDERER_STRING_AMD 0x1F01
#define GLX_GPU_VENDOR_AMD 0x1F00
#define GLX_GRAY_SCALE 0x8006
#define GLX_GRAY_SCALE_EXT 0x8006
#define GLX_GREEN_SIZE 9
#define GLX_HEIGHT 0x801E
#define GLX_HEIGHT_SGIX 0x801E
#define GLX_HYPERPIPE_DISPLAY_PIPE_SGIX 0x00000001
#define GLX_HYPERPIPE_ID_SGIX 0x8030
#define GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX 80
#define GLX_HYPERPIPE_PIXEL_AVERAGE_SGIX 0x00000004
#define GLX_HYPERPIPE_RENDER_PIPE_SGIX 0x00000002
#define GLX_HYPERPIPE_STEREO_SGIX 0x00000003
#define GLX_LARGEST_PBUFFER 0x801C
#define GLX_LARGEST_PBUFFER_SGIX 0x801C
#define GLX_LATE_SWAPS_TEAR_EXT 0x20F3
#define GLX_LEVEL 3
#define GLX_LOSE_CONTEXT_ON_RESET_ARB 0x8252
#define GLX_MAX_PBUFFER_HEIGHT 0x8017
#define GLX_MAX_PBUFFER_HEIGHT_SGIX 0x8017
#define GLX_MAX_PBUFFER_PIXELS 0x8018
#define GLX_MAX_PBUFFER_PIXELS_SGIX 0x8018
#define GLX_MAX_PBUFFER_WIDTH 0x8016
#define GLX_MAX_PBUFFER_WIDTH_SGIX 0x8016
#define GLX_MAX_SWAP_INTERVAL_EXT 0x20F2
#define GLX_MIPMAP_TEXTURE_EXT 0x20D7
#define GLX_MULTISAMPLE_SUB_RECT_HEIGHT_SGIS 0x8027
#define GLX_MULTISAMPLE_SUB_RECT_WIDTH_SGIS 0x8026
#define GLX_NONE 0x8000
#define GLX_NONE_EXT 0x8000
#define GLX_NON_CONFORMANT_CONFIG 0x800D
#define GLX_NON_CONFORMANT_VISUAL_EXT 0x800D
#define GLX_NO_EXTENSION 3
#define GLX_NO_RESET_NOTIFICATION_ARB 0x8261
#define GLX_NUM_VIDEO_CAPTURE_SLOTS_NV 0x20CF
#define GLX_NUM_VIDEO_SLOTS_NV 0x20F0
#define GLX_OPTIMAL_PBUFFER_HEIGHT_SGIX 0x801A
#define GLX_OPTIMAL_PBUFFER_WIDTH_SGIX 0x8019
#define GLX_PBUFFER 0x8023
#define GLX_PBUFFER_BIT 0x00000004
#define GLX_PBUFFER_BIT_SGIX 0x00000004
#define GLX_PBUFFER_CLOBBER_MASK 0x08000000
#define GLX_PBUFFER_HEIGHT 0x8040
#define GLX_PBUFFER_SGIX 0x8023
#define GLX_PBUFFER_WIDTH 0x8041
#define GLX_PIPE_RECT_LIMITS_SGIX 0x00000002
#define GLX_PIPE_RECT_SGIX 0x00000001
#define GLX_PIXMAP_BIT 0x00000002
#define GLX_PIXMAP_BIT_SGIX 0x00000002
#define GLX_PRESERVED_CONTENTS 0x801B
#define GLX_PRESERVED_CONTENTS_SGIX 0x801B
#define GLX_PSEUDO_COLOR 0x8004
#define GLX_PSEUDO_COLOR_EXT 0x8004
#define GLX_PbufferClobber 0
#define GLX_RED_SIZE 8
#define GLX_RENDERER_ACCELERATED_MESA 0x8186
#define GLX_RENDERER_DEVICE_ID_MESA 0x8184
#define GLX_RENDERER_OPENGL_COMPATIBILITY_PROFILE_VERSION_MESA 0x818B
#define GLX_RENDERER_OPENGL_CORE_PROFILE_VERSION_MESA 0x818A
#define GLX_RENDERER_OPENGL_ES2_PROFILE_VERSION_MESA 0x818D
#define GLX_RENDERER_OPENGL_ES_PROFILE_VERSION_MESA 0x818C
#define GLX_RENDERER_PREFERRED_PROFILE_MESA 0x8189
#define GLX_RENDERER_UNIFIED_MEMORY_ARCHITECTURE_MESA 0x8188
#define GLX_RENDERER_VENDOR_ID_MESA 0x8183
#define GLX_RENDERER_VERSION_MESA 0x8185
#define GLX_RENDERER_VIDEO_MEMORY_MESA 0x8187
#define GLX_RENDER_TYPE 0x8011
#define GLX_RENDER_TYPE_SGIX 0x8011
#define GLX_RGBA 4
#define GLX_RGBA_BIT 0x00000001
#define GLX_RGBA_BIT_SGIX 0x00000001
#define GLX_RGBA_FLOAT_BIT_ARB 0x00000004
#define GLX_RGBA_FLOAT_TYPE_ARB 0x20B9
#define GLX_RGBA_TYPE 0x8014
#define GLX_RGBA_TYPE_SGIX 0x8014
#define GLX_RGBA_UNSIGNED_FLOAT_BIT_EXT 0x00000008
#define GLX_RGBA_UNSIGNED_FLOAT_TYPE_EXT 0x20B1
#define GLX_SAMPLES 100001
#define GLX_SAMPLES_3DFX 0x8051
#define GLX_SAMPLES_ARB 100001
#define GLX_SAMPLES_SGIS 100001
#define GLX_SAMPLE_BUFFERS 100000
#define GLX_SAMPLE_BUFFERS_3DFX 0x8050
#define GLX_SAMPLE_BUFFERS_ARB 100000
#define GLX_SAMPLE_BUFFERS_BIT_SGIX 0x00000100
#define GLX_SAMPLE_BUFFERS_SGIS 100000
#define GLX_SAVED 0x8021
#define GLX_SAVED_SGIX 0x8021
#define GLX_SCREEN 0x800C
#define GLX_SCREEN_EXT 0x800C
#define GLX_SHARE_CONTEXT_EXT 0x800A
#define GLX_SLOW_CONFIG 0x8001
#define GLX_SLOW_VISUAL_EXT 0x8001
#define GLX_STATIC_COLOR 0x8005
#define GLX_STATIC_COLOR_EXT 0x8005
#define GLX_STATIC_GRAY 0x8007
#define GLX_STATIC_GRAY_EXT 0x8007
#define GLX_STENCIL_BUFFER_BIT 0x00000040
#define GLX_STENCIL_BUFFER_BIT_SGIX 0x00000040
#define GLX_STENCIL_SIZE 13
#define GLX_STEREO 6
#define GLX_STEREO_NOTIFY_EXT 0x00000000
#define GLX_STEREO_NOTIFY_MASK_EXT 0x00000001
#define GLX_STEREO_TREE_EXT 0x20F5
#define GLX_SWAP_COPY_OML 0x8062
#define GLX_SWAP_EXCHANGE_OML 0x8061
#define GLX_SWAP_INTERVAL_EXT 0x20F1
#define GLX_SWAP_METHOD_OML 0x8060
#define GLX_SWAP_UNDEFINED_OML 0x8063
#define GLX_SYNC_FRAME_SGIX 0x00000000
#define GLX_SYNC_SWAP_SGIX 0x00000001
#define GLX_TEXTURE_1D_BIT_EXT 0x00000001
#define GLX_TEXTURE_1D_EXT 0x20DB
#define GLX_TEXTURE_2D_BIT_EXT 0x00000002
#define GLX_TEXTURE_2D_EXT 0x20DC
#define GLX_TEXTURE_FORMAT_EXT 0x20D5
#define GLX_TEXTURE_FORMAT_NONE_EXT 0x20D8
#define GLX_TEXTURE_FORMAT_RGBA_EXT 0x20DA
#define GLX_TEXTURE_FORMAT_RGB_EXT 0x20D9
#define GLX_TEXTURE_RECTANGLE_BIT_EXT 0x00000004
#define GLX_TEXTURE_RECTANGLE_EXT 0x20DD
#define GLX_TEXTURE_TARGET_EXT 0x20D6
#define GLX_TRANSPARENT_ALPHA_VALUE 0x28
#define GLX_TRANSPARENT_ALPHA_VALUE_EXT 0x28
#define GLX_TRANSPARENT_BLUE_VALUE 0x27
#define GLX_TRANSPARENT_BLUE_VALUE_EXT 0x27
#define GLX_TRANSPARENT_GREEN_VALUE 0x26
#define GLX_TRANSPARENT_GREEN_VALUE_EXT 0x26
#define GLX_TRANSPARENT_INDEX 0x8009
#define GLX_TRANSPARENT_INDEX_EXT 0x8009
#define GLX_TRANSPARENT_INDEX_VALUE 0x24
#define GLX_TRANSPARENT_INDEX_VALUE_EXT 0x24
#define GLX_TRANSPARENT_RED_VALUE 0x25
#define GLX_TRANSPARENT_RED_VALUE_EXT 0x25
#define GLX_TRANSPARENT_RGB 0x8008
#define GLX_TRANSPARENT_RGB_EXT 0x8008
#define GLX_TRANSPARENT_TYPE 0x23
#define GLX_TRANSPARENT_TYPE_EXT 0x23
#define GLX_TRUE_COLOR 0x8002
#define GLX_TRUE_COLOR_EXT 0x8002
#define GLX_UNIQUE_ID_NV 0x20CE
#define GLX_USE_GL 1
#define GLX_VENDOR 0x1
#define GLX_VENDOR_NAMES_EXT 0x20F6
#define GLX_VERSION 0x2
#define GLX_VIDEO_OUT_ALPHA_NV 0x20C4
#define GLX_VIDEO_OUT_COLOR_AND_ALPHA_NV 0x20C6
#define GLX_VIDEO_OUT_COLOR_AND_DEPTH_NV 0x20C7
#define GLX_VIDEO_OUT_COLOR_NV 0x20C3
#define GLX_VIDEO_OUT_DEPTH_NV 0x20C5
#define GLX_VIDEO_OUT_FIELD_1_NV 0x20C9
#define GLX_VIDEO_OUT_FIELD_2_NV 0x20CA
#define GLX_VIDEO_OUT_FRAME_NV 0x20C8
#define GLX_VIDEO_OUT_STACKED_FIELDS_1_2_NV 0x20CB
#define GLX_VIDEO_OUT_STACKED_FIELDS_2_1_NV 0x20CC
#define GLX_VISUAL_CAVEAT_EXT 0x20
#define GLX_VISUAL_ID 0x800B
#define GLX_VISUAL_ID_EXT 0x800B
#define GLX_VISUAL_SELECT_GROUP_SGIX 0x8028
#define GLX_WIDTH 0x801D
#define GLX_WIDTH_SGIX 0x801D
#define GLX_WINDOW 0x8022
#define GLX_WINDOW_BIT 0x00000001
#define GLX_WINDOW_BIT_SGIX 0x00000001
#define GLX_WINDOW_SGIX 0x8022
#define GLX_X_RENDERABLE 0x8012
#define GLX_X_RENDERABLE_SGIX 0x8012
#define GLX_X_VISUAL_TYPE 0x22
#define GLX_X_VISUAL_TYPE_EXT 0x22
#define GLX_Y_INVERTED_EXT 0x20D4
#define __GLX_NUMBER_EVENTS 17


#ifndef GLEXT_64_TYPES_DEFINED
/* This code block is duplicated in glext.h, so must be protected */
#define GLEXT_64_TYPES_DEFINED
/* Define int32_t, int64_t, and uint64_t types for UST/MSC */
/* (as used in the GLX_OML_sync_control extension). */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L
#include <inttypes.h>
#elif defined(__sun__) || defined(__digital__)
#include <inttypes.h>
#if defined(__STDC__)
#if defined(__arch64__) || defined(_LP64)
typedef long int int64_t;
typedef unsigned long int uint64_t;
#else
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#endif /* __arch64__ */
#endif /* __STDC__ */
#elif defined( __VMS ) || defined(__sgi)
#include <inttypes.h>
#elif defined(__SCO__) || defined(__USLC__)
#include <stdint.h>
#elif defined(__UNIXOS2__) || defined(__SOL64__)
typedef long int int32_t;
typedef long long int int64_t;
typedef unsigned long long int uint64_t;
#elif defined(_WIN32) && defined(__GNUC__)
#include <stdint.h>
#elif defined(_WIN32)
typedef __int32 int32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;
#else
/* Fallback if nothing above works */
#include <inttypes.h>
#endif
#endif

















#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && (__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ > 1060)

#else

#endif

#if defined(__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__) && (__ENVIRONMENT_MAC_OS_X_VERSION_MIN_REQUIRED__ > 1060)

#else

#endif







typedef XID GLXFBConfigID;
typedef struct __GLXFBConfigRec *GLXFBConfig;
typedef XID GLXContextID;
typedef struct __GLXcontextRec *GLXContext;
typedef XID GLXPixmap;
typedef XID GLXDrawable;
typedef XID GLXWindow;
typedef XID GLXPbuffer;
typedef void (GLO_API_PTR *__GLXextFuncPtr)(void);
typedef XID GLXVideoCaptureDeviceNV;
typedef unsigned int GLXVideoDeviceNV;
typedef XID GLXVideoSourceSGIX;
typedef XID GLXFBConfigIDSGIX;
typedef struct __GLXFBConfigRec *GLXFBConfigSGIX;
typedef XID GLXPbufferSGIX;
typedef struct {
    int event_type;             /* GLX_DAMAGED or GLX_SAVED */
    int draw_type;              /* GLX_WINDOW or GLX_PBUFFER */
    unsigned long serial;       /* # of last request processed by server */
    Bool send_event;            /* true if this came for SendEvent request */
    Display *display;           /* display the event was read from */
    GLXDrawable drawable;       /* XID of Drawable */
    unsigned int buffer_mask;   /* mask indicating which buffers are affected */
    unsigned int aux_buffer;    /* which aux buffer was affected */
    int x, y;
    int width, height;
    int count;                  /* if nonzero, at least this many more */
} GLXPbufferClobberEvent;
typedef struct {
    int type;
    unsigned long serial;       /* # of last request processed by server */
    Bool send_event;            /* true if this came from a SendEvent request */
    Display *display;           /* Display the event was read from */
    GLXDrawable drawable;       /* drawable on which event was requested in event mask */
    int event_type;
    int64_t ust;
    int64_t msc;
    int64_t sbc;
} GLXBufferSwapComplete;
typedef union __GLXEvent {
    GLXPbufferClobberEvent glxpbufferclobber;
    GLXBufferSwapComplete glxbufferswapcomplete;
    long pad[24];
} GLXEvent;
typedef struct {
    int type;
    unsigned long serial;
    Bool send_event;
    Display *display;
    int extension;
    int evtype;
    GLXDrawable window;
    Bool stereo_tree;
} GLXStereoNotifyEventEXT;
typedef struct {
    int type;
    unsigned long serial;   /* # of last request processed by server */
    Bool send_event;        /* true if this came for SendEvent request */
    Display *display;       /* display the event was read from */
    GLXDrawable drawable;   /* i.d. of Drawable */
    int event_type;         /* GLX_DAMAGED_SGIX or GLX_SAVED_SGIX */
    int draw_type;          /* GLX_WINDOW_SGIX or GLX_PBUFFER_SGIX */
    unsigned int mask;      /* mask indicating which buffers are affected*/
    int x, y;
    int width, height;
    int count;              /* if nonzero, at least this many more */
} GLXBufferClobberEventSGIX;
typedef struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     networkId;
} GLXHyperpipeNetworkSGIX;
typedef struct {
    char    pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int     channel;
    unsigned int participationType;
    int     timeSlice;
} GLXHyperpipeConfigSGIX;
typedef struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int srcXOrigin, srcYOrigin, srcWidth, srcHeight;
    int destXOrigin, destYOrigin, destWidth, destHeight;
} GLXPipeRect;
typedef struct {
    char pipeName[80]; /* Should be [GLX_HYPERPIPE_PIPE_NAME_LENGTH_SGIX] */
    int XOrigin, YOrigin, maxHeight, maxWidth;
} GLXPipeRectLimits;


#define GLX_VERSION_1_0 1
GLO_API_CALL int GLO_GLX_VERSION_1_0;
#define GLX_VERSION_1_1 1
GLO_API_CALL int GLO_GLX_VERSION_1_1;
#define GLX_VERSION_1_2 1
GLO_API_CALL int GLO_GLX_VERSION_1_2;
#define GLX_VERSION_1_3 1
GLO_API_CALL int GLO_GLX_VERSION_1_3;
#define GLX_VERSION_1_4 1
GLO_API_CALL int GLO_GLX_VERSION_1_4;
#define GLX_3DFX_multisample 1
GLO_API_CALL int GLO_GLX_3DFX_multisample;
#define GLX_AMD_gpu_association 1
GLO_API_CALL int GLO_GLX_AMD_gpu_association;
#define GLX_ARB_context_flush_control 1
GLO_API_CALL int GLO_GLX_ARB_context_flush_control;
#define GLX_ARB_create_context 1
GLO_API_CALL int GLO_GLX_ARB_create_context;
#define GLX_ARB_create_context_no_error 1
GLO_API_CALL int GLO_GLX_ARB_create_context_no_error;
#define GLX_ARB_create_context_profile 1
GLO_API_CALL int GLO_GLX_ARB_create_context_profile;
#define GLX_ARB_create_context_robustness 1
GLO_API_CALL int GLO_GLX_ARB_create_context_robustness;
#define GLX_ARB_fbconfig_float 1
GLO_API_CALL int GLO_GLX_ARB_fbconfig_float;
#define GLX_ARB_framebuffer_sRGB 1
GLO_API_CALL int GLO_GLX_ARB_framebuffer_sRGB;
#define GLX_ARB_get_proc_address 1
GLO_API_CALL int GLO_GLX_ARB_get_proc_address;
#define GLX_ARB_multisample 1
GLO_API_CALL int GLO_GLX_ARB_multisample;
#define GLX_ARB_robustness_application_isolation 1
GLO_API_CALL int GLO_GLX_ARB_robustness_application_isolation;
#define GLX_ARB_robustness_share_group_isolation 1
GLO_API_CALL int GLO_GLX_ARB_robustness_share_group_isolation;
#define GLX_ARB_vertex_buffer_object 1
GLO_API_CALL int GLO_GLX_ARB_vertex_buffer_object;
#define GLX_EXT_buffer_age 1
GLO_API_CALL int GLO_GLX_EXT_buffer_age;
#define GLX_EXT_context_priority 1
GLO_API_CALL int GLO_GLX_EXT_context_priority;
#define GLX_EXT_create_context_es2_profile 1
GLO_API_CALL int GLO_GLX_EXT_create_context_es2_profile;
#define GLX_EXT_create_context_es_profile 1
GLO_API_CALL int GLO_GLX_EXT_create_context_es_profile;
#define GLX_EXT_fbconfig_packed_float 1
GLO_API_CALL int GLO_GLX_EXT_fbconfig_packed_float;
#define GLX_EXT_framebuffer_sRGB 1
GLO_API_CALL int GLO_GLX_EXT_framebuffer_sRGB;
#define GLX_EXT_get_drawable_type 1
GLO_API_CALL int GLO_GLX_EXT_get_drawable_type;
#define GLX_EXT_import_context 1
GLO_API_CALL int GLO_GLX_EXT_import_context;
#define GLX_EXT_libglvnd 1
GLO_API_CALL int GLO_GLX_EXT_libglvnd;
#define GLX_EXT_no_config_context 1
GLO_API_CALL int GLO_GLX_EXT_no_config_context;
#define GLX_EXT_stereo_tree 1
GLO_API_CALL int GLO_GLX_EXT_stereo_tree;
#define GLX_EXT_swap_control 1
GLO_API_CALL int GLO_GLX_EXT_swap_control;
#define GLX_EXT_swap_control_tear 1
GLO_API_CALL int GLO_GLX_EXT_swap_control_tear;
#define GLX_EXT_texture_from_pixmap 1
GLO_API_CALL int GLO_GLX_EXT_texture_from_pixmap;
#define GLX_EXT_visual_info 1
GLO_API_CALL int GLO_GLX_EXT_visual_info;
#define GLX_EXT_visual_rating 1
GLO_API_CALL int GLO_GLX_EXT_visual_rating;
#define GLX_INTEL_swap_event 1
GLO_API_CALL int GLO_GLX_INTEL_swap_event;
#define GLX_MESA_agp_offset 1
GLO_API_CALL int GLO_GLX_MESA_agp_offset;
#define GLX_MESA_copy_sub_buffer 1
GLO_API_CALL int GLO_GLX_MESA_copy_sub_buffer;
#define GLX_MESA_pixmap_colormap 1
GLO_API_CALL int GLO_GLX_MESA_pixmap_colormap;
#define GLX_MESA_query_renderer 1
GLO_API_CALL int GLO_GLX_MESA_query_renderer;
#define GLX_MESA_release_buffers 1
GLO_API_CALL int GLO_GLX_MESA_release_buffers;
#define GLX_MESA_set_3dfx_mode 1
GLO_API_CALL int GLO_GLX_MESA_set_3dfx_mode;
#define GLX_MESA_swap_control 1
GLO_API_CALL int GLO_GLX_MESA_swap_control;
#define GLX_NV_copy_buffer 1
GLO_API_CALL int GLO_GLX_NV_copy_buffer;
#define GLX_NV_copy_image 1
GLO_API_CALL int GLO_GLX_NV_copy_image;
#define GLX_NV_delay_before_swap 1
GLO_API_CALL int GLO_GLX_NV_delay_before_swap;
#define GLX_NV_float_buffer 1
GLO_API_CALL int GLO_GLX_NV_float_buffer;
#define GLX_NV_multigpu_context 1
GLO_API_CALL int GLO_GLX_NV_multigpu_context;
#define GLX_NV_multisample_coverage 1
GLO_API_CALL int GLO_GLX_NV_multisample_coverage;
#define GLX_NV_present_video 1
GLO_API_CALL int GLO_GLX_NV_present_video;
#define GLX_NV_robustness_video_memory_purge 1
GLO_API_CALL int GLO_GLX_NV_robustness_video_memory_purge;
#define GLX_NV_swap_group 1
GLO_API_CALL int GLO_GLX_NV_swap_group;
#define GLX_NV_video_capture 1
GLO_API_CALL int GLO_GLX_NV_video_capture;
#define GLX_NV_video_out 1
GLO_API_CALL int GLO_GLX_NV_video_out;
#define GLX_OML_swap_method 1
GLO_API_CALL int GLO_GLX_OML_swap_method;
#define GLX_OML_sync_control 1
GLO_API_CALL int GLO_GLX_OML_sync_control;
#define GLX_SGIS_blended_overlay 1
GLO_API_CALL int GLO_GLX_SGIS_blended_overlay;
#define GLX_SGIS_multisample 1
GLO_API_CALL int GLO_GLX_SGIS_multisample;
#define GLX_SGIS_shared_multisample 1
GLO_API_CALL int GLO_GLX_SGIS_shared_multisample;
#define GLX_SGIX_fbconfig 1
GLO_API_CALL int GLO_GLX_SGIX_fbconfig;
#define GLX_SGIX_hyperpipe 1
GLO_API_CALL int GLO_GLX_SGIX_hyperpipe;
#define GLX_SGIX_pbuffer 1
GLO_API_CALL int GLO_GLX_SGIX_pbuffer;
#define GLX_SGIX_swap_barrier 1
GLO_API_CALL int GLO_GLX_SGIX_swap_barrier;
#define GLX_SGIX_swap_group 1
GLO_API_CALL int GLO_GLX_SGIX_swap_group;
#define GLX_SGIX_video_resize 1
GLO_API_CALL int GLO_GLX_SGIX_video_resize;
#define GLX_SGIX_visual_select_group 1
GLO_API_CALL int GLO_GLX_SGIX_visual_select_group;
#define GLX_SGI_cushion 1
GLO_API_CALL int GLO_GLX_SGI_cushion;
#define GLX_SGI_make_current_read 1
GLO_API_CALL int GLO_GLX_SGI_make_current_read;
#define GLX_SGI_swap_control 1
GLO_API_CALL int GLO_GLX_SGI_swap_control;
#define GLX_SGI_video_sync 1
GLO_API_CALL int GLO_GLX_SGI_video_sync;
#define GLX_SUN_get_transparent_index 1
GLO_API_CALL int GLO_GLX_SUN_get_transparent_index;


typedef int (GLO_API_PTR *PFNGLXBINDCHANNELTOWINDOWSGIXPROC)(Display * display, int screen, int channel, Window window);
typedef int (GLO_API_PTR *PFNGLXBINDHYPERPIPESGIXPROC)(Display * dpy, int hpId);
typedef Bool (GLO_API_PTR *PFNGLXBINDSWAPBARRIERNVPROC)(Display * dpy, GLuint group, GLuint barrier);
typedef void (GLO_API_PTR *PFNGLXBINDSWAPBARRIERSGIXPROC)(Display * dpy, GLXDrawable drawable, int barrier);
typedef void (GLO_API_PTR *PFNGLXBINDTEXIMAGEEXTPROC)(Display * dpy, GLXDrawable drawable, int buffer, const int * attrib_list);
typedef int (GLO_API_PTR *PFNGLXBINDVIDEOCAPTUREDEVICENVPROC)(Display * dpy, unsigned int video_capture_slot, GLXVideoCaptureDeviceNV device);
typedef int (GLO_API_PTR *PFNGLXBINDVIDEODEVICENVPROC)(Display * dpy, unsigned int video_slot, unsigned int video_device, const int * attrib_list);
typedef int (GLO_API_PTR *PFNGLXBINDVIDEOIMAGENVPROC)(Display * dpy, GLXVideoDeviceNV VideoDevice, GLXPbuffer pbuf, int iVideoBuffer);
typedef void (GLO_API_PTR *PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC)(GLXContext dstCtx, GLint srcX0, GLint srcY0, GLint srcX1, GLint srcY1, GLint dstX0, GLint dstY0, GLint dstX1, GLint dstY1, GLbitfield mask, GLenum filter);
typedef int (GLO_API_PTR *PFNGLXCHANNELRECTSGIXPROC)(Display * display, int screen, int channel, int x, int y, int w, int h);
typedef int (GLO_API_PTR *PFNGLXCHANNELRECTSYNCSGIXPROC)(Display * display, int screen, int channel, GLenum synctype);
typedef GLXFBConfig * (GLO_API_PTR *PFNGLXCHOOSEFBCONFIGPROC)(Display * dpy, int screen, const int * attrib_list, int * nelements);
typedef GLXFBConfigSGIX * (GLO_API_PTR *PFNGLXCHOOSEFBCONFIGSGIXPROC)(Display * dpy, int screen, int * attrib_list, int * nelements);
typedef XVisualInfo * (GLO_API_PTR *PFNGLXCHOOSEVISUALPROC)(Display * dpy, int screen, int * attribList);
typedef void (GLO_API_PTR *PFNGLXCOPYBUFFERSUBDATANVPROC)(Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLenum readTarget, GLenum writeTarget, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef void (GLO_API_PTR *PFNGLXCOPYCONTEXTPROC)(Display * dpy, GLXContext src, GLXContext dst, unsigned long mask);
typedef void (GLO_API_PTR *PFNGLXCOPYIMAGESUBDATANVPROC)(Display * dpy, GLXContext srcCtx, GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLXContext dstCtx, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GLO_API_PTR *PFNGLXCOPYSUBBUFFERMESAPROC)(Display * dpy, GLXDrawable drawable, int x, int y, int width, int height);
typedef GLXContext (GLO_API_PTR *PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC)(unsigned int id, GLXContext share_list);
typedef GLXContext (GLO_API_PTR *PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC)(unsigned int id, GLXContext share_context, const int * attribList);
typedef GLXContext (GLO_API_PTR *PFNGLXCREATECONTEXTPROC)(Display * dpy, XVisualInfo * vis, GLXContext shareList, Bool direct);
typedef GLXContext (GLO_API_PTR *PFNGLXCREATECONTEXTATTRIBSARBPROC)(Display * dpy, GLXFBConfig config, GLXContext share_context, Bool direct, const int * attrib_list);
typedef GLXContext (GLO_API_PTR *PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC)(Display * dpy, GLXFBConfigSGIX config, int render_type, GLXContext share_list, Bool direct);
typedef GLXPbufferSGIX (GLO_API_PTR *PFNGLXCREATEGLXPBUFFERSGIXPROC)(Display * dpy, GLXFBConfigSGIX config, unsigned int width, unsigned int height, int * attrib_list);
typedef GLXPixmap (GLO_API_PTR *PFNGLXCREATEGLXPIXMAPPROC)(Display * dpy, XVisualInfo * visual, Pixmap pixmap);
typedef GLXPixmap (GLO_API_PTR *PFNGLXCREATEGLXPIXMAPMESAPROC)(Display * dpy, XVisualInfo * visual, Pixmap pixmap, Colormap cmap);
typedef GLXPixmap (GLO_API_PTR *PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC)(Display * dpy, GLXFBConfigSGIX config, Pixmap pixmap);
typedef GLXContext (GLO_API_PTR *PFNGLXCREATENEWCONTEXTPROC)(Display * dpy, GLXFBConfig config, int render_type, GLXContext share_list, Bool direct);
typedef GLXPbuffer (GLO_API_PTR *PFNGLXCREATEPBUFFERPROC)(Display * dpy, GLXFBConfig config, const int * attrib_list);
typedef GLXPixmap (GLO_API_PTR *PFNGLXCREATEPIXMAPPROC)(Display * dpy, GLXFBConfig config, Pixmap pixmap, const int * attrib_list);
typedef GLXWindow (GLO_API_PTR *PFNGLXCREATEWINDOWPROC)(Display * dpy, GLXFBConfig config, Window win, const int * attrib_list);
typedef void (GLO_API_PTR *PFNGLXCUSHIONSGIPROC)(Display * dpy, Window window, float cushion);
typedef Bool (GLO_API_PTR *PFNGLXDELAYBEFORESWAPNVPROC)(Display * dpy, GLXDrawable drawable, GLfloat seconds);
typedef Bool (GLO_API_PTR *PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC)(GLXContext ctx);
typedef void (GLO_API_PTR *PFNGLXDESTROYCONTEXTPROC)(Display * dpy, GLXContext ctx);
typedef void (GLO_API_PTR *PFNGLXDESTROYGLXPBUFFERSGIXPROC)(Display * dpy, GLXPbufferSGIX pbuf);
typedef void (GLO_API_PTR *PFNGLXDESTROYGLXPIXMAPPROC)(Display * dpy, GLXPixmap pixmap);
typedef int (GLO_API_PTR *PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC)(Display * dpy, int hpId);
typedef void (GLO_API_PTR *PFNGLXDESTROYPBUFFERPROC)(Display * dpy, GLXPbuffer pbuf);
typedef void (GLO_API_PTR *PFNGLXDESTROYPIXMAPPROC)(Display * dpy, GLXPixmap pixmap);
typedef void (GLO_API_PTR *PFNGLXDESTROYWINDOWPROC)(Display * dpy, GLXWindow win);
typedef GLXVideoCaptureDeviceNV * (GLO_API_PTR *PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC)(Display * dpy, int screen, int * nelements);
typedef unsigned int * (GLO_API_PTR *PFNGLXENUMERATEVIDEODEVICESNVPROC)(Display * dpy, int screen, int * nelements);
typedef void (GLO_API_PTR *PFNGLXFREECONTEXTEXTPROC)(Display * dpy, GLXContext context);
typedef unsigned int (GLO_API_PTR *PFNGLXGETAGPOFFSETMESAPROC)(const void * pointer);
typedef const char * (GLO_API_PTR *PFNGLXGETCLIENTSTRINGPROC)(Display * dpy, int name);
typedef int (GLO_API_PTR *PFNGLXGETCONFIGPROC)(Display * dpy, XVisualInfo * visual, int attrib, int * value);
typedef unsigned int (GLO_API_PTR *PFNGLXGETCONTEXTGPUIDAMDPROC)(GLXContext ctx);
typedef GLXContextID (GLO_API_PTR *PFNGLXGETCONTEXTIDEXTPROC)(const GLXContext context);
typedef GLXContext (GLO_API_PTR *PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC)(void);
typedef GLXContext (GLO_API_PTR *PFNGLXGETCURRENTCONTEXTPROC)(void);
typedef Display * (GLO_API_PTR *PFNGLXGETCURRENTDISPLAYPROC)(void);
typedef Display * (GLO_API_PTR *PFNGLXGETCURRENTDISPLAYEXTPROC)(void);
typedef GLXDrawable (GLO_API_PTR *PFNGLXGETCURRENTDRAWABLEPROC)(void);
typedef GLXDrawable (GLO_API_PTR *PFNGLXGETCURRENTREADDRAWABLEPROC)(void);
typedef GLXDrawable (GLO_API_PTR *PFNGLXGETCURRENTREADDRAWABLESGIPROC)(void);
typedef int (GLO_API_PTR *PFNGLXGETFBCONFIGATTRIBPROC)(Display * dpy, GLXFBConfig config, int attribute, int * value);
typedef int (GLO_API_PTR *PFNGLXGETFBCONFIGATTRIBSGIXPROC)(Display * dpy, GLXFBConfigSGIX config, int attribute, int * value);
typedef GLXFBConfigSGIX (GLO_API_PTR *PFNGLXGETFBCONFIGFROMVISUALSGIXPROC)(Display * dpy, XVisualInfo * vis);
typedef GLXFBConfig * (GLO_API_PTR *PFNGLXGETFBCONFIGSPROC)(Display * dpy, int screen, int * nelements);
typedef unsigned int (GLO_API_PTR *PFNGLXGETGPUIDSAMDPROC)(unsigned int maxCount, unsigned int * ids);
typedef int (GLO_API_PTR *PFNGLXGETGPUINFOAMDPROC)(unsigned int id, int property, GLenum dataType, unsigned int size, void * data);
typedef Bool (GLO_API_PTR *PFNGLXGETMSCRATEOMLPROC)(Display * dpy, GLXDrawable drawable, int32_t * numerator, int32_t * denominator);
typedef __GLXextFuncPtr (GLO_API_PTR *PFNGLXGETPROCADDRESSPROC)(const GLubyte * procName);
typedef __GLXextFuncPtr (GLO_API_PTR *PFNGLXGETPROCADDRESSARBPROC)(const GLubyte * procName);
typedef void (GLO_API_PTR *PFNGLXGETSELECTEDEVENTPROC)(Display * dpy, GLXDrawable draw, unsigned long * event_mask);
typedef void (GLO_API_PTR *PFNGLXGETSELECTEDEVENTSGIXPROC)(Display * dpy, GLXDrawable drawable, unsigned long * mask);
typedef int (GLO_API_PTR *PFNGLXGETSWAPINTERVALMESAPROC)(void);
typedef Bool (GLO_API_PTR *PFNGLXGETSYNCVALUESOMLPROC)(Display * dpy, GLXDrawable drawable, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef Status (GLO_API_PTR *PFNGLXGETTRANSPARENTINDEXSUNPROC)(Display * dpy, Window overlay, Window underlay, unsigned long * pTransparentIndex);
typedef int (GLO_API_PTR *PFNGLXGETVIDEODEVICENVPROC)(Display * dpy, int screen, int numVideoDevices, GLXVideoDeviceNV * pVideoDevice);
typedef int (GLO_API_PTR *PFNGLXGETVIDEOINFONVPROC)(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice, unsigned long * pulCounterOutputPbuffer, unsigned long * pulCounterOutputVideo);
typedef int (GLO_API_PTR *PFNGLXGETVIDEOSYNCSGIPROC)(unsigned int * count);
typedef XVisualInfo * (GLO_API_PTR *PFNGLXGETVISUALFROMFBCONFIGPROC)(Display * dpy, GLXFBConfig config);
typedef XVisualInfo * (GLO_API_PTR *PFNGLXGETVISUALFROMFBCONFIGSGIXPROC)(Display * dpy, GLXFBConfigSGIX config);
typedef int (GLO_API_PTR *PFNGLXHYPERPIPEATTRIBSGIXPROC)(Display * dpy, int timeSlice, int attrib, int size, void * attribList);
typedef int (GLO_API_PTR *PFNGLXHYPERPIPECONFIGSGIXPROC)(Display * dpy, int networkId, int npipes, GLXHyperpipeConfigSGIX * cfg, int * hpId);
typedef GLXContext (GLO_API_PTR *PFNGLXIMPORTCONTEXTEXTPROC)(Display * dpy, GLXContextID contextID);
typedef Bool (GLO_API_PTR *PFNGLXISDIRECTPROC)(Display * dpy, GLXContext ctx);
typedef Bool (GLO_API_PTR *PFNGLXJOINSWAPGROUPNVPROC)(Display * dpy, GLXDrawable drawable, GLuint group);
typedef void (GLO_API_PTR *PFNGLXJOINSWAPGROUPSGIXPROC)(Display * dpy, GLXDrawable drawable, GLXDrawable member);
typedef void (GLO_API_PTR *PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC)(Display * dpy, GLXVideoCaptureDeviceNV device);
typedef Bool (GLO_API_PTR *PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC)(GLXContext ctx);
typedef Bool (GLO_API_PTR *PFNGLXMAKECONTEXTCURRENTPROC)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef Bool (GLO_API_PTR *PFNGLXMAKECURRENTPROC)(Display * dpy, GLXDrawable drawable, GLXContext ctx);
typedef Bool (GLO_API_PTR *PFNGLXMAKECURRENTREADSGIPROC)(Display * dpy, GLXDrawable draw, GLXDrawable read, GLXContext ctx);
typedef void (GLO_API_PTR *PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC)(Display * dpy, GLXContext readCtx, GLXContext writeCtx, GLuint readBuffer, GLuint writeBuffer, GLintptr readOffset, GLintptr writeOffset, GLsizeiptr size);
typedef int (GLO_API_PTR *PFNGLXQUERYCHANNELDELTASSGIXPROC)(Display * display, int screen, int channel, int * x, int * y, int * w, int * h);
typedef int (GLO_API_PTR *PFNGLXQUERYCHANNELRECTSGIXPROC)(Display * display, int screen, int channel, int * dx, int * dy, int * dw, int * dh);
typedef int (GLO_API_PTR *PFNGLXQUERYCONTEXTPROC)(Display * dpy, GLXContext ctx, int attribute, int * value);
typedef int (GLO_API_PTR *PFNGLXQUERYCONTEXTINFOEXTPROC)(Display * dpy, GLXContext context, int attribute, int * value);
typedef Bool (GLO_API_PTR *PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC)(int attribute, unsigned int * value);
typedef const char * (GLO_API_PTR *PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC)(int attribute);
typedef void (GLO_API_PTR *PFNGLXQUERYDRAWABLEPROC)(Display * dpy, GLXDrawable draw, int attribute, unsigned int * value);
typedef Bool (GLO_API_PTR *PFNGLXQUERYEXTENSIONPROC)(Display * dpy, int * errorb, int * event);
typedef const char * (GLO_API_PTR *PFNGLXQUERYEXTENSIONSSTRINGPROC)(Display * dpy, int screen);
typedef Bool (GLO_API_PTR *PFNGLXQUERYFRAMECOUNTNVPROC)(Display * dpy, int screen, GLuint * count);
typedef void (GLO_API_PTR *PFNGLXQUERYGLXPBUFFERSGIXPROC)(Display * dpy, GLXPbufferSGIX pbuf, int attribute, unsigned int * value);
typedef int (GLO_API_PTR *PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC)(Display * dpy, int timeSlice, int attrib, int size, void * returnAttribList);
typedef int (GLO_API_PTR *PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC)(Display * dpy, int timeSlice, int attrib, int size, void * attribList, void * returnAttribList);
typedef GLXHyperpipeConfigSGIX * (GLO_API_PTR *PFNGLXQUERYHYPERPIPECONFIGSGIXPROC)(Display * dpy, int hpId, int * npipes);
typedef GLXHyperpipeNetworkSGIX * (GLO_API_PTR *PFNGLXQUERYHYPERPIPENETWORKSGIXPROC)(Display * dpy, int * npipes);
typedef Bool (GLO_API_PTR *PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC)(Display * dpy, int screen, int * max);
typedef Bool (GLO_API_PTR *PFNGLXQUERYMAXSWAPGROUPSNVPROC)(Display * dpy, int screen, GLuint * maxGroups, GLuint * maxBarriers);
typedef Bool (GLO_API_PTR *PFNGLXQUERYRENDERERINTEGERMESAPROC)(Display * dpy, int screen, int renderer, int attribute, unsigned int * value);
typedef const char * (GLO_API_PTR *PFNGLXQUERYRENDERERSTRINGMESAPROC)(Display * dpy, int screen, int renderer, int attribute);
typedef const char * (GLO_API_PTR *PFNGLXQUERYSERVERSTRINGPROC)(Display * dpy, int screen, int name);
typedef Bool (GLO_API_PTR *PFNGLXQUERYSWAPGROUPNVPROC)(Display * dpy, GLXDrawable drawable, GLuint * group, GLuint * barrier);
typedef Bool (GLO_API_PTR *PFNGLXQUERYVERSIONPROC)(Display * dpy, int * maj, int * min);
typedef int (GLO_API_PTR *PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC)(Display * dpy, GLXVideoCaptureDeviceNV device, int attribute, int * value);
typedef Bool (GLO_API_PTR *PFNGLXRELEASEBUFFERSMESAPROC)(Display * dpy, GLXDrawable drawable);
typedef void (GLO_API_PTR *PFNGLXRELEASETEXIMAGEEXTPROC)(Display * dpy, GLXDrawable drawable, int buffer);
typedef void (GLO_API_PTR *PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC)(Display * dpy, GLXVideoCaptureDeviceNV device);
typedef int (GLO_API_PTR *PFNGLXRELEASEVIDEODEVICENVPROC)(Display * dpy, int screen, GLXVideoDeviceNV VideoDevice);
typedef int (GLO_API_PTR *PFNGLXRELEASEVIDEOIMAGENVPROC)(Display * dpy, GLXPbuffer pbuf);
typedef Bool (GLO_API_PTR *PFNGLXRESETFRAMECOUNTNVPROC)(Display * dpy, int screen);
typedef void (GLO_API_PTR *PFNGLXSELECTEVENTPROC)(Display * dpy, GLXDrawable draw, unsigned long event_mask);
typedef void (GLO_API_PTR *PFNGLXSELECTEVENTSGIXPROC)(Display * dpy, GLXDrawable drawable, unsigned long mask);
typedef int (GLO_API_PTR *PFNGLXSENDPBUFFERTOVIDEONVPROC)(Display * dpy, GLXPbuffer pbuf, int iBufferType, unsigned long * pulCounterPbuffer, GLboolean bBlock);
typedef GLboolean (GLO_API_PTR *PFNGLXSET3DFXMODEMESAPROC)(GLint mode);
typedef void (GLO_API_PTR *PFNGLXSWAPBUFFERSPROC)(Display * dpy, GLXDrawable drawable);
typedef int64_t (GLO_API_PTR *PFNGLXSWAPBUFFERSMSCOMLPROC)(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder);
typedef void (GLO_API_PTR *PFNGLXSWAPINTERVALEXTPROC)(Display * dpy, GLXDrawable drawable, int interval);
typedef int (GLO_API_PTR *PFNGLXSWAPINTERVALMESAPROC)(unsigned int interval);
typedef int (GLO_API_PTR *PFNGLXSWAPINTERVALSGIPROC)(int interval);
typedef void (GLO_API_PTR *PFNGLXUSEXFONTPROC)(Font font, int first, int count, int list);
typedef Bool (GLO_API_PTR *PFNGLXWAITFORMSCOMLPROC)(Display * dpy, GLXDrawable drawable, int64_t target_msc, int64_t divisor, int64_t remainder, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef Bool (GLO_API_PTR *PFNGLXWAITFORSBCOMLPROC)(Display * dpy, GLXDrawable drawable, int64_t target_sbc, int64_t * ust, int64_t * msc, int64_t * sbc);
typedef void (GLO_API_PTR *PFNGLXWAITGLPROC)(void);
typedef int (GLO_API_PTR *PFNGLXWAITVIDEOSYNCSGIPROC)(int divisor, int remainder, unsigned int * count);
typedef void (GLO_API_PTR *PFNGLXWAITXPROC)(void);

GLO_API_CALL PFNGLXBINDCHANNELTOWINDOWSGIXPROC glo_glXBindChannelToWindowSGIX;
#define glXBindChannelToWindowSGIX glo_glXBindChannelToWindowSGIX
GLO_API_CALL PFNGLXBINDHYPERPIPESGIXPROC glo_glXBindHyperpipeSGIX;
#define glXBindHyperpipeSGIX glo_glXBindHyperpipeSGIX
GLO_API_CALL PFNGLXBINDSWAPBARRIERNVPROC glo_glXBindSwapBarrierNV;
#define glXBindSwapBarrierNV glo_glXBindSwapBarrierNV
GLO_API_CALL PFNGLXBINDSWAPBARRIERSGIXPROC glo_glXBindSwapBarrierSGIX;
#define glXBindSwapBarrierSGIX glo_glXBindSwapBarrierSGIX
GLO_API_CALL PFNGLXBINDTEXIMAGEEXTPROC glo_glXBindTexImageEXT;
#define glXBindTexImageEXT glo_glXBindTexImageEXT
GLO_API_CALL PFNGLXBINDVIDEOCAPTUREDEVICENVPROC glo_glXBindVideoCaptureDeviceNV;
#define glXBindVideoCaptureDeviceNV glo_glXBindVideoCaptureDeviceNV
GLO_API_CALL PFNGLXBINDVIDEODEVICENVPROC glo_glXBindVideoDeviceNV;
#define glXBindVideoDeviceNV glo_glXBindVideoDeviceNV
GLO_API_CALL PFNGLXBINDVIDEOIMAGENVPROC glo_glXBindVideoImageNV;
#define glXBindVideoImageNV glo_glXBindVideoImageNV
GLO_API_CALL PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC glo_glXBlitContextFramebufferAMD;
#define glXBlitContextFramebufferAMD glo_glXBlitContextFramebufferAMD
GLO_API_CALL PFNGLXCHANNELRECTSGIXPROC glo_glXChannelRectSGIX;
#define glXChannelRectSGIX glo_glXChannelRectSGIX
GLO_API_CALL PFNGLXCHANNELRECTSYNCSGIXPROC glo_glXChannelRectSyncSGIX;
#define glXChannelRectSyncSGIX glo_glXChannelRectSyncSGIX
GLO_API_CALL PFNGLXCHOOSEFBCONFIGPROC glo_glXChooseFBConfig;
#define glXChooseFBConfig glo_glXChooseFBConfig
GLO_API_CALL PFNGLXCHOOSEFBCONFIGSGIXPROC glo_glXChooseFBConfigSGIX;
#define glXChooseFBConfigSGIX glo_glXChooseFBConfigSGIX
GLO_API_CALL PFNGLXCHOOSEVISUALPROC glo_glXChooseVisual;
#define glXChooseVisual glo_glXChooseVisual
GLO_API_CALL PFNGLXCOPYBUFFERSUBDATANVPROC glo_glXCopyBufferSubDataNV;
#define glXCopyBufferSubDataNV glo_glXCopyBufferSubDataNV
GLO_API_CALL PFNGLXCOPYCONTEXTPROC glo_glXCopyContext;
#define glXCopyContext glo_glXCopyContext
GLO_API_CALL PFNGLXCOPYIMAGESUBDATANVPROC glo_glXCopyImageSubDataNV;
#define glXCopyImageSubDataNV glo_glXCopyImageSubDataNV
GLO_API_CALL PFNGLXCOPYSUBBUFFERMESAPROC glo_glXCopySubBufferMESA;
#define glXCopySubBufferMESA glo_glXCopySubBufferMESA
GLO_API_CALL PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC glo_glXCreateAssociatedContextAMD;
#define glXCreateAssociatedContextAMD glo_glXCreateAssociatedContextAMD
GLO_API_CALL PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC glo_glXCreateAssociatedContextAttribsAMD;
#define glXCreateAssociatedContextAttribsAMD glo_glXCreateAssociatedContextAttribsAMD
GLO_API_CALL PFNGLXCREATECONTEXTPROC glo_glXCreateContext;
#define glXCreateContext glo_glXCreateContext
GLO_API_CALL PFNGLXCREATECONTEXTATTRIBSARBPROC glo_glXCreateContextAttribsARB;
#define glXCreateContextAttribsARB glo_glXCreateContextAttribsARB
GLO_API_CALL PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glo_glXCreateContextWithConfigSGIX;
#define glXCreateContextWithConfigSGIX glo_glXCreateContextWithConfigSGIX
GLO_API_CALL PFNGLXCREATEGLXPBUFFERSGIXPROC glo_glXCreateGLXPbufferSGIX;
#define glXCreateGLXPbufferSGIX glo_glXCreateGLXPbufferSGIX
GLO_API_CALL PFNGLXCREATEGLXPIXMAPPROC glo_glXCreateGLXPixmap;
#define glXCreateGLXPixmap glo_glXCreateGLXPixmap
GLO_API_CALL PFNGLXCREATEGLXPIXMAPMESAPROC glo_glXCreateGLXPixmapMESA;
#define glXCreateGLXPixmapMESA glo_glXCreateGLXPixmapMESA
GLO_API_CALL PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glo_glXCreateGLXPixmapWithConfigSGIX;
#define glXCreateGLXPixmapWithConfigSGIX glo_glXCreateGLXPixmapWithConfigSGIX
GLO_API_CALL PFNGLXCREATENEWCONTEXTPROC glo_glXCreateNewContext;
#define glXCreateNewContext glo_glXCreateNewContext
GLO_API_CALL PFNGLXCREATEPBUFFERPROC glo_glXCreatePbuffer;
#define glXCreatePbuffer glo_glXCreatePbuffer
GLO_API_CALL PFNGLXCREATEPIXMAPPROC glo_glXCreatePixmap;
#define glXCreatePixmap glo_glXCreatePixmap
GLO_API_CALL PFNGLXCREATEWINDOWPROC glo_glXCreateWindow;
#define glXCreateWindow glo_glXCreateWindow
GLO_API_CALL PFNGLXCUSHIONSGIPROC glo_glXCushionSGI;
#define glXCushionSGI glo_glXCushionSGI
GLO_API_CALL PFNGLXDELAYBEFORESWAPNVPROC glo_glXDelayBeforeSwapNV;
#define glXDelayBeforeSwapNV glo_glXDelayBeforeSwapNV
GLO_API_CALL PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC glo_glXDeleteAssociatedContextAMD;
#define glXDeleteAssociatedContextAMD glo_glXDeleteAssociatedContextAMD
GLO_API_CALL PFNGLXDESTROYCONTEXTPROC glo_glXDestroyContext;
#define glXDestroyContext glo_glXDestroyContext
GLO_API_CALL PFNGLXDESTROYGLXPBUFFERSGIXPROC glo_glXDestroyGLXPbufferSGIX;
#define glXDestroyGLXPbufferSGIX glo_glXDestroyGLXPbufferSGIX
GLO_API_CALL PFNGLXDESTROYGLXPIXMAPPROC glo_glXDestroyGLXPixmap;
#define glXDestroyGLXPixmap glo_glXDestroyGLXPixmap
GLO_API_CALL PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC glo_glXDestroyHyperpipeConfigSGIX;
#define glXDestroyHyperpipeConfigSGIX glo_glXDestroyHyperpipeConfigSGIX
GLO_API_CALL PFNGLXDESTROYPBUFFERPROC glo_glXDestroyPbuffer;
#define glXDestroyPbuffer glo_glXDestroyPbuffer
GLO_API_CALL PFNGLXDESTROYPIXMAPPROC glo_glXDestroyPixmap;
#define glXDestroyPixmap glo_glXDestroyPixmap
GLO_API_CALL PFNGLXDESTROYWINDOWPROC glo_glXDestroyWindow;
#define glXDestroyWindow glo_glXDestroyWindow
GLO_API_CALL PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC glo_glXEnumerateVideoCaptureDevicesNV;
#define glXEnumerateVideoCaptureDevicesNV glo_glXEnumerateVideoCaptureDevicesNV
GLO_API_CALL PFNGLXENUMERATEVIDEODEVICESNVPROC glo_glXEnumerateVideoDevicesNV;
#define glXEnumerateVideoDevicesNV glo_glXEnumerateVideoDevicesNV
GLO_API_CALL PFNGLXFREECONTEXTEXTPROC glo_glXFreeContextEXT;
#define glXFreeContextEXT glo_glXFreeContextEXT
GLO_API_CALL PFNGLXGETAGPOFFSETMESAPROC glo_glXGetAGPOffsetMESA;
#define glXGetAGPOffsetMESA glo_glXGetAGPOffsetMESA
GLO_API_CALL PFNGLXGETCLIENTSTRINGPROC glo_glXGetClientString;
#define glXGetClientString glo_glXGetClientString
GLO_API_CALL PFNGLXGETCONFIGPROC glo_glXGetConfig;
#define glXGetConfig glo_glXGetConfig
GLO_API_CALL PFNGLXGETCONTEXTGPUIDAMDPROC glo_glXGetContextGPUIDAMD;
#define glXGetContextGPUIDAMD glo_glXGetContextGPUIDAMD
GLO_API_CALL PFNGLXGETCONTEXTIDEXTPROC glo_glXGetContextIDEXT;
#define glXGetContextIDEXT glo_glXGetContextIDEXT
GLO_API_CALL PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC glo_glXGetCurrentAssociatedContextAMD;
#define glXGetCurrentAssociatedContextAMD glo_glXGetCurrentAssociatedContextAMD
GLO_API_CALL PFNGLXGETCURRENTCONTEXTPROC glo_glXGetCurrentContext;
#define glXGetCurrentContext glo_glXGetCurrentContext
GLO_API_CALL PFNGLXGETCURRENTDISPLAYPROC glo_glXGetCurrentDisplay;
#define glXGetCurrentDisplay glo_glXGetCurrentDisplay
GLO_API_CALL PFNGLXGETCURRENTDISPLAYEXTPROC glo_glXGetCurrentDisplayEXT;
#define glXGetCurrentDisplayEXT glo_glXGetCurrentDisplayEXT
GLO_API_CALL PFNGLXGETCURRENTDRAWABLEPROC glo_glXGetCurrentDrawable;
#define glXGetCurrentDrawable glo_glXGetCurrentDrawable
GLO_API_CALL PFNGLXGETCURRENTREADDRAWABLEPROC glo_glXGetCurrentReadDrawable;
#define glXGetCurrentReadDrawable glo_glXGetCurrentReadDrawable
GLO_API_CALL PFNGLXGETCURRENTREADDRAWABLESGIPROC glo_glXGetCurrentReadDrawableSGI;
#define glXGetCurrentReadDrawableSGI glo_glXGetCurrentReadDrawableSGI
GLO_API_CALL PFNGLXGETFBCONFIGATTRIBPROC glo_glXGetFBConfigAttrib;
#define glXGetFBConfigAttrib glo_glXGetFBConfigAttrib
GLO_API_CALL PFNGLXGETFBCONFIGATTRIBSGIXPROC glo_glXGetFBConfigAttribSGIX;
#define glXGetFBConfigAttribSGIX glo_glXGetFBConfigAttribSGIX
GLO_API_CALL PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glo_glXGetFBConfigFromVisualSGIX;
#define glXGetFBConfigFromVisualSGIX glo_glXGetFBConfigFromVisualSGIX
GLO_API_CALL PFNGLXGETFBCONFIGSPROC glo_glXGetFBConfigs;
#define glXGetFBConfigs glo_glXGetFBConfigs
GLO_API_CALL PFNGLXGETGPUIDSAMDPROC glo_glXGetGPUIDsAMD;
#define glXGetGPUIDsAMD glo_glXGetGPUIDsAMD
GLO_API_CALL PFNGLXGETGPUINFOAMDPROC glo_glXGetGPUInfoAMD;
#define glXGetGPUInfoAMD glo_glXGetGPUInfoAMD
GLO_API_CALL PFNGLXGETMSCRATEOMLPROC glo_glXGetMscRateOML;
#define glXGetMscRateOML glo_glXGetMscRateOML
GLO_API_CALL PFNGLXGETPROCADDRESSPROC glo_glXGetProcAddress;
#define glXGetProcAddress glo_glXGetProcAddress
GLO_API_CALL PFNGLXGETPROCADDRESSARBPROC glo_glXGetProcAddressARB;
#define glXGetProcAddressARB glo_glXGetProcAddressARB
GLO_API_CALL PFNGLXGETSELECTEDEVENTPROC glo_glXGetSelectedEvent;
#define glXGetSelectedEvent glo_glXGetSelectedEvent
GLO_API_CALL PFNGLXGETSELECTEDEVENTSGIXPROC glo_glXGetSelectedEventSGIX;
#define glXGetSelectedEventSGIX glo_glXGetSelectedEventSGIX
GLO_API_CALL PFNGLXGETSWAPINTERVALMESAPROC glo_glXGetSwapIntervalMESA;
#define glXGetSwapIntervalMESA glo_glXGetSwapIntervalMESA
GLO_API_CALL PFNGLXGETSYNCVALUESOMLPROC glo_glXGetSyncValuesOML;
#define glXGetSyncValuesOML glo_glXGetSyncValuesOML
GLO_API_CALL PFNGLXGETTRANSPARENTINDEXSUNPROC glo_glXGetTransparentIndexSUN;
#define glXGetTransparentIndexSUN glo_glXGetTransparentIndexSUN
GLO_API_CALL PFNGLXGETVIDEODEVICENVPROC glo_glXGetVideoDeviceNV;
#define glXGetVideoDeviceNV glo_glXGetVideoDeviceNV
GLO_API_CALL PFNGLXGETVIDEOINFONVPROC glo_glXGetVideoInfoNV;
#define glXGetVideoInfoNV glo_glXGetVideoInfoNV
GLO_API_CALL PFNGLXGETVIDEOSYNCSGIPROC glo_glXGetVideoSyncSGI;
#define glXGetVideoSyncSGI glo_glXGetVideoSyncSGI
GLO_API_CALL PFNGLXGETVISUALFROMFBCONFIGPROC glo_glXGetVisualFromFBConfig;
#define glXGetVisualFromFBConfig glo_glXGetVisualFromFBConfig
GLO_API_CALL PFNGLXGETVISUALFROMFBCONFIGSGIXPROC glo_glXGetVisualFromFBConfigSGIX;
#define glXGetVisualFromFBConfigSGIX glo_glXGetVisualFromFBConfigSGIX
GLO_API_CALL PFNGLXHYPERPIPEATTRIBSGIXPROC glo_glXHyperpipeAttribSGIX;
#define glXHyperpipeAttribSGIX glo_glXHyperpipeAttribSGIX
GLO_API_CALL PFNGLXHYPERPIPECONFIGSGIXPROC glo_glXHyperpipeConfigSGIX;
#define glXHyperpipeConfigSGIX glo_glXHyperpipeConfigSGIX
GLO_API_CALL PFNGLXIMPORTCONTEXTEXTPROC glo_glXImportContextEXT;
#define glXImportContextEXT glo_glXImportContextEXT
GLO_API_CALL PFNGLXISDIRECTPROC glo_glXIsDirect;
#define glXIsDirect glo_glXIsDirect
GLO_API_CALL PFNGLXJOINSWAPGROUPNVPROC glo_glXJoinSwapGroupNV;
#define glXJoinSwapGroupNV glo_glXJoinSwapGroupNV
GLO_API_CALL PFNGLXJOINSWAPGROUPSGIXPROC glo_glXJoinSwapGroupSGIX;
#define glXJoinSwapGroupSGIX glo_glXJoinSwapGroupSGIX
GLO_API_CALL PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC glo_glXLockVideoCaptureDeviceNV;
#define glXLockVideoCaptureDeviceNV glo_glXLockVideoCaptureDeviceNV
GLO_API_CALL PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC glo_glXMakeAssociatedContextCurrentAMD;
#define glXMakeAssociatedContextCurrentAMD glo_glXMakeAssociatedContextCurrentAMD
GLO_API_CALL PFNGLXMAKECONTEXTCURRENTPROC glo_glXMakeContextCurrent;
#define glXMakeContextCurrent glo_glXMakeContextCurrent
GLO_API_CALL PFNGLXMAKECURRENTPROC glo_glXMakeCurrent;
#define glXMakeCurrent glo_glXMakeCurrent
GLO_API_CALL PFNGLXMAKECURRENTREADSGIPROC glo_glXMakeCurrentReadSGI;
#define glXMakeCurrentReadSGI glo_glXMakeCurrentReadSGI
GLO_API_CALL PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC glo_glXNamedCopyBufferSubDataNV;
#define glXNamedCopyBufferSubDataNV glo_glXNamedCopyBufferSubDataNV
GLO_API_CALL PFNGLXQUERYCHANNELDELTASSGIXPROC glo_glXQueryChannelDeltasSGIX;
#define glXQueryChannelDeltasSGIX glo_glXQueryChannelDeltasSGIX
GLO_API_CALL PFNGLXQUERYCHANNELRECTSGIXPROC glo_glXQueryChannelRectSGIX;
#define glXQueryChannelRectSGIX glo_glXQueryChannelRectSGIX
GLO_API_CALL PFNGLXQUERYCONTEXTPROC glo_glXQueryContext;
#define glXQueryContext glo_glXQueryContext
GLO_API_CALL PFNGLXQUERYCONTEXTINFOEXTPROC glo_glXQueryContextInfoEXT;
#define glXQueryContextInfoEXT glo_glXQueryContextInfoEXT
GLO_API_CALL PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC glo_glXQueryCurrentRendererIntegerMESA;
#define glXQueryCurrentRendererIntegerMESA glo_glXQueryCurrentRendererIntegerMESA
GLO_API_CALL PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC glo_glXQueryCurrentRendererStringMESA;
#define glXQueryCurrentRendererStringMESA glo_glXQueryCurrentRendererStringMESA
GLO_API_CALL PFNGLXQUERYDRAWABLEPROC glo_glXQueryDrawable;
#define glXQueryDrawable glo_glXQueryDrawable
GLO_API_CALL PFNGLXQUERYEXTENSIONPROC glo_glXQueryExtension;
#define glXQueryExtension glo_glXQueryExtension
GLO_API_CALL PFNGLXQUERYEXTENSIONSSTRINGPROC glo_glXQueryExtensionsString;
#define glXQueryExtensionsString glo_glXQueryExtensionsString
GLO_API_CALL PFNGLXQUERYFRAMECOUNTNVPROC glo_glXQueryFrameCountNV;
#define glXQueryFrameCountNV glo_glXQueryFrameCountNV
GLO_API_CALL PFNGLXQUERYGLXPBUFFERSGIXPROC glo_glXQueryGLXPbufferSGIX;
#define glXQueryGLXPbufferSGIX glo_glXQueryGLXPbufferSGIX
GLO_API_CALL PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC glo_glXQueryHyperpipeAttribSGIX;
#define glXQueryHyperpipeAttribSGIX glo_glXQueryHyperpipeAttribSGIX
GLO_API_CALL PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC glo_glXQueryHyperpipeBestAttribSGIX;
#define glXQueryHyperpipeBestAttribSGIX glo_glXQueryHyperpipeBestAttribSGIX
GLO_API_CALL PFNGLXQUERYHYPERPIPECONFIGSGIXPROC glo_glXQueryHyperpipeConfigSGIX;
#define glXQueryHyperpipeConfigSGIX glo_glXQueryHyperpipeConfigSGIX
GLO_API_CALL PFNGLXQUERYHYPERPIPENETWORKSGIXPROC glo_glXQueryHyperpipeNetworkSGIX;
#define glXQueryHyperpipeNetworkSGIX glo_glXQueryHyperpipeNetworkSGIX
GLO_API_CALL PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glo_glXQueryMaxSwapBarriersSGIX;
#define glXQueryMaxSwapBarriersSGIX glo_glXQueryMaxSwapBarriersSGIX
GLO_API_CALL PFNGLXQUERYMAXSWAPGROUPSNVPROC glo_glXQueryMaxSwapGroupsNV;
#define glXQueryMaxSwapGroupsNV glo_glXQueryMaxSwapGroupsNV
GLO_API_CALL PFNGLXQUERYRENDERERINTEGERMESAPROC glo_glXQueryRendererIntegerMESA;
#define glXQueryRendererIntegerMESA glo_glXQueryRendererIntegerMESA
GLO_API_CALL PFNGLXQUERYRENDERERSTRINGMESAPROC glo_glXQueryRendererStringMESA;
#define glXQueryRendererStringMESA glo_glXQueryRendererStringMESA
GLO_API_CALL PFNGLXQUERYSERVERSTRINGPROC glo_glXQueryServerString;
#define glXQueryServerString glo_glXQueryServerString
GLO_API_CALL PFNGLXQUERYSWAPGROUPNVPROC glo_glXQuerySwapGroupNV;
#define glXQuerySwapGroupNV glo_glXQuerySwapGroupNV
GLO_API_CALL PFNGLXQUERYVERSIONPROC glo_glXQueryVersion;
#define glXQueryVersion glo_glXQueryVersion
GLO_API_CALL PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC glo_glXQueryVideoCaptureDeviceNV;
#define glXQueryVideoCaptureDeviceNV glo_glXQueryVideoCaptureDeviceNV
GLO_API_CALL PFNGLXRELEASEBUFFERSMESAPROC glo_glXReleaseBuffersMESA;
#define glXReleaseBuffersMESA glo_glXReleaseBuffersMESA
GLO_API_CALL PFNGLXRELEASETEXIMAGEEXTPROC glo_glXReleaseTexImageEXT;
#define glXReleaseTexImageEXT glo_glXReleaseTexImageEXT
GLO_API_CALL PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC glo_glXReleaseVideoCaptureDeviceNV;
#define glXReleaseVideoCaptureDeviceNV glo_glXReleaseVideoCaptureDeviceNV
GLO_API_CALL PFNGLXRELEASEVIDEODEVICENVPROC glo_glXReleaseVideoDeviceNV;
#define glXReleaseVideoDeviceNV glo_glXReleaseVideoDeviceNV
GLO_API_CALL PFNGLXRELEASEVIDEOIMAGENVPROC glo_glXReleaseVideoImageNV;
#define glXReleaseVideoImageNV glo_glXReleaseVideoImageNV
GLO_API_CALL PFNGLXRESETFRAMECOUNTNVPROC glo_glXResetFrameCountNV;
#define glXResetFrameCountNV glo_glXResetFrameCountNV
GLO_API_CALL PFNGLXSELECTEVENTPROC glo_glXSelectEvent;
#define glXSelectEvent glo_glXSelectEvent
GLO_API_CALL PFNGLXSELECTEVENTSGIXPROC glo_glXSelectEventSGIX;
#define glXSelectEventSGIX glo_glXSelectEventSGIX
GLO_API_CALL PFNGLXSENDPBUFFERTOVIDEONVPROC glo_glXSendPbufferToVideoNV;
#define glXSendPbufferToVideoNV glo_glXSendPbufferToVideoNV
GLO_API_CALL PFNGLXSET3DFXMODEMESAPROC glo_glXSet3DfxModeMESA;
#define glXSet3DfxModeMESA glo_glXSet3DfxModeMESA
GLO_API_CALL PFNGLXSWAPBUFFERSPROC glo_glXSwapBuffers;
#define glXSwapBuffers glo_glXSwapBuffers
GLO_API_CALL PFNGLXSWAPBUFFERSMSCOMLPROC glo_glXSwapBuffersMscOML;
#define glXSwapBuffersMscOML glo_glXSwapBuffersMscOML
GLO_API_CALL PFNGLXSWAPINTERVALEXTPROC glo_glXSwapIntervalEXT;
#define glXSwapIntervalEXT glo_glXSwapIntervalEXT
GLO_API_CALL PFNGLXSWAPINTERVALMESAPROC glo_glXSwapIntervalMESA;
#define glXSwapIntervalMESA glo_glXSwapIntervalMESA
GLO_API_CALL PFNGLXSWAPINTERVALSGIPROC glo_glXSwapIntervalSGI;
#define glXSwapIntervalSGI glo_glXSwapIntervalSGI
GLO_API_CALL PFNGLXUSEXFONTPROC glo_glXUseXFont;
#define glXUseXFont glo_glXUseXFont
GLO_API_CALL PFNGLXWAITFORMSCOMLPROC glo_glXWaitForMscOML;
#define glXWaitForMscOML glo_glXWaitForMscOML
GLO_API_CALL PFNGLXWAITFORSBCOMLPROC glo_glXWaitForSbcOML;
#define glXWaitForSbcOML glo_glXWaitForSbcOML
GLO_API_CALL PFNGLXWAITGLPROC glo_glXWaitGL;
#define glXWaitGL glo_glXWaitGL
GLO_API_CALL PFNGLXWAITVIDEOSYNCSGIPROC glo_glXWaitVideoSyncSGI;
#define glXWaitVideoSyncSGI glo_glXWaitVideoSyncSGI
GLO_API_CALL PFNGLXWAITXPROC glo_glXWaitX;
#define glXWaitX glo_glXWaitX





GLO_API_CALL int gloLoadGLXUserPtr(Display *display, int screen, GLOuserptrloadfunc load, void *userptr);
GLO_API_CALL int gloLoadGLX(Display *display, int screen, GLOloadfunc load);

#ifdef GLO_GLX

GLO_API_CALL int gloLoaderLoadGLX(Display *display, int screen);

GLO_API_CALL void gloLoaderUnloadGLX(void);

#endif
#ifdef __cplusplus
}
#endif

#endif

#endif
