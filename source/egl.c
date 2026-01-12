/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glo/egl.h>

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



int GLO_EGL_VERSION_1_0 = 0;
int GLO_EGL_VERSION_1_1 = 0;
int GLO_EGL_VERSION_1_2 = 0;
int GLO_EGL_VERSION_1_3 = 0;
int GLO_EGL_VERSION_1_4 = 0;
int GLO_EGL_VERSION_1_5 = 0;
int GLO_EGL_ANDROID_GLES_layers = 0;
int GLO_EGL_ANDROID_blob_cache = 0;
int GLO_EGL_ANDROID_create_native_client_buffer = 0;
int GLO_EGL_ANDROID_framebuffer_target = 0;
int GLO_EGL_ANDROID_front_buffer_auto_refresh = 0;
int GLO_EGL_ANDROID_get_frame_timestamps = 0;
int GLO_EGL_ANDROID_get_native_client_buffer = 0;
int GLO_EGL_ANDROID_image_native_buffer = 0;
int GLO_EGL_ANDROID_native_fence_sync = 0;
int GLO_EGL_ANDROID_presentation_time = 0;
int GLO_EGL_ANDROID_recordable = 0;
int GLO_EGL_ANDROID_telemetry_hint = 0;
int GLO_EGL_ANGLE_d3d_share_handle_client_buffer = 0;
int GLO_EGL_ANGLE_device_d3d = 0;
int GLO_EGL_ANGLE_query_surface_pointer = 0;
int GLO_EGL_ANGLE_surface_d3d_texture_2d_share_handle = 0;
int GLO_EGL_ANGLE_sync_control_rate = 0;
int GLO_EGL_ANGLE_window_fixed_size = 0;
int GLO_EGL_ARM_image_format = 0;
int GLO_EGL_ARM_implicit_external_sync = 0;
int GLO_EGL_ARM_pixmap_multisample_discard = 0;
int GLO_EGL_EXT_bind_to_front = 0;
int GLO_EGL_EXT_buffer_age = 0;
int GLO_EGL_EXT_client_extensions = 0;
int GLO_EGL_EXT_client_sync = 0;
int GLO_EGL_EXT_compositor = 0;
int GLO_EGL_EXT_config_select_group = 0;
int GLO_EGL_EXT_create_context_robustness = 0;
int GLO_EGL_EXT_device_base = 0;
int GLO_EGL_EXT_device_drm = 0;
int GLO_EGL_EXT_device_drm_render_node = 0;
int GLO_EGL_EXT_device_enumeration = 0;
int GLO_EGL_EXT_device_openwf = 0;
int GLO_EGL_EXT_device_persistent_id = 0;
int GLO_EGL_EXT_device_query = 0;
int GLO_EGL_EXT_device_query_name = 0;
int GLO_EGL_EXT_display_alloc = 0;
int GLO_EGL_EXT_explicit_device = 0;
int GLO_EGL_EXT_gl_colorspace_bt2020_hlg = 0;
int GLO_EGL_EXT_gl_colorspace_bt2020_linear = 0;
int GLO_EGL_EXT_gl_colorspace_bt2020_pq = 0;
int GLO_EGL_EXT_gl_colorspace_display_p3 = 0;
int GLO_EGL_EXT_gl_colorspace_display_p3_linear = 0;
int GLO_EGL_EXT_gl_colorspace_display_p3_passthrough = 0;
int GLO_EGL_EXT_gl_colorspace_scrgb = 0;
int GLO_EGL_EXT_gl_colorspace_scrgb_linear = 0;
int GLO_EGL_EXT_image_dma_buf_import = 0;
int GLO_EGL_EXT_image_dma_buf_import_modifiers = 0;
int GLO_EGL_EXT_image_gl_colorspace = 0;
int GLO_EGL_EXT_image_implicit_sync_control = 0;
int GLO_EGL_EXT_multiview_window = 0;
int GLO_EGL_EXT_output_base = 0;
int GLO_EGL_EXT_output_drm = 0;
int GLO_EGL_EXT_output_openwf = 0;
int GLO_EGL_EXT_pixel_format_float = 0;
int GLO_EGL_EXT_platform_base = 0;
int GLO_EGL_EXT_platform_device = 0;
int GLO_EGL_EXT_platform_wayland = 0;
int GLO_EGL_EXT_platform_x11 = 0;
int GLO_EGL_EXT_platform_xcb = 0;
int GLO_EGL_EXT_present_opaque = 0;
int GLO_EGL_EXT_protected_content = 0;
int GLO_EGL_EXT_protected_surface = 0;
int GLO_EGL_EXT_query_reset_notification_strategy = 0;
int GLO_EGL_EXT_stream_consumer_egloutput = 0;
int GLO_EGL_EXT_surface_CTA861_3_metadata = 0;
int GLO_EGL_EXT_surface_SMPTE2086_metadata = 0;
int GLO_EGL_EXT_surface_compression = 0;
int GLO_EGL_EXT_swap_buffers_with_damage = 0;
int GLO_EGL_EXT_sync_reuse = 0;
int GLO_EGL_EXT_yuv_surface = 0;
int GLO_EGL_HI_clientpixmap = 0;
int GLO_EGL_HI_colorformats = 0;
int GLO_EGL_IMG_context_priority = 0;
int GLO_EGL_IMG_image_plane_attribs = 0;
int GLO_EGL_KHR_cl_event = 0;
int GLO_EGL_KHR_cl_event2 = 0;
int GLO_EGL_KHR_client_get_all_proc_addresses = 0;
int GLO_EGL_KHR_config_attribs = 0;
int GLO_EGL_KHR_context_flush_control = 0;
int GLO_EGL_KHR_create_context = 0;
int GLO_EGL_KHR_create_context_no_error = 0;
int GLO_EGL_KHR_debug = 0;
int GLO_EGL_KHR_display_reference = 0;
int GLO_EGL_KHR_fence_sync = 0;
int GLO_EGL_KHR_get_all_proc_addresses = 0;
int GLO_EGL_KHR_gl_colorspace = 0;
int GLO_EGL_KHR_gl_renderbuffer_image = 0;
int GLO_EGL_KHR_gl_texture_2D_image = 0;
int GLO_EGL_KHR_gl_texture_3D_image = 0;
int GLO_EGL_KHR_gl_texture_cubemap_image = 0;
int GLO_EGL_KHR_image = 0;
int GLO_EGL_KHR_image_base = 0;
int GLO_EGL_KHR_image_pixmap = 0;
int GLO_EGL_KHR_lock_surface = 0;
int GLO_EGL_KHR_lock_surface2 = 0;
int GLO_EGL_KHR_lock_surface3 = 0;
int GLO_EGL_KHR_mutable_render_buffer = 0;
int GLO_EGL_KHR_no_config_context = 0;
int GLO_EGL_KHR_partial_update = 0;
int GLO_EGL_KHR_platform_android = 0;
int GLO_EGL_KHR_platform_gbm = 0;
int GLO_EGL_KHR_platform_wayland = 0;
int GLO_EGL_KHR_platform_x11 = 0;
int GLO_EGL_KHR_reusable_sync = 0;
int GLO_EGL_KHR_stream = 0;
int GLO_EGL_KHR_stream_attrib = 0;
int GLO_EGL_KHR_stream_consumer_gltexture = 0;
int GLO_EGL_KHR_stream_cross_process_fd = 0;
int GLO_EGL_KHR_stream_fifo = 0;
int GLO_EGL_KHR_stream_producer_aldatalocator = 0;
int GLO_EGL_KHR_stream_producer_eglsurface = 0;
int GLO_EGL_KHR_surfaceless_context = 0;
int GLO_EGL_KHR_swap_buffers_with_damage = 0;
int GLO_EGL_KHR_vg_parent_image = 0;
int GLO_EGL_KHR_wait_sync = 0;
int GLO_EGL_MESA_drm_image = 0;
int GLO_EGL_MESA_image_dma_buf_export = 0;
int GLO_EGL_MESA_platform_gbm = 0;
int GLO_EGL_MESA_platform_surfaceless = 0;
int GLO_EGL_MESA_query_driver = 0;
int GLO_EGL_NOK_swap_region = 0;
int GLO_EGL_NOK_swap_region2 = 0;
int GLO_EGL_NOK_texture_from_pixmap = 0;
int GLO_EGL_NV_3dvision_surface = 0;
int GLO_EGL_NV_context_priority_realtime = 0;
int GLO_EGL_NV_coverage_sample = 0;
int GLO_EGL_NV_coverage_sample_resolve = 0;
int GLO_EGL_NV_cuda_event = 0;
int GLO_EGL_NV_depth_nonlinear = 0;
int GLO_EGL_NV_device_cuda = 0;
int GLO_EGL_NV_native_query = 0;
int GLO_EGL_NV_post_convert_rounding = 0;
int GLO_EGL_NV_post_sub_buffer = 0;
int GLO_EGL_NV_quadruple_buffer = 0;
int GLO_EGL_NV_robustness_video_memory_purge = 0;
int GLO_EGL_NV_stream_consumer_eglimage = 0;
int GLO_EGL_NV_stream_consumer_eglimage_use_scanout_attrib = 0;
int GLO_EGL_NV_stream_consumer_gltexture_yuv = 0;
int GLO_EGL_NV_stream_cross_display = 0;
int GLO_EGL_NV_stream_cross_object = 0;
int GLO_EGL_NV_stream_cross_partition = 0;
int GLO_EGL_NV_stream_cross_process = 0;
int GLO_EGL_NV_stream_cross_system = 0;
int GLO_EGL_NV_stream_dma = 0;
int GLO_EGL_NV_stream_fifo_next = 0;
int GLO_EGL_NV_stream_fifo_synchronous = 0;
int GLO_EGL_NV_stream_flush = 0;
int GLO_EGL_NV_stream_frame_limits = 0;
int GLO_EGL_NV_stream_metadata = 0;
int GLO_EGL_NV_stream_origin = 0;
int GLO_EGL_NV_stream_remote = 0;
int GLO_EGL_NV_stream_reset = 0;
int GLO_EGL_NV_stream_socket = 0;
int GLO_EGL_NV_stream_socket_inet = 0;
int GLO_EGL_NV_stream_socket_unix = 0;
int GLO_EGL_NV_stream_sync = 0;
int GLO_EGL_NV_sync = 0;
int GLO_EGL_NV_system_time = 0;
int GLO_EGL_NV_triple_buffer = 0;
int GLO_EGL_QNX_image_native_buffer = 0;
int GLO_EGL_QNX_platform_screen = 0;
int GLO_EGL_TIZEN_image_native_buffer = 0;
int GLO_EGL_TIZEN_image_native_surface = 0;
int GLO_EGL_WL_bind_wayland_display = 0;
int GLO_EGL_WL_create_wayland_buffer_from_image = 0;



PFNEGLBINDAPIPROC glo_eglBindAPI = NULL;
PFNEGLBINDTEXIMAGEPROC glo_eglBindTexImage = NULL;
PFNEGLBINDWAYLANDDISPLAYWLPROC glo_eglBindWaylandDisplayWL = NULL;
PFNEGLCHOOSECONFIGPROC glo_eglChooseConfig = NULL;
PFNEGLCLIENTSIGNALSYNCEXTPROC glo_eglClientSignalSyncEXT = NULL;
PFNEGLCLIENTWAITSYNCPROC glo_eglClientWaitSync = NULL;
PFNEGLCLIENTWAITSYNCKHRPROC glo_eglClientWaitSyncKHR = NULL;
PFNEGLCLIENTWAITSYNCNVPROC glo_eglClientWaitSyncNV = NULL;
PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC glo_eglCompositorBindTexWindowEXT = NULL;
PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC glo_eglCompositorSetContextAttributesEXT = NULL;
PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC glo_eglCompositorSetContextListEXT = NULL;
PFNEGLCOMPOSITORSETSIZEEXTPROC glo_eglCompositorSetSizeEXT = NULL;
PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC glo_eglCompositorSetWindowAttributesEXT = NULL;
PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC glo_eglCompositorSetWindowListEXT = NULL;
PFNEGLCOMPOSITORSWAPPOLICYEXTPROC glo_eglCompositorSwapPolicyEXT = NULL;
PFNEGLCOPYBUFFERSPROC glo_eglCopyBuffers = NULL;
PFNEGLCREATECONTEXTPROC glo_eglCreateContext = NULL;
PFNEGLCREATEDRMIMAGEMESAPROC glo_eglCreateDRMImageMESA = NULL;
PFNEGLCREATEFENCESYNCNVPROC glo_eglCreateFenceSyncNV = NULL;
PFNEGLCREATEIMAGEPROC glo_eglCreateImage = NULL;
PFNEGLCREATEIMAGEKHRPROC glo_eglCreateImageKHR = NULL;
PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC glo_eglCreateNativeClientBufferANDROID = NULL;
PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC glo_eglCreatePbufferFromClientBuffer = NULL;
PFNEGLCREATEPBUFFERSURFACEPROC glo_eglCreatePbufferSurface = NULL;
PFNEGLCREATEPIXMAPSURFACEPROC glo_eglCreatePixmapSurface = NULL;
PFNEGLCREATEPIXMAPSURFACEHIPROC glo_eglCreatePixmapSurfaceHI = NULL;
PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC glo_eglCreatePlatformPixmapSurface = NULL;
PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC glo_eglCreatePlatformPixmapSurfaceEXT = NULL;
PFNEGLCREATEPLATFORMWINDOWSURFACEPROC glo_eglCreatePlatformWindowSurface = NULL;
PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC glo_eglCreatePlatformWindowSurfaceEXT = NULL;
PFNEGLCREATESTREAMATTRIBKHRPROC glo_eglCreateStreamAttribKHR = NULL;
PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC glo_eglCreateStreamFromFileDescriptorKHR = NULL;
PFNEGLCREATESTREAMKHRPROC glo_eglCreateStreamKHR = NULL;
PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC glo_eglCreateStreamProducerSurfaceKHR = NULL;
PFNEGLCREATESTREAMSYNCNVPROC glo_eglCreateStreamSyncNV = NULL;
PFNEGLCREATESYNCPROC glo_eglCreateSync = NULL;
PFNEGLCREATESYNC64KHRPROC glo_eglCreateSync64KHR = NULL;
PFNEGLCREATESYNCKHRPROC glo_eglCreateSyncKHR = NULL;
PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC glo_eglCreateWaylandBufferFromImageWL = NULL;
PFNEGLCREATEWINDOWSURFACEPROC glo_eglCreateWindowSurface = NULL;
PFNEGLDEBUGMESSAGECONTROLKHRPROC glo_eglDebugMessageControlKHR = NULL;
PFNEGLDESTROYCONTEXTPROC glo_eglDestroyContext = NULL;
PFNEGLDESTROYDISPLAYEXTPROC glo_eglDestroyDisplayEXT = NULL;
PFNEGLDESTROYIMAGEPROC glo_eglDestroyImage = NULL;
PFNEGLDESTROYIMAGEKHRPROC glo_eglDestroyImageKHR = NULL;
PFNEGLDESTROYSTREAMKHRPROC glo_eglDestroyStreamKHR = NULL;
PFNEGLDESTROYSURFACEPROC glo_eglDestroySurface = NULL;
PFNEGLDESTROYSYNCPROC glo_eglDestroySync = NULL;
PFNEGLDESTROYSYNCKHRPROC glo_eglDestroySyncKHR = NULL;
PFNEGLDESTROYSYNCNVPROC glo_eglDestroySyncNV = NULL;
PFNEGLDUPNATIVEFENCEFDANDROIDPROC glo_eglDupNativeFenceFDANDROID = NULL;
PFNEGLEXPORTDMABUFIMAGEMESAPROC glo_eglExportDMABUFImageMESA = NULL;
PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC glo_eglExportDMABUFImageQueryMESA = NULL;
PFNEGLEXPORTDRMIMAGEMESAPROC glo_eglExportDRMImageMESA = NULL;
PFNEGLFENCENVPROC glo_eglFenceNV = NULL;
PFNEGLGETCOMPOSITORTIMINGANDROIDPROC glo_eglGetCompositorTimingANDROID = NULL;
PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC glo_eglGetCompositorTimingSupportedANDROID = NULL;
PFNEGLGETCONFIGATTRIBPROC glo_eglGetConfigAttrib = NULL;
PFNEGLGETCONFIGSPROC glo_eglGetConfigs = NULL;
PFNEGLGETCURRENTCONTEXTPROC glo_eglGetCurrentContext = NULL;
PFNEGLGETCURRENTDISPLAYPROC glo_eglGetCurrentDisplay = NULL;
PFNEGLGETCURRENTSURFACEPROC glo_eglGetCurrentSurface = NULL;
PFNEGLGETDISPLAYPROC glo_eglGetDisplay = NULL;
PFNEGLGETDISPLAYDRIVERCONFIGPROC glo_eglGetDisplayDriverConfig = NULL;
PFNEGLGETDISPLAYDRIVERNAMEPROC glo_eglGetDisplayDriverName = NULL;
PFNEGLGETERRORPROC glo_eglGetError = NULL;
PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC glo_eglGetFrameTimestampSupportedANDROID = NULL;
PFNEGLGETFRAMETIMESTAMPSANDROIDPROC glo_eglGetFrameTimestampsANDROID = NULL;
PFNEGLGETMSCRATEANGLEPROC glo_eglGetMscRateANGLE = NULL;
PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC glo_eglGetNativeClientBufferANDROID = NULL;
PFNEGLGETNEXTFRAMEIDANDROIDPROC glo_eglGetNextFrameIdANDROID = NULL;
PFNEGLGETOUTPUTLAYERSEXTPROC glo_eglGetOutputLayersEXT = NULL;
PFNEGLGETOUTPUTPORTSEXTPROC glo_eglGetOutputPortsEXT = NULL;
PFNEGLGETPLATFORMDISPLAYPROC glo_eglGetPlatformDisplay = NULL;
PFNEGLGETPLATFORMDISPLAYEXTPROC glo_eglGetPlatformDisplayEXT = NULL;
PFNEGLGETPROCADDRESSPROC glo_eglGetProcAddress = NULL;
PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC glo_eglGetStreamFileDescriptorKHR = NULL;
PFNEGLGETSYNCATTRIBPROC glo_eglGetSyncAttrib = NULL;
PFNEGLGETSYNCATTRIBKHRPROC glo_eglGetSyncAttribKHR = NULL;
PFNEGLGETSYNCATTRIBNVPROC glo_eglGetSyncAttribNV = NULL;
PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC glo_eglGetSystemTimeFrequencyNV = NULL;
PFNEGLGETSYSTEMTIMENVPROC glo_eglGetSystemTimeNV = NULL;
PFNEGLINITIALIZEPROC glo_eglInitialize = NULL;
PFNEGLLABELOBJECTKHRPROC glo_eglLabelObjectKHR = NULL;
PFNEGLLOCKSURFACEKHRPROC glo_eglLockSurfaceKHR = NULL;
PFNEGLMAKECURRENTPROC glo_eglMakeCurrent = NULL;
PFNEGLOUTPUTLAYERATTRIBEXTPROC glo_eglOutputLayerAttribEXT = NULL;
PFNEGLOUTPUTPORTATTRIBEXTPROC glo_eglOutputPortAttribEXT = NULL;
PFNEGLPOSTSUBBUFFERNVPROC glo_eglPostSubBufferNV = NULL;
PFNEGLPRESENTATIONTIMEANDROIDPROC glo_eglPresentationTimeANDROID = NULL;
PFNEGLQUERYAPIPROC glo_eglQueryAPI = NULL;
PFNEGLQUERYCONTEXTPROC glo_eglQueryContext = NULL;
PFNEGLQUERYDEBUGKHRPROC glo_eglQueryDebugKHR = NULL;
PFNEGLQUERYDEVICEATTRIBEXTPROC glo_eglQueryDeviceAttribEXT = NULL;
PFNEGLQUERYDEVICEBINARYEXTPROC glo_eglQueryDeviceBinaryEXT = NULL;
PFNEGLQUERYDEVICESTRINGEXTPROC glo_eglQueryDeviceStringEXT = NULL;
PFNEGLQUERYDEVICESEXTPROC glo_eglQueryDevicesEXT = NULL;
PFNEGLQUERYDISPLAYATTRIBEXTPROC glo_eglQueryDisplayAttribEXT = NULL;
PFNEGLQUERYDISPLAYATTRIBKHRPROC glo_eglQueryDisplayAttribKHR = NULL;
PFNEGLQUERYDISPLAYATTRIBNVPROC glo_eglQueryDisplayAttribNV = NULL;
PFNEGLQUERYDMABUFFORMATSEXTPROC glo_eglQueryDmaBufFormatsEXT = NULL;
PFNEGLQUERYDMABUFMODIFIERSEXTPROC glo_eglQueryDmaBufModifiersEXT = NULL;
PFNEGLQUERYNATIVEDISPLAYNVPROC glo_eglQueryNativeDisplayNV = NULL;
PFNEGLQUERYNATIVEPIXMAPNVPROC glo_eglQueryNativePixmapNV = NULL;
PFNEGLQUERYNATIVEWINDOWNVPROC glo_eglQueryNativeWindowNV = NULL;
PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC glo_eglQueryOutputLayerAttribEXT = NULL;
PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC glo_eglQueryOutputLayerStringEXT = NULL;
PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC glo_eglQueryOutputPortAttribEXT = NULL;
PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC glo_eglQueryOutputPortStringEXT = NULL;
PFNEGLQUERYSTREAMATTRIBKHRPROC glo_eglQueryStreamAttribKHR = NULL;
PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC glo_eglQueryStreamConsumerEventNV = NULL;
PFNEGLQUERYSTREAMKHRPROC glo_eglQueryStreamKHR = NULL;
PFNEGLQUERYSTREAMMETADATANVPROC glo_eglQueryStreamMetadataNV = NULL;
PFNEGLQUERYSTREAMTIMEKHRPROC glo_eglQueryStreamTimeKHR = NULL;
PFNEGLQUERYSTREAMU64KHRPROC glo_eglQueryStreamu64KHR = NULL;
PFNEGLQUERYSTRINGPROC glo_eglQueryString = NULL;
PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC glo_eglQuerySupportedCompressionRatesEXT = NULL;
PFNEGLQUERYSURFACEPROC glo_eglQuerySurface = NULL;
PFNEGLQUERYSURFACE64KHRPROC glo_eglQuerySurface64KHR = NULL;
PFNEGLQUERYSURFACEPOINTERANGLEPROC glo_eglQuerySurfacePointerANGLE = NULL;
PFNEGLQUERYWAYLANDBUFFERWLPROC glo_eglQueryWaylandBufferWL = NULL;
PFNEGLRELEASETEXIMAGEPROC glo_eglReleaseTexImage = NULL;
PFNEGLRELEASETHREADPROC glo_eglReleaseThread = NULL;
PFNEGLRESETSTREAMNVPROC glo_eglResetStreamNV = NULL;
PFNEGLSETBLOBCACHEFUNCSANDROIDPROC glo_eglSetBlobCacheFuncsANDROID = NULL;
PFNEGLSETDAMAGEREGIONKHRPROC glo_eglSetDamageRegionKHR = NULL;
PFNEGLSETSTREAMATTRIBKHRPROC glo_eglSetStreamAttribKHR = NULL;
PFNEGLSETSTREAMMETADATANVPROC glo_eglSetStreamMetadataNV = NULL;
PFNEGLSIGNALSYNCKHRPROC glo_eglSignalSyncKHR = NULL;
PFNEGLSIGNALSYNCNVPROC glo_eglSignalSyncNV = NULL;
PFNEGLSTREAMACQUIREIMAGENVPROC glo_eglStreamAcquireImageNV = NULL;
PFNEGLSTREAMATTRIBKHRPROC glo_eglStreamAttribKHR = NULL;
PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC glo_eglStreamConsumerAcquireAttribKHR = NULL;
PFNEGLSTREAMCONSUMERACQUIREKHRPROC glo_eglStreamConsumerAcquireKHR = NULL;
PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC glo_eglStreamConsumerGLTextureExternalAttribsNV = NULL;
PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC glo_eglStreamConsumerGLTextureExternalKHR = NULL;
PFNEGLSTREAMCONSUMEROUTPUTEXTPROC glo_eglStreamConsumerOutputEXT = NULL;
PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC glo_eglStreamConsumerReleaseAttribKHR = NULL;
PFNEGLSTREAMCONSUMERRELEASEKHRPROC glo_eglStreamConsumerReleaseKHR = NULL;
PFNEGLSTREAMFLUSHNVPROC glo_eglStreamFlushNV = NULL;
PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC glo_eglStreamImageConsumerConnectNV = NULL;
PFNEGLSTREAMRELEASEIMAGENVPROC glo_eglStreamReleaseImageNV = NULL;
PFNEGLSURFACEATTRIBPROC glo_eglSurfaceAttrib = NULL;
PFNEGLSWAPBUFFERSPROC glo_eglSwapBuffers = NULL;
PFNEGLSWAPBUFFERSREGION2NOKPROC glo_eglSwapBuffersRegion2NOK = NULL;
PFNEGLSWAPBUFFERSREGIONNOKPROC glo_eglSwapBuffersRegionNOK = NULL;
PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC glo_eglSwapBuffersWithDamageEXT = NULL;
PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC glo_eglSwapBuffersWithDamageKHR = NULL;
PFNEGLSWAPINTERVALPROC glo_eglSwapInterval = NULL;
PFNEGLTERMINATEPROC glo_eglTerminate = NULL;
PFNEGLUNBINDWAYLANDDISPLAYWLPROC glo_eglUnbindWaylandDisplayWL = NULL;
PFNEGLUNLOCKSURFACEKHRPROC glo_eglUnlockSurfaceKHR = NULL;
PFNEGLUNSIGNALSYNCEXTPROC glo_eglUnsignalSyncEXT = NULL;
PFNEGLWAITCLIENTPROC glo_eglWaitClient = NULL;
PFNEGLWAITGLPROC glo_eglWaitGL = NULL;
PFNEGLWAITNATIVEPROC glo_eglWaitNative = NULL;
PFNEGLWAITSYNCPROC glo_eglWaitSync = NULL;
PFNEGLWAITSYNCKHRPROC glo_eglWaitSyncKHR = NULL;


static void glo_egl_load_EGL_VERSION_1_0( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_VERSION_1_0) return;
    glo_eglChooseConfig = (PFNEGLCHOOSECONFIGPROC) load(userptr, "eglChooseConfig");
    glo_eglCopyBuffers = (PFNEGLCOPYBUFFERSPROC) load(userptr, "eglCopyBuffers");
    glo_eglCreateContext = (PFNEGLCREATECONTEXTPROC) load(userptr, "eglCreateContext");
    glo_eglCreatePbufferSurface = (PFNEGLCREATEPBUFFERSURFACEPROC) load(userptr, "eglCreatePbufferSurface");
    glo_eglCreatePixmapSurface = (PFNEGLCREATEPIXMAPSURFACEPROC) load(userptr, "eglCreatePixmapSurface");
    glo_eglCreateWindowSurface = (PFNEGLCREATEWINDOWSURFACEPROC) load(userptr, "eglCreateWindowSurface");
    glo_eglDestroyContext = (PFNEGLDESTROYCONTEXTPROC) load(userptr, "eglDestroyContext");
    glo_eglDestroySurface = (PFNEGLDESTROYSURFACEPROC) load(userptr, "eglDestroySurface");
    glo_eglGetConfigAttrib = (PFNEGLGETCONFIGATTRIBPROC) load(userptr, "eglGetConfigAttrib");
    glo_eglGetConfigs = (PFNEGLGETCONFIGSPROC) load(userptr, "eglGetConfigs");
    glo_eglGetCurrentDisplay = (PFNEGLGETCURRENTDISPLAYPROC) load(userptr, "eglGetCurrentDisplay");
    glo_eglGetCurrentSurface = (PFNEGLGETCURRENTSURFACEPROC) load(userptr, "eglGetCurrentSurface");
    glo_eglGetDisplay = (PFNEGLGETDISPLAYPROC) load(userptr, "eglGetDisplay");
    glo_eglGetError = (PFNEGLGETERRORPROC) load(userptr, "eglGetError");
    glo_eglGetProcAddress = (PFNEGLGETPROCADDRESSPROC) load(userptr, "eglGetProcAddress");
    glo_eglInitialize = (PFNEGLINITIALIZEPROC) load(userptr, "eglInitialize");
    glo_eglMakeCurrent = (PFNEGLMAKECURRENTPROC) load(userptr, "eglMakeCurrent");
    glo_eglQueryContext = (PFNEGLQUERYCONTEXTPROC) load(userptr, "eglQueryContext");
    glo_eglQueryString = (PFNEGLQUERYSTRINGPROC) load(userptr, "eglQueryString");
    glo_eglQuerySurface = (PFNEGLQUERYSURFACEPROC) load(userptr, "eglQuerySurface");
    glo_eglSwapBuffers = (PFNEGLSWAPBUFFERSPROC) load(userptr, "eglSwapBuffers");
    glo_eglTerminate = (PFNEGLTERMINATEPROC) load(userptr, "eglTerminate");
    glo_eglWaitGL = (PFNEGLWAITGLPROC) load(userptr, "eglWaitGL");
    glo_eglWaitNative = (PFNEGLWAITNATIVEPROC) load(userptr, "eglWaitNative");
}
static void glo_egl_load_EGL_VERSION_1_1( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_VERSION_1_1) return;
    glo_eglBindTexImage = (PFNEGLBINDTEXIMAGEPROC) load(userptr, "eglBindTexImage");
    glo_eglReleaseTexImage = (PFNEGLRELEASETEXIMAGEPROC) load(userptr, "eglReleaseTexImage");
    glo_eglSurfaceAttrib = (PFNEGLSURFACEATTRIBPROC) load(userptr, "eglSurfaceAttrib");
    glo_eglSwapInterval = (PFNEGLSWAPINTERVALPROC) load(userptr, "eglSwapInterval");
}
static void glo_egl_load_EGL_VERSION_1_2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_VERSION_1_2) return;
    glo_eglBindAPI = (PFNEGLBINDAPIPROC) load(userptr, "eglBindAPI");
    glo_eglCreatePbufferFromClientBuffer = (PFNEGLCREATEPBUFFERFROMCLIENTBUFFERPROC) load(userptr, "eglCreatePbufferFromClientBuffer");
    glo_eglQueryAPI = (PFNEGLQUERYAPIPROC) load(userptr, "eglQueryAPI");
    glo_eglReleaseThread = (PFNEGLRELEASETHREADPROC) load(userptr, "eglReleaseThread");
    glo_eglWaitClient = (PFNEGLWAITCLIENTPROC) load(userptr, "eglWaitClient");
}
static void glo_egl_load_EGL_VERSION_1_4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_VERSION_1_4) return;
    glo_eglGetCurrentContext = (PFNEGLGETCURRENTCONTEXTPROC) load(userptr, "eglGetCurrentContext");
}
static void glo_egl_load_EGL_VERSION_1_5( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_VERSION_1_5) return;
    glo_eglClientWaitSync = (PFNEGLCLIENTWAITSYNCPROC) load(userptr, "eglClientWaitSync");
    glo_eglCreateImage = (PFNEGLCREATEIMAGEPROC) load(userptr, "eglCreateImage");
    glo_eglCreatePlatformPixmapSurface = (PFNEGLCREATEPLATFORMPIXMAPSURFACEPROC) load(userptr, "eglCreatePlatformPixmapSurface");
    glo_eglCreatePlatformWindowSurface = (PFNEGLCREATEPLATFORMWINDOWSURFACEPROC) load(userptr, "eglCreatePlatformWindowSurface");
    glo_eglCreateSync = (PFNEGLCREATESYNCPROC) load(userptr, "eglCreateSync");
    glo_eglDestroyImage = (PFNEGLDESTROYIMAGEPROC) load(userptr, "eglDestroyImage");
    glo_eglDestroySync = (PFNEGLDESTROYSYNCPROC) load(userptr, "eglDestroySync");
    glo_eglGetPlatformDisplay = (PFNEGLGETPLATFORMDISPLAYPROC) load(userptr, "eglGetPlatformDisplay");
    glo_eglGetSyncAttrib = (PFNEGLGETSYNCATTRIBPROC) load(userptr, "eglGetSyncAttrib");
    glo_eglWaitSync = (PFNEGLWAITSYNCPROC) load(userptr, "eglWaitSync");
}
static void glo_egl_load_EGL_ANDROID_blob_cache( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANDROID_blob_cache) return;
    glo_eglSetBlobCacheFuncsANDROID = (PFNEGLSETBLOBCACHEFUNCSANDROIDPROC) load(userptr, "eglSetBlobCacheFuncsANDROID");
}
static void glo_egl_load_EGL_ANDROID_create_native_client_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANDROID_create_native_client_buffer) return;
    glo_eglCreateNativeClientBufferANDROID = (PFNEGLCREATENATIVECLIENTBUFFERANDROIDPROC) load(userptr, "eglCreateNativeClientBufferANDROID");
}
static void glo_egl_load_EGL_ANDROID_get_frame_timestamps( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANDROID_get_frame_timestamps) return;
    glo_eglGetCompositorTimingANDROID = (PFNEGLGETCOMPOSITORTIMINGANDROIDPROC) load(userptr, "eglGetCompositorTimingANDROID");
    glo_eglGetCompositorTimingSupportedANDROID = (PFNEGLGETCOMPOSITORTIMINGSUPPORTEDANDROIDPROC) load(userptr, "eglGetCompositorTimingSupportedANDROID");
    glo_eglGetFrameTimestampSupportedANDROID = (PFNEGLGETFRAMETIMESTAMPSUPPORTEDANDROIDPROC) load(userptr, "eglGetFrameTimestampSupportedANDROID");
    glo_eglGetFrameTimestampsANDROID = (PFNEGLGETFRAMETIMESTAMPSANDROIDPROC) load(userptr, "eglGetFrameTimestampsANDROID");
    glo_eglGetNextFrameIdANDROID = (PFNEGLGETNEXTFRAMEIDANDROIDPROC) load(userptr, "eglGetNextFrameIdANDROID");
}
static void glo_egl_load_EGL_ANDROID_get_native_client_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANDROID_get_native_client_buffer) return;
    glo_eglGetNativeClientBufferANDROID = (PFNEGLGETNATIVECLIENTBUFFERANDROIDPROC) load(userptr, "eglGetNativeClientBufferANDROID");
}
static void glo_egl_load_EGL_ANDROID_native_fence_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANDROID_native_fence_sync) return;
    glo_eglDupNativeFenceFDANDROID = (PFNEGLDUPNATIVEFENCEFDANDROIDPROC) load(userptr, "eglDupNativeFenceFDANDROID");
}
static void glo_egl_load_EGL_ANDROID_presentation_time( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANDROID_presentation_time) return;
    glo_eglPresentationTimeANDROID = (PFNEGLPRESENTATIONTIMEANDROIDPROC) load(userptr, "eglPresentationTimeANDROID");
}
static void glo_egl_load_EGL_ANGLE_query_surface_pointer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANGLE_query_surface_pointer) return;
    glo_eglQuerySurfacePointerANGLE = (PFNEGLQUERYSURFACEPOINTERANGLEPROC) load(userptr, "eglQuerySurfacePointerANGLE");
}
static void glo_egl_load_EGL_ANGLE_sync_control_rate( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_ANGLE_sync_control_rate) return;
    glo_eglGetMscRateANGLE = (PFNEGLGETMSCRATEANGLEPROC) load(userptr, "eglGetMscRateANGLE");
}
static void glo_egl_load_EGL_EXT_client_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_client_sync) return;
    glo_eglClientSignalSyncEXT = (PFNEGLCLIENTSIGNALSYNCEXTPROC) load(userptr, "eglClientSignalSyncEXT");
}
static void glo_egl_load_EGL_EXT_compositor( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_compositor) return;
    glo_eglCompositorBindTexWindowEXT = (PFNEGLCOMPOSITORBINDTEXWINDOWEXTPROC) load(userptr, "eglCompositorBindTexWindowEXT");
    glo_eglCompositorSetContextAttributesEXT = (PFNEGLCOMPOSITORSETCONTEXTATTRIBUTESEXTPROC) load(userptr, "eglCompositorSetContextAttributesEXT");
    glo_eglCompositorSetContextListEXT = (PFNEGLCOMPOSITORSETCONTEXTLISTEXTPROC) load(userptr, "eglCompositorSetContextListEXT");
    glo_eglCompositorSetSizeEXT = (PFNEGLCOMPOSITORSETSIZEEXTPROC) load(userptr, "eglCompositorSetSizeEXT");
    glo_eglCompositorSetWindowAttributesEXT = (PFNEGLCOMPOSITORSETWINDOWATTRIBUTESEXTPROC) load(userptr, "eglCompositorSetWindowAttributesEXT");
    glo_eglCompositorSetWindowListEXT = (PFNEGLCOMPOSITORSETWINDOWLISTEXTPROC) load(userptr, "eglCompositorSetWindowListEXT");
    glo_eglCompositorSwapPolicyEXT = (PFNEGLCOMPOSITORSWAPPOLICYEXTPROC) load(userptr, "eglCompositorSwapPolicyEXT");
}
static void glo_egl_load_EGL_EXT_device_base( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_device_base) return;
    glo_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) load(userptr, "eglQueryDeviceAttribEXT");
    glo_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) load(userptr, "eglQueryDeviceStringEXT");
    glo_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) load(userptr, "eglQueryDevicesEXT");
    glo_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) load(userptr, "eglQueryDisplayAttribEXT");
}
static void glo_egl_load_EGL_EXT_device_enumeration( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_device_enumeration) return;
    glo_eglQueryDevicesEXT = (PFNEGLQUERYDEVICESEXTPROC) load(userptr, "eglQueryDevicesEXT");
}
static void glo_egl_load_EGL_EXT_device_persistent_id( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_device_persistent_id) return;
    glo_eglQueryDeviceBinaryEXT = (PFNEGLQUERYDEVICEBINARYEXTPROC) load(userptr, "eglQueryDeviceBinaryEXT");
}
static void glo_egl_load_EGL_EXT_device_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_device_query) return;
    glo_eglQueryDeviceAttribEXT = (PFNEGLQUERYDEVICEATTRIBEXTPROC) load(userptr, "eglQueryDeviceAttribEXT");
    glo_eglQueryDeviceStringEXT = (PFNEGLQUERYDEVICESTRINGEXTPROC) load(userptr, "eglQueryDeviceStringEXT");
    glo_eglQueryDisplayAttribEXT = (PFNEGLQUERYDISPLAYATTRIBEXTPROC) load(userptr, "eglQueryDisplayAttribEXT");
}
static void glo_egl_load_EGL_EXT_display_alloc( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_display_alloc) return;
    glo_eglDestroyDisplayEXT = (PFNEGLDESTROYDISPLAYEXTPROC) load(userptr, "eglDestroyDisplayEXT");
}
static void glo_egl_load_EGL_EXT_image_dma_buf_import_modifiers( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_image_dma_buf_import_modifiers) return;
    glo_eglQueryDmaBufFormatsEXT = (PFNEGLQUERYDMABUFFORMATSEXTPROC) load(userptr, "eglQueryDmaBufFormatsEXT");
    glo_eglQueryDmaBufModifiersEXT = (PFNEGLQUERYDMABUFMODIFIERSEXTPROC) load(userptr, "eglQueryDmaBufModifiersEXT");
}
static void glo_egl_load_EGL_EXT_output_base( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_output_base) return;
    glo_eglGetOutputLayersEXT = (PFNEGLGETOUTPUTLAYERSEXTPROC) load(userptr, "eglGetOutputLayersEXT");
    glo_eglGetOutputPortsEXT = (PFNEGLGETOUTPUTPORTSEXTPROC) load(userptr, "eglGetOutputPortsEXT");
    glo_eglOutputLayerAttribEXT = (PFNEGLOUTPUTLAYERATTRIBEXTPROC) load(userptr, "eglOutputLayerAttribEXT");
    glo_eglOutputPortAttribEXT = (PFNEGLOUTPUTPORTATTRIBEXTPROC) load(userptr, "eglOutputPortAttribEXT");
    glo_eglQueryOutputLayerAttribEXT = (PFNEGLQUERYOUTPUTLAYERATTRIBEXTPROC) load(userptr, "eglQueryOutputLayerAttribEXT");
    glo_eglQueryOutputLayerStringEXT = (PFNEGLQUERYOUTPUTLAYERSTRINGEXTPROC) load(userptr, "eglQueryOutputLayerStringEXT");
    glo_eglQueryOutputPortAttribEXT = (PFNEGLQUERYOUTPUTPORTATTRIBEXTPROC) load(userptr, "eglQueryOutputPortAttribEXT");
    glo_eglQueryOutputPortStringEXT = (PFNEGLQUERYOUTPUTPORTSTRINGEXTPROC) load(userptr, "eglQueryOutputPortStringEXT");
}
static void glo_egl_load_EGL_EXT_platform_base( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_platform_base) return;
    glo_eglCreatePlatformPixmapSurfaceEXT = (PFNEGLCREATEPLATFORMPIXMAPSURFACEEXTPROC) load(userptr, "eglCreatePlatformPixmapSurfaceEXT");
    glo_eglCreatePlatformWindowSurfaceEXT = (PFNEGLCREATEPLATFORMWINDOWSURFACEEXTPROC) load(userptr, "eglCreatePlatformWindowSurfaceEXT");
    glo_eglGetPlatformDisplayEXT = (PFNEGLGETPLATFORMDISPLAYEXTPROC) load(userptr, "eglGetPlatformDisplayEXT");
}
static void glo_egl_load_EGL_EXT_stream_consumer_egloutput( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_stream_consumer_egloutput) return;
    glo_eglStreamConsumerOutputEXT = (PFNEGLSTREAMCONSUMEROUTPUTEXTPROC) load(userptr, "eglStreamConsumerOutputEXT");
}
static void glo_egl_load_EGL_EXT_surface_compression( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_surface_compression) return;
    glo_eglQuerySupportedCompressionRatesEXT = (PFNEGLQUERYSUPPORTEDCOMPRESSIONRATESEXTPROC) load(userptr, "eglQuerySupportedCompressionRatesEXT");
}
static void glo_egl_load_EGL_EXT_swap_buffers_with_damage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_swap_buffers_with_damage) return;
    glo_eglSwapBuffersWithDamageEXT = (PFNEGLSWAPBUFFERSWITHDAMAGEEXTPROC) load(userptr, "eglSwapBuffersWithDamageEXT");
}
static void glo_egl_load_EGL_EXT_sync_reuse( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_EXT_sync_reuse) return;
    glo_eglUnsignalSyncEXT = (PFNEGLUNSIGNALSYNCEXTPROC) load(userptr, "eglUnsignalSyncEXT");
}
static void glo_egl_load_EGL_HI_clientpixmap( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_HI_clientpixmap) return;
    glo_eglCreatePixmapSurfaceHI = (PFNEGLCREATEPIXMAPSURFACEHIPROC) load(userptr, "eglCreatePixmapSurfaceHI");
}
static void glo_egl_load_EGL_KHR_cl_event2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_cl_event2) return;
    glo_eglCreateSync64KHR = (PFNEGLCREATESYNC64KHRPROC) load(userptr, "eglCreateSync64KHR");
}
static void glo_egl_load_EGL_KHR_debug( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_debug) return;
    glo_eglDebugMessageControlKHR = (PFNEGLDEBUGMESSAGECONTROLKHRPROC) load(userptr, "eglDebugMessageControlKHR");
    glo_eglLabelObjectKHR = (PFNEGLLABELOBJECTKHRPROC) load(userptr, "eglLabelObjectKHR");
    glo_eglQueryDebugKHR = (PFNEGLQUERYDEBUGKHRPROC) load(userptr, "eglQueryDebugKHR");
}
static void glo_egl_load_EGL_KHR_display_reference( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_display_reference) return;
    glo_eglQueryDisplayAttribKHR = (PFNEGLQUERYDISPLAYATTRIBKHRPROC) load(userptr, "eglQueryDisplayAttribKHR");
}
static void glo_egl_load_EGL_KHR_fence_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_fence_sync) return;
    glo_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) load(userptr, "eglClientWaitSyncKHR");
    glo_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) load(userptr, "eglCreateSyncKHR");
    glo_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) load(userptr, "eglDestroySyncKHR");
    glo_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) load(userptr, "eglGetSyncAttribKHR");
}
static void glo_egl_load_EGL_KHR_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_image) return;
    glo_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) load(userptr, "eglCreateImageKHR");
    glo_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) load(userptr, "eglDestroyImageKHR");
}
static void glo_egl_load_EGL_KHR_image_base( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_image_base) return;
    glo_eglCreateImageKHR = (PFNEGLCREATEIMAGEKHRPROC) load(userptr, "eglCreateImageKHR");
    glo_eglDestroyImageKHR = (PFNEGLDESTROYIMAGEKHRPROC) load(userptr, "eglDestroyImageKHR");
}
static void glo_egl_load_EGL_KHR_lock_surface( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_lock_surface) return;
    glo_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) load(userptr, "eglLockSurfaceKHR");
    glo_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) load(userptr, "eglUnlockSurfaceKHR");
}
static void glo_egl_load_EGL_KHR_lock_surface3( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_lock_surface3) return;
    glo_eglLockSurfaceKHR = (PFNEGLLOCKSURFACEKHRPROC) load(userptr, "eglLockSurfaceKHR");
    glo_eglQuerySurface64KHR = (PFNEGLQUERYSURFACE64KHRPROC) load(userptr, "eglQuerySurface64KHR");
    glo_eglUnlockSurfaceKHR = (PFNEGLUNLOCKSURFACEKHRPROC) load(userptr, "eglUnlockSurfaceKHR");
}
static void glo_egl_load_EGL_KHR_partial_update( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_partial_update) return;
    glo_eglSetDamageRegionKHR = (PFNEGLSETDAMAGEREGIONKHRPROC) load(userptr, "eglSetDamageRegionKHR");
}
static void glo_egl_load_EGL_KHR_reusable_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_reusable_sync) return;
    glo_eglClientWaitSyncKHR = (PFNEGLCLIENTWAITSYNCKHRPROC) load(userptr, "eglClientWaitSyncKHR");
    glo_eglCreateSyncKHR = (PFNEGLCREATESYNCKHRPROC) load(userptr, "eglCreateSyncKHR");
    glo_eglDestroySyncKHR = (PFNEGLDESTROYSYNCKHRPROC) load(userptr, "eglDestroySyncKHR");
    glo_eglGetSyncAttribKHR = (PFNEGLGETSYNCATTRIBKHRPROC) load(userptr, "eglGetSyncAttribKHR");
    glo_eglSignalSyncKHR = (PFNEGLSIGNALSYNCKHRPROC) load(userptr, "eglSignalSyncKHR");
}
static void glo_egl_load_EGL_KHR_stream( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_stream) return;
    glo_eglCreateStreamKHR = (PFNEGLCREATESTREAMKHRPROC) load(userptr, "eglCreateStreamKHR");
    glo_eglDestroyStreamKHR = (PFNEGLDESTROYSTREAMKHRPROC) load(userptr, "eglDestroyStreamKHR");
    glo_eglQueryStreamKHR = (PFNEGLQUERYSTREAMKHRPROC) load(userptr, "eglQueryStreamKHR");
    glo_eglQueryStreamu64KHR = (PFNEGLQUERYSTREAMU64KHRPROC) load(userptr, "eglQueryStreamu64KHR");
    glo_eglStreamAttribKHR = (PFNEGLSTREAMATTRIBKHRPROC) load(userptr, "eglStreamAttribKHR");
}
static void glo_egl_load_EGL_KHR_stream_attrib( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_stream_attrib) return;
    glo_eglCreateStreamAttribKHR = (PFNEGLCREATESTREAMATTRIBKHRPROC) load(userptr, "eglCreateStreamAttribKHR");
    glo_eglQueryStreamAttribKHR = (PFNEGLQUERYSTREAMATTRIBKHRPROC) load(userptr, "eglQueryStreamAttribKHR");
    glo_eglSetStreamAttribKHR = (PFNEGLSETSTREAMATTRIBKHRPROC) load(userptr, "eglSetStreamAttribKHR");
    glo_eglStreamConsumerAcquireAttribKHR = (PFNEGLSTREAMCONSUMERACQUIREATTRIBKHRPROC) load(userptr, "eglStreamConsumerAcquireAttribKHR");
    glo_eglStreamConsumerReleaseAttribKHR = (PFNEGLSTREAMCONSUMERRELEASEATTRIBKHRPROC) load(userptr, "eglStreamConsumerReleaseAttribKHR");
}
static void glo_egl_load_EGL_KHR_stream_consumer_gltexture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_stream_consumer_gltexture) return;
    glo_eglStreamConsumerAcquireKHR = (PFNEGLSTREAMCONSUMERACQUIREKHRPROC) load(userptr, "eglStreamConsumerAcquireKHR");
    glo_eglStreamConsumerGLTextureExternalKHR = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALKHRPROC) load(userptr, "eglStreamConsumerGLTextureExternalKHR");
    glo_eglStreamConsumerReleaseKHR = (PFNEGLSTREAMCONSUMERRELEASEKHRPROC) load(userptr, "eglStreamConsumerReleaseKHR");
}
static void glo_egl_load_EGL_KHR_stream_cross_process_fd( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_stream_cross_process_fd) return;
    glo_eglCreateStreamFromFileDescriptorKHR = (PFNEGLCREATESTREAMFROMFILEDESCRIPTORKHRPROC) load(userptr, "eglCreateStreamFromFileDescriptorKHR");
    glo_eglGetStreamFileDescriptorKHR = (PFNEGLGETSTREAMFILEDESCRIPTORKHRPROC) load(userptr, "eglGetStreamFileDescriptorKHR");
}
static void glo_egl_load_EGL_KHR_stream_fifo( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_stream_fifo) return;
    glo_eglQueryStreamTimeKHR = (PFNEGLQUERYSTREAMTIMEKHRPROC) load(userptr, "eglQueryStreamTimeKHR");
}
static void glo_egl_load_EGL_KHR_stream_producer_eglsurface( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_stream_producer_eglsurface) return;
    glo_eglCreateStreamProducerSurfaceKHR = (PFNEGLCREATESTREAMPRODUCERSURFACEKHRPROC) load(userptr, "eglCreateStreamProducerSurfaceKHR");
}
static void glo_egl_load_EGL_KHR_swap_buffers_with_damage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_swap_buffers_with_damage) return;
    glo_eglSwapBuffersWithDamageKHR = (PFNEGLSWAPBUFFERSWITHDAMAGEKHRPROC) load(userptr, "eglSwapBuffersWithDamageKHR");
}
static void glo_egl_load_EGL_KHR_wait_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_KHR_wait_sync) return;
    glo_eglWaitSyncKHR = (PFNEGLWAITSYNCKHRPROC) load(userptr, "eglWaitSyncKHR");
}
static void glo_egl_load_EGL_MESA_drm_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_MESA_drm_image) return;
    glo_eglCreateDRMImageMESA = (PFNEGLCREATEDRMIMAGEMESAPROC) load(userptr, "eglCreateDRMImageMESA");
    glo_eglExportDRMImageMESA = (PFNEGLEXPORTDRMIMAGEMESAPROC) load(userptr, "eglExportDRMImageMESA");
}
static void glo_egl_load_EGL_MESA_image_dma_buf_export( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_MESA_image_dma_buf_export) return;
    glo_eglExportDMABUFImageMESA = (PFNEGLEXPORTDMABUFIMAGEMESAPROC) load(userptr, "eglExportDMABUFImageMESA");
    glo_eglExportDMABUFImageQueryMESA = (PFNEGLEXPORTDMABUFIMAGEQUERYMESAPROC) load(userptr, "eglExportDMABUFImageQueryMESA");
}
static void glo_egl_load_EGL_MESA_query_driver( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_MESA_query_driver) return;
    glo_eglGetDisplayDriverConfig = (PFNEGLGETDISPLAYDRIVERCONFIGPROC) load(userptr, "eglGetDisplayDriverConfig");
    glo_eglGetDisplayDriverName = (PFNEGLGETDISPLAYDRIVERNAMEPROC) load(userptr, "eglGetDisplayDriverName");
}
static void glo_egl_load_EGL_NOK_swap_region( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NOK_swap_region) return;
    glo_eglSwapBuffersRegionNOK = (PFNEGLSWAPBUFFERSREGIONNOKPROC) load(userptr, "eglSwapBuffersRegionNOK");
}
static void glo_egl_load_EGL_NOK_swap_region2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NOK_swap_region2) return;
    glo_eglSwapBuffersRegion2NOK = (PFNEGLSWAPBUFFERSREGION2NOKPROC) load(userptr, "eglSwapBuffersRegion2NOK");
}
static void glo_egl_load_EGL_NV_native_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_native_query) return;
    glo_eglQueryNativeDisplayNV = (PFNEGLQUERYNATIVEDISPLAYNVPROC) load(userptr, "eglQueryNativeDisplayNV");
    glo_eglQueryNativePixmapNV = (PFNEGLQUERYNATIVEPIXMAPNVPROC) load(userptr, "eglQueryNativePixmapNV");
    glo_eglQueryNativeWindowNV = (PFNEGLQUERYNATIVEWINDOWNVPROC) load(userptr, "eglQueryNativeWindowNV");
}
static void glo_egl_load_EGL_NV_post_sub_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_post_sub_buffer) return;
    glo_eglPostSubBufferNV = (PFNEGLPOSTSUBBUFFERNVPROC) load(userptr, "eglPostSubBufferNV");
}
static void glo_egl_load_EGL_NV_stream_consumer_eglimage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_stream_consumer_eglimage) return;
    glo_eglQueryStreamConsumerEventNV = (PFNEGLQUERYSTREAMCONSUMEREVENTNVPROC) load(userptr, "eglQueryStreamConsumerEventNV");
    glo_eglStreamAcquireImageNV = (PFNEGLSTREAMACQUIREIMAGENVPROC) load(userptr, "eglStreamAcquireImageNV");
    glo_eglStreamImageConsumerConnectNV = (PFNEGLSTREAMIMAGECONSUMERCONNECTNVPROC) load(userptr, "eglStreamImageConsumerConnectNV");
    glo_eglStreamReleaseImageNV = (PFNEGLSTREAMRELEASEIMAGENVPROC) load(userptr, "eglStreamReleaseImageNV");
}
static void glo_egl_load_EGL_NV_stream_consumer_gltexture_yuv( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_stream_consumer_gltexture_yuv) return;
    glo_eglStreamConsumerGLTextureExternalAttribsNV = (PFNEGLSTREAMCONSUMERGLTEXTUREEXTERNALATTRIBSNVPROC) load(userptr, "eglStreamConsumerGLTextureExternalAttribsNV");
}
static void glo_egl_load_EGL_NV_stream_flush( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_stream_flush) return;
    glo_eglStreamFlushNV = (PFNEGLSTREAMFLUSHNVPROC) load(userptr, "eglStreamFlushNV");
}
static void glo_egl_load_EGL_NV_stream_metadata( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_stream_metadata) return;
    glo_eglQueryDisplayAttribNV = (PFNEGLQUERYDISPLAYATTRIBNVPROC) load(userptr, "eglQueryDisplayAttribNV");
    glo_eglQueryStreamMetadataNV = (PFNEGLQUERYSTREAMMETADATANVPROC) load(userptr, "eglQueryStreamMetadataNV");
    glo_eglSetStreamMetadataNV = (PFNEGLSETSTREAMMETADATANVPROC) load(userptr, "eglSetStreamMetadataNV");
}
static void glo_egl_load_EGL_NV_stream_reset( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_stream_reset) return;
    glo_eglResetStreamNV = (PFNEGLRESETSTREAMNVPROC) load(userptr, "eglResetStreamNV");
}
static void glo_egl_load_EGL_NV_stream_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_stream_sync) return;
    glo_eglCreateStreamSyncNV = (PFNEGLCREATESTREAMSYNCNVPROC) load(userptr, "eglCreateStreamSyncNV");
}
static void glo_egl_load_EGL_NV_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_sync) return;
    glo_eglClientWaitSyncNV = (PFNEGLCLIENTWAITSYNCNVPROC) load(userptr, "eglClientWaitSyncNV");
    glo_eglCreateFenceSyncNV = (PFNEGLCREATEFENCESYNCNVPROC) load(userptr, "eglCreateFenceSyncNV");
    glo_eglDestroySyncNV = (PFNEGLDESTROYSYNCNVPROC) load(userptr, "eglDestroySyncNV");
    glo_eglFenceNV = (PFNEGLFENCENVPROC) load(userptr, "eglFenceNV");
    glo_eglGetSyncAttribNV = (PFNEGLGETSYNCATTRIBNVPROC) load(userptr, "eglGetSyncAttribNV");
    glo_eglSignalSyncNV = (PFNEGLSIGNALSYNCNVPROC) load(userptr, "eglSignalSyncNV");
}
static void glo_egl_load_EGL_NV_system_time( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_NV_system_time) return;
    glo_eglGetSystemTimeFrequencyNV = (PFNEGLGETSYSTEMTIMEFREQUENCYNVPROC) load(userptr, "eglGetSystemTimeFrequencyNV");
    glo_eglGetSystemTimeNV = (PFNEGLGETSYSTEMTIMENVPROC) load(userptr, "eglGetSystemTimeNV");
}
static void glo_egl_load_EGL_WL_bind_wayland_display( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_WL_bind_wayland_display) return;
    glo_eglBindWaylandDisplayWL = (PFNEGLBINDWAYLANDDISPLAYWLPROC) load(userptr, "eglBindWaylandDisplayWL");
    glo_eglQueryWaylandBufferWL = (PFNEGLQUERYWAYLANDBUFFERWLPROC) load(userptr, "eglQueryWaylandBufferWL");
    glo_eglUnbindWaylandDisplayWL = (PFNEGLUNBINDWAYLANDDISPLAYWLPROC) load(userptr, "eglUnbindWaylandDisplayWL");
}
static void glo_egl_load_EGL_WL_create_wayland_buffer_from_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_EGL_WL_create_wayland_buffer_from_image) return;
    glo_eglCreateWaylandBufferFromImageWL = (PFNEGLCREATEWAYLANDBUFFERFROMIMAGEWLPROC) load(userptr, "eglCreateWaylandBufferFromImageWL");
}



static int glo_egl_get_extensions(EGLDisplay display, const char **extensions) {
    *extensions = eglQueryString(display, EGL_EXTENSIONS);

    return extensions != NULL;
}

static int glo_egl_has_extension(const char *extensions, const char *ext) {
    const char *loc;
    const char *terminator;
    if(extensions == NULL) {
        return 0;
    }
    while(1) {
        loc = strstr(extensions, ext);
        if(loc == NULL) {
            return 0;
        }
        terminator = loc + strlen(ext);
        if((loc == extensions || *(loc - 1) == ' ') &&
            (*terminator == ' ' || *terminator == '\0')) {
            return 1;
        }
        extensions = terminator;
    }
}

static GLOapiproc glo_egl_get_proc_from_userptr(void *userptr, const char *name) {
    return (GLO_GNUC_EXTENSION (GLOapiproc (*)(const char *name)) userptr)(name);
}

static int glo_egl_find_extensions_egl(EGLDisplay display) {
    const char *extensions;
    if (!glo_egl_get_extensions(display, &extensions)) return 0;

    GLO_EGL_ANDROID_GLES_layers = glo_egl_has_extension(extensions, "EGL_ANDROID_GLES_layers");
    GLO_EGL_ANDROID_blob_cache = glo_egl_has_extension(extensions, "EGL_ANDROID_blob_cache");
    GLO_EGL_ANDROID_create_native_client_buffer = glo_egl_has_extension(extensions, "EGL_ANDROID_create_native_client_buffer");
    GLO_EGL_ANDROID_framebuffer_target = glo_egl_has_extension(extensions, "EGL_ANDROID_framebuffer_target");
    GLO_EGL_ANDROID_front_buffer_auto_refresh = glo_egl_has_extension(extensions, "EGL_ANDROID_front_buffer_auto_refresh");
    GLO_EGL_ANDROID_get_frame_timestamps = glo_egl_has_extension(extensions, "EGL_ANDROID_get_frame_timestamps");
    GLO_EGL_ANDROID_get_native_client_buffer = glo_egl_has_extension(extensions, "EGL_ANDROID_get_native_client_buffer");
    GLO_EGL_ANDROID_image_native_buffer = glo_egl_has_extension(extensions, "EGL_ANDROID_image_native_buffer");
    GLO_EGL_ANDROID_native_fence_sync = glo_egl_has_extension(extensions, "EGL_ANDROID_native_fence_sync");
    GLO_EGL_ANDROID_presentation_time = glo_egl_has_extension(extensions, "EGL_ANDROID_presentation_time");
    GLO_EGL_ANDROID_recordable = glo_egl_has_extension(extensions, "EGL_ANDROID_recordable");
    GLO_EGL_ANDROID_telemetry_hint = glo_egl_has_extension(extensions, "EGL_ANDROID_telemetry_hint");
    GLO_EGL_ANGLE_d3d_share_handle_client_buffer = glo_egl_has_extension(extensions, "EGL_ANGLE_d3d_share_handle_client_buffer");
    GLO_EGL_ANGLE_device_d3d = glo_egl_has_extension(extensions, "EGL_ANGLE_device_d3d");
    GLO_EGL_ANGLE_query_surface_pointer = glo_egl_has_extension(extensions, "EGL_ANGLE_query_surface_pointer");
    GLO_EGL_ANGLE_surface_d3d_texture_2d_share_handle = glo_egl_has_extension(extensions, "EGL_ANGLE_surface_d3d_texture_2d_share_handle");
    GLO_EGL_ANGLE_sync_control_rate = glo_egl_has_extension(extensions, "EGL_ANGLE_sync_control_rate");
    GLO_EGL_ANGLE_window_fixed_size = glo_egl_has_extension(extensions, "EGL_ANGLE_window_fixed_size");
    GLO_EGL_ARM_image_format = glo_egl_has_extension(extensions, "EGL_ARM_image_format");
    GLO_EGL_ARM_implicit_external_sync = glo_egl_has_extension(extensions, "EGL_ARM_implicit_external_sync");
    GLO_EGL_ARM_pixmap_multisample_discard = glo_egl_has_extension(extensions, "EGL_ARM_pixmap_multisample_discard");
    GLO_EGL_EXT_bind_to_front = glo_egl_has_extension(extensions, "EGL_EXT_bind_to_front");
    GLO_EGL_EXT_buffer_age = glo_egl_has_extension(extensions, "EGL_EXT_buffer_age");
    GLO_EGL_EXT_client_extensions = glo_egl_has_extension(extensions, "EGL_EXT_client_extensions");
    GLO_EGL_EXT_client_sync = glo_egl_has_extension(extensions, "EGL_EXT_client_sync");
    GLO_EGL_EXT_compositor = glo_egl_has_extension(extensions, "EGL_EXT_compositor");
    GLO_EGL_EXT_config_select_group = glo_egl_has_extension(extensions, "EGL_EXT_config_select_group");
    GLO_EGL_EXT_create_context_robustness = glo_egl_has_extension(extensions, "EGL_EXT_create_context_robustness");
    GLO_EGL_EXT_device_base = glo_egl_has_extension(extensions, "EGL_EXT_device_base");
    GLO_EGL_EXT_device_drm = glo_egl_has_extension(extensions, "EGL_EXT_device_drm");
    GLO_EGL_EXT_device_drm_render_node = glo_egl_has_extension(extensions, "EGL_EXT_device_drm_render_node");
    GLO_EGL_EXT_device_enumeration = glo_egl_has_extension(extensions, "EGL_EXT_device_enumeration");
    GLO_EGL_EXT_device_openwf = glo_egl_has_extension(extensions, "EGL_EXT_device_openwf");
    GLO_EGL_EXT_device_persistent_id = glo_egl_has_extension(extensions, "EGL_EXT_device_persistent_id");
    GLO_EGL_EXT_device_query = glo_egl_has_extension(extensions, "EGL_EXT_device_query");
    GLO_EGL_EXT_device_query_name = glo_egl_has_extension(extensions, "EGL_EXT_device_query_name");
    GLO_EGL_EXT_display_alloc = glo_egl_has_extension(extensions, "EGL_EXT_display_alloc");
    GLO_EGL_EXT_explicit_device = glo_egl_has_extension(extensions, "EGL_EXT_explicit_device");
    GLO_EGL_EXT_gl_colorspace_bt2020_hlg = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_bt2020_hlg");
    GLO_EGL_EXT_gl_colorspace_bt2020_linear = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_bt2020_linear");
    GLO_EGL_EXT_gl_colorspace_bt2020_pq = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_bt2020_pq");
    GLO_EGL_EXT_gl_colorspace_display_p3 = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_display_p3");
    GLO_EGL_EXT_gl_colorspace_display_p3_linear = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_display_p3_linear");
    GLO_EGL_EXT_gl_colorspace_display_p3_passthrough = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_display_p3_passthrough");
    GLO_EGL_EXT_gl_colorspace_scrgb = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_scrgb");
    GLO_EGL_EXT_gl_colorspace_scrgb_linear = glo_egl_has_extension(extensions, "EGL_EXT_gl_colorspace_scrgb_linear");
    GLO_EGL_EXT_image_dma_buf_import = glo_egl_has_extension(extensions, "EGL_EXT_image_dma_buf_import");
    GLO_EGL_EXT_image_dma_buf_import_modifiers = glo_egl_has_extension(extensions, "EGL_EXT_image_dma_buf_import_modifiers");
    GLO_EGL_EXT_image_gl_colorspace = glo_egl_has_extension(extensions, "EGL_EXT_image_gl_colorspace");
    GLO_EGL_EXT_image_implicit_sync_control = glo_egl_has_extension(extensions, "EGL_EXT_image_implicit_sync_control");
    GLO_EGL_EXT_multiview_window = glo_egl_has_extension(extensions, "EGL_EXT_multiview_window");
    GLO_EGL_EXT_output_base = glo_egl_has_extension(extensions, "EGL_EXT_output_base");
    GLO_EGL_EXT_output_drm = glo_egl_has_extension(extensions, "EGL_EXT_output_drm");
    GLO_EGL_EXT_output_openwf = glo_egl_has_extension(extensions, "EGL_EXT_output_openwf");
    GLO_EGL_EXT_pixel_format_float = glo_egl_has_extension(extensions, "EGL_EXT_pixel_format_float");
    GLO_EGL_EXT_platform_base = glo_egl_has_extension(extensions, "EGL_EXT_platform_base");
    GLO_EGL_EXT_platform_device = glo_egl_has_extension(extensions, "EGL_EXT_platform_device");
    GLO_EGL_EXT_platform_wayland = glo_egl_has_extension(extensions, "EGL_EXT_platform_wayland");
    GLO_EGL_EXT_platform_x11 = glo_egl_has_extension(extensions, "EGL_EXT_platform_x11");
    GLO_EGL_EXT_platform_xcb = glo_egl_has_extension(extensions, "EGL_EXT_platform_xcb");
    GLO_EGL_EXT_present_opaque = glo_egl_has_extension(extensions, "EGL_EXT_present_opaque");
    GLO_EGL_EXT_protected_content = glo_egl_has_extension(extensions, "EGL_EXT_protected_content");
    GLO_EGL_EXT_protected_surface = glo_egl_has_extension(extensions, "EGL_EXT_protected_surface");
    GLO_EGL_EXT_query_reset_notification_strategy = glo_egl_has_extension(extensions, "EGL_EXT_query_reset_notification_strategy");
    GLO_EGL_EXT_stream_consumer_egloutput = glo_egl_has_extension(extensions, "EGL_EXT_stream_consumer_egloutput");
    GLO_EGL_EXT_surface_CTA861_3_metadata = glo_egl_has_extension(extensions, "EGL_EXT_surface_CTA861_3_metadata");
    GLO_EGL_EXT_surface_SMPTE2086_metadata = glo_egl_has_extension(extensions, "EGL_EXT_surface_SMPTE2086_metadata");
    GLO_EGL_EXT_surface_compression = glo_egl_has_extension(extensions, "EGL_EXT_surface_compression");
    GLO_EGL_EXT_swap_buffers_with_damage = glo_egl_has_extension(extensions, "EGL_EXT_swap_buffers_with_damage");
    GLO_EGL_EXT_sync_reuse = glo_egl_has_extension(extensions, "EGL_EXT_sync_reuse");
    GLO_EGL_EXT_yuv_surface = glo_egl_has_extension(extensions, "EGL_EXT_yuv_surface");
    GLO_EGL_HI_clientpixmap = glo_egl_has_extension(extensions, "EGL_HI_clientpixmap");
    GLO_EGL_HI_colorformats = glo_egl_has_extension(extensions, "EGL_HI_colorformats");
    GLO_EGL_IMG_context_priority = glo_egl_has_extension(extensions, "EGL_IMG_context_priority");
    GLO_EGL_IMG_image_plane_attribs = glo_egl_has_extension(extensions, "EGL_IMG_image_plane_attribs");
    GLO_EGL_KHR_cl_event = glo_egl_has_extension(extensions, "EGL_KHR_cl_event");
    GLO_EGL_KHR_cl_event2 = glo_egl_has_extension(extensions, "EGL_KHR_cl_event2");
    GLO_EGL_KHR_client_get_all_proc_addresses = glo_egl_has_extension(extensions, "EGL_KHR_client_get_all_proc_addresses");
    GLO_EGL_KHR_config_attribs = glo_egl_has_extension(extensions, "EGL_KHR_config_attribs");
    GLO_EGL_KHR_context_flush_control = glo_egl_has_extension(extensions, "EGL_KHR_context_flush_control");
    GLO_EGL_KHR_create_context = glo_egl_has_extension(extensions, "EGL_KHR_create_context");
    GLO_EGL_KHR_create_context_no_error = glo_egl_has_extension(extensions, "EGL_KHR_create_context_no_error");
    GLO_EGL_KHR_debug = glo_egl_has_extension(extensions, "EGL_KHR_debug");
    GLO_EGL_KHR_display_reference = glo_egl_has_extension(extensions, "EGL_KHR_display_reference");
    GLO_EGL_KHR_fence_sync = glo_egl_has_extension(extensions, "EGL_KHR_fence_sync");
    GLO_EGL_KHR_get_all_proc_addresses = glo_egl_has_extension(extensions, "EGL_KHR_get_all_proc_addresses");
    GLO_EGL_KHR_gl_colorspace = glo_egl_has_extension(extensions, "EGL_KHR_gl_colorspace");
    GLO_EGL_KHR_gl_renderbuffer_image = glo_egl_has_extension(extensions, "EGL_KHR_gl_renderbuffer_image");
    GLO_EGL_KHR_gl_texture_2D_image = glo_egl_has_extension(extensions, "EGL_KHR_gl_texture_2D_image");
    GLO_EGL_KHR_gl_texture_3D_image = glo_egl_has_extension(extensions, "EGL_KHR_gl_texture_3D_image");
    GLO_EGL_KHR_gl_texture_cubemap_image = glo_egl_has_extension(extensions, "EGL_KHR_gl_texture_cubemap_image");
    GLO_EGL_KHR_image = glo_egl_has_extension(extensions, "EGL_KHR_image");
    GLO_EGL_KHR_image_base = glo_egl_has_extension(extensions, "EGL_KHR_image_base");
    GLO_EGL_KHR_image_pixmap = glo_egl_has_extension(extensions, "EGL_KHR_image_pixmap");
    GLO_EGL_KHR_lock_surface = glo_egl_has_extension(extensions, "EGL_KHR_lock_surface");
    GLO_EGL_KHR_lock_surface2 = glo_egl_has_extension(extensions, "EGL_KHR_lock_surface2");
    GLO_EGL_KHR_lock_surface3 = glo_egl_has_extension(extensions, "EGL_KHR_lock_surface3");
    GLO_EGL_KHR_mutable_render_buffer = glo_egl_has_extension(extensions, "EGL_KHR_mutable_render_buffer");
    GLO_EGL_KHR_no_config_context = glo_egl_has_extension(extensions, "EGL_KHR_no_config_context");
    GLO_EGL_KHR_partial_update = glo_egl_has_extension(extensions, "EGL_KHR_partial_update");
    GLO_EGL_KHR_platform_android = glo_egl_has_extension(extensions, "EGL_KHR_platform_android");
    GLO_EGL_KHR_platform_gbm = glo_egl_has_extension(extensions, "EGL_KHR_platform_gbm");
    GLO_EGL_KHR_platform_wayland = glo_egl_has_extension(extensions, "EGL_KHR_platform_wayland");
    GLO_EGL_KHR_platform_x11 = glo_egl_has_extension(extensions, "EGL_KHR_platform_x11");
    GLO_EGL_KHR_reusable_sync = glo_egl_has_extension(extensions, "EGL_KHR_reusable_sync");
    GLO_EGL_KHR_stream = glo_egl_has_extension(extensions, "EGL_KHR_stream");
    GLO_EGL_KHR_stream_attrib = glo_egl_has_extension(extensions, "EGL_KHR_stream_attrib");
    GLO_EGL_KHR_stream_consumer_gltexture = glo_egl_has_extension(extensions, "EGL_KHR_stream_consumer_gltexture");
    GLO_EGL_KHR_stream_cross_process_fd = glo_egl_has_extension(extensions, "EGL_KHR_stream_cross_process_fd");
    GLO_EGL_KHR_stream_fifo = glo_egl_has_extension(extensions, "EGL_KHR_stream_fifo");
    GLO_EGL_KHR_stream_producer_aldatalocator = glo_egl_has_extension(extensions, "EGL_KHR_stream_producer_aldatalocator");
    GLO_EGL_KHR_stream_producer_eglsurface = glo_egl_has_extension(extensions, "EGL_KHR_stream_producer_eglsurface");
    GLO_EGL_KHR_surfaceless_context = glo_egl_has_extension(extensions, "EGL_KHR_surfaceless_context");
    GLO_EGL_KHR_swap_buffers_with_damage = glo_egl_has_extension(extensions, "EGL_KHR_swap_buffers_with_damage");
    GLO_EGL_KHR_vg_parent_image = glo_egl_has_extension(extensions, "EGL_KHR_vg_parent_image");
    GLO_EGL_KHR_wait_sync = glo_egl_has_extension(extensions, "EGL_KHR_wait_sync");
    GLO_EGL_MESA_drm_image = glo_egl_has_extension(extensions, "EGL_MESA_drm_image");
    GLO_EGL_MESA_image_dma_buf_export = glo_egl_has_extension(extensions, "EGL_MESA_image_dma_buf_export");
    GLO_EGL_MESA_platform_gbm = glo_egl_has_extension(extensions, "EGL_MESA_platform_gbm");
    GLO_EGL_MESA_platform_surfaceless = glo_egl_has_extension(extensions, "EGL_MESA_platform_surfaceless");
    GLO_EGL_MESA_query_driver = glo_egl_has_extension(extensions, "EGL_MESA_query_driver");
    GLO_EGL_NOK_swap_region = glo_egl_has_extension(extensions, "EGL_NOK_swap_region");
    GLO_EGL_NOK_swap_region2 = glo_egl_has_extension(extensions, "EGL_NOK_swap_region2");
    GLO_EGL_NOK_texture_from_pixmap = glo_egl_has_extension(extensions, "EGL_NOK_texture_from_pixmap");
    GLO_EGL_NV_3dvision_surface = glo_egl_has_extension(extensions, "EGL_NV_3dvision_surface");
    GLO_EGL_NV_context_priority_realtime = glo_egl_has_extension(extensions, "EGL_NV_context_priority_realtime");
    GLO_EGL_NV_coverage_sample = glo_egl_has_extension(extensions, "EGL_NV_coverage_sample");
    GLO_EGL_NV_coverage_sample_resolve = glo_egl_has_extension(extensions, "EGL_NV_coverage_sample_resolve");
    GLO_EGL_NV_cuda_event = glo_egl_has_extension(extensions, "EGL_NV_cuda_event");
    GLO_EGL_NV_depth_nonlinear = glo_egl_has_extension(extensions, "EGL_NV_depth_nonlinear");
    GLO_EGL_NV_device_cuda = glo_egl_has_extension(extensions, "EGL_NV_device_cuda");
    GLO_EGL_NV_native_query = glo_egl_has_extension(extensions, "EGL_NV_native_query");
    GLO_EGL_NV_post_convert_rounding = glo_egl_has_extension(extensions, "EGL_NV_post_convert_rounding");
    GLO_EGL_NV_post_sub_buffer = glo_egl_has_extension(extensions, "EGL_NV_post_sub_buffer");
    GLO_EGL_NV_quadruple_buffer = glo_egl_has_extension(extensions, "EGL_NV_quadruple_buffer");
    GLO_EGL_NV_robustness_video_memory_purge = glo_egl_has_extension(extensions, "EGL_NV_robustness_video_memory_purge");
    GLO_EGL_NV_stream_consumer_eglimage = glo_egl_has_extension(extensions, "EGL_NV_stream_consumer_eglimage");
    GLO_EGL_NV_stream_consumer_eglimage_use_scanout_attrib = glo_egl_has_extension(extensions, "EGL_NV_stream_consumer_eglimage_use_scanout_attrib");
    GLO_EGL_NV_stream_consumer_gltexture_yuv = glo_egl_has_extension(extensions, "EGL_NV_stream_consumer_gltexture_yuv");
    GLO_EGL_NV_stream_cross_display = glo_egl_has_extension(extensions, "EGL_NV_stream_cross_display");
    GLO_EGL_NV_stream_cross_object = glo_egl_has_extension(extensions, "EGL_NV_stream_cross_object");
    GLO_EGL_NV_stream_cross_partition = glo_egl_has_extension(extensions, "EGL_NV_stream_cross_partition");
    GLO_EGL_NV_stream_cross_process = glo_egl_has_extension(extensions, "EGL_NV_stream_cross_process");
    GLO_EGL_NV_stream_cross_system = glo_egl_has_extension(extensions, "EGL_NV_stream_cross_system");
    GLO_EGL_NV_stream_dma = glo_egl_has_extension(extensions, "EGL_NV_stream_dma");
    GLO_EGL_NV_stream_fifo_next = glo_egl_has_extension(extensions, "EGL_NV_stream_fifo_next");
    GLO_EGL_NV_stream_fifo_synchronous = glo_egl_has_extension(extensions, "EGL_NV_stream_fifo_synchronous");
    GLO_EGL_NV_stream_flush = glo_egl_has_extension(extensions, "EGL_NV_stream_flush");
    GLO_EGL_NV_stream_frame_limits = glo_egl_has_extension(extensions, "EGL_NV_stream_frame_limits");
    GLO_EGL_NV_stream_metadata = glo_egl_has_extension(extensions, "EGL_NV_stream_metadata");
    GLO_EGL_NV_stream_origin = glo_egl_has_extension(extensions, "EGL_NV_stream_origin");
    GLO_EGL_NV_stream_remote = glo_egl_has_extension(extensions, "EGL_NV_stream_remote");
    GLO_EGL_NV_stream_reset = glo_egl_has_extension(extensions, "EGL_NV_stream_reset");
    GLO_EGL_NV_stream_socket = glo_egl_has_extension(extensions, "EGL_NV_stream_socket");
    GLO_EGL_NV_stream_socket_inet = glo_egl_has_extension(extensions, "EGL_NV_stream_socket_inet");
    GLO_EGL_NV_stream_socket_unix = glo_egl_has_extension(extensions, "EGL_NV_stream_socket_unix");
    GLO_EGL_NV_stream_sync = glo_egl_has_extension(extensions, "EGL_NV_stream_sync");
    GLO_EGL_NV_sync = glo_egl_has_extension(extensions, "EGL_NV_sync");
    GLO_EGL_NV_system_time = glo_egl_has_extension(extensions, "EGL_NV_system_time");
    GLO_EGL_NV_triple_buffer = glo_egl_has_extension(extensions, "EGL_NV_triple_buffer");
    GLO_EGL_QNX_image_native_buffer = glo_egl_has_extension(extensions, "EGL_QNX_image_native_buffer");
    GLO_EGL_QNX_platform_screen = glo_egl_has_extension(extensions, "EGL_QNX_platform_screen");
    GLO_EGL_TIZEN_image_native_buffer = glo_egl_has_extension(extensions, "EGL_TIZEN_image_native_buffer");
    GLO_EGL_TIZEN_image_native_surface = glo_egl_has_extension(extensions, "EGL_TIZEN_image_native_surface");
    GLO_EGL_WL_bind_wayland_display = glo_egl_has_extension(extensions, "EGL_WL_bind_wayland_display");
    GLO_EGL_WL_create_wayland_buffer_from_image = glo_egl_has_extension(extensions, "EGL_WL_create_wayland_buffer_from_image");

    return 1;
}

static int glo_egl_find_core_egl(EGLDisplay display) {
    int major, minor;
    const char *version;

    if (display == NULL) {
        display = EGL_NO_DISPLAY; /* this is usually NULL, better safe than sorry */
    }
    if (display == EGL_NO_DISPLAY) {
        display = eglGetCurrentDisplay();
    }
#ifdef EGL_VERSION_1_4
    if (display == EGL_NO_DISPLAY) {
        display = eglGetDisplay(EGL_DEFAULT_DISPLAY);
    }
#endif
#ifndef EGL_VERSION_1_5
    if (display == EGL_NO_DISPLAY) {
        return 0;
    }
#endif

    version = eglQueryString(display, EGL_VERSION);
    (void) eglGetError();

    if (version == NULL) {
        major = 1;
        minor = 0;
    } else {
        GLO_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);
    }

    GLO_EGL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLO_EGL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLO_EGL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLO_EGL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    GLO_EGL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    GLO_EGL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;

    return GLO_MAKE_VERSION(major, minor);
}

int gloLoadEGLUserPtr(EGLDisplay display, GLOuserptrloadfunc load, void* userptr) {
    int version;
    eglGetDisplay = (PFNEGLGETDISPLAYPROC) load(userptr, "eglGetDisplay");
    eglGetCurrentDisplay = (PFNEGLGETCURRENTDISPLAYPROC) load(userptr, "eglGetCurrentDisplay");
    eglQueryString = (PFNEGLQUERYSTRINGPROC) load(userptr, "eglQueryString");
    eglGetError = (PFNEGLGETERRORPROC) load(userptr, "eglGetError");
    if (eglGetDisplay == NULL || eglGetCurrentDisplay == NULL || eglQueryString == NULL || eglGetError == NULL) return 0;

    version = glo_egl_find_core_egl(display);
    if (!version) return 0;
    glo_egl_load_EGL_VERSION_1_0(load, userptr);
    glo_egl_load_EGL_VERSION_1_1(load, userptr);
    glo_egl_load_EGL_VERSION_1_2(load, userptr);
    glo_egl_load_EGL_VERSION_1_4(load, userptr);
    glo_egl_load_EGL_VERSION_1_5(load, userptr);

    if (!glo_egl_find_extensions_egl(display)) return 0;
    glo_egl_load_EGL_ANDROID_blob_cache(load, userptr);
    glo_egl_load_EGL_ANDROID_create_native_client_buffer(load, userptr);
    glo_egl_load_EGL_ANDROID_get_frame_timestamps(load, userptr);
    glo_egl_load_EGL_ANDROID_get_native_client_buffer(load, userptr);
    glo_egl_load_EGL_ANDROID_native_fence_sync(load, userptr);
    glo_egl_load_EGL_ANDROID_presentation_time(load, userptr);
    glo_egl_load_EGL_ANGLE_query_surface_pointer(load, userptr);
    glo_egl_load_EGL_ANGLE_sync_control_rate(load, userptr);
    glo_egl_load_EGL_EXT_client_sync(load, userptr);
    glo_egl_load_EGL_EXT_compositor(load, userptr);
    glo_egl_load_EGL_EXT_device_base(load, userptr);
    glo_egl_load_EGL_EXT_device_enumeration(load, userptr);
    glo_egl_load_EGL_EXT_device_persistent_id(load, userptr);
    glo_egl_load_EGL_EXT_device_query(load, userptr);
    glo_egl_load_EGL_EXT_display_alloc(load, userptr);
    glo_egl_load_EGL_EXT_image_dma_buf_import_modifiers(load, userptr);
    glo_egl_load_EGL_EXT_output_base(load, userptr);
    glo_egl_load_EGL_EXT_platform_base(load, userptr);
    glo_egl_load_EGL_EXT_stream_consumer_egloutput(load, userptr);
    glo_egl_load_EGL_EXT_surface_compression(load, userptr);
    glo_egl_load_EGL_EXT_swap_buffers_with_damage(load, userptr);
    glo_egl_load_EGL_EXT_sync_reuse(load, userptr);
    glo_egl_load_EGL_HI_clientpixmap(load, userptr);
    glo_egl_load_EGL_KHR_cl_event2(load, userptr);
    glo_egl_load_EGL_KHR_debug(load, userptr);
    glo_egl_load_EGL_KHR_display_reference(load, userptr);
    glo_egl_load_EGL_KHR_fence_sync(load, userptr);
    glo_egl_load_EGL_KHR_image(load, userptr);
    glo_egl_load_EGL_KHR_image_base(load, userptr);
    glo_egl_load_EGL_KHR_lock_surface(load, userptr);
    glo_egl_load_EGL_KHR_lock_surface3(load, userptr);
    glo_egl_load_EGL_KHR_partial_update(load, userptr);
    glo_egl_load_EGL_KHR_reusable_sync(load, userptr);
    glo_egl_load_EGL_KHR_stream(load, userptr);
    glo_egl_load_EGL_KHR_stream_attrib(load, userptr);
    glo_egl_load_EGL_KHR_stream_consumer_gltexture(load, userptr);
    glo_egl_load_EGL_KHR_stream_cross_process_fd(load, userptr);
    glo_egl_load_EGL_KHR_stream_fifo(load, userptr);
    glo_egl_load_EGL_KHR_stream_producer_eglsurface(load, userptr);
    glo_egl_load_EGL_KHR_swap_buffers_with_damage(load, userptr);
    glo_egl_load_EGL_KHR_wait_sync(load, userptr);
    glo_egl_load_EGL_MESA_drm_image(load, userptr);
    glo_egl_load_EGL_MESA_image_dma_buf_export(load, userptr);
    glo_egl_load_EGL_MESA_query_driver(load, userptr);
    glo_egl_load_EGL_NOK_swap_region(load, userptr);
    glo_egl_load_EGL_NOK_swap_region2(load, userptr);
    glo_egl_load_EGL_NV_native_query(load, userptr);
    glo_egl_load_EGL_NV_post_sub_buffer(load, userptr);
    glo_egl_load_EGL_NV_stream_consumer_eglimage(load, userptr);
    glo_egl_load_EGL_NV_stream_consumer_gltexture_yuv(load, userptr);
    glo_egl_load_EGL_NV_stream_flush(load, userptr);
    glo_egl_load_EGL_NV_stream_metadata(load, userptr);
    glo_egl_load_EGL_NV_stream_reset(load, userptr);
    glo_egl_load_EGL_NV_stream_sync(load, userptr);
    glo_egl_load_EGL_NV_sync(load, userptr);
    glo_egl_load_EGL_NV_system_time(load, userptr);
    glo_egl_load_EGL_WL_bind_wayland_display(load, userptr);
    glo_egl_load_EGL_WL_create_wayland_buffer_from_image(load, userptr);


    return version;
}

int gloLoadEGL(EGLDisplay display, GLOloadfunc load) {
    return gloLoadEGLUserPtr(display, glo_egl_get_proc_from_userptr, GLO_GNUC_EXTENSION (void*) load);
}

 

#ifdef GLO_EGL

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

struct _glo_egl_userptr {
    void *handle;
    PFNEGLGETPROCADDRESSPROC get_proc_address_ptr;
};

static GLOapiproc glo_egl_get_proc(void *vuserptr, const char* name) {
    struct _glo_egl_userptr userptr = *(struct _glo_egl_userptr*) vuserptr;
    GLOapiproc result = NULL;

    result = glo_dlsym_handle(userptr.handle, name);
    if (result == NULL) {
        result = GLO_GNUC_EXTENSION (GLOapiproc) userptr.get_proc_address_ptr(name);
    }

    return result;
}

static void* _egl_handle = NULL;

static void* glo_egl_dlopen_handle(void) {
#if GLO_PLATFORM_APPLE
    static const char *NAMES[] = {"libEGL.dylib"};
#elif GLO_PLATFORM_WIN32
    static const char *NAMES[] = {"libEGL.dll", "EGL.dll"};
#else
    static const char *NAMES[] = {"libEGL.so.1", "libEGL.so"};
#endif

    if (_egl_handle == NULL) {
        _egl_handle = glo_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _egl_handle;
}

static struct _glo_egl_userptr glo_egl_build_userptr(void *handle) {
    struct _glo_egl_userptr userptr;
    userptr.handle = handle;
    userptr.get_proc_address_ptr = (PFNEGLGETPROCADDRESSPROC) glo_dlsym_handle(handle, "eglGetProcAddress");
    return userptr;
}

int gloLoaderLoadEGL(EGLDisplay display) {
    int version = 0;
    void *handle = NULL;
    int did_load = 0;
    struct _glo_egl_userptr userptr;

    did_load = _egl_handle == NULL;
    handle = glo_egl_dlopen_handle();
    if (handle != NULL) {
        userptr = glo_egl_build_userptr(handle);

        if (userptr.get_proc_address_ptr != NULL) {
            version = gloLoadEGLUserPtr(display, glo_egl_get_proc, &userptr);
        }

        if (!version && did_load) {
            gloLoaderUnloadEGL();
        }
    }

    return version;
}


void gloLoaderUnloadEGL(void) {
    if (_egl_handle != NULL) {
        glo_close_dlopen_handle(_egl_handle);
        _egl_handle = NULL;
    }
}

#endif /* GLO_EGL */

#ifdef __cplusplus
}
#endif
