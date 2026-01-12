#if !__has_include(<X11/Xlib.h>)
  #error "Xlib.h wasn't found."
#else

/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glo/glx.h>

#ifndef GLO_IMPL_UTIL_C_
#define GLO_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLO_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLO_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLO_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif



int GLO_GLX_VERSION_1_0 = 0;
int GLO_GLX_VERSION_1_1 = 0;
int GLO_GLX_VERSION_1_2 = 0;
int GLO_GLX_VERSION_1_3 = 0;
int GLO_GLX_VERSION_1_4 = 0;
int GLO_GLX_3DFX_multisample = 0;
int GLO_GLX_AMD_gpu_association = 0;
int GLO_GLX_ARB_context_flush_control = 0;
int GLO_GLX_ARB_create_context = 0;
int GLO_GLX_ARB_create_context_no_error = 0;
int GLO_GLX_ARB_create_context_profile = 0;
int GLO_GLX_ARB_create_context_robustness = 0;
int GLO_GLX_ARB_fbconfig_float = 0;
int GLO_GLX_ARB_framebuffer_sRGB = 0;
int GLO_GLX_ARB_get_proc_address = 0;
int GLO_GLX_ARB_multisample = 0;
int GLO_GLX_ARB_robustness_application_isolation = 0;
int GLO_GLX_ARB_robustness_share_group_isolation = 0;
int GLO_GLX_ARB_vertex_buffer_object = 0;
int GLO_GLX_EXT_buffer_age = 0;
int GLO_GLX_EXT_context_priority = 0;
int GLO_GLX_EXT_create_context_es2_profile = 0;
int GLO_GLX_EXT_create_context_es_profile = 0;
int GLO_GLX_EXT_fbconfig_packed_float = 0;
int GLO_GLX_EXT_framebuffer_sRGB = 0;
int GLO_GLX_EXT_get_drawable_type = 0;
int GLO_GLX_EXT_import_context = 0;
int GLO_GLX_EXT_libglvnd = 0;
int GLO_GLX_EXT_no_config_context = 0;
int GLO_GLX_EXT_stereo_tree = 0;
int GLO_GLX_EXT_swap_control = 0;
int GLO_GLX_EXT_swap_control_tear = 0;
int GLO_GLX_EXT_texture_from_pixmap = 0;
int GLO_GLX_EXT_visual_info = 0;
int GLO_GLX_EXT_visual_rating = 0;
int GLO_GLX_INTEL_swap_event = 0;
int GLO_GLX_MESA_agp_offset = 0;
int GLO_GLX_MESA_copy_sub_buffer = 0;
int GLO_GLX_MESA_pixmap_colormap = 0;
int GLO_GLX_MESA_query_renderer = 0;
int GLO_GLX_MESA_release_buffers = 0;
int GLO_GLX_MESA_set_3dfx_mode = 0;
int GLO_GLX_MESA_swap_control = 0;
int GLO_GLX_NV_copy_buffer = 0;
int GLO_GLX_NV_copy_image = 0;
int GLO_GLX_NV_delay_before_swap = 0;
int GLO_GLX_NV_float_buffer = 0;
int GLO_GLX_NV_multigpu_context = 0;
int GLO_GLX_NV_multisample_coverage = 0;
int GLO_GLX_NV_present_video = 0;
int GLO_GLX_NV_robustness_video_memory_purge = 0;
int GLO_GLX_NV_swap_group = 0;
int GLO_GLX_NV_video_capture = 0;
int GLO_GLX_NV_video_out = 0;
int GLO_GLX_OML_swap_method = 0;
int GLO_GLX_OML_sync_control = 0;
int GLO_GLX_SGIS_blended_overlay = 0;
int GLO_GLX_SGIS_multisample = 0;
int GLO_GLX_SGIS_shared_multisample = 0;
int GLO_GLX_SGIX_fbconfig = 0;
int GLO_GLX_SGIX_hyperpipe = 0;
int GLO_GLX_SGIX_pbuffer = 0;
int GLO_GLX_SGIX_swap_barrier = 0;
int GLO_GLX_SGIX_swap_group = 0;
int GLO_GLX_SGIX_video_resize = 0;
int GLO_GLX_SGIX_visual_select_group = 0;
int GLO_GLX_SGI_cushion = 0;
int GLO_GLX_SGI_make_current_read = 0;
int GLO_GLX_SGI_swap_control = 0;
int GLO_GLX_SGI_video_sync = 0;
int GLO_GLX_SUN_get_transparent_index = 0;



PFNGLXBINDCHANNELTOWINDOWSGIXPROC glo_glXBindChannelToWindowSGIX = NULL;
PFNGLXBINDHYPERPIPESGIXPROC glo_glXBindHyperpipeSGIX = NULL;
PFNGLXBINDSWAPBARRIERNVPROC glo_glXBindSwapBarrierNV = NULL;
PFNGLXBINDSWAPBARRIERSGIXPROC glo_glXBindSwapBarrierSGIX = NULL;
PFNGLXBINDTEXIMAGEEXTPROC glo_glXBindTexImageEXT = NULL;
PFNGLXBINDVIDEOCAPTUREDEVICENVPROC glo_glXBindVideoCaptureDeviceNV = NULL;
PFNGLXBINDVIDEODEVICENVPROC glo_glXBindVideoDeviceNV = NULL;
PFNGLXBINDVIDEOIMAGENVPROC glo_glXBindVideoImageNV = NULL;
PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC glo_glXBlitContextFramebufferAMD = NULL;
PFNGLXCHANNELRECTSGIXPROC glo_glXChannelRectSGIX = NULL;
PFNGLXCHANNELRECTSYNCSGIXPROC glo_glXChannelRectSyncSGIX = NULL;
PFNGLXCHOOSEFBCONFIGPROC glo_glXChooseFBConfig = NULL;
PFNGLXCHOOSEFBCONFIGSGIXPROC glo_glXChooseFBConfigSGIX = NULL;
PFNGLXCHOOSEVISUALPROC glo_glXChooseVisual = NULL;
PFNGLXCOPYBUFFERSUBDATANVPROC glo_glXCopyBufferSubDataNV = NULL;
PFNGLXCOPYCONTEXTPROC glo_glXCopyContext = NULL;
PFNGLXCOPYIMAGESUBDATANVPROC glo_glXCopyImageSubDataNV = NULL;
PFNGLXCOPYSUBBUFFERMESAPROC glo_glXCopySubBufferMESA = NULL;
PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC glo_glXCreateAssociatedContextAMD = NULL;
PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC glo_glXCreateAssociatedContextAttribsAMD = NULL;
PFNGLXCREATECONTEXTPROC glo_glXCreateContext = NULL;
PFNGLXCREATECONTEXTATTRIBSARBPROC glo_glXCreateContextAttribsARB = NULL;
PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC glo_glXCreateContextWithConfigSGIX = NULL;
PFNGLXCREATEGLXPBUFFERSGIXPROC glo_glXCreateGLXPbufferSGIX = NULL;
PFNGLXCREATEGLXPIXMAPPROC glo_glXCreateGLXPixmap = NULL;
PFNGLXCREATEGLXPIXMAPMESAPROC glo_glXCreateGLXPixmapMESA = NULL;
PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC glo_glXCreateGLXPixmapWithConfigSGIX = NULL;
PFNGLXCREATENEWCONTEXTPROC glo_glXCreateNewContext = NULL;
PFNGLXCREATEPBUFFERPROC glo_glXCreatePbuffer = NULL;
PFNGLXCREATEPIXMAPPROC glo_glXCreatePixmap = NULL;
PFNGLXCREATEWINDOWPROC glo_glXCreateWindow = NULL;
PFNGLXCUSHIONSGIPROC glo_glXCushionSGI = NULL;
PFNGLXDELAYBEFORESWAPNVPROC glo_glXDelayBeforeSwapNV = NULL;
PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC glo_glXDeleteAssociatedContextAMD = NULL;
PFNGLXDESTROYCONTEXTPROC glo_glXDestroyContext = NULL;
PFNGLXDESTROYGLXPBUFFERSGIXPROC glo_glXDestroyGLXPbufferSGIX = NULL;
PFNGLXDESTROYGLXPIXMAPPROC glo_glXDestroyGLXPixmap = NULL;
PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC glo_glXDestroyHyperpipeConfigSGIX = NULL;
PFNGLXDESTROYPBUFFERPROC glo_glXDestroyPbuffer = NULL;
PFNGLXDESTROYPIXMAPPROC glo_glXDestroyPixmap = NULL;
PFNGLXDESTROYWINDOWPROC glo_glXDestroyWindow = NULL;
PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC glo_glXEnumerateVideoCaptureDevicesNV = NULL;
PFNGLXENUMERATEVIDEODEVICESNVPROC glo_glXEnumerateVideoDevicesNV = NULL;
PFNGLXFREECONTEXTEXTPROC glo_glXFreeContextEXT = NULL;
PFNGLXGETAGPOFFSETMESAPROC glo_glXGetAGPOffsetMESA = NULL;
PFNGLXGETCLIENTSTRINGPROC glo_glXGetClientString = NULL;
PFNGLXGETCONFIGPROC glo_glXGetConfig = NULL;
PFNGLXGETCONTEXTGPUIDAMDPROC glo_glXGetContextGPUIDAMD = NULL;
PFNGLXGETCONTEXTIDEXTPROC glo_glXGetContextIDEXT = NULL;
PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC glo_glXGetCurrentAssociatedContextAMD = NULL;
PFNGLXGETCURRENTCONTEXTPROC glo_glXGetCurrentContext = NULL;
PFNGLXGETCURRENTDISPLAYPROC glo_glXGetCurrentDisplay = NULL;
PFNGLXGETCURRENTDISPLAYEXTPROC glo_glXGetCurrentDisplayEXT = NULL;
PFNGLXGETCURRENTDRAWABLEPROC glo_glXGetCurrentDrawable = NULL;
PFNGLXGETCURRENTREADDRAWABLEPROC glo_glXGetCurrentReadDrawable = NULL;
PFNGLXGETCURRENTREADDRAWABLESGIPROC glo_glXGetCurrentReadDrawableSGI = NULL;
PFNGLXGETFBCONFIGATTRIBPROC glo_glXGetFBConfigAttrib = NULL;
PFNGLXGETFBCONFIGATTRIBSGIXPROC glo_glXGetFBConfigAttribSGIX = NULL;
PFNGLXGETFBCONFIGFROMVISUALSGIXPROC glo_glXGetFBConfigFromVisualSGIX = NULL;
PFNGLXGETFBCONFIGSPROC glo_glXGetFBConfigs = NULL;
PFNGLXGETGPUIDSAMDPROC glo_glXGetGPUIDsAMD = NULL;
PFNGLXGETGPUINFOAMDPROC glo_glXGetGPUInfoAMD = NULL;
PFNGLXGETMSCRATEOMLPROC glo_glXGetMscRateOML = NULL;
PFNGLXGETPROCADDRESSPROC glo_glXGetProcAddress = NULL;
PFNGLXGETPROCADDRESSARBPROC glo_glXGetProcAddressARB = NULL;
PFNGLXGETSELECTEDEVENTPROC glo_glXGetSelectedEvent = NULL;
PFNGLXGETSELECTEDEVENTSGIXPROC glo_glXGetSelectedEventSGIX = NULL;
PFNGLXGETSWAPINTERVALMESAPROC glo_glXGetSwapIntervalMESA = NULL;
PFNGLXGETSYNCVALUESOMLPROC glo_glXGetSyncValuesOML = NULL;
PFNGLXGETTRANSPARENTINDEXSUNPROC glo_glXGetTransparentIndexSUN = NULL;
PFNGLXGETVIDEODEVICENVPROC glo_glXGetVideoDeviceNV = NULL;
PFNGLXGETVIDEOINFONVPROC glo_glXGetVideoInfoNV = NULL;
PFNGLXGETVIDEOSYNCSGIPROC glo_glXGetVideoSyncSGI = NULL;
PFNGLXGETVISUALFROMFBCONFIGPROC glo_glXGetVisualFromFBConfig = NULL;
PFNGLXGETVISUALFROMFBCONFIGSGIXPROC glo_glXGetVisualFromFBConfigSGIX = NULL;
PFNGLXHYPERPIPEATTRIBSGIXPROC glo_glXHyperpipeAttribSGIX = NULL;
PFNGLXHYPERPIPECONFIGSGIXPROC glo_glXHyperpipeConfigSGIX = NULL;
PFNGLXIMPORTCONTEXTEXTPROC glo_glXImportContextEXT = NULL;
PFNGLXISDIRECTPROC glo_glXIsDirect = NULL;
PFNGLXJOINSWAPGROUPNVPROC glo_glXJoinSwapGroupNV = NULL;
PFNGLXJOINSWAPGROUPSGIXPROC glo_glXJoinSwapGroupSGIX = NULL;
PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC glo_glXLockVideoCaptureDeviceNV = NULL;
PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC glo_glXMakeAssociatedContextCurrentAMD = NULL;
PFNGLXMAKECONTEXTCURRENTPROC glo_glXMakeContextCurrent = NULL;
PFNGLXMAKECURRENTPROC glo_glXMakeCurrent = NULL;
PFNGLXMAKECURRENTREADSGIPROC glo_glXMakeCurrentReadSGI = NULL;
PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC glo_glXNamedCopyBufferSubDataNV = NULL;
PFNGLXQUERYCHANNELDELTASSGIXPROC glo_glXQueryChannelDeltasSGIX = NULL;
PFNGLXQUERYCHANNELRECTSGIXPROC glo_glXQueryChannelRectSGIX = NULL;
PFNGLXQUERYCONTEXTPROC glo_glXQueryContext = NULL;
PFNGLXQUERYCONTEXTINFOEXTPROC glo_glXQueryContextInfoEXT = NULL;
PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC glo_glXQueryCurrentRendererIntegerMESA = NULL;
PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC glo_glXQueryCurrentRendererStringMESA = NULL;
PFNGLXQUERYDRAWABLEPROC glo_glXQueryDrawable = NULL;
PFNGLXQUERYEXTENSIONPROC glo_glXQueryExtension = NULL;
PFNGLXQUERYEXTENSIONSSTRINGPROC glo_glXQueryExtensionsString = NULL;
PFNGLXQUERYFRAMECOUNTNVPROC glo_glXQueryFrameCountNV = NULL;
PFNGLXQUERYGLXPBUFFERSGIXPROC glo_glXQueryGLXPbufferSGIX = NULL;
PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC glo_glXQueryHyperpipeAttribSGIX = NULL;
PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC glo_glXQueryHyperpipeBestAttribSGIX = NULL;
PFNGLXQUERYHYPERPIPECONFIGSGIXPROC glo_glXQueryHyperpipeConfigSGIX = NULL;
PFNGLXQUERYHYPERPIPENETWORKSGIXPROC glo_glXQueryHyperpipeNetworkSGIX = NULL;
PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC glo_glXQueryMaxSwapBarriersSGIX = NULL;
PFNGLXQUERYMAXSWAPGROUPSNVPROC glo_glXQueryMaxSwapGroupsNV = NULL;
PFNGLXQUERYRENDERERINTEGERMESAPROC glo_glXQueryRendererIntegerMESA = NULL;
PFNGLXQUERYRENDERERSTRINGMESAPROC glo_glXQueryRendererStringMESA = NULL;
PFNGLXQUERYSERVERSTRINGPROC glo_glXQueryServerString = NULL;
PFNGLXQUERYSWAPGROUPNVPROC glo_glXQuerySwapGroupNV = NULL;
PFNGLXQUERYVERSIONPROC glo_glXQueryVersion = NULL;
PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC glo_glXQueryVideoCaptureDeviceNV = NULL;
PFNGLXRELEASEBUFFERSMESAPROC glo_glXReleaseBuffersMESA = NULL;
PFNGLXRELEASETEXIMAGEEXTPROC glo_glXReleaseTexImageEXT = NULL;
PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC glo_glXReleaseVideoCaptureDeviceNV = NULL;
PFNGLXRELEASEVIDEODEVICENVPROC glo_glXReleaseVideoDeviceNV = NULL;
PFNGLXRELEASEVIDEOIMAGENVPROC glo_glXReleaseVideoImageNV = NULL;
PFNGLXRESETFRAMECOUNTNVPROC glo_glXResetFrameCountNV = NULL;
PFNGLXSELECTEVENTPROC glo_glXSelectEvent = NULL;
PFNGLXSELECTEVENTSGIXPROC glo_glXSelectEventSGIX = NULL;
PFNGLXSENDPBUFFERTOVIDEONVPROC glo_glXSendPbufferToVideoNV = NULL;
PFNGLXSET3DFXMODEMESAPROC glo_glXSet3DfxModeMESA = NULL;
PFNGLXSWAPBUFFERSPROC glo_glXSwapBuffers = NULL;
PFNGLXSWAPBUFFERSMSCOMLPROC glo_glXSwapBuffersMscOML = NULL;
PFNGLXSWAPINTERVALEXTPROC glo_glXSwapIntervalEXT = NULL;
PFNGLXSWAPINTERVALMESAPROC glo_glXSwapIntervalMESA = NULL;
PFNGLXSWAPINTERVALSGIPROC glo_glXSwapIntervalSGI = NULL;
PFNGLXUSEXFONTPROC glo_glXUseXFont = NULL;
PFNGLXWAITFORMSCOMLPROC glo_glXWaitForMscOML = NULL;
PFNGLXWAITFORSBCOMLPROC glo_glXWaitForSbcOML = NULL;
PFNGLXWAITGLPROC glo_glXWaitGL = NULL;
PFNGLXWAITVIDEOSYNCSGIPROC glo_glXWaitVideoSyncSGI = NULL;
PFNGLXWAITXPROC glo_glXWaitX = NULL;


static void glo_glx_load_GLX_VERSION_1_0( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_VERSION_1_0) return;
    glo_glXChooseVisual = (PFNGLXCHOOSEVISUALPROC) load(userptr, "glXChooseVisual");
    glo_glXCopyContext = (PFNGLXCOPYCONTEXTPROC) load(userptr, "glXCopyContext");
    glo_glXCreateContext = (PFNGLXCREATECONTEXTPROC) load(userptr, "glXCreateContext");
    glo_glXCreateGLXPixmap = (PFNGLXCREATEGLXPIXMAPPROC) load(userptr, "glXCreateGLXPixmap");
    glo_glXDestroyContext = (PFNGLXDESTROYCONTEXTPROC) load(userptr, "glXDestroyContext");
    glo_glXDestroyGLXPixmap = (PFNGLXDESTROYGLXPIXMAPPROC) load(userptr, "glXDestroyGLXPixmap");
    glo_glXGetConfig = (PFNGLXGETCONFIGPROC) load(userptr, "glXGetConfig");
    glo_glXGetCurrentContext = (PFNGLXGETCURRENTCONTEXTPROC) load(userptr, "glXGetCurrentContext");
    glo_glXGetCurrentDrawable = (PFNGLXGETCURRENTDRAWABLEPROC) load(userptr, "glXGetCurrentDrawable");
    glo_glXIsDirect = (PFNGLXISDIRECTPROC) load(userptr, "glXIsDirect");
    glo_glXMakeCurrent = (PFNGLXMAKECURRENTPROC) load(userptr, "glXMakeCurrent");
    glo_glXQueryExtension = (PFNGLXQUERYEXTENSIONPROC) load(userptr, "glXQueryExtension");
    glo_glXQueryVersion = (PFNGLXQUERYVERSIONPROC) load(userptr, "glXQueryVersion");
    glo_glXSwapBuffers = (PFNGLXSWAPBUFFERSPROC) load(userptr, "glXSwapBuffers");
    glo_glXUseXFont = (PFNGLXUSEXFONTPROC) load(userptr, "glXUseXFont");
    glo_glXWaitGL = (PFNGLXWAITGLPROC) load(userptr, "glXWaitGL");
    glo_glXWaitX = (PFNGLXWAITXPROC) load(userptr, "glXWaitX");
}
static void glo_glx_load_GLX_VERSION_1_1( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_VERSION_1_1) return;
    glo_glXGetClientString = (PFNGLXGETCLIENTSTRINGPROC) load(userptr, "glXGetClientString");
    glo_glXQueryExtensionsString = (PFNGLXQUERYEXTENSIONSSTRINGPROC) load(userptr, "glXQueryExtensionsString");
    glo_glXQueryServerString = (PFNGLXQUERYSERVERSTRINGPROC) load(userptr, "glXQueryServerString");
}
static void glo_glx_load_GLX_VERSION_1_2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_VERSION_1_2) return;
    glo_glXGetCurrentDisplay = (PFNGLXGETCURRENTDISPLAYPROC) load(userptr, "glXGetCurrentDisplay");
}
static void glo_glx_load_GLX_VERSION_1_3( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_VERSION_1_3) return;
    glo_glXChooseFBConfig = (PFNGLXCHOOSEFBCONFIGPROC) load(userptr, "glXChooseFBConfig");
    glo_glXCreateNewContext = (PFNGLXCREATENEWCONTEXTPROC) load(userptr, "glXCreateNewContext");
    glo_glXCreatePbuffer = (PFNGLXCREATEPBUFFERPROC) load(userptr, "glXCreatePbuffer");
    glo_glXCreatePixmap = (PFNGLXCREATEPIXMAPPROC) load(userptr, "glXCreatePixmap");
    glo_glXCreateWindow = (PFNGLXCREATEWINDOWPROC) load(userptr, "glXCreateWindow");
    glo_glXDestroyPbuffer = (PFNGLXDESTROYPBUFFERPROC) load(userptr, "glXDestroyPbuffer");
    glo_glXDestroyPixmap = (PFNGLXDESTROYPIXMAPPROC) load(userptr, "glXDestroyPixmap");
    glo_glXDestroyWindow = (PFNGLXDESTROYWINDOWPROC) load(userptr, "glXDestroyWindow");
    glo_glXGetCurrentReadDrawable = (PFNGLXGETCURRENTREADDRAWABLEPROC) load(userptr, "glXGetCurrentReadDrawable");
    glo_glXGetFBConfigAttrib = (PFNGLXGETFBCONFIGATTRIBPROC) load(userptr, "glXGetFBConfigAttrib");
    glo_glXGetFBConfigs = (PFNGLXGETFBCONFIGSPROC) load(userptr, "glXGetFBConfigs");
    glo_glXGetSelectedEvent = (PFNGLXGETSELECTEDEVENTPROC) load(userptr, "glXGetSelectedEvent");
    glo_glXGetVisualFromFBConfig = (PFNGLXGETVISUALFROMFBCONFIGPROC) load(userptr, "glXGetVisualFromFBConfig");
    glo_glXMakeContextCurrent = (PFNGLXMAKECONTEXTCURRENTPROC) load(userptr, "glXMakeContextCurrent");
    glo_glXQueryContext = (PFNGLXQUERYCONTEXTPROC) load(userptr, "glXQueryContext");
    glo_glXQueryDrawable = (PFNGLXQUERYDRAWABLEPROC) load(userptr, "glXQueryDrawable");
    glo_glXSelectEvent = (PFNGLXSELECTEVENTPROC) load(userptr, "glXSelectEvent");
}
static void glo_glx_load_GLX_VERSION_1_4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_VERSION_1_4) return;
    glo_glXGetProcAddress = (PFNGLXGETPROCADDRESSPROC) load(userptr, "glXGetProcAddress");
}
static void glo_glx_load_GLX_AMD_gpu_association( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_AMD_gpu_association) return;
    glo_glXBlitContextFramebufferAMD = (PFNGLXBLITCONTEXTFRAMEBUFFERAMDPROC) load(userptr, "glXBlitContextFramebufferAMD");
    glo_glXCreateAssociatedContextAMD = (PFNGLXCREATEASSOCIATEDCONTEXTAMDPROC) load(userptr, "glXCreateAssociatedContextAMD");
    glo_glXCreateAssociatedContextAttribsAMD = (PFNGLXCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) load(userptr, "glXCreateAssociatedContextAttribsAMD");
    glo_glXDeleteAssociatedContextAMD = (PFNGLXDELETEASSOCIATEDCONTEXTAMDPROC) load(userptr, "glXDeleteAssociatedContextAMD");
    glo_glXGetContextGPUIDAMD = (PFNGLXGETCONTEXTGPUIDAMDPROC) load(userptr, "glXGetContextGPUIDAMD");
    glo_glXGetCurrentAssociatedContextAMD = (PFNGLXGETCURRENTASSOCIATEDCONTEXTAMDPROC) load(userptr, "glXGetCurrentAssociatedContextAMD");
    glo_glXGetGPUIDsAMD = (PFNGLXGETGPUIDSAMDPROC) load(userptr, "glXGetGPUIDsAMD");
    glo_glXGetGPUInfoAMD = (PFNGLXGETGPUINFOAMDPROC) load(userptr, "glXGetGPUInfoAMD");
    glo_glXMakeAssociatedContextCurrentAMD = (PFNGLXMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) load(userptr, "glXMakeAssociatedContextCurrentAMD");
}
static void glo_glx_load_GLX_ARB_create_context( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_ARB_create_context) return;
    glo_glXCreateContextAttribsARB = (PFNGLXCREATECONTEXTATTRIBSARBPROC) load(userptr, "glXCreateContextAttribsARB");
}
static void glo_glx_load_GLX_ARB_get_proc_address( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_ARB_get_proc_address) return;
    glo_glXGetProcAddressARB = (PFNGLXGETPROCADDRESSARBPROC) load(userptr, "glXGetProcAddressARB");
}
static void glo_glx_load_GLX_EXT_import_context( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_EXT_import_context) return;
    glo_glXFreeContextEXT = (PFNGLXFREECONTEXTEXTPROC) load(userptr, "glXFreeContextEXT");
    glo_glXGetContextIDEXT = (PFNGLXGETCONTEXTIDEXTPROC) load(userptr, "glXGetContextIDEXT");
    glo_glXGetCurrentDisplayEXT = (PFNGLXGETCURRENTDISPLAYEXTPROC) load(userptr, "glXGetCurrentDisplayEXT");
    glo_glXImportContextEXT = (PFNGLXIMPORTCONTEXTEXTPROC) load(userptr, "glXImportContextEXT");
    glo_glXQueryContextInfoEXT = (PFNGLXQUERYCONTEXTINFOEXTPROC) load(userptr, "glXQueryContextInfoEXT");
}
static void glo_glx_load_GLX_EXT_swap_control( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_EXT_swap_control) return;
    glo_glXSwapIntervalEXT = (PFNGLXSWAPINTERVALEXTPROC) load(userptr, "glXSwapIntervalEXT");
}
static void glo_glx_load_GLX_EXT_texture_from_pixmap( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_EXT_texture_from_pixmap) return;
    glo_glXBindTexImageEXT = (PFNGLXBINDTEXIMAGEEXTPROC) load(userptr, "glXBindTexImageEXT");
    glo_glXReleaseTexImageEXT = (PFNGLXRELEASETEXIMAGEEXTPROC) load(userptr, "glXReleaseTexImageEXT");
}
static void glo_glx_load_GLX_MESA_agp_offset( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_agp_offset) return;
    glo_glXGetAGPOffsetMESA = (PFNGLXGETAGPOFFSETMESAPROC) load(userptr, "glXGetAGPOffsetMESA");
}
static void glo_glx_load_GLX_MESA_copy_sub_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_copy_sub_buffer) return;
    glo_glXCopySubBufferMESA = (PFNGLXCOPYSUBBUFFERMESAPROC) load(userptr, "glXCopySubBufferMESA");
}
static void glo_glx_load_GLX_MESA_pixmap_colormap( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_pixmap_colormap) return;
    glo_glXCreateGLXPixmapMESA = (PFNGLXCREATEGLXPIXMAPMESAPROC) load(userptr, "glXCreateGLXPixmapMESA");
}
static void glo_glx_load_GLX_MESA_query_renderer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_query_renderer) return;
    glo_glXQueryCurrentRendererIntegerMESA = (PFNGLXQUERYCURRENTRENDERERINTEGERMESAPROC) load(userptr, "glXQueryCurrentRendererIntegerMESA");
    glo_glXQueryCurrentRendererStringMESA = (PFNGLXQUERYCURRENTRENDERERSTRINGMESAPROC) load(userptr, "glXQueryCurrentRendererStringMESA");
    glo_glXQueryRendererIntegerMESA = (PFNGLXQUERYRENDERERINTEGERMESAPROC) load(userptr, "glXQueryRendererIntegerMESA");
    glo_glXQueryRendererStringMESA = (PFNGLXQUERYRENDERERSTRINGMESAPROC) load(userptr, "glXQueryRendererStringMESA");
}
static void glo_glx_load_GLX_MESA_release_buffers( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_release_buffers) return;
    glo_glXReleaseBuffersMESA = (PFNGLXRELEASEBUFFERSMESAPROC) load(userptr, "glXReleaseBuffersMESA");
}
static void glo_glx_load_GLX_MESA_set_3dfx_mode( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_set_3dfx_mode) return;
    glo_glXSet3DfxModeMESA = (PFNGLXSET3DFXMODEMESAPROC) load(userptr, "glXSet3DfxModeMESA");
}
static void glo_glx_load_GLX_MESA_swap_control( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_MESA_swap_control) return;
    glo_glXGetSwapIntervalMESA = (PFNGLXGETSWAPINTERVALMESAPROC) load(userptr, "glXGetSwapIntervalMESA");
    glo_glXSwapIntervalMESA = (PFNGLXSWAPINTERVALMESAPROC) load(userptr, "glXSwapIntervalMESA");
}
static void glo_glx_load_GLX_NV_copy_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_copy_buffer) return;
    glo_glXCopyBufferSubDataNV = (PFNGLXCOPYBUFFERSUBDATANVPROC) load(userptr, "glXCopyBufferSubDataNV");
    glo_glXNamedCopyBufferSubDataNV = (PFNGLXNAMEDCOPYBUFFERSUBDATANVPROC) load(userptr, "glXNamedCopyBufferSubDataNV");
}
static void glo_glx_load_GLX_NV_copy_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_copy_image) return;
    glo_glXCopyImageSubDataNV = (PFNGLXCOPYIMAGESUBDATANVPROC) load(userptr, "glXCopyImageSubDataNV");
}
static void glo_glx_load_GLX_NV_delay_before_swap( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_delay_before_swap) return;
    glo_glXDelayBeforeSwapNV = (PFNGLXDELAYBEFORESWAPNVPROC) load(userptr, "glXDelayBeforeSwapNV");
}
static void glo_glx_load_GLX_NV_present_video( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_present_video) return;
    glo_glXBindVideoDeviceNV = (PFNGLXBINDVIDEODEVICENVPROC) load(userptr, "glXBindVideoDeviceNV");
    glo_glXEnumerateVideoDevicesNV = (PFNGLXENUMERATEVIDEODEVICESNVPROC) load(userptr, "glXEnumerateVideoDevicesNV");
}
static void glo_glx_load_GLX_NV_swap_group( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_swap_group) return;
    glo_glXBindSwapBarrierNV = (PFNGLXBINDSWAPBARRIERNVPROC) load(userptr, "glXBindSwapBarrierNV");
    glo_glXJoinSwapGroupNV = (PFNGLXJOINSWAPGROUPNVPROC) load(userptr, "glXJoinSwapGroupNV");
    glo_glXQueryFrameCountNV = (PFNGLXQUERYFRAMECOUNTNVPROC) load(userptr, "glXQueryFrameCountNV");
    glo_glXQueryMaxSwapGroupsNV = (PFNGLXQUERYMAXSWAPGROUPSNVPROC) load(userptr, "glXQueryMaxSwapGroupsNV");
    glo_glXQuerySwapGroupNV = (PFNGLXQUERYSWAPGROUPNVPROC) load(userptr, "glXQuerySwapGroupNV");
    glo_glXResetFrameCountNV = (PFNGLXRESETFRAMECOUNTNVPROC) load(userptr, "glXResetFrameCountNV");
}
static void glo_glx_load_GLX_NV_video_capture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_video_capture) return;
    glo_glXBindVideoCaptureDeviceNV = (PFNGLXBINDVIDEOCAPTUREDEVICENVPROC) load(userptr, "glXBindVideoCaptureDeviceNV");
    glo_glXEnumerateVideoCaptureDevicesNV = (PFNGLXENUMERATEVIDEOCAPTUREDEVICESNVPROC) load(userptr, "glXEnumerateVideoCaptureDevicesNV");
    glo_glXLockVideoCaptureDeviceNV = (PFNGLXLOCKVIDEOCAPTUREDEVICENVPROC) load(userptr, "glXLockVideoCaptureDeviceNV");
    glo_glXQueryVideoCaptureDeviceNV = (PFNGLXQUERYVIDEOCAPTUREDEVICENVPROC) load(userptr, "glXQueryVideoCaptureDeviceNV");
    glo_glXReleaseVideoCaptureDeviceNV = (PFNGLXRELEASEVIDEOCAPTUREDEVICENVPROC) load(userptr, "glXReleaseVideoCaptureDeviceNV");
}
static void glo_glx_load_GLX_NV_video_out( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_NV_video_out) return;
    glo_glXBindVideoImageNV = (PFNGLXBINDVIDEOIMAGENVPROC) load(userptr, "glXBindVideoImageNV");
    glo_glXGetVideoDeviceNV = (PFNGLXGETVIDEODEVICENVPROC) load(userptr, "glXGetVideoDeviceNV");
    glo_glXGetVideoInfoNV = (PFNGLXGETVIDEOINFONVPROC) load(userptr, "glXGetVideoInfoNV");
    glo_glXReleaseVideoDeviceNV = (PFNGLXRELEASEVIDEODEVICENVPROC) load(userptr, "glXReleaseVideoDeviceNV");
    glo_glXReleaseVideoImageNV = (PFNGLXRELEASEVIDEOIMAGENVPROC) load(userptr, "glXReleaseVideoImageNV");
    glo_glXSendPbufferToVideoNV = (PFNGLXSENDPBUFFERTOVIDEONVPROC) load(userptr, "glXSendPbufferToVideoNV");
}
static void glo_glx_load_GLX_OML_sync_control( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_OML_sync_control) return;
    glo_glXGetMscRateOML = (PFNGLXGETMSCRATEOMLPROC) load(userptr, "glXGetMscRateOML");
    glo_glXGetSyncValuesOML = (PFNGLXGETSYNCVALUESOMLPROC) load(userptr, "glXGetSyncValuesOML");
    glo_glXSwapBuffersMscOML = (PFNGLXSWAPBUFFERSMSCOMLPROC) load(userptr, "glXSwapBuffersMscOML");
    glo_glXWaitForMscOML = (PFNGLXWAITFORMSCOMLPROC) load(userptr, "glXWaitForMscOML");
    glo_glXWaitForSbcOML = (PFNGLXWAITFORSBCOMLPROC) load(userptr, "glXWaitForSbcOML");
}
static void glo_glx_load_GLX_SGIX_fbconfig( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGIX_fbconfig) return;
    glo_glXChooseFBConfigSGIX = (PFNGLXCHOOSEFBCONFIGSGIXPROC) load(userptr, "glXChooseFBConfigSGIX");
    glo_glXCreateContextWithConfigSGIX = (PFNGLXCREATECONTEXTWITHCONFIGSGIXPROC) load(userptr, "glXCreateContextWithConfigSGIX");
    glo_glXCreateGLXPixmapWithConfigSGIX = (PFNGLXCREATEGLXPIXMAPWITHCONFIGSGIXPROC) load(userptr, "glXCreateGLXPixmapWithConfigSGIX");
    glo_glXGetFBConfigAttribSGIX = (PFNGLXGETFBCONFIGATTRIBSGIXPROC) load(userptr, "glXGetFBConfigAttribSGIX");
    glo_glXGetFBConfigFromVisualSGIX = (PFNGLXGETFBCONFIGFROMVISUALSGIXPROC) load(userptr, "glXGetFBConfigFromVisualSGIX");
    glo_glXGetVisualFromFBConfigSGIX = (PFNGLXGETVISUALFROMFBCONFIGSGIXPROC) load(userptr, "glXGetVisualFromFBConfigSGIX");
}
static void glo_glx_load_GLX_SGIX_hyperpipe( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGIX_hyperpipe) return;
    glo_glXBindHyperpipeSGIX = (PFNGLXBINDHYPERPIPESGIXPROC) load(userptr, "glXBindHyperpipeSGIX");
    glo_glXDestroyHyperpipeConfigSGIX = (PFNGLXDESTROYHYPERPIPECONFIGSGIXPROC) load(userptr, "glXDestroyHyperpipeConfigSGIX");
    glo_glXHyperpipeAttribSGIX = (PFNGLXHYPERPIPEATTRIBSGIXPROC) load(userptr, "glXHyperpipeAttribSGIX");
    glo_glXHyperpipeConfigSGIX = (PFNGLXHYPERPIPECONFIGSGIXPROC) load(userptr, "glXHyperpipeConfigSGIX");
    glo_glXQueryHyperpipeAttribSGIX = (PFNGLXQUERYHYPERPIPEATTRIBSGIXPROC) load(userptr, "glXQueryHyperpipeAttribSGIX");
    glo_glXQueryHyperpipeBestAttribSGIX = (PFNGLXQUERYHYPERPIPEBESTATTRIBSGIXPROC) load(userptr, "glXQueryHyperpipeBestAttribSGIX");
    glo_glXQueryHyperpipeConfigSGIX = (PFNGLXQUERYHYPERPIPECONFIGSGIXPROC) load(userptr, "glXQueryHyperpipeConfigSGIX");
    glo_glXQueryHyperpipeNetworkSGIX = (PFNGLXQUERYHYPERPIPENETWORKSGIXPROC) load(userptr, "glXQueryHyperpipeNetworkSGIX");
}
static void glo_glx_load_GLX_SGIX_pbuffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGIX_pbuffer) return;
    glo_glXCreateGLXPbufferSGIX = (PFNGLXCREATEGLXPBUFFERSGIXPROC) load(userptr, "glXCreateGLXPbufferSGIX");
    glo_glXDestroyGLXPbufferSGIX = (PFNGLXDESTROYGLXPBUFFERSGIXPROC) load(userptr, "glXDestroyGLXPbufferSGIX");
    glo_glXGetSelectedEventSGIX = (PFNGLXGETSELECTEDEVENTSGIXPROC) load(userptr, "glXGetSelectedEventSGIX");
    glo_glXQueryGLXPbufferSGIX = (PFNGLXQUERYGLXPBUFFERSGIXPROC) load(userptr, "glXQueryGLXPbufferSGIX");
    glo_glXSelectEventSGIX = (PFNGLXSELECTEVENTSGIXPROC) load(userptr, "glXSelectEventSGIX");
}
static void glo_glx_load_GLX_SGIX_swap_barrier( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGIX_swap_barrier) return;
    glo_glXBindSwapBarrierSGIX = (PFNGLXBINDSWAPBARRIERSGIXPROC) load(userptr, "glXBindSwapBarrierSGIX");
    glo_glXQueryMaxSwapBarriersSGIX = (PFNGLXQUERYMAXSWAPBARRIERSSGIXPROC) load(userptr, "glXQueryMaxSwapBarriersSGIX");
}
static void glo_glx_load_GLX_SGIX_swap_group( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGIX_swap_group) return;
    glo_glXJoinSwapGroupSGIX = (PFNGLXJOINSWAPGROUPSGIXPROC) load(userptr, "glXJoinSwapGroupSGIX");
}
static void glo_glx_load_GLX_SGIX_video_resize( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGIX_video_resize) return;
    glo_glXBindChannelToWindowSGIX = (PFNGLXBINDCHANNELTOWINDOWSGIXPROC) load(userptr, "glXBindChannelToWindowSGIX");
    glo_glXChannelRectSGIX = (PFNGLXCHANNELRECTSGIXPROC) load(userptr, "glXChannelRectSGIX");
    glo_glXChannelRectSyncSGIX = (PFNGLXCHANNELRECTSYNCSGIXPROC) load(userptr, "glXChannelRectSyncSGIX");
    glo_glXQueryChannelDeltasSGIX = (PFNGLXQUERYCHANNELDELTASSGIXPROC) load(userptr, "glXQueryChannelDeltasSGIX");
    glo_glXQueryChannelRectSGIX = (PFNGLXQUERYCHANNELRECTSGIXPROC) load(userptr, "glXQueryChannelRectSGIX");
}
static void glo_glx_load_GLX_SGI_cushion( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGI_cushion) return;
    glo_glXCushionSGI = (PFNGLXCUSHIONSGIPROC) load(userptr, "glXCushionSGI");
}
static void glo_glx_load_GLX_SGI_make_current_read( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGI_make_current_read) return;
    glo_glXGetCurrentReadDrawableSGI = (PFNGLXGETCURRENTREADDRAWABLESGIPROC) load(userptr, "glXGetCurrentReadDrawableSGI");
    glo_glXMakeCurrentReadSGI = (PFNGLXMAKECURRENTREADSGIPROC) load(userptr, "glXMakeCurrentReadSGI");
}
static void glo_glx_load_GLX_SGI_swap_control( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGI_swap_control) return;
    glo_glXSwapIntervalSGI = (PFNGLXSWAPINTERVALSGIPROC) load(userptr, "glXSwapIntervalSGI");
}
static void glo_glx_load_GLX_SGI_video_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SGI_video_sync) return;
    glo_glXGetVideoSyncSGI = (PFNGLXGETVIDEOSYNCSGIPROC) load(userptr, "glXGetVideoSyncSGI");
    glo_glXWaitVideoSyncSGI = (PFNGLXWAITVIDEOSYNCSGIPROC) load(userptr, "glXWaitVideoSyncSGI");
}
static void glo_glx_load_GLX_SUN_get_transparent_index( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GLX_SUN_get_transparent_index) return;
    glo_glXGetTransparentIndexSUN = (PFNGLXGETTRANSPARENTINDEXSUNPROC) load(userptr, "glXGetTransparentIndexSUN");
}



static int glo_glx_has_extension(Display *display, int screen, const char *ext) {
#ifndef GLX_VERSION_1_1
    GLO_UNUSED(display);
    GLO_UNUSED(screen);
    GLO_UNUSED(ext);
#else
    const char *terminator;
    const char *loc;
    const char *extensions;

    if (glXQueryExtensionsString == NULL) {
        return 0;
    }

    extensions = glXQueryExtensionsString(display, screen);

    if(extensions == NULL || ext == NULL) {
        return 0;
    }

    while(1) {
        loc = strstr(extensions, ext);
        if(loc == NULL)
            break;

        terminator = loc + strlen(ext);
        if((loc == extensions || *(loc - 1) == ' ') &&
            (*terminator == ' ' || *terminator == '\0')) {
            return 1;
        }
        extensions = terminator;
    }
#endif

    return 0;
}

static GLOapiproc glo_glx_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLO_GNUC_EXTENSION (GLOapiproc (*)(const char *name)) userptr)(name);
}

static int glo_glx_find_extensions(Display *display, int screen) {
    GLO_GLX_3DFX_multisample = glo_glx_has_extension(display, screen, "GLX_3DFX_multisample");
    GLO_GLX_AMD_gpu_association = glo_glx_has_extension(display, screen, "GLX_AMD_gpu_association");
    GLO_GLX_ARB_context_flush_control = glo_glx_has_extension(display, screen, "GLX_ARB_context_flush_control");
    GLO_GLX_ARB_create_context = glo_glx_has_extension(display, screen, "GLX_ARB_create_context");
    GLO_GLX_ARB_create_context_no_error = glo_glx_has_extension(display, screen, "GLX_ARB_create_context_no_error");
    GLO_GLX_ARB_create_context_profile = glo_glx_has_extension(display, screen, "GLX_ARB_create_context_profile");
    GLO_GLX_ARB_create_context_robustness = glo_glx_has_extension(display, screen, "GLX_ARB_create_context_robustness");
    GLO_GLX_ARB_fbconfig_float = glo_glx_has_extension(display, screen, "GLX_ARB_fbconfig_float");
    GLO_GLX_ARB_framebuffer_sRGB = glo_glx_has_extension(display, screen, "GLX_ARB_framebuffer_sRGB");
    GLO_GLX_ARB_get_proc_address = glo_glx_has_extension(display, screen, "GLX_ARB_get_proc_address");
    GLO_GLX_ARB_multisample = glo_glx_has_extension(display, screen, "GLX_ARB_multisample");
    GLO_GLX_ARB_robustness_application_isolation = glo_glx_has_extension(display, screen, "GLX_ARB_robustness_application_isolation");
    GLO_GLX_ARB_robustness_share_group_isolation = glo_glx_has_extension(display, screen, "GLX_ARB_robustness_share_group_isolation");
    GLO_GLX_ARB_vertex_buffer_object = glo_glx_has_extension(display, screen, "GLX_ARB_vertex_buffer_object");
    GLO_GLX_EXT_buffer_age = glo_glx_has_extension(display, screen, "GLX_EXT_buffer_age");
    GLO_GLX_EXT_context_priority = glo_glx_has_extension(display, screen, "GLX_EXT_context_priority");
    GLO_GLX_EXT_create_context_es2_profile = glo_glx_has_extension(display, screen, "GLX_EXT_create_context_es2_profile");
    GLO_GLX_EXT_create_context_es_profile = glo_glx_has_extension(display, screen, "GLX_EXT_create_context_es_profile");
    GLO_GLX_EXT_fbconfig_packed_float = glo_glx_has_extension(display, screen, "GLX_EXT_fbconfig_packed_float");
    GLO_GLX_EXT_framebuffer_sRGB = glo_glx_has_extension(display, screen, "GLX_EXT_framebuffer_sRGB");
    GLO_GLX_EXT_get_drawable_type = glo_glx_has_extension(display, screen, "GLX_EXT_get_drawable_type");
    GLO_GLX_EXT_import_context = glo_glx_has_extension(display, screen, "GLX_EXT_import_context");
    GLO_GLX_EXT_libglvnd = glo_glx_has_extension(display, screen, "GLX_EXT_libglvnd");
    GLO_GLX_EXT_no_config_context = glo_glx_has_extension(display, screen, "GLX_EXT_no_config_context");
    GLO_GLX_EXT_stereo_tree = glo_glx_has_extension(display, screen, "GLX_EXT_stereo_tree");
    GLO_GLX_EXT_swap_control = glo_glx_has_extension(display, screen, "GLX_EXT_swap_control");
    GLO_GLX_EXT_swap_control_tear = glo_glx_has_extension(display, screen, "GLX_EXT_swap_control_tear");
    GLO_GLX_EXT_texture_from_pixmap = glo_glx_has_extension(display, screen, "GLX_EXT_texture_from_pixmap");
    GLO_GLX_EXT_visual_info = glo_glx_has_extension(display, screen, "GLX_EXT_visual_info");
    GLO_GLX_EXT_visual_rating = glo_glx_has_extension(display, screen, "GLX_EXT_visual_rating");
    GLO_GLX_INTEL_swap_event = glo_glx_has_extension(display, screen, "GLX_INTEL_swap_event");
    GLO_GLX_MESA_agp_offset = glo_glx_has_extension(display, screen, "GLX_MESA_agp_offset");
    GLO_GLX_MESA_copy_sub_buffer = glo_glx_has_extension(display, screen, "GLX_MESA_copy_sub_buffer");
    GLO_GLX_MESA_pixmap_colormap = glo_glx_has_extension(display, screen, "GLX_MESA_pixmap_colormap");
    GLO_GLX_MESA_query_renderer = glo_glx_has_extension(display, screen, "GLX_MESA_query_renderer");
    GLO_GLX_MESA_release_buffers = glo_glx_has_extension(display, screen, "GLX_MESA_release_buffers");
    GLO_GLX_MESA_set_3dfx_mode = glo_glx_has_extension(display, screen, "GLX_MESA_set_3dfx_mode");
    GLO_GLX_MESA_swap_control = glo_glx_has_extension(display, screen, "GLX_MESA_swap_control");
    GLO_GLX_NV_copy_buffer = glo_glx_has_extension(display, screen, "GLX_NV_copy_buffer");
    GLO_GLX_NV_copy_image = glo_glx_has_extension(display, screen, "GLX_NV_copy_image");
    GLO_GLX_NV_delay_before_swap = glo_glx_has_extension(display, screen, "GLX_NV_delay_before_swap");
    GLO_GLX_NV_float_buffer = glo_glx_has_extension(display, screen, "GLX_NV_float_buffer");
    GLO_GLX_NV_multigpu_context = glo_glx_has_extension(display, screen, "GLX_NV_multigpu_context");
    GLO_GLX_NV_multisample_coverage = glo_glx_has_extension(display, screen, "GLX_NV_multisample_coverage");
    GLO_GLX_NV_present_video = glo_glx_has_extension(display, screen, "GLX_NV_present_video");
    GLO_GLX_NV_robustness_video_memory_purge = glo_glx_has_extension(display, screen, "GLX_NV_robustness_video_memory_purge");
    GLO_GLX_NV_swap_group = glo_glx_has_extension(display, screen, "GLX_NV_swap_group");
    GLO_GLX_NV_video_capture = glo_glx_has_extension(display, screen, "GLX_NV_video_capture");
    GLO_GLX_NV_video_out = glo_glx_has_extension(display, screen, "GLX_NV_video_out");
    GLO_GLX_OML_swap_method = glo_glx_has_extension(display, screen, "GLX_OML_swap_method");
    GLO_GLX_OML_sync_control = glo_glx_has_extension(display, screen, "GLX_OML_sync_control");
    GLO_GLX_SGIS_blended_overlay = glo_glx_has_extension(display, screen, "GLX_SGIS_blended_overlay");
    GLO_GLX_SGIS_multisample = glo_glx_has_extension(display, screen, "GLX_SGIS_multisample");
    GLO_GLX_SGIS_shared_multisample = glo_glx_has_extension(display, screen, "GLX_SGIS_shared_multisample");
    GLO_GLX_SGIX_fbconfig = glo_glx_has_extension(display, screen, "GLX_SGIX_fbconfig");
    GLO_GLX_SGIX_hyperpipe = glo_glx_has_extension(display, screen, "GLX_SGIX_hyperpipe");
    GLO_GLX_SGIX_pbuffer = glo_glx_has_extension(display, screen, "GLX_SGIX_pbuffer");
    GLO_GLX_SGIX_swap_barrier = glo_glx_has_extension(display, screen, "GLX_SGIX_swap_barrier");
    GLO_GLX_SGIX_swap_group = glo_glx_has_extension(display, screen, "GLX_SGIX_swap_group");
    GLO_GLX_SGIX_video_resize = glo_glx_has_extension(display, screen, "GLX_SGIX_video_resize");
    GLO_GLX_SGIX_visual_select_group = glo_glx_has_extension(display, screen, "GLX_SGIX_visual_select_group");
    GLO_GLX_SGI_cushion = glo_glx_has_extension(display, screen, "GLX_SGI_cushion");
    GLO_GLX_SGI_make_current_read = glo_glx_has_extension(display, screen, "GLX_SGI_make_current_read");
    GLO_GLX_SGI_swap_control = glo_glx_has_extension(display, screen, "GLX_SGI_swap_control");
    GLO_GLX_SGI_video_sync = glo_glx_has_extension(display, screen, "GLX_SGI_video_sync");
    GLO_GLX_SUN_get_transparent_index = glo_glx_has_extension(display, screen, "GLX_SUN_get_transparent_index");
    return 1;
}

static int glo_glx_find_core_glx(Display **display, int *screen) {
    int major = 0, minor = 0;
    if(*display == NULL) {
#ifdef GLO_GLX_NO_X11
        GLO_UNUSED(screen);
        return 0;
#else
        *display = XOpenDisplay(0);
        if (*display == NULL) {
            return 0;
        }
        *screen = XScreenNumberOfScreen(XDefaultScreenOfDisplay(*display));
#endif
    }
    glXQueryVersion(*display, &major, &minor);
    GLO_GLX_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLO_GLX_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLO_GLX_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLO_GLX_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    GLO_GLX_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    return GLO_MAKE_VERSION(major, minor);
}

int gloLoadGLXUserPtr(Display *display, int screen, GLOuserptrloadfunc load, void *userptr) {
    int version;
    glXQueryVersion = (PFNGLXQUERYVERSIONPROC) load(userptr, "glXQueryVersion");
    if(glXQueryVersion == NULL) return 0;
    version = glo_glx_find_core_glx(&display, &screen);

    glo_glx_load_GLX_VERSION_1_0(load, userptr);
    glo_glx_load_GLX_VERSION_1_1(load, userptr);
    glo_glx_load_GLX_VERSION_1_2(load, userptr);
    glo_glx_load_GLX_VERSION_1_3(load, userptr);
    glo_glx_load_GLX_VERSION_1_4(load, userptr);

    if (!glo_glx_find_extensions(display, screen)) return 0;
    glo_glx_load_GLX_AMD_gpu_association(load, userptr);
    glo_glx_load_GLX_ARB_create_context(load, userptr);
    glo_glx_load_GLX_ARB_get_proc_address(load, userptr);
    glo_glx_load_GLX_EXT_import_context(load, userptr);
    glo_glx_load_GLX_EXT_swap_control(load, userptr);
    glo_glx_load_GLX_EXT_texture_from_pixmap(load, userptr);
    glo_glx_load_GLX_MESA_agp_offset(load, userptr);
    glo_glx_load_GLX_MESA_copy_sub_buffer(load, userptr);
    glo_glx_load_GLX_MESA_pixmap_colormap(load, userptr);
    glo_glx_load_GLX_MESA_query_renderer(load, userptr);
    glo_glx_load_GLX_MESA_release_buffers(load, userptr);
    glo_glx_load_GLX_MESA_set_3dfx_mode(load, userptr);
    glo_glx_load_GLX_MESA_swap_control(load, userptr);
    glo_glx_load_GLX_NV_copy_buffer(load, userptr);
    glo_glx_load_GLX_NV_copy_image(load, userptr);
    glo_glx_load_GLX_NV_delay_before_swap(load, userptr);
    glo_glx_load_GLX_NV_present_video(load, userptr);
    glo_glx_load_GLX_NV_swap_group(load, userptr);
    glo_glx_load_GLX_NV_video_capture(load, userptr);
    glo_glx_load_GLX_NV_video_out(load, userptr);
    glo_glx_load_GLX_OML_sync_control(load, userptr);
    glo_glx_load_GLX_SGIX_fbconfig(load, userptr);
    glo_glx_load_GLX_SGIX_hyperpipe(load, userptr);
    glo_glx_load_GLX_SGIX_pbuffer(load, userptr);
    glo_glx_load_GLX_SGIX_swap_barrier(load, userptr);
    glo_glx_load_GLX_SGIX_swap_group(load, userptr);
    glo_glx_load_GLX_SGIX_video_resize(load, userptr);
    glo_glx_load_GLX_SGI_cushion(load, userptr);
    glo_glx_load_GLX_SGI_make_current_read(load, userptr);
    glo_glx_load_GLX_SGI_swap_control(load, userptr);
    glo_glx_load_GLX_SGI_video_sync(load, userptr);
    glo_glx_load_GLX_SUN_get_transparent_index(load, userptr);


    return version;
}

int gloLoadGLX(Display *display, int screen, GLOloadfunc load) {
    return gloLoadGLXUserPtr(display, screen, glo_glx_get_proc_from_userptr, GLO_GNUC_EXTENSION (void*) load);
}



#ifdef GLO_GLX

#ifndef GLO_LOADER_LIBRARY_C_
#define GLO_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLO_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif


static void* glo_get_dlopen_handle(const char *lib_names[], int length) {
    void *handle = NULL;
    int i;

    for (i = 0; i < length; ++i) {
#if GLO_PLATFORM_WIN32
  #if GLO_PLATFORM_UWP
        size_t buffer_size = (strlen(lib_names[i]) + 1) * sizeof(WCHAR);
        LPWSTR buffer = (LPWSTR) malloc(buffer_size);
        if (buffer != NULL) {
            int ret = MultiByteToWideChar(CP_ACP, 0, lib_names[i], -1, buffer, buffer_size);
            if (ret != 0) {
                handle = (void*) LoadPackagedLibrary(buffer, 0);
            }
            free((void*) buffer);
        }
  #else
        handle = (void*) LoadLibraryA(lib_names[i]);
  #endif
#else
        handle = dlopen(lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
        if (handle != NULL) {
            return handle;
        }
    }

    return NULL;
}

static void glo_close_dlopen_handle(void* handle) {
    if (handle != NULL) {
#if GLO_PLATFORM_WIN32
        FreeLibrary((HMODULE) handle);
#else
        dlclose(handle);
#endif
    }
}

static GLOapiproc glo_dlsym_handle(void* handle, const char *name) {
    if (handle == NULL) {
        return NULL;
    }

#if GLO_PLATFORM_WIN32
    return (GLOapiproc) GetProcAddress((HMODULE) handle, name);
#else
    return GLO_GNUC_EXTENSION (GLOapiproc) dlsym(handle, name);
#endif
}

#endif /* GLO_LOADER_LIBRARY_C_ */

typedef void* (GLO_API_PTR *GLOglxprocaddrfunc)(const char*);

static GLOapiproc glo_glx_get_proc(void *userptr, const char *name) {
    return GLO_GNUC_EXTENSION ((GLOapiproc (*)(const char *name)) userptr)(name);
}

static void* _glx_handle;

static void* glo_glx_dlopen_handle(void) {
    static const char *NAMES[] = {
#if defined __CYGWIN__
        "libGL-1.so",
#endif
        "libGL.so.1",
        "libGL.so"
    };

    if (_glx_handle == NULL) {
        _glx_handle = glo_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _glx_handle;
}

int gloLoaderLoadGLX(Display *display, int screen) {
    int version = 0;
    void *handle = NULL;
    int did_load = 0;
    GLOglxprocaddrfunc loader;

    did_load = _glx_handle == NULL;
    handle = glo_glx_dlopen_handle();
    if (handle != NULL) {
        loader = (GLOglxprocaddrfunc) glo_dlsym_handle(handle, "glXGetProcAddressARB");
        if (loader != NULL) {
            version = gloLoadGLXUserPtr(display, screen, glo_glx_get_proc, GLO_GNUC_EXTENSION (void*) loader);
        }

        if (!version && did_load) {
            gloLoaderUnloadGLX();
        }
    }

    return version;
}


void gloLoaderUnloadGLX() {
    if (_glx_handle != NULL) {
        glo_close_dlopen_handle(_glx_handle);
        _glx_handle = NULL;
    }
}

#endif /* GLO_GLX */

#ifdef __cplusplus
}
#endif

#endif
