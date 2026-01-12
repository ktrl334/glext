/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */

#if !__has_include(<windows.h>)
  #error "windows.h wasn't found."
#else

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glo/wgl.h>

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



int GLO_WGL_VERSION_1_0 = 0;
int GLO_WGL_3DFX_multisample = 0;
int GLO_WGL_3DL_stereo_control = 0;
int GLO_WGL_AMD_gpu_association = 0;
int GLO_WGL_ARB_buffer_region = 0;
int GLO_WGL_ARB_context_flush_control = 0;
int GLO_WGL_ARB_create_context = 0;
int GLO_WGL_ARB_create_context_no_error = 0;
int GLO_WGL_ARB_create_context_profile = 0;
int GLO_WGL_ARB_create_context_robustness = 0;
int GLO_WGL_ARB_extensions_string = 0;
int GLO_WGL_ARB_framebuffer_sRGB = 0;
int GLO_WGL_ARB_make_current_read = 0;
int GLO_WGL_ARB_multisample = 0;
int GLO_WGL_ARB_pbuffer = 0;
int GLO_WGL_ARB_pixel_format = 0;
int GLO_WGL_ARB_pixel_format_float = 0;
int GLO_WGL_ARB_render_texture = 0;
int GLO_WGL_ARB_robustness_application_isolation = 0;
int GLO_WGL_ARB_robustness_share_group_isolation = 0;
int GLO_WGL_ATI_pixel_format_float = 0;
int GLO_WGL_ATI_render_texture_rectangle = 0;
int GLO_WGL_EXT_colorspace = 0;
int GLO_WGL_EXT_create_context_es2_profile = 0;
int GLO_WGL_EXT_create_context_es_profile = 0;
int GLO_WGL_EXT_depth_float = 0;
int GLO_WGL_EXT_display_color_table = 0;
int GLO_WGL_EXT_extensions_string = 0;
int GLO_WGL_EXT_framebuffer_sRGB = 0;
int GLO_WGL_EXT_make_current_read = 0;
int GLO_WGL_EXT_multisample = 0;
int GLO_WGL_EXT_pbuffer = 0;
int GLO_WGL_EXT_pixel_format = 0;
int GLO_WGL_EXT_pixel_format_packed_float = 0;
int GLO_WGL_EXT_swap_control = 0;
int GLO_WGL_EXT_swap_control_tear = 0;
int GLO_WGL_I3D_digital_video_control = 0;
int GLO_WGL_I3D_gamma = 0;
int GLO_WGL_I3D_genlock = 0;
int GLO_WGL_I3D_image_buffer = 0;
int GLO_WGL_I3D_swap_frame_lock = 0;
int GLO_WGL_I3D_swap_frame_usage = 0;
int GLO_WGL_NV_DX_interop = 0;
int GLO_WGL_NV_DX_interop2 = 0;
int GLO_WGL_NV_copy_image = 0;
int GLO_WGL_NV_delay_before_swap = 0;
int GLO_WGL_NV_float_buffer = 0;
int GLO_WGL_NV_gpu_affinity = 0;
int GLO_WGL_NV_multigpu_context = 0;
int GLO_WGL_NV_multisample_coverage = 0;
int GLO_WGL_NV_present_video = 0;
int GLO_WGL_NV_render_depth_texture = 0;
int GLO_WGL_NV_render_texture_rectangle = 0;
int GLO_WGL_NV_swap_group = 0;
int GLO_WGL_NV_vertex_array_range = 0;
int GLO_WGL_NV_video_capture = 0;
int GLO_WGL_NV_video_output = 0;
int GLO_WGL_OML_sync_control = 0;



PFNWGLALLOCATEMEMORYNVPROC glo_wglAllocateMemoryNV = NULL;
PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC glo_wglAssociateImageBufferEventsI3D = NULL;
PFNWGLBEGINFRAMETRACKINGI3DPROC glo_wglBeginFrameTrackingI3D = NULL;
PFNWGLBINDDISPLAYCOLORTABLEEXTPROC glo_wglBindDisplayColorTableEXT = NULL;
PFNWGLBINDSWAPBARRIERNVPROC glo_wglBindSwapBarrierNV = NULL;
PFNWGLBINDTEXIMAGEARBPROC glo_wglBindTexImageARB = NULL;
PFNWGLBINDVIDEOCAPTUREDEVICENVPROC glo_wglBindVideoCaptureDeviceNV = NULL;
PFNWGLBINDVIDEODEVICENVPROC glo_wglBindVideoDeviceNV = NULL;
PFNWGLBINDVIDEOIMAGENVPROC glo_wglBindVideoImageNV = NULL;
PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC glo_wglBlitContextFramebufferAMD = NULL;
PFNWGLCHOOSEPIXELFORMATARBPROC glo_wglChoosePixelFormatARB = NULL;
PFNWGLCHOOSEPIXELFORMATEXTPROC glo_wglChoosePixelFormatEXT = NULL;
PFNWGLCOPYIMAGESUBDATANVPROC glo_wglCopyImageSubDataNV = NULL;
PFNWGLCREATEAFFINITYDCNVPROC glo_wglCreateAffinityDCNV = NULL;
PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC glo_wglCreateAssociatedContextAMD = NULL;
PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC glo_wglCreateAssociatedContextAttribsAMD = NULL;
PFNWGLCREATEBUFFERREGIONARBPROC glo_wglCreateBufferRegionARB = NULL;
PFNWGLCREATECONTEXTATTRIBSARBPROC glo_wglCreateContextAttribsARB = NULL;
PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC glo_wglCreateDisplayColorTableEXT = NULL;
PFNWGLCREATEIMAGEBUFFERI3DPROC glo_wglCreateImageBufferI3D = NULL;
PFNWGLCREATEPBUFFERARBPROC glo_wglCreatePbufferARB = NULL;
PFNWGLCREATEPBUFFEREXTPROC glo_wglCreatePbufferEXT = NULL;
PFNWGLDXCLOSEDEVICENVPROC glo_wglDXCloseDeviceNV = NULL;
PFNWGLDXLOCKOBJECTSNVPROC glo_wglDXLockObjectsNV = NULL;
PFNWGLDXOBJECTACCESSNVPROC glo_wglDXObjectAccessNV = NULL;
PFNWGLDXOPENDEVICENVPROC glo_wglDXOpenDeviceNV = NULL;
PFNWGLDXREGISTEROBJECTNVPROC glo_wglDXRegisterObjectNV = NULL;
PFNWGLDXSETRESOURCESHAREHANDLENVPROC glo_wglDXSetResourceShareHandleNV = NULL;
PFNWGLDXUNLOCKOBJECTSNVPROC glo_wglDXUnlockObjectsNV = NULL;
PFNWGLDXUNREGISTEROBJECTNVPROC glo_wglDXUnregisterObjectNV = NULL;
PFNWGLDELAYBEFORESWAPNVPROC glo_wglDelayBeforeSwapNV = NULL;
PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC glo_wglDeleteAssociatedContextAMD = NULL;
PFNWGLDELETEBUFFERREGIONARBPROC glo_wglDeleteBufferRegionARB = NULL;
PFNWGLDELETEDCNVPROC glo_wglDeleteDCNV = NULL;
PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC glo_wglDestroyDisplayColorTableEXT = NULL;
PFNWGLDESTROYIMAGEBUFFERI3DPROC glo_wglDestroyImageBufferI3D = NULL;
PFNWGLDESTROYPBUFFERARBPROC glo_wglDestroyPbufferARB = NULL;
PFNWGLDESTROYPBUFFEREXTPROC glo_wglDestroyPbufferEXT = NULL;
PFNWGLDISABLEFRAMELOCKI3DPROC glo_wglDisableFrameLockI3D = NULL;
PFNWGLDISABLEGENLOCKI3DPROC glo_wglDisableGenlockI3D = NULL;
PFNWGLENABLEFRAMELOCKI3DPROC glo_wglEnableFrameLockI3D = NULL;
PFNWGLENABLEGENLOCKI3DPROC glo_wglEnableGenlockI3D = NULL;
PFNWGLENDFRAMETRACKINGI3DPROC glo_wglEndFrameTrackingI3D = NULL;
PFNWGLENUMGPUDEVICESNVPROC glo_wglEnumGpuDevicesNV = NULL;
PFNWGLENUMGPUSFROMAFFINITYDCNVPROC glo_wglEnumGpusFromAffinityDCNV = NULL;
PFNWGLENUMGPUSNVPROC glo_wglEnumGpusNV = NULL;
PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC glo_wglEnumerateVideoCaptureDevicesNV = NULL;
PFNWGLENUMERATEVIDEODEVICESNVPROC glo_wglEnumerateVideoDevicesNV = NULL;
PFNWGLFREEMEMORYNVPROC glo_wglFreeMemoryNV = NULL;
PFNWGLGENLOCKSAMPLERATEI3DPROC glo_wglGenlockSampleRateI3D = NULL;
PFNWGLGENLOCKSOURCEDELAYI3DPROC glo_wglGenlockSourceDelayI3D = NULL;
PFNWGLGENLOCKSOURCEEDGEI3DPROC glo_wglGenlockSourceEdgeI3D = NULL;
PFNWGLGENLOCKSOURCEI3DPROC glo_wglGenlockSourceI3D = NULL;
PFNWGLGETCONTEXTGPUIDAMDPROC glo_wglGetContextGPUIDAMD = NULL;
PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC glo_wglGetCurrentAssociatedContextAMD = NULL;
PFNWGLGETCURRENTREADDCARBPROC glo_wglGetCurrentReadDCARB = NULL;
PFNWGLGETCURRENTREADDCEXTPROC glo_wglGetCurrentReadDCEXT = NULL;
PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC glo_wglGetDigitalVideoParametersI3D = NULL;
PFNWGLGETEXTENSIONSSTRINGARBPROC glo_wglGetExtensionsStringARB = NULL;
PFNWGLGETEXTENSIONSSTRINGEXTPROC glo_wglGetExtensionsStringEXT = NULL;
PFNWGLGETFRAMEUSAGEI3DPROC glo_wglGetFrameUsageI3D = NULL;
PFNWGLGETGPUIDSAMDPROC glo_wglGetGPUIDsAMD = NULL;
PFNWGLGETGPUINFOAMDPROC glo_wglGetGPUInfoAMD = NULL;
PFNWGLGETGAMMATABLEI3DPROC glo_wglGetGammaTableI3D = NULL;
PFNWGLGETGAMMATABLEPARAMETERSI3DPROC glo_wglGetGammaTableParametersI3D = NULL;
PFNWGLGETGENLOCKSAMPLERATEI3DPROC glo_wglGetGenlockSampleRateI3D = NULL;
PFNWGLGETGENLOCKSOURCEDELAYI3DPROC glo_wglGetGenlockSourceDelayI3D = NULL;
PFNWGLGETGENLOCKSOURCEEDGEI3DPROC glo_wglGetGenlockSourceEdgeI3D = NULL;
PFNWGLGETGENLOCKSOURCEI3DPROC glo_wglGetGenlockSourceI3D = NULL;
PFNWGLGETMSCRATEOMLPROC glo_wglGetMscRateOML = NULL;
PFNWGLGETPBUFFERDCARBPROC glo_wglGetPbufferDCARB = NULL;
PFNWGLGETPBUFFERDCEXTPROC glo_wglGetPbufferDCEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBFVARBPROC glo_wglGetPixelFormatAttribfvARB = NULL;
PFNWGLGETPIXELFORMATATTRIBFVEXTPROC glo_wglGetPixelFormatAttribfvEXT = NULL;
PFNWGLGETPIXELFORMATATTRIBIVARBPROC glo_wglGetPixelFormatAttribivARB = NULL;
PFNWGLGETPIXELFORMATATTRIBIVEXTPROC glo_wglGetPixelFormatAttribivEXT = NULL;
PFNWGLGETSWAPINTERVALEXTPROC glo_wglGetSwapIntervalEXT = NULL;
PFNWGLGETSYNCVALUESOMLPROC glo_wglGetSyncValuesOML = NULL;
PFNWGLGETVIDEODEVICENVPROC glo_wglGetVideoDeviceNV = NULL;
PFNWGLGETVIDEOINFONVPROC glo_wglGetVideoInfoNV = NULL;
PFNWGLISENABLEDFRAMELOCKI3DPROC glo_wglIsEnabledFrameLockI3D = NULL;
PFNWGLISENABLEDGENLOCKI3DPROC glo_wglIsEnabledGenlockI3D = NULL;
PFNWGLJOINSWAPGROUPNVPROC glo_wglJoinSwapGroupNV = NULL;
PFNWGLLOADDISPLAYCOLORTABLEEXTPROC glo_wglLoadDisplayColorTableEXT = NULL;
PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC glo_wglLockVideoCaptureDeviceNV = NULL;
PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC glo_wglMakeAssociatedContextCurrentAMD = NULL;
PFNWGLMAKECONTEXTCURRENTARBPROC glo_wglMakeContextCurrentARB = NULL;
PFNWGLMAKECONTEXTCURRENTEXTPROC glo_wglMakeContextCurrentEXT = NULL;
PFNWGLQUERYCURRENTCONTEXTNVPROC glo_wglQueryCurrentContextNV = NULL;
PFNWGLQUERYFRAMECOUNTNVPROC glo_wglQueryFrameCountNV = NULL;
PFNWGLQUERYFRAMELOCKMASTERI3DPROC glo_wglQueryFrameLockMasterI3D = NULL;
PFNWGLQUERYFRAMETRACKINGI3DPROC glo_wglQueryFrameTrackingI3D = NULL;
PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC glo_wglQueryGenlockMaxSourceDelayI3D = NULL;
PFNWGLQUERYMAXSWAPGROUPSNVPROC glo_wglQueryMaxSwapGroupsNV = NULL;
PFNWGLQUERYPBUFFERARBPROC glo_wglQueryPbufferARB = NULL;
PFNWGLQUERYPBUFFEREXTPROC glo_wglQueryPbufferEXT = NULL;
PFNWGLQUERYSWAPGROUPNVPROC glo_wglQuerySwapGroupNV = NULL;
PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC glo_wglQueryVideoCaptureDeviceNV = NULL;
PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC glo_wglReleaseImageBufferEventsI3D = NULL;
PFNWGLRELEASEPBUFFERDCARBPROC glo_wglReleasePbufferDCARB = NULL;
PFNWGLRELEASEPBUFFERDCEXTPROC glo_wglReleasePbufferDCEXT = NULL;
PFNWGLRELEASETEXIMAGEARBPROC glo_wglReleaseTexImageARB = NULL;
PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC glo_wglReleaseVideoCaptureDeviceNV = NULL;
PFNWGLRELEASEVIDEODEVICENVPROC glo_wglReleaseVideoDeviceNV = NULL;
PFNWGLRELEASEVIDEOIMAGENVPROC glo_wglReleaseVideoImageNV = NULL;
PFNWGLRESETFRAMECOUNTNVPROC glo_wglResetFrameCountNV = NULL;
PFNWGLRESTOREBUFFERREGIONARBPROC glo_wglRestoreBufferRegionARB = NULL;
PFNWGLSAVEBUFFERREGIONARBPROC glo_wglSaveBufferRegionARB = NULL;
PFNWGLSENDPBUFFERTOVIDEONVPROC glo_wglSendPbufferToVideoNV = NULL;
PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC glo_wglSetDigitalVideoParametersI3D = NULL;
PFNWGLSETGAMMATABLEI3DPROC glo_wglSetGammaTableI3D = NULL;
PFNWGLSETGAMMATABLEPARAMETERSI3DPROC glo_wglSetGammaTableParametersI3D = NULL;
PFNWGLSETPBUFFERATTRIBARBPROC glo_wglSetPbufferAttribARB = NULL;
PFNWGLSETSTEREOEMITTERSTATE3DLPROC glo_wglSetStereoEmitterState3DL = NULL;
PFNWGLSWAPBUFFERSMSCOMLPROC glo_wglSwapBuffersMscOML = NULL;
PFNWGLSWAPINTERVALEXTPROC glo_wglSwapIntervalEXT = NULL;
PFNWGLSWAPLAYERBUFFERSMSCOMLPROC glo_wglSwapLayerBuffersMscOML = NULL;
PFNWGLWAITFORMSCOMLPROC glo_wglWaitForMscOML = NULL;
PFNWGLWAITFORSBCOMLPROC glo_wglWaitForSbcOML = NULL;


static void glo_wgl_load_WGL_3DL_stereo_control(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_3DL_stereo_control) return;
    glo_wglSetStereoEmitterState3DL = (PFNWGLSETSTEREOEMITTERSTATE3DLPROC) load(userptr, "wglSetStereoEmitterState3DL");
}
static void glo_wgl_load_WGL_AMD_gpu_association(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_AMD_gpu_association) return;
    glo_wglBlitContextFramebufferAMD = (PFNWGLBLITCONTEXTFRAMEBUFFERAMDPROC) load(userptr, "wglBlitContextFramebufferAMD");
    glo_wglCreateAssociatedContextAMD = (PFNWGLCREATEASSOCIATEDCONTEXTAMDPROC) load(userptr, "wglCreateAssociatedContextAMD");
    glo_wglCreateAssociatedContextAttribsAMD = (PFNWGLCREATEASSOCIATEDCONTEXTATTRIBSAMDPROC) load(userptr, "wglCreateAssociatedContextAttribsAMD");
    glo_wglDeleteAssociatedContextAMD = (PFNWGLDELETEASSOCIATEDCONTEXTAMDPROC) load(userptr, "wglDeleteAssociatedContextAMD");
    glo_wglGetContextGPUIDAMD = (PFNWGLGETCONTEXTGPUIDAMDPROC) load(userptr, "wglGetContextGPUIDAMD");
    glo_wglGetCurrentAssociatedContextAMD = (PFNWGLGETCURRENTASSOCIATEDCONTEXTAMDPROC) load(userptr, "wglGetCurrentAssociatedContextAMD");
    glo_wglGetGPUIDsAMD = (PFNWGLGETGPUIDSAMDPROC) load(userptr, "wglGetGPUIDsAMD");
    glo_wglGetGPUInfoAMD = (PFNWGLGETGPUINFOAMDPROC) load(userptr, "wglGetGPUInfoAMD");
    glo_wglMakeAssociatedContextCurrentAMD = (PFNWGLMAKEASSOCIATEDCONTEXTCURRENTAMDPROC) load(userptr, "wglMakeAssociatedContextCurrentAMD");
}
static void glo_wgl_load_WGL_ARB_buffer_region(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_buffer_region) return;
    glo_wglCreateBufferRegionARB = (PFNWGLCREATEBUFFERREGIONARBPROC) load(userptr, "wglCreateBufferRegionARB");
    glo_wglDeleteBufferRegionARB = (PFNWGLDELETEBUFFERREGIONARBPROC) load(userptr, "wglDeleteBufferRegionARB");
    glo_wglRestoreBufferRegionARB = (PFNWGLRESTOREBUFFERREGIONARBPROC) load(userptr, "wglRestoreBufferRegionARB");
    glo_wglSaveBufferRegionARB = (PFNWGLSAVEBUFFERREGIONARBPROC) load(userptr, "wglSaveBufferRegionARB");
}
static void glo_wgl_load_WGL_ARB_create_context(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_create_context) return;
    glo_wglCreateContextAttribsARB = (PFNWGLCREATECONTEXTATTRIBSARBPROC) load(userptr, "wglCreateContextAttribsARB");
}
static void glo_wgl_load_WGL_ARB_extensions_string(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_extensions_string) return;
    glo_wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) load(userptr, "wglGetExtensionsStringARB");
}
static void glo_wgl_load_WGL_ARB_make_current_read(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_make_current_read) return;
    glo_wglGetCurrentReadDCARB = (PFNWGLGETCURRENTREADDCARBPROC) load(userptr, "wglGetCurrentReadDCARB");
    glo_wglMakeContextCurrentARB = (PFNWGLMAKECONTEXTCURRENTARBPROC) load(userptr, "wglMakeContextCurrentARB");
}
static void glo_wgl_load_WGL_ARB_pbuffer(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_pbuffer) return;
    glo_wglCreatePbufferARB = (PFNWGLCREATEPBUFFERARBPROC) load(userptr, "wglCreatePbufferARB");
    glo_wglDestroyPbufferARB = (PFNWGLDESTROYPBUFFERARBPROC) load(userptr, "wglDestroyPbufferARB");
    glo_wglGetPbufferDCARB = (PFNWGLGETPBUFFERDCARBPROC) load(userptr, "wglGetPbufferDCARB");
    glo_wglQueryPbufferARB = (PFNWGLQUERYPBUFFERARBPROC) load(userptr, "wglQueryPbufferARB");
    glo_wglReleasePbufferDCARB = (PFNWGLRELEASEPBUFFERDCARBPROC) load(userptr, "wglReleasePbufferDCARB");
}
static void glo_wgl_load_WGL_ARB_pixel_format(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_pixel_format) return;
    glo_wglChoosePixelFormatARB = (PFNWGLCHOOSEPIXELFORMATARBPROC) load(userptr, "wglChoosePixelFormatARB");
    glo_wglGetPixelFormatAttribfvARB = (PFNWGLGETPIXELFORMATATTRIBFVARBPROC) load(userptr, "wglGetPixelFormatAttribfvARB");
    glo_wglGetPixelFormatAttribivARB = (PFNWGLGETPIXELFORMATATTRIBIVARBPROC) load(userptr, "wglGetPixelFormatAttribivARB");
}
static void glo_wgl_load_WGL_ARB_render_texture(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_ARB_render_texture) return;
    glo_wglBindTexImageARB = (PFNWGLBINDTEXIMAGEARBPROC) load(userptr, "wglBindTexImageARB");
    glo_wglReleaseTexImageARB = (PFNWGLRELEASETEXIMAGEARBPROC) load(userptr, "wglReleaseTexImageARB");
    glo_wglSetPbufferAttribARB = (PFNWGLSETPBUFFERATTRIBARBPROC) load(userptr, "wglSetPbufferAttribARB");
}
static void glo_wgl_load_WGL_EXT_display_color_table(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_EXT_display_color_table) return;
    glo_wglBindDisplayColorTableEXT = (PFNWGLBINDDISPLAYCOLORTABLEEXTPROC) load(userptr, "wglBindDisplayColorTableEXT");
    glo_wglCreateDisplayColorTableEXT = (PFNWGLCREATEDISPLAYCOLORTABLEEXTPROC) load(userptr, "wglCreateDisplayColorTableEXT");
    glo_wglDestroyDisplayColorTableEXT = (PFNWGLDESTROYDISPLAYCOLORTABLEEXTPROC) load(userptr, "wglDestroyDisplayColorTableEXT");
    glo_wglLoadDisplayColorTableEXT = (PFNWGLLOADDISPLAYCOLORTABLEEXTPROC) load(userptr, "wglLoadDisplayColorTableEXT");
}
static void glo_wgl_load_WGL_EXT_extensions_string(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_EXT_extensions_string) return;
    glo_wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) load(userptr, "wglGetExtensionsStringEXT");
}
static void glo_wgl_load_WGL_EXT_make_current_read(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_EXT_make_current_read) return;
    glo_wglGetCurrentReadDCEXT = (PFNWGLGETCURRENTREADDCEXTPROC) load(userptr, "wglGetCurrentReadDCEXT");
    glo_wglMakeContextCurrentEXT = (PFNWGLMAKECONTEXTCURRENTEXTPROC) load(userptr, "wglMakeContextCurrentEXT");
}
static void glo_wgl_load_WGL_EXT_pbuffer(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_EXT_pbuffer) return;
    glo_wglCreatePbufferEXT = (PFNWGLCREATEPBUFFEREXTPROC) load(userptr, "wglCreatePbufferEXT");
    glo_wglDestroyPbufferEXT = (PFNWGLDESTROYPBUFFEREXTPROC) load(userptr, "wglDestroyPbufferEXT");
    glo_wglGetPbufferDCEXT = (PFNWGLGETPBUFFERDCEXTPROC) load(userptr, "wglGetPbufferDCEXT");
    glo_wglQueryPbufferEXT = (PFNWGLQUERYPBUFFEREXTPROC) load(userptr, "wglQueryPbufferEXT");
    glo_wglReleasePbufferDCEXT = (PFNWGLRELEASEPBUFFERDCEXTPROC) load(userptr, "wglReleasePbufferDCEXT");
}
static void glo_wgl_load_WGL_EXT_pixel_format(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_EXT_pixel_format) return;
    glo_wglChoosePixelFormatEXT = (PFNWGLCHOOSEPIXELFORMATEXTPROC) load(userptr, "wglChoosePixelFormatEXT");
    glo_wglGetPixelFormatAttribfvEXT = (PFNWGLGETPIXELFORMATATTRIBFVEXTPROC) load(userptr, "wglGetPixelFormatAttribfvEXT");
    glo_wglGetPixelFormatAttribivEXT = (PFNWGLGETPIXELFORMATATTRIBIVEXTPROC) load(userptr, "wglGetPixelFormatAttribivEXT");
}
static void glo_wgl_load_WGL_EXT_swap_control(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_EXT_swap_control) return;
    glo_wglGetSwapIntervalEXT = (PFNWGLGETSWAPINTERVALEXTPROC) load(userptr, "wglGetSwapIntervalEXT");
    glo_wglSwapIntervalEXT = (PFNWGLSWAPINTERVALEXTPROC) load(userptr, "wglSwapIntervalEXT");
}
static void glo_wgl_load_WGL_I3D_digital_video_control(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_I3D_digital_video_control) return;
    glo_wglGetDigitalVideoParametersI3D = (PFNWGLGETDIGITALVIDEOPARAMETERSI3DPROC) load(userptr, "wglGetDigitalVideoParametersI3D");
    glo_wglSetDigitalVideoParametersI3D = (PFNWGLSETDIGITALVIDEOPARAMETERSI3DPROC) load(userptr, "wglSetDigitalVideoParametersI3D");
}
static void glo_wgl_load_WGL_I3D_gamma(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_I3D_gamma) return;
    glo_wglGetGammaTableI3D = (PFNWGLGETGAMMATABLEI3DPROC) load(userptr, "wglGetGammaTableI3D");
    glo_wglGetGammaTableParametersI3D = (PFNWGLGETGAMMATABLEPARAMETERSI3DPROC) load(userptr, "wglGetGammaTableParametersI3D");
    glo_wglSetGammaTableI3D = (PFNWGLSETGAMMATABLEI3DPROC) load(userptr, "wglSetGammaTableI3D");
    glo_wglSetGammaTableParametersI3D = (PFNWGLSETGAMMATABLEPARAMETERSI3DPROC) load(userptr, "wglSetGammaTableParametersI3D");
}
static void glo_wgl_load_WGL_I3D_genlock(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_I3D_genlock) return;
    glo_wglDisableGenlockI3D = (PFNWGLDISABLEGENLOCKI3DPROC) load(userptr, "wglDisableGenlockI3D");
    glo_wglEnableGenlockI3D = (PFNWGLENABLEGENLOCKI3DPROC) load(userptr, "wglEnableGenlockI3D");
    glo_wglGenlockSampleRateI3D = (PFNWGLGENLOCKSAMPLERATEI3DPROC) load(userptr, "wglGenlockSampleRateI3D");
    glo_wglGenlockSourceDelayI3D = (PFNWGLGENLOCKSOURCEDELAYI3DPROC) load(userptr, "wglGenlockSourceDelayI3D");
    glo_wglGenlockSourceEdgeI3D = (PFNWGLGENLOCKSOURCEEDGEI3DPROC) load(userptr, "wglGenlockSourceEdgeI3D");
    glo_wglGenlockSourceI3D = (PFNWGLGENLOCKSOURCEI3DPROC) load(userptr, "wglGenlockSourceI3D");
    glo_wglGetGenlockSampleRateI3D = (PFNWGLGETGENLOCKSAMPLERATEI3DPROC) load(userptr, "wglGetGenlockSampleRateI3D");
    glo_wglGetGenlockSourceDelayI3D = (PFNWGLGETGENLOCKSOURCEDELAYI3DPROC) load(userptr, "wglGetGenlockSourceDelayI3D");
    glo_wglGetGenlockSourceEdgeI3D = (PFNWGLGETGENLOCKSOURCEEDGEI3DPROC) load(userptr, "wglGetGenlockSourceEdgeI3D");
    glo_wglGetGenlockSourceI3D = (PFNWGLGETGENLOCKSOURCEI3DPROC) load(userptr, "wglGetGenlockSourceI3D");
    glo_wglIsEnabledGenlockI3D = (PFNWGLISENABLEDGENLOCKI3DPROC) load(userptr, "wglIsEnabledGenlockI3D");
    glo_wglQueryGenlockMaxSourceDelayI3D = (PFNWGLQUERYGENLOCKMAXSOURCEDELAYI3DPROC) load(userptr, "wglQueryGenlockMaxSourceDelayI3D");
}
static void glo_wgl_load_WGL_I3D_image_buffer(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_I3D_image_buffer) return;
    glo_wglAssociateImageBufferEventsI3D = (PFNWGLASSOCIATEIMAGEBUFFEREVENTSI3DPROC) load(userptr, "wglAssociateImageBufferEventsI3D");
    glo_wglCreateImageBufferI3D = (PFNWGLCREATEIMAGEBUFFERI3DPROC) load(userptr, "wglCreateImageBufferI3D");
    glo_wglDestroyImageBufferI3D = (PFNWGLDESTROYIMAGEBUFFERI3DPROC) load(userptr, "wglDestroyImageBufferI3D");
    glo_wglReleaseImageBufferEventsI3D = (PFNWGLRELEASEIMAGEBUFFEREVENTSI3DPROC) load(userptr, "wglReleaseImageBufferEventsI3D");
}
static void glo_wgl_load_WGL_I3D_swap_frame_lock(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_I3D_swap_frame_lock) return;
    glo_wglDisableFrameLockI3D = (PFNWGLDISABLEFRAMELOCKI3DPROC) load(userptr, "wglDisableFrameLockI3D");
    glo_wglEnableFrameLockI3D = (PFNWGLENABLEFRAMELOCKI3DPROC) load(userptr, "wglEnableFrameLockI3D");
    glo_wglIsEnabledFrameLockI3D = (PFNWGLISENABLEDFRAMELOCKI3DPROC) load(userptr, "wglIsEnabledFrameLockI3D");
    glo_wglQueryFrameLockMasterI3D = (PFNWGLQUERYFRAMELOCKMASTERI3DPROC) load(userptr, "wglQueryFrameLockMasterI3D");
}
static void glo_wgl_load_WGL_I3D_swap_frame_usage(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_I3D_swap_frame_usage) return;
    glo_wglBeginFrameTrackingI3D = (PFNWGLBEGINFRAMETRACKINGI3DPROC) load(userptr, "wglBeginFrameTrackingI3D");
    glo_wglEndFrameTrackingI3D = (PFNWGLENDFRAMETRACKINGI3DPROC) load(userptr, "wglEndFrameTrackingI3D");
    glo_wglGetFrameUsageI3D = (PFNWGLGETFRAMEUSAGEI3DPROC) load(userptr, "wglGetFrameUsageI3D");
    glo_wglQueryFrameTrackingI3D = (PFNWGLQUERYFRAMETRACKINGI3DPROC) load(userptr, "wglQueryFrameTrackingI3D");
}
static void glo_wgl_load_WGL_NV_DX_interop(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_DX_interop) return;
    glo_wglDXCloseDeviceNV = (PFNWGLDXCLOSEDEVICENVPROC) load(userptr, "wglDXCloseDeviceNV");
    glo_wglDXLockObjectsNV = (PFNWGLDXLOCKOBJECTSNVPROC) load(userptr, "wglDXLockObjectsNV");
    glo_wglDXObjectAccessNV = (PFNWGLDXOBJECTACCESSNVPROC) load(userptr, "wglDXObjectAccessNV");
    glo_wglDXOpenDeviceNV = (PFNWGLDXOPENDEVICENVPROC) load(userptr, "wglDXOpenDeviceNV");
    glo_wglDXRegisterObjectNV = (PFNWGLDXREGISTEROBJECTNVPROC) load(userptr, "wglDXRegisterObjectNV");
    glo_wglDXSetResourceShareHandleNV = (PFNWGLDXSETRESOURCESHAREHANDLENVPROC) load(userptr, "wglDXSetResourceShareHandleNV");
    glo_wglDXUnlockObjectsNV = (PFNWGLDXUNLOCKOBJECTSNVPROC) load(userptr, "wglDXUnlockObjectsNV");
    glo_wglDXUnregisterObjectNV = (PFNWGLDXUNREGISTEROBJECTNVPROC) load(userptr, "wglDXUnregisterObjectNV");
}
static void glo_wgl_load_WGL_NV_copy_image(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_copy_image) return;
    glo_wglCopyImageSubDataNV = (PFNWGLCOPYIMAGESUBDATANVPROC) load(userptr, "wglCopyImageSubDataNV");
}
static void glo_wgl_load_WGL_NV_delay_before_swap(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_delay_before_swap) return;
    glo_wglDelayBeforeSwapNV = (PFNWGLDELAYBEFORESWAPNVPROC) load(userptr, "wglDelayBeforeSwapNV");
}
static void glo_wgl_load_WGL_NV_gpu_affinity(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_gpu_affinity) return;
    glo_wglCreateAffinityDCNV = (PFNWGLCREATEAFFINITYDCNVPROC) load(userptr, "wglCreateAffinityDCNV");
    glo_wglDeleteDCNV = (PFNWGLDELETEDCNVPROC) load(userptr, "wglDeleteDCNV");
    glo_wglEnumGpuDevicesNV = (PFNWGLENUMGPUDEVICESNVPROC) load(userptr, "wglEnumGpuDevicesNV");
    glo_wglEnumGpusFromAffinityDCNV = (PFNWGLENUMGPUSFROMAFFINITYDCNVPROC) load(userptr, "wglEnumGpusFromAffinityDCNV");
    glo_wglEnumGpusNV = (PFNWGLENUMGPUSNVPROC) load(userptr, "wglEnumGpusNV");
}
static void glo_wgl_load_WGL_NV_present_video(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_present_video) return;
    glo_wglBindVideoDeviceNV = (PFNWGLBINDVIDEODEVICENVPROC) load(userptr, "wglBindVideoDeviceNV");
    glo_wglEnumerateVideoDevicesNV = (PFNWGLENUMERATEVIDEODEVICESNVPROC) load(userptr, "wglEnumerateVideoDevicesNV");
    glo_wglQueryCurrentContextNV = (PFNWGLQUERYCURRENTCONTEXTNVPROC) load(userptr, "wglQueryCurrentContextNV");
}
static void glo_wgl_load_WGL_NV_swap_group(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_swap_group) return;
    glo_wglBindSwapBarrierNV = (PFNWGLBINDSWAPBARRIERNVPROC) load(userptr, "wglBindSwapBarrierNV");
    glo_wglJoinSwapGroupNV = (PFNWGLJOINSWAPGROUPNVPROC) load(userptr, "wglJoinSwapGroupNV");
    glo_wglQueryFrameCountNV = (PFNWGLQUERYFRAMECOUNTNVPROC) load(userptr, "wglQueryFrameCountNV");
    glo_wglQueryMaxSwapGroupsNV = (PFNWGLQUERYMAXSWAPGROUPSNVPROC) load(userptr, "wglQueryMaxSwapGroupsNV");
    glo_wglQuerySwapGroupNV = (PFNWGLQUERYSWAPGROUPNVPROC) load(userptr, "wglQuerySwapGroupNV");
    glo_wglResetFrameCountNV = (PFNWGLRESETFRAMECOUNTNVPROC) load(userptr, "wglResetFrameCountNV");
}
static void glo_wgl_load_WGL_NV_vertex_array_range(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_vertex_array_range) return;
    glo_wglAllocateMemoryNV = (PFNWGLALLOCATEMEMORYNVPROC) load(userptr, "wglAllocateMemoryNV");
    glo_wglFreeMemoryNV = (PFNWGLFREEMEMORYNVPROC) load(userptr, "wglFreeMemoryNV");
}
static void glo_wgl_load_WGL_NV_video_capture(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_video_capture) return;
    glo_wglBindVideoCaptureDeviceNV = (PFNWGLBINDVIDEOCAPTUREDEVICENVPROC) load(userptr, "wglBindVideoCaptureDeviceNV");
    glo_wglEnumerateVideoCaptureDevicesNV = (PFNWGLENUMERATEVIDEOCAPTUREDEVICESNVPROC) load(userptr, "wglEnumerateVideoCaptureDevicesNV");
    glo_wglLockVideoCaptureDeviceNV = (PFNWGLLOCKVIDEOCAPTUREDEVICENVPROC) load(userptr, "wglLockVideoCaptureDeviceNV");
    glo_wglQueryVideoCaptureDeviceNV = (PFNWGLQUERYVIDEOCAPTUREDEVICENVPROC) load(userptr, "wglQueryVideoCaptureDeviceNV");
    glo_wglReleaseVideoCaptureDeviceNV = (PFNWGLRELEASEVIDEOCAPTUREDEVICENVPROC) load(userptr, "wglReleaseVideoCaptureDeviceNV");
}
static void glo_wgl_load_WGL_NV_video_output(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_NV_video_output) return;
    glo_wglBindVideoImageNV = (PFNWGLBINDVIDEOIMAGENVPROC) load(userptr, "wglBindVideoImageNV");
    glo_wglGetVideoDeviceNV = (PFNWGLGETVIDEODEVICENVPROC) load(userptr, "wglGetVideoDeviceNV");
    glo_wglGetVideoInfoNV = (PFNWGLGETVIDEOINFONVPROC) load(userptr, "wglGetVideoInfoNV");
    glo_wglReleaseVideoDeviceNV = (PFNWGLRELEASEVIDEODEVICENVPROC) load(userptr, "wglReleaseVideoDeviceNV");
    glo_wglReleaseVideoImageNV = (PFNWGLRELEASEVIDEOIMAGENVPROC) load(userptr, "wglReleaseVideoImageNV");
    glo_wglSendPbufferToVideoNV = (PFNWGLSENDPBUFFERTOVIDEONVPROC) load(userptr, "wglSendPbufferToVideoNV");
}
static void glo_wgl_load_WGL_OML_sync_control(GLOuserptrloadfunc load, void *userptr) {
    if(!GLO_WGL_OML_sync_control) return;
    glo_wglGetMscRateOML = (PFNWGLGETMSCRATEOMLPROC) load(userptr, "wglGetMscRateOML");
    glo_wglGetSyncValuesOML = (PFNWGLGETSYNCVALUESOMLPROC) load(userptr, "wglGetSyncValuesOML");
    glo_wglSwapBuffersMscOML = (PFNWGLSWAPBUFFERSMSCOMLPROC) load(userptr, "wglSwapBuffersMscOML");
    glo_wglSwapLayerBuffersMscOML = (PFNWGLSWAPLAYERBUFFERSMSCOMLPROC) load(userptr, "wglSwapLayerBuffersMscOML");
    glo_wglWaitForMscOML = (PFNWGLWAITFORMSCOMLPROC) load(userptr, "wglWaitForMscOML");
    glo_wglWaitForSbcOML = (PFNWGLWAITFORSBCOMLPROC) load(userptr, "wglWaitForSbcOML");
}



static int glo_wgl_has_extension(HDC hdc, const char *ext) {
    const char *terminator;
    const char *loc;
    const char *extensions;

    if(wglGetExtensionsStringEXT == NULL && wglGetExtensionsStringARB == NULL)
        return 0;

    if(wglGetExtensionsStringARB == NULL || hdc == INVALID_HANDLE_VALUE)
        extensions = wglGetExtensionsStringEXT();
    else
        extensions = wglGetExtensionsStringARB(hdc);

    if(extensions == NULL || ext == NULL)
        return 0;

    while(1) {
        loc = strstr(extensions, ext);
        if(loc == NULL)
            break;

        terminator = loc + strlen(ext);
        if((loc == extensions || *(loc - 1) == ' ') &&
            (*terminator == ' ' || *terminator == '\0'))
        {
            return 1;
        }
        extensions = terminator;
    }

    return 0;
}

static GLOapiproc glo_wgl_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLO_GNUC_EXTENSION (GLOapiproc (*)(const char *name)) userptr)(name);
}

static int glo_wgl_find_extensions_wgl(HDC hdc) {
    GLO_WGL_3DFX_multisample = glo_wgl_has_extension(hdc, "WGL_3DFX_multisample");
    GLO_WGL_3DL_stereo_control = glo_wgl_has_extension(hdc, "WGL_3DL_stereo_control");
    GLO_WGL_AMD_gpu_association = glo_wgl_has_extension(hdc, "WGL_AMD_gpu_association");
    GLO_WGL_ARB_buffer_region = glo_wgl_has_extension(hdc, "WGL_ARB_buffer_region");
    GLO_WGL_ARB_context_flush_control = glo_wgl_has_extension(hdc, "WGL_ARB_context_flush_control");
    GLO_WGL_ARB_create_context = glo_wgl_has_extension(hdc, "WGL_ARB_create_context");
    GLO_WGL_ARB_create_context_no_error = glo_wgl_has_extension(hdc, "WGL_ARB_create_context_no_error");
    GLO_WGL_ARB_create_context_profile = glo_wgl_has_extension(hdc, "WGL_ARB_create_context_profile");
    GLO_WGL_ARB_create_context_robustness = glo_wgl_has_extension(hdc, "WGL_ARB_create_context_robustness");
    GLO_WGL_ARB_extensions_string = glo_wgl_has_extension(hdc, "WGL_ARB_extensions_string");
    GLO_WGL_ARB_framebuffer_sRGB = glo_wgl_has_extension(hdc, "WGL_ARB_framebuffer_sRGB");
    GLO_WGL_ARB_make_current_read = glo_wgl_has_extension(hdc, "WGL_ARB_make_current_read");
    GLO_WGL_ARB_multisample = glo_wgl_has_extension(hdc, "WGL_ARB_multisample");
    GLO_WGL_ARB_pbuffer = glo_wgl_has_extension(hdc, "WGL_ARB_pbuffer");
    GLO_WGL_ARB_pixel_format = glo_wgl_has_extension(hdc, "WGL_ARB_pixel_format");
    GLO_WGL_ARB_pixel_format_float = glo_wgl_has_extension(hdc, "WGL_ARB_pixel_format_float");
    GLO_WGL_ARB_render_texture = glo_wgl_has_extension(hdc, "WGL_ARB_render_texture");
    GLO_WGL_ARB_robustness_application_isolation = glo_wgl_has_extension(hdc, "WGL_ARB_robustness_application_isolation");
    GLO_WGL_ARB_robustness_share_group_isolation = glo_wgl_has_extension(hdc, "WGL_ARB_robustness_share_group_isolation");
    GLO_WGL_ATI_pixel_format_float = glo_wgl_has_extension(hdc, "WGL_ATI_pixel_format_float");
    GLO_WGL_ATI_render_texture_rectangle = glo_wgl_has_extension(hdc, "WGL_ATI_render_texture_rectangle");
    GLO_WGL_EXT_colorspace = glo_wgl_has_extension(hdc, "WGL_EXT_colorspace");
    GLO_WGL_EXT_create_context_es2_profile = glo_wgl_has_extension(hdc, "WGL_EXT_create_context_es2_profile");
    GLO_WGL_EXT_create_context_es_profile = glo_wgl_has_extension(hdc, "WGL_EXT_create_context_es_profile");
    GLO_WGL_EXT_depth_float = glo_wgl_has_extension(hdc, "WGL_EXT_depth_float");
    GLO_WGL_EXT_display_color_table = glo_wgl_has_extension(hdc, "WGL_EXT_display_color_table");
    GLO_WGL_EXT_extensions_string = glo_wgl_has_extension(hdc, "WGL_EXT_extensions_string");
    GLO_WGL_EXT_framebuffer_sRGB = glo_wgl_has_extension(hdc, "WGL_EXT_framebuffer_sRGB");
    GLO_WGL_EXT_make_current_read = glo_wgl_has_extension(hdc, "WGL_EXT_make_current_read");
    GLO_WGL_EXT_multisample = glo_wgl_has_extension(hdc, "WGL_EXT_multisample");
    GLO_WGL_EXT_pbuffer = glo_wgl_has_extension(hdc, "WGL_EXT_pbuffer");
    GLO_WGL_EXT_pixel_format = glo_wgl_has_extension(hdc, "WGL_EXT_pixel_format");
    GLO_WGL_EXT_pixel_format_packed_float = glo_wgl_has_extension(hdc, "WGL_EXT_pixel_format_packed_float");
    GLO_WGL_EXT_swap_control = glo_wgl_has_extension(hdc, "WGL_EXT_swap_control");
    GLO_WGL_EXT_swap_control_tear = glo_wgl_has_extension(hdc, "WGL_EXT_swap_control_tear");
    GLO_WGL_I3D_digital_video_control = glo_wgl_has_extension(hdc, "WGL_I3D_digital_video_control");
    GLO_WGL_I3D_gamma = glo_wgl_has_extension(hdc, "WGL_I3D_gamma");
    GLO_WGL_I3D_genlock = glo_wgl_has_extension(hdc, "WGL_I3D_genlock");
    GLO_WGL_I3D_image_buffer = glo_wgl_has_extension(hdc, "WGL_I3D_image_buffer");
    GLO_WGL_I3D_swap_frame_lock = glo_wgl_has_extension(hdc, "WGL_I3D_swap_frame_lock");
    GLO_WGL_I3D_swap_frame_usage = glo_wgl_has_extension(hdc, "WGL_I3D_swap_frame_usage");
    GLO_WGL_NV_DX_interop = glo_wgl_has_extension(hdc, "WGL_NV_DX_interop");
    GLO_WGL_NV_DX_interop2 = glo_wgl_has_extension(hdc, "WGL_NV_DX_interop2");
    GLO_WGL_NV_copy_image = glo_wgl_has_extension(hdc, "WGL_NV_copy_image");
    GLO_WGL_NV_delay_before_swap = glo_wgl_has_extension(hdc, "WGL_NV_delay_before_swap");
    GLO_WGL_NV_float_buffer = glo_wgl_has_extension(hdc, "WGL_NV_float_buffer");
    GLO_WGL_NV_gpu_affinity = glo_wgl_has_extension(hdc, "WGL_NV_gpu_affinity");
    GLO_WGL_NV_multigpu_context = glo_wgl_has_extension(hdc, "WGL_NV_multigpu_context");
    GLO_WGL_NV_multisample_coverage = glo_wgl_has_extension(hdc, "WGL_NV_multisample_coverage");
    GLO_WGL_NV_present_video = glo_wgl_has_extension(hdc, "WGL_NV_present_video");
    GLO_WGL_NV_render_depth_texture = glo_wgl_has_extension(hdc, "WGL_NV_render_depth_texture");
    GLO_WGL_NV_render_texture_rectangle = glo_wgl_has_extension(hdc, "WGL_NV_render_texture_rectangle");
    GLO_WGL_NV_swap_group = glo_wgl_has_extension(hdc, "WGL_NV_swap_group");
    GLO_WGL_NV_vertex_array_range = glo_wgl_has_extension(hdc, "WGL_NV_vertex_array_range");
    GLO_WGL_NV_video_capture = glo_wgl_has_extension(hdc, "WGL_NV_video_capture");
    GLO_WGL_NV_video_output = glo_wgl_has_extension(hdc, "WGL_NV_video_output");
    GLO_WGL_OML_sync_control = glo_wgl_has_extension(hdc, "WGL_OML_sync_control");
    return 1;
}

static int glo_wgl_find_core_wgl(void) {
    int major = 1, minor = 0;
    GLO_WGL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    return GLO_MAKE_VERSION(major, minor);
}

int gloLoadWGLUserPtr(HDC hdc, GLOuserptrloadfunc load, void *userptr) {
    int version;
    wglGetExtensionsStringARB = (PFNWGLGETEXTENSIONSSTRINGARBPROC) load(userptr, "wglGetExtensionsStringARB");
    wglGetExtensionsStringEXT = (PFNWGLGETEXTENSIONSSTRINGEXTPROC) load(userptr, "wglGetExtensionsStringEXT");
    if(wglGetExtensionsStringARB == NULL && wglGetExtensionsStringEXT == NULL) return 0;
    version = glo_wgl_find_core_wgl();


    if (!glo_wgl_find_extensions_wgl(hdc)) return 0;
    glo_wgl_load_WGL_3DL_stereo_control(load, userptr);
    glo_wgl_load_WGL_AMD_gpu_association(load, userptr);
    glo_wgl_load_WGL_ARB_buffer_region(load, userptr);
    glo_wgl_load_WGL_ARB_create_context(load, userptr);
    glo_wgl_load_WGL_ARB_extensions_string(load, userptr);
    glo_wgl_load_WGL_ARB_make_current_read(load, userptr);
    glo_wgl_load_WGL_ARB_pbuffer(load, userptr);
    glo_wgl_load_WGL_ARB_pixel_format(load, userptr);
    glo_wgl_load_WGL_ARB_render_texture(load, userptr);
    glo_wgl_load_WGL_EXT_display_color_table(load, userptr);
    glo_wgl_load_WGL_EXT_extensions_string(load, userptr);
    glo_wgl_load_WGL_EXT_make_current_read(load, userptr);
    glo_wgl_load_WGL_EXT_pbuffer(load, userptr);
    glo_wgl_load_WGL_EXT_pixel_format(load, userptr);
    glo_wgl_load_WGL_EXT_swap_control(load, userptr);
    glo_wgl_load_WGL_I3D_digital_video_control(load, userptr);
    glo_wgl_load_WGL_I3D_gamma(load, userptr);
    glo_wgl_load_WGL_I3D_genlock(load, userptr);
    glo_wgl_load_WGL_I3D_image_buffer(load, userptr);
    glo_wgl_load_WGL_I3D_swap_frame_lock(load, userptr);
    glo_wgl_load_WGL_I3D_swap_frame_usage(load, userptr);
    glo_wgl_load_WGL_NV_DX_interop(load, userptr);
    glo_wgl_load_WGL_NV_copy_image(load, userptr);
    glo_wgl_load_WGL_NV_delay_before_swap(load, userptr);
    glo_wgl_load_WGL_NV_gpu_affinity(load, userptr);
    glo_wgl_load_WGL_NV_present_video(load, userptr);
    glo_wgl_load_WGL_NV_swap_group(load, userptr);
    glo_wgl_load_WGL_NV_vertex_array_range(load, userptr);
    glo_wgl_load_WGL_NV_video_capture(load, userptr);
    glo_wgl_load_WGL_NV_video_output(load, userptr);
    glo_wgl_load_WGL_OML_sync_control(load, userptr);


    return version;
}

int gloLoadWGL(HDC hdc, GLOloadfunc load) {
    return gloLoadWGLUserPtr(hdc, glo_wgl_get_proc_from_userptr, GLO_GNUC_EXTENSION (void*) load);
}
 

#ifdef GLO_WGL

static GLOapiproc glo_wgl_get_proc(void *vuserptr, const char* name) {
    GLO_UNUSED(vuserptr);
    return GLO_GNUC_EXTENSION (GLOapiproc) wglGetProcAddress(name);
}

int gloLoaderLoadWGL(HDC hdc) {
    return gloLoadWGLUserPtr(hdc, glo_wgl_get_proc, NULL);
}


#endif /* GLO_WGL */

#ifdef __cplusplus
}
#endif

#endif
