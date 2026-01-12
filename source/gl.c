/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glo/gl.h>

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



int GLO_GL_VERSION_1_0 = 0;
int GLO_GL_VERSION_1_1 = 0;
int GLO_GL_VERSION_1_2 = 0;
int GLO_GL_VERSION_1_3 = 0;
int GLO_GL_VERSION_1_4 = 0;
int GLO_GL_VERSION_1_5 = 0;
int GLO_GL_VERSION_2_0 = 0;
int GLO_GL_VERSION_2_1 = 0;
int GLO_GL_VERSION_3_0 = 0;
int GLO_GL_VERSION_3_1 = 0;
int GLO_GL_VERSION_3_2 = 0;
int GLO_GL_VERSION_3_3 = 0;
int GLO_GL_VERSION_4_0 = 0;
int GLO_GL_VERSION_4_1 = 0;
int GLO_GL_VERSION_4_2 = 0;
int GLO_GL_VERSION_4_3 = 0;
int GLO_GL_VERSION_4_4 = 0;
int GLO_GL_VERSION_4_5 = 0;
int GLO_GL_VERSION_4_6 = 0;
int GLO_GL_3DFX_multisample = 0;
int GLO_GL_3DFX_tbuffer = 0;
int GLO_GL_3DFX_texture_compression_FXT1 = 0;
int GLO_GL_AMD_blend_minmax_factor = 0;
int GLO_GL_AMD_conservative_depth = 0;
int GLO_GL_AMD_debug_output = 0;
int GLO_GL_AMD_depth_clamp_separate = 0;
int GLO_GL_AMD_draw_buffers_blend = 0;
int GLO_GL_AMD_framebuffer_multisample_advanced = 0;
int GLO_GL_AMD_framebuffer_sample_positions = 0;
int GLO_GL_AMD_gcn_shader = 0;
int GLO_GL_AMD_gpu_shader_half_float = 0;
int GLO_GL_AMD_gpu_shader_int16 = 0;
int GLO_GL_AMD_gpu_shader_int64 = 0;
int GLO_GL_AMD_interleaved_elements = 0;
int GLO_GL_AMD_multi_draw_indirect = 0;
int GLO_GL_AMD_name_gen_delete = 0;
int GLO_GL_AMD_occlusion_query_event = 0;
int GLO_GL_AMD_performance_monitor = 0;
int GLO_GL_AMD_pinned_memory = 0;
int GLO_GL_AMD_query_buffer_object = 0;
int GLO_GL_AMD_sample_positions = 0;
int GLO_GL_AMD_seamless_cubemap_per_texture = 0;
int GLO_GL_AMD_shader_atomic_counter_ops = 0;
int GLO_GL_AMD_shader_ballot = 0;
int GLO_GL_AMD_shader_explicit_vertex_parameter = 0;
int GLO_GL_AMD_shader_gpu_shader_half_float_fetch = 0;
int GLO_GL_AMD_shader_image_load_store_lod = 0;
int GLO_GL_AMD_shader_stencil_export = 0;
int GLO_GL_AMD_shader_trinary_minmax = 0;
int GLO_GL_AMD_sparse_texture = 0;
int GLO_GL_AMD_stencil_operation_extended = 0;
int GLO_GL_AMD_texture_gather_bias_lod = 0;
int GLO_GL_AMD_texture_texture4 = 0;
int GLO_GL_AMD_transform_feedback3_lines_triangles = 0;
int GLO_GL_AMD_transform_feedback4 = 0;
int GLO_GL_AMD_vertex_shader_layer = 0;
int GLO_GL_AMD_vertex_shader_tessellator = 0;
int GLO_GL_AMD_vertex_shader_viewport_index = 0;
int GLO_GL_APPLE_aux_depth_stencil = 0;
int GLO_GL_APPLE_client_storage = 0;
int GLO_GL_APPLE_element_array = 0;
int GLO_GL_APPLE_fence = 0;
int GLO_GL_APPLE_float_pixels = 0;
int GLO_GL_APPLE_flush_buffer_range = 0;
int GLO_GL_APPLE_object_purgeable = 0;
int GLO_GL_APPLE_rgb_422 = 0;
int GLO_GL_APPLE_row_bytes = 0;
int GLO_GL_APPLE_specular_vector = 0;
int GLO_GL_APPLE_texture_range = 0;
int GLO_GL_APPLE_transform_hint = 0;
int GLO_GL_APPLE_vertex_array_object = 0;
int GLO_GL_APPLE_vertex_array_range = 0;
int GLO_GL_APPLE_vertex_program_evaluators = 0;
int GLO_GL_APPLE_ycbcr_422 = 0;
int GLO_GL_ARB_ES2_compatibility = 0;
int GLO_GL_ARB_ES3_1_compatibility = 0;
int GLO_GL_ARB_ES3_2_compatibility = 0;
int GLO_GL_ARB_ES3_compatibility = 0;
int GLO_GL_ARB_arrays_of_arrays = 0;
int GLO_GL_ARB_base_instance = 0;
int GLO_GL_ARB_bindless_texture = 0;
int GLO_GL_ARB_blend_func_extended = 0;
int GLO_GL_ARB_buffer_storage = 0;
int GLO_GL_ARB_cl_event = 0;
int GLO_GL_ARB_clear_buffer_object = 0;
int GLO_GL_ARB_clear_texture = 0;
int GLO_GL_ARB_clip_control = 0;
int GLO_GL_ARB_color_buffer_float = 0;
int GLO_GL_ARB_compatibility = 0;
int GLO_GL_ARB_compressed_texture_pixel_storage = 0;
int GLO_GL_ARB_compute_shader = 0;
int GLO_GL_ARB_compute_variable_group_size = 0;
int GLO_GL_ARB_conditional_render_inverted = 0;
int GLO_GL_ARB_conservative_depth = 0;
int GLO_GL_ARB_copy_buffer = 0;
int GLO_GL_ARB_copy_image = 0;
int GLO_GL_ARB_cull_distance = 0;
int GLO_GL_ARB_debug_output = 0;
int GLO_GL_ARB_depth_buffer_float = 0;
int GLO_GL_ARB_depth_clamp = 0;
int GLO_GL_ARB_depth_texture = 0;
int GLO_GL_ARB_derivative_control = 0;
int GLO_GL_ARB_direct_state_access = 0;
int GLO_GL_ARB_draw_buffers = 0;
int GLO_GL_ARB_draw_buffers_blend = 0;
int GLO_GL_ARB_draw_elements_base_vertex = 0;
int GLO_GL_ARB_draw_indirect = 0;
int GLO_GL_ARB_draw_instanced = 0;
int GLO_GL_ARB_enhanced_layouts = 0;
int GLO_GL_ARB_explicit_attrib_location = 0;
int GLO_GL_ARB_explicit_uniform_location = 0;
int GLO_GL_ARB_fragment_coord_conventions = 0;
int GLO_GL_ARB_fragment_layer_viewport = 0;
int GLO_GL_ARB_fragment_program = 0;
int GLO_GL_ARB_fragment_program_shadow = 0;
int GLO_GL_ARB_fragment_shader = 0;
int GLO_GL_ARB_fragment_shader_interlock = 0;
int GLO_GL_ARB_framebuffer_no_attachments = 0;
int GLO_GL_ARB_framebuffer_object = 0;
int GLO_GL_ARB_framebuffer_sRGB = 0;
int GLO_GL_ARB_geometry_shader4 = 0;
int GLO_GL_ARB_get_program_binary = 0;
int GLO_GL_ARB_get_texture_sub_image = 0;
int GLO_GL_ARB_gl_spirv = 0;
int GLO_GL_ARB_gpu_shader5 = 0;
int GLO_GL_ARB_gpu_shader_fp64 = 0;
int GLO_GL_ARB_gpu_shader_int64 = 0;
int GLO_GL_ARB_half_float_pixel = 0;
int GLO_GL_ARB_half_float_vertex = 0;
int GLO_GL_ARB_imaging = 0;
int GLO_GL_ARB_indirect_parameters = 0;
int GLO_GL_ARB_instanced_arrays = 0;
int GLO_GL_ARB_internalformat_query = 0;
int GLO_GL_ARB_internalformat_query2 = 0;
int GLO_GL_ARB_invalidate_subdata = 0;
int GLO_GL_ARB_map_buffer_alignment = 0;
int GLO_GL_ARB_map_buffer_range = 0;
int GLO_GL_ARB_matrix_palette = 0;
int GLO_GL_ARB_multi_bind = 0;
int GLO_GL_ARB_multi_draw_indirect = 0;
int GLO_GL_ARB_multisample = 0;
int GLO_GL_ARB_multitexture = 0;
int GLO_GL_ARB_occlusion_query = 0;
int GLO_GL_ARB_occlusion_query2 = 0;
int GLO_GL_ARB_parallel_shader_compile = 0;
int GLO_GL_ARB_pipeline_statistics_query = 0;
int GLO_GL_ARB_pixel_buffer_object = 0;
int GLO_GL_ARB_point_parameters = 0;
int GLO_GL_ARB_point_sprite = 0;
int GLO_GL_ARB_polygon_offset_clamp = 0;
int GLO_GL_ARB_post_depth_coverage = 0;
int GLO_GL_ARB_program_interface_query = 0;
int GLO_GL_ARB_provoking_vertex = 0;
int GLO_GL_ARB_query_buffer_object = 0;
int GLO_GL_ARB_robust_buffer_access_behavior = 0;
int GLO_GL_ARB_robustness = 0;
int GLO_GL_ARB_robustness_isolation = 0;
int GLO_GL_ARB_sample_locations = 0;
int GLO_GL_ARB_sample_shading = 0;
int GLO_GL_ARB_sampler_objects = 0;
int GLO_GL_ARB_seamless_cube_map = 0;
int GLO_GL_ARB_seamless_cubemap_per_texture = 0;
int GLO_GL_ARB_separate_shader_objects = 0;
int GLO_GL_ARB_shader_atomic_counter_ops = 0;
int GLO_GL_ARB_shader_atomic_counters = 0;
int GLO_GL_ARB_shader_ballot = 0;
int GLO_GL_ARB_shader_bit_encoding = 0;
int GLO_GL_ARB_shader_clock = 0;
int GLO_GL_ARB_shader_draw_parameters = 0;
int GLO_GL_ARB_shader_group_vote = 0;
int GLO_GL_ARB_shader_image_load_store = 0;
int GLO_GL_ARB_shader_image_size = 0;
int GLO_GL_ARB_shader_objects = 0;
int GLO_GL_ARB_shader_precision = 0;
int GLO_GL_ARB_shader_stencil_export = 0;
int GLO_GL_ARB_shader_storage_buffer_object = 0;
int GLO_GL_ARB_shader_subroutine = 0;
int GLO_GL_ARB_shader_texture_image_samples = 0;
int GLO_GL_ARB_shader_texture_lod = 0;
int GLO_GL_ARB_shader_viewport_layer_array = 0;
int GLO_GL_ARB_shading_language_100 = 0;
int GLO_GL_ARB_shading_language_420pack = 0;
int GLO_GL_ARB_shading_language_include = 0;
int GLO_GL_ARB_shading_language_packing = 0;
int GLO_GL_ARB_shadow = 0;
int GLO_GL_ARB_shadow_ambient = 0;
int GLO_GL_ARB_sparse_buffer = 0;
int GLO_GL_ARB_sparse_texture = 0;
int GLO_GL_ARB_sparse_texture2 = 0;
int GLO_GL_ARB_sparse_texture_clamp = 0;
int GLO_GL_ARB_spirv_extensions = 0;
int GLO_GL_ARB_stencil_texturing = 0;
int GLO_GL_ARB_sync = 0;
int GLO_GL_ARB_tessellation_shader = 0;
int GLO_GL_ARB_texture_barrier = 0;
int GLO_GL_ARB_texture_border_clamp = 0;
int GLO_GL_ARB_texture_buffer_object = 0;
int GLO_GL_ARB_texture_buffer_object_rgb32 = 0;
int GLO_GL_ARB_texture_buffer_range = 0;
int GLO_GL_ARB_texture_compression = 0;
int GLO_GL_ARB_texture_compression_bptc = 0;
int GLO_GL_ARB_texture_compression_rgtc = 0;
int GLO_GL_ARB_texture_cube_map = 0;
int GLO_GL_ARB_texture_cube_map_array = 0;
int GLO_GL_ARB_texture_env_add = 0;
int GLO_GL_ARB_texture_env_combine = 0;
int GLO_GL_ARB_texture_env_crossbar = 0;
int GLO_GL_ARB_texture_env_dot3 = 0;
int GLO_GL_ARB_texture_filter_anisotropic = 0;
int GLO_GL_ARB_texture_filter_minmax = 0;
int GLO_GL_ARB_texture_float = 0;
int GLO_GL_ARB_texture_gather = 0;
int GLO_GL_ARB_texture_mirror_clamp_to_edge = 0;
int GLO_GL_ARB_texture_mirrored_repeat = 0;
int GLO_GL_ARB_texture_multisample = 0;
int GLO_GL_ARB_texture_non_power_of_two = 0;
int GLO_GL_ARB_texture_query_levels = 0;
int GLO_GL_ARB_texture_query_lod = 0;
int GLO_GL_ARB_texture_rectangle = 0;
int GLO_GL_ARB_texture_rg = 0;
int GLO_GL_ARB_texture_rgb10_a2ui = 0;
int GLO_GL_ARB_texture_stencil8 = 0;
int GLO_GL_ARB_texture_storage = 0;
int GLO_GL_ARB_texture_storage_multisample = 0;
int GLO_GL_ARB_texture_swizzle = 0;
int GLO_GL_ARB_texture_view = 0;
int GLO_GL_ARB_timer_query = 0;
int GLO_GL_ARB_transform_feedback2 = 0;
int GLO_GL_ARB_transform_feedback3 = 0;
int GLO_GL_ARB_transform_feedback_instanced = 0;
int GLO_GL_ARB_transform_feedback_overflow_query = 0;
int GLO_GL_ARB_transpose_matrix = 0;
int GLO_GL_ARB_uniform_buffer_object = 0;
int GLO_GL_ARB_vertex_array_bgra = 0;
int GLO_GL_ARB_vertex_array_object = 0;
int GLO_GL_ARB_vertex_attrib_64bit = 0;
int GLO_GL_ARB_vertex_attrib_binding = 0;
int GLO_GL_ARB_vertex_blend = 0;
int GLO_GL_ARB_vertex_buffer_object = 0;
int GLO_GL_ARB_vertex_program = 0;
int GLO_GL_ARB_vertex_shader = 0;
int GLO_GL_ARB_vertex_type_10f_11f_11f_rev = 0;
int GLO_GL_ARB_vertex_type_2_10_10_10_rev = 0;
int GLO_GL_ARB_viewport_array = 0;
int GLO_GL_ARB_window_pos = 0;
int GLO_GL_ATI_draw_buffers = 0;
int GLO_GL_ATI_element_array = 0;
int GLO_GL_ATI_envmap_bumpmap = 0;
int GLO_GL_ATI_fragment_shader = 0;
int GLO_GL_ATI_map_object_buffer = 0;
int GLO_GL_ATI_meminfo = 0;
int GLO_GL_ATI_pixel_format_float = 0;
int GLO_GL_ATI_pn_triangles = 0;
int GLO_GL_ATI_separate_stencil = 0;
int GLO_GL_ATI_text_fragment_shader = 0;
int GLO_GL_ATI_texture_env_combine3 = 0;
int GLO_GL_ATI_texture_float = 0;
int GLO_GL_ATI_texture_mirror_once = 0;
int GLO_GL_ATI_vertex_array_object = 0;
int GLO_GL_ATI_vertex_attrib_array_object = 0;
int GLO_GL_ATI_vertex_streams = 0;
int GLO_GL_EXT_422_pixels = 0;
int GLO_GL_EXT_EGL_image_storage = 0;
int GLO_GL_EXT_EGL_sync = 0;
int GLO_GL_EXT_abgr = 0;
int GLO_GL_EXT_bgra = 0;
int GLO_GL_EXT_bindable_uniform = 0;
int GLO_GL_EXT_blend_color = 0;
int GLO_GL_EXT_blend_equation_separate = 0;
int GLO_GL_EXT_blend_func_separate = 0;
int GLO_GL_EXT_blend_logic_op = 0;
int GLO_GL_EXT_blend_minmax = 0;
int GLO_GL_EXT_blend_subtract = 0;
int GLO_GL_EXT_clip_volume_hint = 0;
int GLO_GL_EXT_cmyka = 0;
int GLO_GL_EXT_color_subtable = 0;
int GLO_GL_EXT_compiled_vertex_array = 0;
int GLO_GL_EXT_convolution = 0;
int GLO_GL_EXT_coordinate_frame = 0;
int GLO_GL_EXT_copy_texture = 0;
int GLO_GL_EXT_cull_vertex = 0;
int GLO_GL_EXT_debug_label = 0;
int GLO_GL_EXT_debug_marker = 0;
int GLO_GL_EXT_depth_bounds_test = 0;
int GLO_GL_EXT_direct_state_access = 0;
int GLO_GL_EXT_draw_buffers2 = 0;
int GLO_GL_EXT_draw_instanced = 0;
int GLO_GL_EXT_draw_range_elements = 0;
int GLO_GL_EXT_external_buffer = 0;
int GLO_GL_EXT_fog_coord = 0;
int GLO_GL_EXT_fragment_shading_rate = 0;
int GLO_GL_EXT_framebuffer_blit = 0;
int GLO_GL_EXT_framebuffer_blit_layers = 0;
int GLO_GL_EXT_framebuffer_multisample = 0;
int GLO_GL_EXT_framebuffer_multisample_blit_scaled = 0;
int GLO_GL_EXT_framebuffer_object = 0;
int GLO_GL_EXT_framebuffer_sRGB = 0;
int GLO_GL_EXT_geometry_shader4 = 0;
int GLO_GL_EXT_gpu_program_parameters = 0;
int GLO_GL_EXT_gpu_shader4 = 0;
int GLO_GL_EXT_histogram = 0;
int GLO_GL_EXT_index_array_formats = 0;
int GLO_GL_EXT_index_func = 0;
int GLO_GL_EXT_index_material = 0;
int GLO_GL_EXT_index_texture = 0;
int GLO_GL_EXT_light_texture = 0;
int GLO_GL_EXT_memory_object = 0;
int GLO_GL_EXT_memory_object_fd = 0;
int GLO_GL_EXT_memory_object_win32 = 0;
int GLO_GL_EXT_mesh_shader = 0;
int GLO_GL_EXT_misc_attribute = 0;
int GLO_GL_EXT_multi_draw_arrays = 0;
int GLO_GL_EXT_multisample = 0;
int GLO_GL_EXT_multiview_tessellation_geometry_shader = 0;
int GLO_GL_EXT_multiview_texture_multisample = 0;
int GLO_GL_EXT_multiview_timer_query = 0;
int GLO_GL_EXT_packed_depth_stencil = 0;
int GLO_GL_EXT_packed_float = 0;
int GLO_GL_EXT_packed_pixels = 0;
int GLO_GL_EXT_paletted_texture = 0;
int GLO_GL_EXT_pixel_buffer_object = 0;
int GLO_GL_EXT_pixel_transform = 0;
int GLO_GL_EXT_pixel_transform_color_table = 0;
int GLO_GL_EXT_point_parameters = 0;
int GLO_GL_EXT_polygon_offset = 0;
int GLO_GL_EXT_polygon_offset_clamp = 0;
int GLO_GL_EXT_post_depth_coverage = 0;
int GLO_GL_EXT_provoking_vertex = 0;
int GLO_GL_EXT_raster_multisample = 0;
int GLO_GL_EXT_rescale_normal = 0;
int GLO_GL_EXT_secondary_color = 0;
int GLO_GL_EXT_semaphore = 0;
int GLO_GL_EXT_semaphore_fd = 0;
int GLO_GL_EXT_semaphore_win32 = 0;
int GLO_GL_EXT_separate_shader_objects = 0;
int GLO_GL_EXT_separate_specular_color = 0;
int GLO_GL_EXT_shader_framebuffer_fetch = 0;
int GLO_GL_EXT_shader_framebuffer_fetch_non_coherent = 0;
int GLO_GL_EXT_shader_image_load_formatted = 0;
int GLO_GL_EXT_shader_image_load_store = 0;
int GLO_GL_EXT_shader_integer_mix = 0;
int GLO_GL_EXT_shader_samples_identical = 0;
int GLO_GL_EXT_shadow_funcs = 0;
int GLO_GL_EXT_shared_texture_palette = 0;
int GLO_GL_EXT_sparse_texture2 = 0;
int GLO_GL_EXT_stencil_clear_tag = 0;
int GLO_GL_EXT_stencil_two_side = 0;
int GLO_GL_EXT_stencil_wrap = 0;
int GLO_GL_EXT_subtexture = 0;
int GLO_GL_EXT_texture = 0;
int GLO_GL_EXT_texture3D = 0;
int GLO_GL_EXT_texture_array = 0;
int GLO_GL_EXT_texture_buffer_object = 0;
int GLO_GL_EXT_texture_compression_latc = 0;
int GLO_GL_EXT_texture_compression_rgtc = 0;
int GLO_GL_EXT_texture_compression_s3tc = 0;
int GLO_GL_EXT_texture_cube_map = 0;
int GLO_GL_EXT_texture_env_add = 0;
int GLO_GL_EXT_texture_env_combine = 0;
int GLO_GL_EXT_texture_env_dot3 = 0;
int GLO_GL_EXT_texture_filter_anisotropic = 0;
int GLO_GL_EXT_texture_filter_minmax = 0;
int GLO_GL_EXT_texture_integer = 0;
int GLO_GL_EXT_texture_lod_bias = 0;
int GLO_GL_EXT_texture_mirror_clamp = 0;
int GLO_GL_EXT_texture_object = 0;
int GLO_GL_EXT_texture_perturb_normal = 0;
int GLO_GL_EXT_texture_sRGB = 0;
int GLO_GL_EXT_texture_sRGB_R8 = 0;
int GLO_GL_EXT_texture_sRGB_RG8 = 0;
int GLO_GL_EXT_texture_sRGB_decode = 0;
int GLO_GL_EXT_texture_shadow_lod = 0;
int GLO_GL_EXT_texture_shared_exponent = 0;
int GLO_GL_EXT_texture_snorm = 0;
int GLO_GL_EXT_texture_storage = 0;
int GLO_GL_EXT_texture_swizzle = 0;
int GLO_GL_EXT_timer_query = 0;
int GLO_GL_EXT_transform_feedback = 0;
int GLO_GL_EXT_vertex_array = 0;
int GLO_GL_EXT_vertex_array_bgra = 0;
int GLO_GL_EXT_vertex_attrib_64bit = 0;
int GLO_GL_EXT_vertex_shader = 0;
int GLO_GL_EXT_vertex_weighting = 0;
int GLO_GL_EXT_win32_keyed_mutex = 0;
int GLO_GL_EXT_window_rectangles = 0;
int GLO_GL_EXT_x11_sync_object = 0;
int GLO_GL_GREMEDY_frame_terminator = 0;
int GLO_GL_GREMEDY_string_marker = 0;
int GLO_GL_HP_convolution_border_modes = 0;
int GLO_GL_HP_image_transform = 0;
int GLO_GL_HP_occlusion_test = 0;
int GLO_GL_HP_texture_lighting = 0;
int GLO_GL_IBM_cull_vertex = 0;
int GLO_GL_IBM_multimode_draw_arrays = 0;
int GLO_GL_IBM_rasterpos_clip = 0;
int GLO_GL_IBM_static_data = 0;
int GLO_GL_IBM_texture_mirrored_repeat = 0;
int GLO_GL_IBM_vertex_array_lists = 0;
int GLO_GL_INGR_blend_func_separate = 0;
int GLO_GL_INGR_color_clamp = 0;
int GLO_GL_INGR_interlace_read = 0;
int GLO_GL_INTEL_blackhole_render = 0;
int GLO_GL_INTEL_conservative_rasterization = 0;
int GLO_GL_INTEL_fragment_shader_ordering = 0;
int GLO_GL_INTEL_framebuffer_CMAA = 0;
int GLO_GL_INTEL_map_texture = 0;
int GLO_GL_INTEL_parallel_arrays = 0;
int GLO_GL_INTEL_performance_query = 0;
int GLO_GL_KHR_blend_equation_advanced = 0;
int GLO_GL_KHR_blend_equation_advanced_coherent = 0;
int GLO_GL_KHR_context_flush_control = 0;
int GLO_GL_KHR_debug = 0;
int GLO_GL_KHR_no_error = 0;
int GLO_GL_KHR_parallel_shader_compile = 0;
int GLO_GL_KHR_robust_buffer_access_behavior = 0;
int GLO_GL_KHR_robustness = 0;
int GLO_GL_KHR_shader_subgroup = 0;
int GLO_GL_KHR_texture_compression_astc_hdr = 0;
int GLO_GL_KHR_texture_compression_astc_ldr = 0;
int GLO_GL_KHR_texture_compression_astc_sliced_3d = 0;
int GLO_GL_MESAX_texture_stack = 0;
int GLO_GL_MESA_framebuffer_flip_x = 0;
int GLO_GL_MESA_framebuffer_flip_y = 0;
int GLO_GL_MESA_framebuffer_swap_xy = 0;
int GLO_GL_MESA_pack_invert = 0;
int GLO_GL_MESA_program_binary_formats = 0;
int GLO_GL_MESA_resize_buffers = 0;
int GLO_GL_MESA_shader_integer_functions = 0;
int GLO_GL_MESA_texture_const_bandwidth = 0;
int GLO_GL_MESA_tile_raster_order = 0;
int GLO_GL_MESA_window_pos = 0;
int GLO_GL_MESA_ycbcr_texture = 0;
int GLO_GL_NVX_blend_equation_advanced_multi_draw_buffers = 0;
int GLO_GL_NVX_conditional_render = 0;
int GLO_GL_NVX_gpu_memory_info = 0;
int GLO_GL_NVX_gpu_multicast2 = 0;
int GLO_GL_NVX_linked_gpu_multicast = 0;
int GLO_GL_NVX_progress_fence = 0;
int GLO_GL_NV_alpha_to_coverage_dither_control = 0;
int GLO_GL_NV_bindless_multi_draw_indirect = 0;
int GLO_GL_NV_bindless_multi_draw_indirect_count = 0;
int GLO_GL_NV_bindless_texture = 0;
int GLO_GL_NV_blend_equation_advanced = 0;
int GLO_GL_NV_blend_equation_advanced_coherent = 0;
int GLO_GL_NV_blend_minmax_factor = 0;
int GLO_GL_NV_blend_square = 0;
int GLO_GL_NV_clip_space_w_scaling = 0;
int GLO_GL_NV_command_list = 0;
int GLO_GL_NV_compute_program5 = 0;
int GLO_GL_NV_compute_shader_derivatives = 0;
int GLO_GL_NV_conditional_render = 0;
int GLO_GL_NV_conservative_raster = 0;
int GLO_GL_NV_conservative_raster_dilate = 0;
int GLO_GL_NV_conservative_raster_pre_snap = 0;
int GLO_GL_NV_conservative_raster_pre_snap_triangles = 0;
int GLO_GL_NV_conservative_raster_underestimation = 0;
int GLO_GL_NV_copy_depth_to_color = 0;
int GLO_GL_NV_copy_image = 0;
int GLO_GL_NV_deep_texture3D = 0;
int GLO_GL_NV_depth_buffer_float = 0;
int GLO_GL_NV_depth_clamp = 0;
int GLO_GL_NV_draw_texture = 0;
int GLO_GL_NV_draw_vulkan_image = 0;
int GLO_GL_NV_evaluators = 0;
int GLO_GL_NV_explicit_multisample = 0;
int GLO_GL_NV_fence = 0;
int GLO_GL_NV_fill_rectangle = 0;
int GLO_GL_NV_float_buffer = 0;
int GLO_GL_NV_fog_distance = 0;
int GLO_GL_NV_fragment_coverage_to_color = 0;
int GLO_GL_NV_fragment_program = 0;
int GLO_GL_NV_fragment_program2 = 0;
int GLO_GL_NV_fragment_program4 = 0;
int GLO_GL_NV_fragment_program_option = 0;
int GLO_GL_NV_fragment_shader_barycentric = 0;
int GLO_GL_NV_fragment_shader_interlock = 0;
int GLO_GL_NV_framebuffer_mixed_samples = 0;
int GLO_GL_NV_framebuffer_multisample_coverage = 0;
int GLO_GL_NV_geometry_program4 = 0;
int GLO_GL_NV_geometry_shader4 = 0;
int GLO_GL_NV_geometry_shader_passthrough = 0;
int GLO_GL_NV_gpu_multicast = 0;
int GLO_GL_NV_gpu_program4 = 0;
int GLO_GL_NV_gpu_program5 = 0;
int GLO_GL_NV_gpu_program5_mem_extended = 0;
int GLO_GL_NV_gpu_shader5 = 0;
int GLO_GL_NV_half_float = 0;
int GLO_GL_NV_internalformat_sample_query = 0;
int GLO_GL_NV_light_max_exponent = 0;
int GLO_GL_NV_memory_attachment = 0;
int GLO_GL_NV_memory_object_sparse = 0;
int GLO_GL_NV_mesh_shader = 0;
int GLO_GL_NV_multisample_coverage = 0;
int GLO_GL_NV_multisample_filter_hint = 0;
int GLO_GL_NV_occlusion_query = 0;
int GLO_GL_NV_packed_depth_stencil = 0;
int GLO_GL_NV_parameter_buffer_object = 0;
int GLO_GL_NV_parameter_buffer_object2 = 0;
int GLO_GL_NV_path_rendering = 0;
int GLO_GL_NV_path_rendering_shared_edge = 0;
int GLO_GL_NV_pixel_data_range = 0;
int GLO_GL_NV_point_sprite = 0;
int GLO_GL_NV_present_video = 0;
int GLO_GL_NV_primitive_restart = 0;
int GLO_GL_NV_primitive_shading_rate = 0;
int GLO_GL_NV_query_resource = 0;
int GLO_GL_NV_query_resource_tag = 0;
int GLO_GL_NV_register_combiners = 0;
int GLO_GL_NV_register_combiners2 = 0;
int GLO_GL_NV_representative_fragment_test = 0;
int GLO_GL_NV_robustness_video_memory_purge = 0;
int GLO_GL_NV_sample_locations = 0;
int GLO_GL_NV_sample_mask_override_coverage = 0;
int GLO_GL_NV_scissor_exclusive = 0;
int GLO_GL_NV_shader_atomic_counters = 0;
int GLO_GL_NV_shader_atomic_float = 0;
int GLO_GL_NV_shader_atomic_float64 = 0;
int GLO_GL_NV_shader_atomic_fp16_vector = 0;
int GLO_GL_NV_shader_atomic_int64 = 0;
int GLO_GL_NV_shader_buffer_load = 0;
int GLO_GL_NV_shader_buffer_store = 0;
int GLO_GL_NV_shader_storage_buffer_object = 0;
int GLO_GL_NV_shader_subgroup_partitioned = 0;
int GLO_GL_NV_shader_texture_footprint = 0;
int GLO_GL_NV_shader_thread_group = 0;
int GLO_GL_NV_shader_thread_shuffle = 0;
int GLO_GL_NV_shading_rate_image = 0;
int GLO_GL_NV_stereo_view_rendering = 0;
int GLO_GL_NV_tessellation_program5 = 0;
int GLO_GL_NV_texgen_emboss = 0;
int GLO_GL_NV_texgen_reflection = 0;
int GLO_GL_NV_texture_barrier = 0;
int GLO_GL_NV_texture_compression_vtc = 0;
int GLO_GL_NV_texture_env_combine4 = 0;
int GLO_GL_NV_texture_expand_normal = 0;
int GLO_GL_NV_texture_multisample = 0;
int GLO_GL_NV_texture_rectangle = 0;
int GLO_GL_NV_texture_rectangle_compressed = 0;
int GLO_GL_NV_texture_shader = 0;
int GLO_GL_NV_texture_shader2 = 0;
int GLO_GL_NV_texture_shader3 = 0;
int GLO_GL_NV_timeline_semaphore = 0;
int GLO_GL_NV_transform_feedback = 0;
int GLO_GL_NV_transform_feedback2 = 0;
int GLO_GL_NV_uniform_buffer_std430_layout = 0;
int GLO_GL_NV_uniform_buffer_unified_memory = 0;
int GLO_GL_NV_vdpau_interop = 0;
int GLO_GL_NV_vdpau_interop2 = 0;
int GLO_GL_NV_vertex_array_range = 0;
int GLO_GL_NV_vertex_array_range2 = 0;
int GLO_GL_NV_vertex_attrib_integer_64bit = 0;
int GLO_GL_NV_vertex_buffer_unified_memory = 0;
int GLO_GL_NV_vertex_program = 0;
int GLO_GL_NV_vertex_program1_1 = 0;
int GLO_GL_NV_vertex_program2 = 0;
int GLO_GL_NV_vertex_program2_option = 0;
int GLO_GL_NV_vertex_program3 = 0;
int GLO_GL_NV_vertex_program4 = 0;
int GLO_GL_NV_video_capture = 0;
int GLO_GL_NV_viewport_array2 = 0;
int GLO_GL_NV_viewport_swizzle = 0;
int GLO_GL_OES_byte_coordinates = 0;
int GLO_GL_OES_compressed_paletted_texture = 0;
int GLO_GL_OES_fixed_point = 0;
int GLO_GL_OES_query_matrix = 0;
int GLO_GL_OES_read_format = 0;
int GLO_GL_OES_single_precision = 0;
int GLO_GL_OML_interlace = 0;
int GLO_GL_OML_resample = 0;
int GLO_GL_OML_subsample = 0;
int GLO_GL_OVR_multiview = 0;
int GLO_GL_OVR_multiview2 = 0;
int GLO_GL_PGI_misc_hints = 0;
int GLO_GL_PGI_vertex_hints = 0;
int GLO_GL_REND_screen_coordinates = 0;
int GLO_GL_S3_s3tc = 0;
int GLO_GL_SGIS_detail_texture = 0;
int GLO_GL_SGIS_fog_function = 0;
int GLO_GL_SGIS_generate_mipmap = 0;
int GLO_GL_SGIS_multisample = 0;
int GLO_GL_SGIS_pixel_texture = 0;
int GLO_GL_SGIS_point_line_texgen = 0;
int GLO_GL_SGIS_point_parameters = 0;
int GLO_GL_SGIS_sharpen_texture = 0;
int GLO_GL_SGIS_texture4D = 0;
int GLO_GL_SGIS_texture_border_clamp = 0;
int GLO_GL_SGIS_texture_color_mask = 0;
int GLO_GL_SGIS_texture_edge_clamp = 0;
int GLO_GL_SGIS_texture_filter4 = 0;
int GLO_GL_SGIS_texture_lod = 0;
int GLO_GL_SGIS_texture_select = 0;
int GLO_GL_SGIX_async = 0;
int GLO_GL_SGIX_async_histogram = 0;
int GLO_GL_SGIX_async_pixel = 0;
int GLO_GL_SGIX_blend_alpha_minmax = 0;
int GLO_GL_SGIX_calligraphic_fragment = 0;
int GLO_GL_SGIX_clipmap = 0;
int GLO_GL_SGIX_convolution_accuracy = 0;
int GLO_GL_SGIX_depth_pass_instrument = 0;
int GLO_GL_SGIX_depth_texture = 0;
int GLO_GL_SGIX_flush_raster = 0;
int GLO_GL_SGIX_fog_offset = 0;
int GLO_GL_SGIX_fragment_lighting = 0;
int GLO_GL_SGIX_framezoom = 0;
int GLO_GL_SGIX_igloo_interface = 0;
int GLO_GL_SGIX_instruments = 0;
int GLO_GL_SGIX_interlace = 0;
int GLO_GL_SGIX_ir_instrument1 = 0;
int GLO_GL_SGIX_list_priority = 0;
int GLO_GL_SGIX_pixel_texture = 0;
int GLO_GL_SGIX_pixel_tiles = 0;
int GLO_GL_SGIX_polynomial_ffd = 0;
int GLO_GL_SGIX_reference_plane = 0;
int GLO_GL_SGIX_resample = 0;
int GLO_GL_SGIX_scalebias_hint = 0;
int GLO_GL_SGIX_shadow = 0;
int GLO_GL_SGIX_shadow_ambient = 0;
int GLO_GL_SGIX_sprite = 0;
int GLO_GL_SGIX_subsample = 0;
int GLO_GL_SGIX_tag_sample_buffer = 0;
int GLO_GL_SGIX_texture_add_env = 0;
int GLO_GL_SGIX_texture_coordinate_clamp = 0;
int GLO_GL_SGIX_texture_lod_bias = 0;
int GLO_GL_SGIX_texture_multi_buffer = 0;
int GLO_GL_SGIX_texture_scale_bias = 0;
int GLO_GL_SGIX_vertex_preclip = 0;
int GLO_GL_SGIX_ycrcb = 0;
int GLO_GL_SGIX_ycrcb_subsample = 0;
int GLO_GL_SGIX_ycrcba = 0;
int GLO_GL_SGI_color_matrix = 0;
int GLO_GL_SGI_color_table = 0;
int GLO_GL_SGI_texture_color_table = 0;
int GLO_GL_SUNX_constant_data = 0;
int GLO_GL_SUN_convolution_border_modes = 0;
int GLO_GL_SUN_global_alpha = 0;
int GLO_GL_SUN_mesh_array = 0;
int GLO_GL_SUN_slice_accum = 0;
int GLO_GL_SUN_triangle_list = 0;
int GLO_GL_SUN_vertex = 0;
int GLO_GL_WIN_phong_shading = 0;
int GLO_GL_WIN_specular_fog = 0;



PFNGLACCUMXOESPROC glo_glAccumxOES = NULL;
PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC glo_glAcquireKeyedMutexWin32EXT = NULL;
PFNGLACTIVEPROGRAMEXTPROC glo_glActiveProgramEXT = NULL;
PFNGLACTIVESHADERPROGRAMPROC glo_glActiveShaderProgram = NULL;
PFNGLACTIVESTENCILFACEEXTPROC glo_glActiveStencilFaceEXT = NULL;
PFNGLACTIVETEXTUREPROC glo_glActiveTexture = NULL;
PFNGLACTIVETEXTUREARBPROC glo_glActiveTextureARB = NULL;
PFNGLACTIVEVARYINGNVPROC glo_glActiveVaryingNV = NULL;
PFNGLALPHAFRAGMENTOP1ATIPROC glo_glAlphaFragmentOp1ATI = NULL;
PFNGLALPHAFRAGMENTOP2ATIPROC glo_glAlphaFragmentOp2ATI = NULL;
PFNGLALPHAFRAGMENTOP3ATIPROC glo_glAlphaFragmentOp3ATI = NULL;
PFNGLALPHAFUNCXOESPROC glo_glAlphaFuncxOES = NULL;
PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC glo_glAlphaToCoverageDitherControlNV = NULL;
PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC glo_glApplyFramebufferAttachmentCMAAINTEL = NULL;
PFNGLAPPLYTEXTUREEXTPROC glo_glApplyTextureEXT = NULL;
PFNGLAREPROGRAMSRESIDENTNVPROC glo_glAreProgramsResidentNV = NULL;
PFNGLARETEXTURESRESIDENTEXTPROC glo_glAreTexturesResidentEXT = NULL;
PFNGLARRAYELEMENTEXTPROC glo_glArrayElementEXT = NULL;
PFNGLARRAYOBJECTATIPROC glo_glArrayObjectATI = NULL;
PFNGLASYNCCOPYBUFFERSUBDATANVXPROC glo_glAsyncCopyBufferSubDataNVX = NULL;
PFNGLASYNCCOPYIMAGESUBDATANVXPROC glo_glAsyncCopyImageSubDataNVX = NULL;
PFNGLASYNCMARKERSGIXPROC glo_glAsyncMarkerSGIX = NULL;
PFNGLATTACHOBJECTARBPROC glo_glAttachObjectARB = NULL;
PFNGLATTACHSHADERPROC glo_glAttachShader = NULL;
PFNGLBEGINCONDITIONALRENDERPROC glo_glBeginConditionalRender = NULL;
PFNGLBEGINCONDITIONALRENDERNVPROC glo_glBeginConditionalRenderNV = NULL;
PFNGLBEGINCONDITIONALRENDERNVXPROC glo_glBeginConditionalRenderNVX = NULL;
PFNGLBEGINFRAGMENTSHADERATIPROC glo_glBeginFragmentShaderATI = NULL;
PFNGLBEGINOCCLUSIONQUERYNVPROC glo_glBeginOcclusionQueryNV = NULL;
PFNGLBEGINPERFMONITORAMDPROC glo_glBeginPerfMonitorAMD = NULL;
PFNGLBEGINPERFQUERYINTELPROC glo_glBeginPerfQueryINTEL = NULL;
PFNGLBEGINQUERYPROC glo_glBeginQuery = NULL;
PFNGLBEGINQUERYARBPROC glo_glBeginQueryARB = NULL;
PFNGLBEGINQUERYINDEXEDPROC glo_glBeginQueryIndexed = NULL;
PFNGLBEGINTRANSFORMFEEDBACKPROC glo_glBeginTransformFeedback = NULL;
PFNGLBEGINTRANSFORMFEEDBACKEXTPROC glo_glBeginTransformFeedbackEXT = NULL;
PFNGLBEGINTRANSFORMFEEDBACKNVPROC glo_glBeginTransformFeedbackNV = NULL;
PFNGLBEGINVERTEXSHADEREXTPROC glo_glBeginVertexShaderEXT = NULL;
PFNGLBEGINVIDEOCAPTURENVPROC glo_glBeginVideoCaptureNV = NULL;
PFNGLBINDATTRIBLOCATIONPROC glo_glBindAttribLocation = NULL;
PFNGLBINDATTRIBLOCATIONARBPROC glo_glBindAttribLocationARB = NULL;
PFNGLBINDBUFFERPROC glo_glBindBuffer = NULL;
PFNGLBINDBUFFERARBPROC glo_glBindBufferARB = NULL;
PFNGLBINDBUFFERBASEPROC glo_glBindBufferBase = NULL;
PFNGLBINDBUFFERBASEEXTPROC glo_glBindBufferBaseEXT = NULL;
PFNGLBINDBUFFERBASENVPROC glo_glBindBufferBaseNV = NULL;
PFNGLBINDBUFFEROFFSETEXTPROC glo_glBindBufferOffsetEXT = NULL;
PFNGLBINDBUFFEROFFSETNVPROC glo_glBindBufferOffsetNV = NULL;
PFNGLBINDBUFFERRANGEPROC glo_glBindBufferRange = NULL;
PFNGLBINDBUFFERRANGEEXTPROC glo_glBindBufferRangeEXT = NULL;
PFNGLBINDBUFFERRANGENVPROC glo_glBindBufferRangeNV = NULL;
PFNGLBINDBUFFERSBASEPROC glo_glBindBuffersBase = NULL;
PFNGLBINDBUFFERSRANGEPROC glo_glBindBuffersRange = NULL;
PFNGLBINDFRAGDATALOCATIONPROC glo_glBindFragDataLocation = NULL;
PFNGLBINDFRAGDATALOCATIONEXTPROC glo_glBindFragDataLocationEXT = NULL;
PFNGLBINDFRAGDATALOCATIONINDEXEDPROC glo_glBindFragDataLocationIndexed = NULL;
PFNGLBINDFRAGMENTSHADERATIPROC glo_glBindFragmentShaderATI = NULL;
PFNGLBINDFRAMEBUFFERPROC glo_glBindFramebuffer = NULL;
PFNGLBINDFRAMEBUFFEREXTPROC glo_glBindFramebufferEXT = NULL;
PFNGLBINDIMAGETEXTUREPROC glo_glBindImageTexture = NULL;
PFNGLBINDIMAGETEXTUREEXTPROC glo_glBindImageTextureEXT = NULL;
PFNGLBINDIMAGETEXTURESPROC glo_glBindImageTextures = NULL;
PFNGLBINDLIGHTPARAMETEREXTPROC glo_glBindLightParameterEXT = NULL;
PFNGLBINDMATERIALPARAMETEREXTPROC glo_glBindMaterialParameterEXT = NULL;
PFNGLBINDMULTITEXTUREEXTPROC glo_glBindMultiTextureEXT = NULL;
PFNGLBINDPARAMETEREXTPROC glo_glBindParameterEXT = NULL;
PFNGLBINDPROGRAMARBPROC glo_glBindProgramARB = NULL;
PFNGLBINDPROGRAMNVPROC glo_glBindProgramNV = NULL;
PFNGLBINDPROGRAMPIPELINEPROC glo_glBindProgramPipeline = NULL;
PFNGLBINDRENDERBUFFERPROC glo_glBindRenderbuffer = NULL;
PFNGLBINDRENDERBUFFEREXTPROC glo_glBindRenderbufferEXT = NULL;
PFNGLBINDSAMPLERPROC glo_glBindSampler = NULL;
PFNGLBINDSAMPLERSPROC glo_glBindSamplers = NULL;
PFNGLBINDSHADINGRATEIMAGENVPROC glo_glBindShadingRateImageNV = NULL;
PFNGLBINDTEXGENPARAMETEREXTPROC glo_glBindTexGenParameterEXT = NULL;
PFNGLBINDTEXTUREPROC glo_glBindTexture = NULL;
PFNGLBINDTEXTUREEXTPROC glo_glBindTextureEXT = NULL;
PFNGLBINDTEXTUREUNITPROC glo_glBindTextureUnit = NULL;
PFNGLBINDTEXTUREUNITPARAMETEREXTPROC glo_glBindTextureUnitParameterEXT = NULL;
PFNGLBINDTEXTURESPROC glo_glBindTextures = NULL;
PFNGLBINDTRANSFORMFEEDBACKPROC glo_glBindTransformFeedback = NULL;
PFNGLBINDTRANSFORMFEEDBACKNVPROC glo_glBindTransformFeedbackNV = NULL;
PFNGLBINDVERTEXARRAYPROC glo_glBindVertexArray = NULL;
PFNGLBINDVERTEXARRAYAPPLEPROC glo_glBindVertexArrayAPPLE = NULL;
PFNGLBINDVERTEXBUFFERPROC glo_glBindVertexBuffer = NULL;
PFNGLBINDVERTEXBUFFERSPROC glo_glBindVertexBuffers = NULL;
PFNGLBINDVERTEXSHADEREXTPROC glo_glBindVertexShaderEXT = NULL;
PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC glo_glBindVideoCaptureStreamBufferNV = NULL;
PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC glo_glBindVideoCaptureStreamTextureNV = NULL;
PFNGLBINORMAL3BEXTPROC glo_glBinormal3bEXT = NULL;
PFNGLBINORMAL3BVEXTPROC glo_glBinormal3bvEXT = NULL;
PFNGLBINORMAL3DEXTPROC glo_glBinormal3dEXT = NULL;
PFNGLBINORMAL3DVEXTPROC glo_glBinormal3dvEXT = NULL;
PFNGLBINORMAL3FEXTPROC glo_glBinormal3fEXT = NULL;
PFNGLBINORMAL3FVEXTPROC glo_glBinormal3fvEXT = NULL;
PFNGLBINORMAL3IEXTPROC glo_glBinormal3iEXT = NULL;
PFNGLBINORMAL3IVEXTPROC glo_glBinormal3ivEXT = NULL;
PFNGLBINORMAL3SEXTPROC glo_glBinormal3sEXT = NULL;
PFNGLBINORMAL3SVEXTPROC glo_glBinormal3svEXT = NULL;
PFNGLBINORMALPOINTEREXTPROC glo_glBinormalPointerEXT = NULL;
PFNGLBITMAPXOESPROC glo_glBitmapxOES = NULL;
PFNGLBLENDBARRIERKHRPROC glo_glBlendBarrierKHR = NULL;
PFNGLBLENDBARRIERNVPROC glo_glBlendBarrierNV = NULL;
PFNGLBLENDCOLORPROC glo_glBlendColor = NULL;
PFNGLBLENDCOLOREXTPROC glo_glBlendColorEXT = NULL;
PFNGLBLENDCOLORXOESPROC glo_glBlendColorxOES = NULL;
PFNGLBLENDEQUATIONPROC glo_glBlendEquation = NULL;
PFNGLBLENDEQUATIONEXTPROC glo_glBlendEquationEXT = NULL;
PFNGLBLENDEQUATIONINDEXEDAMDPROC glo_glBlendEquationIndexedAMD = NULL;
PFNGLBLENDEQUATIONSEPARATEPROC glo_glBlendEquationSeparate = NULL;
PFNGLBLENDEQUATIONSEPARATEEXTPROC glo_glBlendEquationSeparateEXT = NULL;
PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC glo_glBlendEquationSeparateIndexedAMD = NULL;
PFNGLBLENDEQUATIONSEPARATEIPROC glo_glBlendEquationSeparatei = NULL;
PFNGLBLENDEQUATIONSEPARATEIARBPROC glo_glBlendEquationSeparateiARB = NULL;
PFNGLBLENDEQUATIONIPROC glo_glBlendEquationi = NULL;
PFNGLBLENDEQUATIONIARBPROC glo_glBlendEquationiARB = NULL;
PFNGLBLENDFUNCPROC glo_glBlendFunc = NULL;
PFNGLBLENDFUNCINDEXEDAMDPROC glo_glBlendFuncIndexedAMD = NULL;
PFNGLBLENDFUNCSEPARATEPROC glo_glBlendFuncSeparate = NULL;
PFNGLBLENDFUNCSEPARATEEXTPROC glo_glBlendFuncSeparateEXT = NULL;
PFNGLBLENDFUNCSEPARATEINGRPROC glo_glBlendFuncSeparateINGR = NULL;
PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC glo_glBlendFuncSeparateIndexedAMD = NULL;
PFNGLBLENDFUNCSEPARATEIPROC glo_glBlendFuncSeparatei = NULL;
PFNGLBLENDFUNCSEPARATEIARBPROC glo_glBlendFuncSeparateiARB = NULL;
PFNGLBLENDFUNCIPROC glo_glBlendFunci = NULL;
PFNGLBLENDFUNCIARBPROC glo_glBlendFunciARB = NULL;
PFNGLBLENDPARAMETERINVPROC glo_glBlendParameteriNV = NULL;
PFNGLBLITFRAMEBUFFERPROC glo_glBlitFramebuffer = NULL;
PFNGLBLITFRAMEBUFFEREXTPROC glo_glBlitFramebufferEXT = NULL;
PFNGLBLITFRAMEBUFFERLAYEREXTPROC glo_glBlitFramebufferLayerEXT = NULL;
PFNGLBLITFRAMEBUFFERLAYERSEXTPROC glo_glBlitFramebufferLayersEXT = NULL;
PFNGLBLITNAMEDFRAMEBUFFERPROC glo_glBlitNamedFramebuffer = NULL;
PFNGLBUFFERADDRESSRANGENVPROC glo_glBufferAddressRangeNV = NULL;
PFNGLBUFFERATTACHMEMORYNVPROC glo_glBufferAttachMemoryNV = NULL;
PFNGLBUFFERDATAPROC glo_glBufferData = NULL;
PFNGLBUFFERDATAARBPROC glo_glBufferDataARB = NULL;
PFNGLBUFFERPAGECOMMITMENTARBPROC glo_glBufferPageCommitmentARB = NULL;
PFNGLBUFFERPAGECOMMITMENTMEMNVPROC glo_glBufferPageCommitmentMemNV = NULL;
PFNGLBUFFERPARAMETERIAPPLEPROC glo_glBufferParameteriAPPLE = NULL;
PFNGLBUFFERSTORAGEPROC glo_glBufferStorage = NULL;
PFNGLBUFFERSTORAGEEXTERNALEXTPROC glo_glBufferStorageExternalEXT = NULL;
PFNGLBUFFERSTORAGEMEMEXTPROC glo_glBufferStorageMemEXT = NULL;
PFNGLBUFFERSUBDATAPROC glo_glBufferSubData = NULL;
PFNGLBUFFERSUBDATAARBPROC glo_glBufferSubDataARB = NULL;
PFNGLCALLCOMMANDLISTNVPROC glo_glCallCommandListNV = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSPROC glo_glCheckFramebufferStatus = NULL;
PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC glo_glCheckFramebufferStatusEXT = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC glo_glCheckNamedFramebufferStatus = NULL;
PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC glo_glCheckNamedFramebufferStatusEXT = NULL;
PFNGLCLAMPCOLORPROC glo_glClampColor = NULL;
PFNGLCLAMPCOLORARBPROC glo_glClampColorARB = NULL;
PFNGLCLEARPROC glo_glClear = NULL;
PFNGLCLEARACCUMXOESPROC glo_glClearAccumxOES = NULL;
PFNGLCLEARBUFFERDATAPROC glo_glClearBufferData = NULL;
PFNGLCLEARBUFFERSUBDATAPROC glo_glClearBufferSubData = NULL;
PFNGLCLEARBUFFERFIPROC glo_glClearBufferfi = NULL;
PFNGLCLEARBUFFERFVPROC glo_glClearBufferfv = NULL;
PFNGLCLEARBUFFERIVPROC glo_glClearBufferiv = NULL;
PFNGLCLEARBUFFERUIVPROC glo_glClearBufferuiv = NULL;
PFNGLCLEARCOLORPROC glo_glClearColor = NULL;
PFNGLCLEARCOLORIIEXTPROC glo_glClearColorIiEXT = NULL;
PFNGLCLEARCOLORIUIEXTPROC glo_glClearColorIuiEXT = NULL;
PFNGLCLEARCOLORXOESPROC glo_glClearColorxOES = NULL;
PFNGLCLEARDEPTHPROC glo_glClearDepth = NULL;
PFNGLCLEARDEPTHDNVPROC glo_glClearDepthdNV = NULL;
PFNGLCLEARDEPTHFPROC glo_glClearDepthf = NULL;
PFNGLCLEARDEPTHFOESPROC glo_glClearDepthfOES = NULL;
PFNGLCLEARDEPTHXOESPROC glo_glClearDepthxOES = NULL;
PFNGLCLEARNAMEDBUFFERDATAPROC glo_glClearNamedBufferData = NULL;
PFNGLCLEARNAMEDBUFFERDATAEXTPROC glo_glClearNamedBufferDataEXT = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAPROC glo_glClearNamedBufferSubData = NULL;
PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC glo_glClearNamedBufferSubDataEXT = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFIPROC glo_glClearNamedFramebufferfi = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERFVPROC glo_glClearNamedFramebufferfv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERIVPROC glo_glClearNamedFramebufferiv = NULL;
PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC glo_glClearNamedFramebufferuiv = NULL;
PFNGLCLEARSTENCILPROC glo_glClearStencil = NULL;
PFNGLCLEARTEXIMAGEPROC glo_glClearTexImage = NULL;
PFNGLCLEARTEXSUBIMAGEPROC glo_glClearTexSubImage = NULL;
PFNGLCLIENTACTIVETEXTUREARBPROC glo_glClientActiveTextureARB = NULL;
PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC glo_glClientActiveVertexStreamATI = NULL;
PFNGLCLIENTATTRIBDEFAULTEXTPROC glo_glClientAttribDefaultEXT = NULL;
PFNGLCLIENTWAITSEMAPHOREUI64NVXPROC glo_glClientWaitSemaphoreui64NVX = NULL;
PFNGLCLIENTWAITSYNCPROC glo_glClientWaitSync = NULL;
PFNGLCLIPCONTROLPROC glo_glClipControl = NULL;
PFNGLCLIPPLANEFOESPROC glo_glClipPlanefOES = NULL;
PFNGLCLIPPLANEXOESPROC glo_glClipPlanexOES = NULL;
PFNGLCOLOR3FVERTEX3FSUNPROC glo_glColor3fVertex3fSUN = NULL;
PFNGLCOLOR3FVERTEX3FVSUNPROC glo_glColor3fVertex3fvSUN = NULL;
PFNGLCOLOR3HNVPROC glo_glColor3hNV = NULL;
PFNGLCOLOR3HVNVPROC glo_glColor3hvNV = NULL;
PFNGLCOLOR3XOESPROC glo_glColor3xOES = NULL;
PFNGLCOLOR3XVOESPROC glo_glColor3xvOES = NULL;
PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC glo_glColor4fNormal3fVertex3fSUN = NULL;
PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC glo_glColor4fNormal3fVertex3fvSUN = NULL;
PFNGLCOLOR4HNVPROC glo_glColor4hNV = NULL;
PFNGLCOLOR4HVNVPROC glo_glColor4hvNV = NULL;
PFNGLCOLOR4UBVERTEX2FSUNPROC glo_glColor4ubVertex2fSUN = NULL;
PFNGLCOLOR4UBVERTEX2FVSUNPROC glo_glColor4ubVertex2fvSUN = NULL;
PFNGLCOLOR4UBVERTEX3FSUNPROC glo_glColor4ubVertex3fSUN = NULL;
PFNGLCOLOR4UBVERTEX3FVSUNPROC glo_glColor4ubVertex3fvSUN = NULL;
PFNGLCOLOR4XOESPROC glo_glColor4xOES = NULL;
PFNGLCOLOR4XVOESPROC glo_glColor4xvOES = NULL;
PFNGLCOLORFORMATNVPROC glo_glColorFormatNV = NULL;
PFNGLCOLORFRAGMENTOP1ATIPROC glo_glColorFragmentOp1ATI = NULL;
PFNGLCOLORFRAGMENTOP2ATIPROC glo_glColorFragmentOp2ATI = NULL;
PFNGLCOLORFRAGMENTOP3ATIPROC glo_glColorFragmentOp3ATI = NULL;
PFNGLCOLORMASKPROC glo_glColorMask = NULL;
PFNGLCOLORMASKINDEXEDEXTPROC glo_glColorMaskIndexedEXT = NULL;
PFNGLCOLORMASKIPROC glo_glColorMaski = NULL;
PFNGLCOLORPOINTEREXTPROC glo_glColorPointerEXT = NULL;
PFNGLCOLORPOINTERLISTIBMPROC glo_glColorPointerListIBM = NULL;
PFNGLCOLORPOINTERVINTELPROC glo_glColorPointervINTEL = NULL;
PFNGLCOLORSUBTABLEEXTPROC glo_glColorSubTableEXT = NULL;
PFNGLCOLORTABLEEXTPROC glo_glColorTableEXT = NULL;
PFNGLCOLORTABLEPARAMETERFVSGIPROC glo_glColorTableParameterfvSGI = NULL;
PFNGLCOLORTABLEPARAMETERIVSGIPROC glo_glColorTableParameterivSGI = NULL;
PFNGLCOLORTABLESGIPROC glo_glColorTableSGI = NULL;
PFNGLCOMBINERINPUTNVPROC glo_glCombinerInputNV = NULL;
PFNGLCOMBINEROUTPUTNVPROC glo_glCombinerOutputNV = NULL;
PFNGLCOMBINERPARAMETERFNVPROC glo_glCombinerParameterfNV = NULL;
PFNGLCOMBINERPARAMETERFVNVPROC glo_glCombinerParameterfvNV = NULL;
PFNGLCOMBINERPARAMETERINVPROC glo_glCombinerParameteriNV = NULL;
PFNGLCOMBINERPARAMETERIVNVPROC glo_glCombinerParameterivNV = NULL;
PFNGLCOMBINERSTAGEPARAMETERFVNVPROC glo_glCombinerStageParameterfvNV = NULL;
PFNGLCOMMANDLISTSEGMENTSNVPROC glo_glCommandListSegmentsNV = NULL;
PFNGLCOMPILECOMMANDLISTNVPROC glo_glCompileCommandListNV = NULL;
PFNGLCOMPILESHADERPROC glo_glCompileShader = NULL;
PFNGLCOMPILESHADERARBPROC glo_glCompileShaderARB = NULL;
PFNGLCOMPILESHADERINCLUDEARBPROC glo_glCompileShaderIncludeARB = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC glo_glCompressedMultiTexImage1DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC glo_glCompressedMultiTexImage2DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC glo_glCompressedMultiTexImage3DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC glo_glCompressedMultiTexSubImage1DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC glo_glCompressedMultiTexSubImage2DEXT = NULL;
PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC glo_glCompressedMultiTexSubImage3DEXT = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DPROC glo_glCompressedTexImage1D = NULL;
PFNGLCOMPRESSEDTEXIMAGE1DARBPROC glo_glCompressedTexImage1DARB = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DPROC glo_glCompressedTexImage2D = NULL;
PFNGLCOMPRESSEDTEXIMAGE2DARBPROC glo_glCompressedTexImage2DARB = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DPROC glo_glCompressedTexImage3D = NULL;
PFNGLCOMPRESSEDTEXIMAGE3DARBPROC glo_glCompressedTexImage3DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC glo_glCompressedTexSubImage1D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC glo_glCompressedTexSubImage1DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC glo_glCompressedTexSubImage2D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC glo_glCompressedTexSubImage2DARB = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC glo_glCompressedTexSubImage3D = NULL;
PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC glo_glCompressedTexSubImage3DARB = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC glo_glCompressedTextureImage1DEXT = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC glo_glCompressedTextureImage2DEXT = NULL;
PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC glo_glCompressedTextureImage3DEXT = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC glo_glCompressedTextureSubImage1D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC glo_glCompressedTextureSubImage1DEXT = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC glo_glCompressedTextureSubImage2D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC glo_glCompressedTextureSubImage2DEXT = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC glo_glCompressedTextureSubImage3D = NULL;
PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC glo_glCompressedTextureSubImage3DEXT = NULL;
PFNGLCONSERVATIVERASTERPARAMETERFNVPROC glo_glConservativeRasterParameterfNV = NULL;
PFNGLCONSERVATIVERASTERPARAMETERINVPROC glo_glConservativeRasterParameteriNV = NULL;
PFNGLCONVOLUTIONFILTER1DEXTPROC glo_glConvolutionFilter1DEXT = NULL;
PFNGLCONVOLUTIONFILTER2DEXTPROC glo_glConvolutionFilter2DEXT = NULL;
PFNGLCONVOLUTIONPARAMETERFEXTPROC glo_glConvolutionParameterfEXT = NULL;
PFNGLCONVOLUTIONPARAMETERFVEXTPROC glo_glConvolutionParameterfvEXT = NULL;
PFNGLCONVOLUTIONPARAMETERIEXTPROC glo_glConvolutionParameteriEXT = NULL;
PFNGLCONVOLUTIONPARAMETERIVEXTPROC glo_glConvolutionParameterivEXT = NULL;
PFNGLCONVOLUTIONPARAMETERXOESPROC glo_glConvolutionParameterxOES = NULL;
PFNGLCONVOLUTIONPARAMETERXVOESPROC glo_glConvolutionParameterxvOES = NULL;
PFNGLCOPYBUFFERSUBDATAPROC glo_glCopyBufferSubData = NULL;
PFNGLCOPYCOLORSUBTABLEEXTPROC glo_glCopyColorSubTableEXT = NULL;
PFNGLCOPYCOLORTABLESGIPROC glo_glCopyColorTableSGI = NULL;
PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC glo_glCopyConvolutionFilter1DEXT = NULL;
PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC glo_glCopyConvolutionFilter2DEXT = NULL;
PFNGLCOPYIMAGESUBDATAPROC glo_glCopyImageSubData = NULL;
PFNGLCOPYIMAGESUBDATANVPROC glo_glCopyImageSubDataNV = NULL;
PFNGLCOPYMULTITEXIMAGE1DEXTPROC glo_glCopyMultiTexImage1DEXT = NULL;
PFNGLCOPYMULTITEXIMAGE2DEXTPROC glo_glCopyMultiTexImage2DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC glo_glCopyMultiTexSubImage1DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC glo_glCopyMultiTexSubImage2DEXT = NULL;
PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC glo_glCopyMultiTexSubImage3DEXT = NULL;
PFNGLCOPYNAMEDBUFFERSUBDATAPROC glo_glCopyNamedBufferSubData = NULL;
PFNGLCOPYPATHNVPROC glo_glCopyPathNV = NULL;
PFNGLCOPYTEXIMAGE1DPROC glo_glCopyTexImage1D = NULL;
PFNGLCOPYTEXIMAGE1DEXTPROC glo_glCopyTexImage1DEXT = NULL;
PFNGLCOPYTEXIMAGE2DPROC glo_glCopyTexImage2D = NULL;
PFNGLCOPYTEXIMAGE2DEXTPROC glo_glCopyTexImage2DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE1DPROC glo_glCopyTexSubImage1D = NULL;
PFNGLCOPYTEXSUBIMAGE1DEXTPROC glo_glCopyTexSubImage1DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE2DPROC glo_glCopyTexSubImage2D = NULL;
PFNGLCOPYTEXSUBIMAGE2DEXTPROC glo_glCopyTexSubImage2DEXT = NULL;
PFNGLCOPYTEXSUBIMAGE3DPROC glo_glCopyTexSubImage3D = NULL;
PFNGLCOPYTEXSUBIMAGE3DEXTPROC glo_glCopyTexSubImage3DEXT = NULL;
PFNGLCOPYTEXTUREIMAGE1DEXTPROC glo_glCopyTextureImage1DEXT = NULL;
PFNGLCOPYTEXTUREIMAGE2DEXTPROC glo_glCopyTextureImage2DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DPROC glo_glCopyTextureSubImage1D = NULL;
PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC glo_glCopyTextureSubImage1DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DPROC glo_glCopyTextureSubImage2D = NULL;
PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC glo_glCopyTextureSubImage2DEXT = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DPROC glo_glCopyTextureSubImage3D = NULL;
PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC glo_glCopyTextureSubImage3DEXT = NULL;
PFNGLCOVERFILLPATHINSTANCEDNVPROC glo_glCoverFillPathInstancedNV = NULL;
PFNGLCOVERFILLPATHNVPROC glo_glCoverFillPathNV = NULL;
PFNGLCOVERSTROKEPATHINSTANCEDNVPROC glo_glCoverStrokePathInstancedNV = NULL;
PFNGLCOVERSTROKEPATHNVPROC glo_glCoverStrokePathNV = NULL;
PFNGLCOVERAGEMODULATIONNVPROC glo_glCoverageModulationNV = NULL;
PFNGLCOVERAGEMODULATIONTABLENVPROC glo_glCoverageModulationTableNV = NULL;
PFNGLCREATEBUFFERSPROC glo_glCreateBuffers = NULL;
PFNGLCREATECOMMANDLISTSNVPROC glo_glCreateCommandListsNV = NULL;
PFNGLCREATEFRAMEBUFFERSPROC glo_glCreateFramebuffers = NULL;
PFNGLCREATEMEMORYOBJECTSEXTPROC glo_glCreateMemoryObjectsEXT = NULL;
PFNGLCREATEPERFQUERYINTELPROC glo_glCreatePerfQueryINTEL = NULL;
PFNGLCREATEPROGRAMPROC glo_glCreateProgram = NULL;
PFNGLCREATEPROGRAMOBJECTARBPROC glo_glCreateProgramObjectARB = NULL;
PFNGLCREATEPROGRAMPIPELINESPROC glo_glCreateProgramPipelines = NULL;
PFNGLCREATEPROGRESSFENCENVXPROC glo_glCreateProgressFenceNVX = NULL;
PFNGLCREATEQUERIESPROC glo_glCreateQueries = NULL;
PFNGLCREATERENDERBUFFERSPROC glo_glCreateRenderbuffers = NULL;
PFNGLCREATESAMPLERSPROC glo_glCreateSamplers = NULL;
PFNGLCREATESEMAPHORESNVPROC glo_glCreateSemaphoresNV = NULL;
PFNGLCREATESHADERPROC glo_glCreateShader = NULL;
PFNGLCREATESHADEROBJECTARBPROC glo_glCreateShaderObjectARB = NULL;
PFNGLCREATESHADERPROGRAMEXTPROC glo_glCreateShaderProgramEXT = NULL;
PFNGLCREATESHADERPROGRAMVPROC glo_glCreateShaderProgramv = NULL;
PFNGLCREATESTATESNVPROC glo_glCreateStatesNV = NULL;
PFNGLCREATESYNCFROMCLEVENTARBPROC glo_glCreateSyncFromCLeventARB = NULL;
PFNGLCREATETEXTURESPROC glo_glCreateTextures = NULL;
PFNGLCREATETRANSFORMFEEDBACKSPROC glo_glCreateTransformFeedbacks = NULL;
PFNGLCREATEVERTEXARRAYSPROC glo_glCreateVertexArrays = NULL;
PFNGLCULLFACEPROC glo_glCullFace = NULL;
PFNGLCULLPARAMETERDVEXTPROC glo_glCullParameterdvEXT = NULL;
PFNGLCULLPARAMETERFVEXTPROC glo_glCullParameterfvEXT = NULL;
PFNGLCURRENTPALETTEMATRIXARBPROC glo_glCurrentPaletteMatrixARB = NULL;
PFNGLDEBUGMESSAGECALLBACKPROC glo_glDebugMessageCallback = NULL;
PFNGLDEBUGMESSAGECALLBACKAMDPROC glo_glDebugMessageCallbackAMD = NULL;
PFNGLDEBUGMESSAGECALLBACKARBPROC glo_glDebugMessageCallbackARB = NULL;
PFNGLDEBUGMESSAGECONTROLPROC glo_glDebugMessageControl = NULL;
PFNGLDEBUGMESSAGECONTROLARBPROC glo_glDebugMessageControlARB = NULL;
PFNGLDEBUGMESSAGEENABLEAMDPROC glo_glDebugMessageEnableAMD = NULL;
PFNGLDEBUGMESSAGEINSERTPROC glo_glDebugMessageInsert = NULL;
PFNGLDEBUGMESSAGEINSERTAMDPROC glo_glDebugMessageInsertAMD = NULL;
PFNGLDEBUGMESSAGEINSERTARBPROC glo_glDebugMessageInsertARB = NULL;
PFNGLDEFORMSGIXPROC glo_glDeformSGIX = NULL;
PFNGLDEFORMATIONMAP3DSGIXPROC glo_glDeformationMap3dSGIX = NULL;
PFNGLDEFORMATIONMAP3FSGIXPROC glo_glDeformationMap3fSGIX = NULL;
PFNGLDELETEASYNCMARKERSSGIXPROC glo_glDeleteAsyncMarkersSGIX = NULL;
PFNGLDELETEBUFFERSPROC glo_glDeleteBuffers = NULL;
PFNGLDELETEBUFFERSARBPROC glo_glDeleteBuffersARB = NULL;
PFNGLDELETECOMMANDLISTSNVPROC glo_glDeleteCommandListsNV = NULL;
PFNGLDELETEFENCESAPPLEPROC glo_glDeleteFencesAPPLE = NULL;
PFNGLDELETEFENCESNVPROC glo_glDeleteFencesNV = NULL;
PFNGLDELETEFRAGMENTSHADERATIPROC glo_glDeleteFragmentShaderATI = NULL;
PFNGLDELETEFRAMEBUFFERSPROC glo_glDeleteFramebuffers = NULL;
PFNGLDELETEFRAMEBUFFERSEXTPROC glo_glDeleteFramebuffersEXT = NULL;
PFNGLDELETEMEMORYOBJECTSEXTPROC glo_glDeleteMemoryObjectsEXT = NULL;
PFNGLDELETENAMEDSTRINGARBPROC glo_glDeleteNamedStringARB = NULL;
PFNGLDELETENAMESAMDPROC glo_glDeleteNamesAMD = NULL;
PFNGLDELETEOBJECTARBPROC glo_glDeleteObjectARB = NULL;
PFNGLDELETEOCCLUSIONQUERIESNVPROC glo_glDeleteOcclusionQueriesNV = NULL;
PFNGLDELETEPATHSNVPROC glo_glDeletePathsNV = NULL;
PFNGLDELETEPERFMONITORSAMDPROC glo_glDeletePerfMonitorsAMD = NULL;
PFNGLDELETEPERFQUERYINTELPROC glo_glDeletePerfQueryINTEL = NULL;
PFNGLDELETEPROGRAMPROC glo_glDeleteProgram = NULL;
PFNGLDELETEPROGRAMPIPELINESPROC glo_glDeleteProgramPipelines = NULL;
PFNGLDELETEPROGRAMSARBPROC glo_glDeleteProgramsARB = NULL;
PFNGLDELETEPROGRAMSNVPROC glo_glDeleteProgramsNV = NULL;
PFNGLDELETEQUERIESPROC glo_glDeleteQueries = NULL;
PFNGLDELETEQUERIESARBPROC glo_glDeleteQueriesARB = NULL;
PFNGLDELETEQUERYRESOURCETAGNVPROC glo_glDeleteQueryResourceTagNV = NULL;
PFNGLDELETERENDERBUFFERSPROC glo_glDeleteRenderbuffers = NULL;
PFNGLDELETERENDERBUFFERSEXTPROC glo_glDeleteRenderbuffersEXT = NULL;
PFNGLDELETESAMPLERSPROC glo_glDeleteSamplers = NULL;
PFNGLDELETESEMAPHORESEXTPROC glo_glDeleteSemaphoresEXT = NULL;
PFNGLDELETESHADERPROC glo_glDeleteShader = NULL;
PFNGLDELETESTATESNVPROC glo_glDeleteStatesNV = NULL;
PFNGLDELETESYNCPROC glo_glDeleteSync = NULL;
PFNGLDELETETEXTURESPROC glo_glDeleteTextures = NULL;
PFNGLDELETETEXTURESEXTPROC glo_glDeleteTexturesEXT = NULL;
PFNGLDELETETRANSFORMFEEDBACKSPROC glo_glDeleteTransformFeedbacks = NULL;
PFNGLDELETETRANSFORMFEEDBACKSNVPROC glo_glDeleteTransformFeedbacksNV = NULL;
PFNGLDELETEVERTEXARRAYSPROC glo_glDeleteVertexArrays = NULL;
PFNGLDELETEVERTEXARRAYSAPPLEPROC glo_glDeleteVertexArraysAPPLE = NULL;
PFNGLDELETEVERTEXSHADEREXTPROC glo_glDeleteVertexShaderEXT = NULL;
PFNGLDEPTHBOUNDSEXTPROC glo_glDepthBoundsEXT = NULL;
PFNGLDEPTHBOUNDSDNVPROC glo_glDepthBoundsdNV = NULL;
PFNGLDEPTHFUNCPROC glo_glDepthFunc = NULL;
PFNGLDEPTHMASKPROC glo_glDepthMask = NULL;
PFNGLDEPTHRANGEPROC glo_glDepthRange = NULL;
PFNGLDEPTHRANGEARRAYDVNVPROC glo_glDepthRangeArraydvNV = NULL;
PFNGLDEPTHRANGEARRAYVPROC glo_glDepthRangeArrayv = NULL;
PFNGLDEPTHRANGEINDEXEDPROC glo_glDepthRangeIndexed = NULL;
PFNGLDEPTHRANGEINDEXEDDNVPROC glo_glDepthRangeIndexeddNV = NULL;
PFNGLDEPTHRANGEDNVPROC glo_glDepthRangedNV = NULL;
PFNGLDEPTHRANGEFPROC glo_glDepthRangef = NULL;
PFNGLDEPTHRANGEFOESPROC glo_glDepthRangefOES = NULL;
PFNGLDEPTHRANGEXOESPROC glo_glDepthRangexOES = NULL;
PFNGLDETACHOBJECTARBPROC glo_glDetachObjectARB = NULL;
PFNGLDETACHSHADERPROC glo_glDetachShader = NULL;
PFNGLDETAILTEXFUNCSGISPROC glo_glDetailTexFuncSGIS = NULL;
PFNGLDISABLEPROC glo_glDisable = NULL;
PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC glo_glDisableClientStateIndexedEXT = NULL;
PFNGLDISABLECLIENTSTATEIEXTPROC glo_glDisableClientStateiEXT = NULL;
PFNGLDISABLEINDEXEDEXTPROC glo_glDisableIndexedEXT = NULL;
PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC glo_glDisableVariantClientStateEXT = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBPROC glo_glDisableVertexArrayAttrib = NULL;
PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC glo_glDisableVertexArrayAttribEXT = NULL;
PFNGLDISABLEVERTEXARRAYEXTPROC glo_glDisableVertexArrayEXT = NULL;
PFNGLDISABLEVERTEXATTRIBAPPLEPROC glo_glDisableVertexAttribAPPLE = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYPROC glo_glDisableVertexAttribArray = NULL;
PFNGLDISABLEVERTEXATTRIBARRAYARBPROC glo_glDisableVertexAttribArrayARB = NULL;
PFNGLDISABLEIPROC glo_glDisablei = NULL;
PFNGLDISPATCHCOMPUTEPROC glo_glDispatchCompute = NULL;
PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC glo_glDispatchComputeGroupSizeARB = NULL;
PFNGLDISPATCHCOMPUTEINDIRECTPROC glo_glDispatchComputeIndirect = NULL;
PFNGLDRAWARRAYSPROC glo_glDrawArrays = NULL;
PFNGLDRAWARRAYSEXTPROC glo_glDrawArraysEXT = NULL;
PFNGLDRAWARRAYSINDIRECTPROC glo_glDrawArraysIndirect = NULL;
PFNGLDRAWARRAYSINSTANCEDPROC glo_glDrawArraysInstanced = NULL;
PFNGLDRAWARRAYSINSTANCEDARBPROC glo_glDrawArraysInstancedARB = NULL;
PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC glo_glDrawArraysInstancedBaseInstance = NULL;
PFNGLDRAWARRAYSINSTANCEDEXTPROC glo_glDrawArraysInstancedEXT = NULL;
PFNGLDRAWBUFFERPROC glo_glDrawBuffer = NULL;
PFNGLDRAWBUFFERSPROC glo_glDrawBuffers = NULL;
PFNGLDRAWBUFFERSARBPROC glo_glDrawBuffersARB = NULL;
PFNGLDRAWBUFFERSATIPROC glo_glDrawBuffersATI = NULL;
PFNGLDRAWCOMMANDSADDRESSNVPROC glo_glDrawCommandsAddressNV = NULL;
PFNGLDRAWCOMMANDSNVPROC glo_glDrawCommandsNV = NULL;
PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC glo_glDrawCommandsStatesAddressNV = NULL;
PFNGLDRAWCOMMANDSSTATESNVPROC glo_glDrawCommandsStatesNV = NULL;
PFNGLDRAWELEMENTARRAYAPPLEPROC glo_glDrawElementArrayAPPLE = NULL;
PFNGLDRAWELEMENTARRAYATIPROC glo_glDrawElementArrayATI = NULL;
PFNGLDRAWELEMENTSPROC glo_glDrawElements = NULL;
PFNGLDRAWELEMENTSBASEVERTEXPROC glo_glDrawElementsBaseVertex = NULL;
PFNGLDRAWELEMENTSINDIRECTPROC glo_glDrawElementsIndirect = NULL;
PFNGLDRAWELEMENTSINSTANCEDPROC glo_glDrawElementsInstanced = NULL;
PFNGLDRAWELEMENTSINSTANCEDARBPROC glo_glDrawElementsInstancedARB = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC glo_glDrawElementsInstancedBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC glo_glDrawElementsInstancedBaseVertex = NULL;
PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC glo_glDrawElementsInstancedBaseVertexBaseInstance = NULL;
PFNGLDRAWELEMENTSINSTANCEDEXTPROC glo_glDrawElementsInstancedEXT = NULL;
PFNGLDRAWMESHARRAYSSUNPROC glo_glDrawMeshArraysSUN = NULL;
PFNGLDRAWMESHTASKSEXTPROC glo_glDrawMeshTasksEXT = NULL;
PFNGLDRAWMESHTASKSINDIRECTEXTPROC glo_glDrawMeshTasksIndirectEXT = NULL;
PFNGLDRAWMESHTASKSINDIRECTNVPROC glo_glDrawMeshTasksIndirectNV = NULL;
PFNGLDRAWMESHTASKSNVPROC glo_glDrawMeshTasksNV = NULL;
PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC glo_glDrawRangeElementArrayAPPLE = NULL;
PFNGLDRAWRANGEELEMENTARRAYATIPROC glo_glDrawRangeElementArrayATI = NULL;
PFNGLDRAWRANGEELEMENTSPROC glo_glDrawRangeElements = NULL;
PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC glo_glDrawRangeElementsBaseVertex = NULL;
PFNGLDRAWRANGEELEMENTSEXTPROC glo_glDrawRangeElementsEXT = NULL;
PFNGLDRAWTEXTURENVPROC glo_glDrawTextureNV = NULL;
PFNGLDRAWTRANSFORMFEEDBACKPROC glo_glDrawTransformFeedback = NULL;
PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC glo_glDrawTransformFeedbackInstanced = NULL;
PFNGLDRAWTRANSFORMFEEDBACKNVPROC glo_glDrawTransformFeedbackNV = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC glo_glDrawTransformFeedbackStream = NULL;
PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC glo_glDrawTransformFeedbackStreamInstanced = NULL;
PFNGLDRAWVKIMAGENVPROC glo_glDrawVkImageNV = NULL;
PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC glo_glEGLImageTargetTexStorageEXT = NULL;
PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC glo_glEGLImageTargetTextureStorageEXT = NULL;
PFNGLEDGEFLAGFORMATNVPROC glo_glEdgeFlagFormatNV = NULL;
PFNGLEDGEFLAGPOINTEREXTPROC glo_glEdgeFlagPointerEXT = NULL;
PFNGLEDGEFLAGPOINTERLISTIBMPROC glo_glEdgeFlagPointerListIBM = NULL;
PFNGLELEMENTPOINTERAPPLEPROC glo_glElementPointerAPPLE = NULL;
PFNGLELEMENTPOINTERATIPROC glo_glElementPointerATI = NULL;
PFNGLENABLEPROC glo_glEnable = NULL;
PFNGLENABLECLIENTSTATEINDEXEDEXTPROC glo_glEnableClientStateIndexedEXT = NULL;
PFNGLENABLECLIENTSTATEIEXTPROC glo_glEnableClientStateiEXT = NULL;
PFNGLENABLEINDEXEDEXTPROC glo_glEnableIndexedEXT = NULL;
PFNGLENABLEVARIANTCLIENTSTATEEXTPROC glo_glEnableVariantClientStateEXT = NULL;
PFNGLENABLEVERTEXARRAYATTRIBPROC glo_glEnableVertexArrayAttrib = NULL;
PFNGLENABLEVERTEXARRAYATTRIBEXTPROC glo_glEnableVertexArrayAttribEXT = NULL;
PFNGLENABLEVERTEXARRAYEXTPROC glo_glEnableVertexArrayEXT = NULL;
PFNGLENABLEVERTEXATTRIBAPPLEPROC glo_glEnableVertexAttribAPPLE = NULL;
PFNGLENABLEVERTEXATTRIBARRAYPROC glo_glEnableVertexAttribArray = NULL;
PFNGLENABLEVERTEXATTRIBARRAYARBPROC glo_glEnableVertexAttribArrayARB = NULL;
PFNGLENABLEIPROC glo_glEnablei = NULL;
PFNGLENDCONDITIONALRENDERPROC glo_glEndConditionalRender = NULL;
PFNGLENDCONDITIONALRENDERNVPROC glo_glEndConditionalRenderNV = NULL;
PFNGLENDCONDITIONALRENDERNVXPROC glo_glEndConditionalRenderNVX = NULL;
PFNGLENDFRAGMENTSHADERATIPROC glo_glEndFragmentShaderATI = NULL;
PFNGLENDOCCLUSIONQUERYNVPROC glo_glEndOcclusionQueryNV = NULL;
PFNGLENDPERFMONITORAMDPROC glo_glEndPerfMonitorAMD = NULL;
PFNGLENDPERFQUERYINTELPROC glo_glEndPerfQueryINTEL = NULL;
PFNGLENDQUERYPROC glo_glEndQuery = NULL;
PFNGLENDQUERYARBPROC glo_glEndQueryARB = NULL;
PFNGLENDQUERYINDEXEDPROC glo_glEndQueryIndexed = NULL;
PFNGLENDTRANSFORMFEEDBACKPROC glo_glEndTransformFeedback = NULL;
PFNGLENDTRANSFORMFEEDBACKEXTPROC glo_glEndTransformFeedbackEXT = NULL;
PFNGLENDTRANSFORMFEEDBACKNVPROC glo_glEndTransformFeedbackNV = NULL;
PFNGLENDVERTEXSHADEREXTPROC glo_glEndVertexShaderEXT = NULL;
PFNGLENDVIDEOCAPTURENVPROC glo_glEndVideoCaptureNV = NULL;
PFNGLEVALCOORD1XOESPROC glo_glEvalCoord1xOES = NULL;
PFNGLEVALCOORD1XVOESPROC glo_glEvalCoord1xvOES = NULL;
PFNGLEVALCOORD2XOESPROC glo_glEvalCoord2xOES = NULL;
PFNGLEVALCOORD2XVOESPROC glo_glEvalCoord2xvOES = NULL;
PFNGLEVALMAPSNVPROC glo_glEvalMapsNV = NULL;
PFNGLEVALUATEDEPTHVALUESARBPROC glo_glEvaluateDepthValuesARB = NULL;
PFNGLEXECUTEPROGRAMNVPROC glo_glExecuteProgramNV = NULL;
PFNGLEXTRACTCOMPONENTEXTPROC glo_glExtractComponentEXT = NULL;
PFNGLFEEDBACKBUFFERXOESPROC glo_glFeedbackBufferxOES = NULL;
PFNGLFENCESYNCPROC glo_glFenceSync = NULL;
PFNGLFINALCOMBINERINPUTNVPROC glo_glFinalCombinerInputNV = NULL;
PFNGLFINISHPROC glo_glFinish = NULL;
PFNGLFINISHASYNCSGIXPROC glo_glFinishAsyncSGIX = NULL;
PFNGLFINISHFENCEAPPLEPROC glo_glFinishFenceAPPLE = NULL;
PFNGLFINISHFENCENVPROC glo_glFinishFenceNV = NULL;
PFNGLFINISHOBJECTAPPLEPROC glo_glFinishObjectAPPLE = NULL;
PFNGLFINISHTEXTURESUNXPROC glo_glFinishTextureSUNX = NULL;
PFNGLFLUSHPROC glo_glFlush = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEPROC glo_glFlushMappedBufferRange = NULL;
PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC glo_glFlushMappedBufferRangeAPPLE = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC glo_glFlushMappedNamedBufferRange = NULL;
PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC glo_glFlushMappedNamedBufferRangeEXT = NULL;
PFNGLFLUSHPIXELDATARANGENVPROC glo_glFlushPixelDataRangeNV = NULL;
PFNGLFLUSHRASTERSGIXPROC glo_glFlushRasterSGIX = NULL;
PFNGLFLUSHSTATICDATAIBMPROC glo_glFlushStaticDataIBM = NULL;
PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC glo_glFlushVertexArrayRangeAPPLE = NULL;
PFNGLFLUSHVERTEXARRAYRANGENVPROC glo_glFlushVertexArrayRangeNV = NULL;
PFNGLFOGCOORDFORMATNVPROC glo_glFogCoordFormatNV = NULL;
PFNGLFOGCOORDPOINTEREXTPROC glo_glFogCoordPointerEXT = NULL;
PFNGLFOGCOORDPOINTERLISTIBMPROC glo_glFogCoordPointerListIBM = NULL;
PFNGLFOGCOORDDEXTPROC glo_glFogCoorddEXT = NULL;
PFNGLFOGCOORDDVEXTPROC glo_glFogCoorddvEXT = NULL;
PFNGLFOGCOORDFEXTPROC glo_glFogCoordfEXT = NULL;
PFNGLFOGCOORDFVEXTPROC glo_glFogCoordfvEXT = NULL;
PFNGLFOGCOORDHNVPROC glo_glFogCoordhNV = NULL;
PFNGLFOGCOORDHVNVPROC glo_glFogCoordhvNV = NULL;
PFNGLFOGFUNCSGISPROC glo_glFogFuncSGIS = NULL;
PFNGLFOGXOESPROC glo_glFogxOES = NULL;
PFNGLFOGXVOESPROC glo_glFogxvOES = NULL;
PFNGLFRAGMENTCOLORMATERIALSGIXPROC glo_glFragmentColorMaterialSGIX = NULL;
PFNGLFRAGMENTCOVERAGECOLORNVPROC glo_glFragmentCoverageColorNV = NULL;
PFNGLFRAGMENTLIGHTMODELFSGIXPROC glo_glFragmentLightModelfSGIX = NULL;
PFNGLFRAGMENTLIGHTMODELFVSGIXPROC glo_glFragmentLightModelfvSGIX = NULL;
PFNGLFRAGMENTLIGHTMODELISGIXPROC glo_glFragmentLightModeliSGIX = NULL;
PFNGLFRAGMENTLIGHTMODELIVSGIXPROC glo_glFragmentLightModelivSGIX = NULL;
PFNGLFRAGMENTLIGHTFSGIXPROC glo_glFragmentLightfSGIX = NULL;
PFNGLFRAGMENTLIGHTFVSGIXPROC glo_glFragmentLightfvSGIX = NULL;
PFNGLFRAGMENTLIGHTISGIXPROC glo_glFragmentLightiSGIX = NULL;
PFNGLFRAGMENTLIGHTIVSGIXPROC glo_glFragmentLightivSGIX = NULL;
PFNGLFRAGMENTMATERIALFSGIXPROC glo_glFragmentMaterialfSGIX = NULL;
PFNGLFRAGMENTMATERIALFVSGIXPROC glo_glFragmentMaterialfvSGIX = NULL;
PFNGLFRAGMENTMATERIALISGIXPROC glo_glFragmentMaterialiSGIX = NULL;
PFNGLFRAGMENTMATERIALIVSGIXPROC glo_glFragmentMaterialivSGIX = NULL;
PFNGLFRAMETERMINATORGREMEDYPROC glo_glFrameTerminatorGREMEDY = NULL;
PFNGLFRAMEZOOMSGIXPROC glo_glFrameZoomSGIX = NULL;
PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC glo_glFramebufferDrawBufferEXT = NULL;
PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC glo_glFramebufferDrawBuffersEXT = NULL;
PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC glo_glFramebufferFetchBarrierEXT = NULL;
PFNGLFRAMEBUFFERPARAMETERIPROC glo_glFramebufferParameteri = NULL;
PFNGLFRAMEBUFFERPARAMETERIMESAPROC glo_glFramebufferParameteriMESA = NULL;
PFNGLFRAMEBUFFERREADBUFFEREXTPROC glo_glFramebufferReadBufferEXT = NULL;
PFNGLFRAMEBUFFERRENDERBUFFERPROC glo_glFramebufferRenderbuffer = NULL;
PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC glo_glFramebufferRenderbufferEXT = NULL;
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glo_glFramebufferSampleLocationsfvARB = NULL;
PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glo_glFramebufferSampleLocationsfvNV = NULL;
PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC glo_glFramebufferSamplePositionsfvAMD = NULL;
PFNGLFRAMEBUFFERSHADINGRATEEXTPROC glo_glFramebufferShadingRateEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREPROC glo_glFramebufferTexture = NULL;
PFNGLFRAMEBUFFERTEXTURE1DPROC glo_glFramebufferTexture1D = NULL;
PFNGLFRAMEBUFFERTEXTURE1DEXTPROC glo_glFramebufferTexture1DEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE2DPROC glo_glFramebufferTexture2D = NULL;
PFNGLFRAMEBUFFERTEXTURE2DEXTPROC glo_glFramebufferTexture2DEXT = NULL;
PFNGLFRAMEBUFFERTEXTURE3DPROC glo_glFramebufferTexture3D = NULL;
PFNGLFRAMEBUFFERTEXTURE3DEXTPROC glo_glFramebufferTexture3DEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREARBPROC glo_glFramebufferTextureARB = NULL;
PFNGLFRAMEBUFFERTEXTUREEXTPROC glo_glFramebufferTextureEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREFACEARBPROC glo_glFramebufferTextureFaceARB = NULL;
PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC glo_glFramebufferTextureFaceEXT = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERPROC glo_glFramebufferTextureLayer = NULL;
PFNGLFRAMEBUFFERTEXTURELAYERARBPROC glo_glFramebufferTextureLayerARB = NULL;
PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC glo_glFramebufferTextureLayerEXT = NULL;
PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glo_glFramebufferTextureMultiviewOVR = NULL;
PFNGLFREEOBJECTBUFFERATIPROC glo_glFreeObjectBufferATI = NULL;
PFNGLFRONTFACEPROC glo_glFrontFace = NULL;
PFNGLFRUSTUMFOESPROC glo_glFrustumfOES = NULL;
PFNGLFRUSTUMXOESPROC glo_glFrustumxOES = NULL;
PFNGLGENASYNCMARKERSSGIXPROC glo_glGenAsyncMarkersSGIX = NULL;
PFNGLGENBUFFERSPROC glo_glGenBuffers = NULL;
PFNGLGENBUFFERSARBPROC glo_glGenBuffersARB = NULL;
PFNGLGENFENCESAPPLEPROC glo_glGenFencesAPPLE = NULL;
PFNGLGENFENCESNVPROC glo_glGenFencesNV = NULL;
PFNGLGENFRAGMENTSHADERSATIPROC glo_glGenFragmentShadersATI = NULL;
PFNGLGENFRAMEBUFFERSPROC glo_glGenFramebuffers = NULL;
PFNGLGENFRAMEBUFFERSEXTPROC glo_glGenFramebuffersEXT = NULL;
PFNGLGENNAMESAMDPROC glo_glGenNamesAMD = NULL;
PFNGLGENOCCLUSIONQUERIESNVPROC glo_glGenOcclusionQueriesNV = NULL;
PFNGLGENPATHSNVPROC glo_glGenPathsNV = NULL;
PFNGLGENPERFMONITORSAMDPROC glo_glGenPerfMonitorsAMD = NULL;
PFNGLGENPROGRAMPIPELINESPROC glo_glGenProgramPipelines = NULL;
PFNGLGENPROGRAMSARBPROC glo_glGenProgramsARB = NULL;
PFNGLGENPROGRAMSNVPROC glo_glGenProgramsNV = NULL;
PFNGLGENQUERIESPROC glo_glGenQueries = NULL;
PFNGLGENQUERIESARBPROC glo_glGenQueriesARB = NULL;
PFNGLGENQUERYRESOURCETAGNVPROC glo_glGenQueryResourceTagNV = NULL;
PFNGLGENRENDERBUFFERSPROC glo_glGenRenderbuffers = NULL;
PFNGLGENRENDERBUFFERSEXTPROC glo_glGenRenderbuffersEXT = NULL;
PFNGLGENSAMPLERSPROC glo_glGenSamplers = NULL;
PFNGLGENSEMAPHORESEXTPROC glo_glGenSemaphoresEXT = NULL;
PFNGLGENSYMBOLSEXTPROC glo_glGenSymbolsEXT = NULL;
PFNGLGENTEXTURESPROC glo_glGenTextures = NULL;
PFNGLGENTEXTURESEXTPROC glo_glGenTexturesEXT = NULL;
PFNGLGENTRANSFORMFEEDBACKSPROC glo_glGenTransformFeedbacks = NULL;
PFNGLGENTRANSFORMFEEDBACKSNVPROC glo_glGenTransformFeedbacksNV = NULL;
PFNGLGENVERTEXARRAYSPROC glo_glGenVertexArrays = NULL;
PFNGLGENVERTEXARRAYSAPPLEPROC glo_glGenVertexArraysAPPLE = NULL;
PFNGLGENVERTEXSHADERSEXTPROC glo_glGenVertexShadersEXT = NULL;
PFNGLGENERATEMIPMAPPROC glo_glGenerateMipmap = NULL;
PFNGLGENERATEMIPMAPEXTPROC glo_glGenerateMipmapEXT = NULL;
PFNGLGENERATEMULTITEXMIPMAPEXTPROC glo_glGenerateMultiTexMipmapEXT = NULL;
PFNGLGENERATETEXTUREMIPMAPPROC glo_glGenerateTextureMipmap = NULL;
PFNGLGENERATETEXTUREMIPMAPEXTPROC glo_glGenerateTextureMipmapEXT = NULL;
PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC glo_glGetActiveAtomicCounterBufferiv = NULL;
PFNGLGETACTIVEATTRIBPROC glo_glGetActiveAttrib = NULL;
PFNGLGETACTIVEATTRIBARBPROC glo_glGetActiveAttribARB = NULL;
PFNGLGETACTIVESUBROUTINENAMEPROC glo_glGetActiveSubroutineName = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC glo_glGetActiveSubroutineUniformName = NULL;
PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC glo_glGetActiveSubroutineUniformiv = NULL;
PFNGLGETACTIVEUNIFORMPROC glo_glGetActiveUniform = NULL;
PFNGLGETACTIVEUNIFORMARBPROC glo_glGetActiveUniformARB = NULL;
PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC glo_glGetActiveUniformBlockName = NULL;
PFNGLGETACTIVEUNIFORMBLOCKIVPROC glo_glGetActiveUniformBlockiv = NULL;
PFNGLGETACTIVEUNIFORMNAMEPROC glo_glGetActiveUniformName = NULL;
PFNGLGETACTIVEUNIFORMSIVPROC glo_glGetActiveUniformsiv = NULL;
PFNGLGETACTIVEVARYINGNVPROC glo_glGetActiveVaryingNV = NULL;
PFNGLGETARRAYOBJECTFVATIPROC glo_glGetArrayObjectfvATI = NULL;
PFNGLGETARRAYOBJECTIVATIPROC glo_glGetArrayObjectivATI = NULL;
PFNGLGETATTACHEDOBJECTSARBPROC glo_glGetAttachedObjectsARB = NULL;
PFNGLGETATTACHEDSHADERSPROC glo_glGetAttachedShaders = NULL;
PFNGLGETATTRIBLOCATIONPROC glo_glGetAttribLocation = NULL;
PFNGLGETATTRIBLOCATIONARBPROC glo_glGetAttribLocationARB = NULL;
PFNGLGETBOOLEANINDEXEDVEXTPROC glo_glGetBooleanIndexedvEXT = NULL;
PFNGLGETBOOLEANI_VPROC glo_glGetBooleani_v = NULL;
PFNGLGETBOOLEANVPROC glo_glGetBooleanv = NULL;
PFNGLGETBUFFERPARAMETERI64VPROC glo_glGetBufferParameteri64v = NULL;
PFNGLGETBUFFERPARAMETERIVPROC glo_glGetBufferParameteriv = NULL;
PFNGLGETBUFFERPARAMETERIVARBPROC glo_glGetBufferParameterivARB = NULL;
PFNGLGETBUFFERPARAMETERUI64VNVPROC glo_glGetBufferParameterui64vNV = NULL;
PFNGLGETBUFFERPOINTERVPROC glo_glGetBufferPointerv = NULL;
PFNGLGETBUFFERPOINTERVARBPROC glo_glGetBufferPointervARB = NULL;
PFNGLGETBUFFERSUBDATAPROC glo_glGetBufferSubData = NULL;
PFNGLGETBUFFERSUBDATAARBPROC glo_glGetBufferSubDataARB = NULL;
PFNGLGETCLIPPLANEFOESPROC glo_glGetClipPlanefOES = NULL;
PFNGLGETCLIPPLANEXOESPROC glo_glGetClipPlanexOES = NULL;
PFNGLGETCOLORTABLEEXTPROC glo_glGetColorTableEXT = NULL;
PFNGLGETCOLORTABLEPARAMETERFVEXTPROC glo_glGetColorTableParameterfvEXT = NULL;
PFNGLGETCOLORTABLEPARAMETERFVSGIPROC glo_glGetColorTableParameterfvSGI = NULL;
PFNGLGETCOLORTABLEPARAMETERIVEXTPROC glo_glGetColorTableParameterivEXT = NULL;
PFNGLGETCOLORTABLEPARAMETERIVSGIPROC glo_glGetColorTableParameterivSGI = NULL;
PFNGLGETCOLORTABLESGIPROC glo_glGetColorTableSGI = NULL;
PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC glo_glGetCombinerInputParameterfvNV = NULL;
PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC glo_glGetCombinerInputParameterivNV = NULL;
PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC glo_glGetCombinerOutputParameterfvNV = NULL;
PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC glo_glGetCombinerOutputParameterivNV = NULL;
PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC glo_glGetCombinerStageParameterfvNV = NULL;
PFNGLGETCOMMANDHEADERNVPROC glo_glGetCommandHeaderNV = NULL;
PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC glo_glGetCompressedMultiTexImageEXT = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEPROC glo_glGetCompressedTexImage = NULL;
PFNGLGETCOMPRESSEDTEXIMAGEARBPROC glo_glGetCompressedTexImageARB = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC glo_glGetCompressedTextureImage = NULL;
PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC glo_glGetCompressedTextureImageEXT = NULL;
PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC glo_glGetCompressedTextureSubImage = NULL;
PFNGLGETCONVOLUTIONFILTEREXTPROC glo_glGetConvolutionFilterEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC glo_glGetConvolutionParameterfvEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC glo_glGetConvolutionParameterivEXT = NULL;
PFNGLGETCONVOLUTIONPARAMETERXVOESPROC glo_glGetConvolutionParameterxvOES = NULL;
PFNGLGETCOVERAGEMODULATIONTABLENVPROC glo_glGetCoverageModulationTableNV = NULL;
PFNGLGETDEBUGMESSAGELOGPROC glo_glGetDebugMessageLog = NULL;
PFNGLGETDEBUGMESSAGELOGAMDPROC glo_glGetDebugMessageLogAMD = NULL;
PFNGLGETDEBUGMESSAGELOGARBPROC glo_glGetDebugMessageLogARB = NULL;
PFNGLGETDETAILTEXFUNCSGISPROC glo_glGetDetailTexFuncSGIS = NULL;
PFNGLGETDOUBLEINDEXEDVEXTPROC glo_glGetDoubleIndexedvEXT = NULL;
PFNGLGETDOUBLEI_VPROC glo_glGetDoublei_v = NULL;
PFNGLGETDOUBLEI_VEXTPROC glo_glGetDoublei_vEXT = NULL;
PFNGLGETDOUBLEVPROC glo_glGetDoublev = NULL;
PFNGLGETERRORPROC glo_glGetError = NULL;
PFNGLGETFENCEIVNVPROC glo_glGetFenceivNV = NULL;
PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC glo_glGetFinalCombinerInputParameterfvNV = NULL;
PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC glo_glGetFinalCombinerInputParameterivNV = NULL;
PFNGLGETFIRSTPERFQUERYIDINTELPROC glo_glGetFirstPerfQueryIdINTEL = NULL;
PFNGLGETFIXEDVOESPROC glo_glGetFixedvOES = NULL;
PFNGLGETFLOATINDEXEDVEXTPROC glo_glGetFloatIndexedvEXT = NULL;
PFNGLGETFLOATI_VPROC glo_glGetFloati_v = NULL;
PFNGLGETFLOATI_VEXTPROC glo_glGetFloati_vEXT = NULL;
PFNGLGETFLOATVPROC glo_glGetFloatv = NULL;
PFNGLGETFOGFUNCSGISPROC glo_glGetFogFuncSGIS = NULL;
PFNGLGETFRAGDATAINDEXPROC glo_glGetFragDataIndex = NULL;
PFNGLGETFRAGDATALOCATIONPROC glo_glGetFragDataLocation = NULL;
PFNGLGETFRAGDATALOCATIONEXTPROC glo_glGetFragDataLocationEXT = NULL;
PFNGLGETFRAGMENTLIGHTFVSGIXPROC glo_glGetFragmentLightfvSGIX = NULL;
PFNGLGETFRAGMENTLIGHTIVSGIXPROC glo_glGetFragmentLightivSGIX = NULL;
PFNGLGETFRAGMENTMATERIALFVSGIXPROC glo_glGetFragmentMaterialfvSGIX = NULL;
PFNGLGETFRAGMENTMATERIALIVSGIXPROC glo_glGetFragmentMaterialivSGIX = NULL;
PFNGLGETFRAGMENTSHADINGRATESEXTPROC glo_glGetFragmentShadingRatesEXT = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC glo_glGetFramebufferAttachmentParameteriv = NULL;
PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glo_glGetFramebufferAttachmentParameterivEXT = NULL;
PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC glo_glGetFramebufferParameterfvAMD = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVPROC glo_glGetFramebufferParameteriv = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC glo_glGetFramebufferParameterivEXT = NULL;
PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC glo_glGetFramebufferParameterivMESA = NULL;
PFNGLGETGRAPHICSRESETSTATUSPROC glo_glGetGraphicsResetStatus = NULL;
PFNGLGETGRAPHICSRESETSTATUSARBPROC glo_glGetGraphicsResetStatusARB = NULL;
PFNGLGETHANDLEARBPROC glo_glGetHandleARB = NULL;
PFNGLGETHISTOGRAMEXTPROC glo_glGetHistogramEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERFVEXTPROC glo_glGetHistogramParameterfvEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERIVEXTPROC glo_glGetHistogramParameterivEXT = NULL;
PFNGLGETHISTOGRAMPARAMETERXVOESPROC glo_glGetHistogramParameterxvOES = NULL;
PFNGLGETIMAGEHANDLEARBPROC glo_glGetImageHandleARB = NULL;
PFNGLGETIMAGEHANDLENVPROC glo_glGetImageHandleNV = NULL;
PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC glo_glGetImageTransformParameterfvHP = NULL;
PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC glo_glGetImageTransformParameterivHP = NULL;
PFNGLGETINFOLOGARBPROC glo_glGetInfoLogARB = NULL;
PFNGLGETINSTRUMENTSSGIXPROC glo_glGetInstrumentsSGIX = NULL;
PFNGLGETINTEGER64I_VPROC glo_glGetInteger64i_v = NULL;
PFNGLGETINTEGER64VPROC glo_glGetInteger64v = NULL;
PFNGLGETINTEGERINDEXEDVEXTPROC glo_glGetIntegerIndexedvEXT = NULL;
PFNGLGETINTEGERI_VPROC glo_glGetIntegeri_v = NULL;
PFNGLGETINTEGERUI64I_VNVPROC glo_glGetIntegerui64i_vNV = NULL;
PFNGLGETINTEGERUI64VNVPROC glo_glGetIntegerui64vNV = NULL;
PFNGLGETINTEGERVPROC glo_glGetIntegerv = NULL;
PFNGLGETINTERNALFORMATSAMPLEIVNVPROC glo_glGetInternalformatSampleivNV = NULL;
PFNGLGETINTERNALFORMATI64VPROC glo_glGetInternalformati64v = NULL;
PFNGLGETINTERNALFORMATIVPROC glo_glGetInternalformativ = NULL;
PFNGLGETINVARIANTBOOLEANVEXTPROC glo_glGetInvariantBooleanvEXT = NULL;
PFNGLGETINVARIANTFLOATVEXTPROC glo_glGetInvariantFloatvEXT = NULL;
PFNGLGETINVARIANTINTEGERVEXTPROC glo_glGetInvariantIntegervEXT = NULL;
PFNGLGETLIGHTXOESPROC glo_glGetLightxOES = NULL;
PFNGLGETLISTPARAMETERFVSGIXPROC glo_glGetListParameterfvSGIX = NULL;
PFNGLGETLISTPARAMETERIVSGIXPROC glo_glGetListParameterivSGIX = NULL;
PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC glo_glGetLocalConstantBooleanvEXT = NULL;
PFNGLGETLOCALCONSTANTFLOATVEXTPROC glo_glGetLocalConstantFloatvEXT = NULL;
PFNGLGETLOCALCONSTANTINTEGERVEXTPROC glo_glGetLocalConstantIntegervEXT = NULL;
PFNGLGETMAPATTRIBPARAMETERFVNVPROC glo_glGetMapAttribParameterfvNV = NULL;
PFNGLGETMAPATTRIBPARAMETERIVNVPROC glo_glGetMapAttribParameterivNV = NULL;
PFNGLGETMAPCONTROLPOINTSNVPROC glo_glGetMapControlPointsNV = NULL;
PFNGLGETMAPPARAMETERFVNVPROC glo_glGetMapParameterfvNV = NULL;
PFNGLGETMAPPARAMETERIVNVPROC glo_glGetMapParameterivNV = NULL;
PFNGLGETMAPXVOESPROC glo_glGetMapxvOES = NULL;
PFNGLGETMATERIALXOESPROC glo_glGetMaterialxOES = NULL;
PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC glo_glGetMemoryObjectDetachedResourcesuivNV = NULL;
PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC glo_glGetMemoryObjectParameterivEXT = NULL;
PFNGLGETMINMAXEXTPROC glo_glGetMinmaxEXT = NULL;
PFNGLGETMINMAXPARAMETERFVEXTPROC glo_glGetMinmaxParameterfvEXT = NULL;
PFNGLGETMINMAXPARAMETERIVEXTPROC glo_glGetMinmaxParameterivEXT = NULL;
PFNGLGETMULTITEXENVFVEXTPROC glo_glGetMultiTexEnvfvEXT = NULL;
PFNGLGETMULTITEXENVIVEXTPROC glo_glGetMultiTexEnvivEXT = NULL;
PFNGLGETMULTITEXGENDVEXTPROC glo_glGetMultiTexGendvEXT = NULL;
PFNGLGETMULTITEXGENFVEXTPROC glo_glGetMultiTexGenfvEXT = NULL;
PFNGLGETMULTITEXGENIVEXTPROC glo_glGetMultiTexGenivEXT = NULL;
PFNGLGETMULTITEXIMAGEEXTPROC glo_glGetMultiTexImageEXT = NULL;
PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC glo_glGetMultiTexLevelParameterfvEXT = NULL;
PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC glo_glGetMultiTexLevelParameterivEXT = NULL;
PFNGLGETMULTITEXPARAMETERIIVEXTPROC glo_glGetMultiTexParameterIivEXT = NULL;
PFNGLGETMULTITEXPARAMETERIUIVEXTPROC glo_glGetMultiTexParameterIuivEXT = NULL;
PFNGLGETMULTITEXPARAMETERFVEXTPROC glo_glGetMultiTexParameterfvEXT = NULL;
PFNGLGETMULTITEXPARAMETERIVEXTPROC glo_glGetMultiTexParameterivEXT = NULL;
PFNGLGETMULTISAMPLEFVPROC glo_glGetMultisamplefv = NULL;
PFNGLGETMULTISAMPLEFVNVPROC glo_glGetMultisamplefvNV = NULL;
PFNGLGETNAMEDBUFFERPARAMETERI64VPROC glo_glGetNamedBufferParameteri64v = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVPROC glo_glGetNamedBufferParameteriv = NULL;
PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC glo_glGetNamedBufferParameterivEXT = NULL;
PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC glo_glGetNamedBufferParameterui64vNV = NULL;
PFNGLGETNAMEDBUFFERPOINTERVPROC glo_glGetNamedBufferPointerv = NULL;
PFNGLGETNAMEDBUFFERPOINTERVEXTPROC glo_glGetNamedBufferPointervEXT = NULL;
PFNGLGETNAMEDBUFFERSUBDATAPROC glo_glGetNamedBufferSubData = NULL;
PFNGLGETNAMEDBUFFERSUBDATAEXTPROC glo_glGetNamedBufferSubDataEXT = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC glo_glGetNamedFramebufferAttachmentParameteriv = NULL;
PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC glo_glGetNamedFramebufferAttachmentParameterivEXT = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC glo_glGetNamedFramebufferParameterfvAMD = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC glo_glGetNamedFramebufferParameteriv = NULL;
PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC glo_glGetNamedFramebufferParameterivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC glo_glGetNamedProgramLocalParameterIivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC glo_glGetNamedProgramLocalParameterIuivEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC glo_glGetNamedProgramLocalParameterdvEXT = NULL;
PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC glo_glGetNamedProgramLocalParameterfvEXT = NULL;
PFNGLGETNAMEDPROGRAMSTRINGEXTPROC glo_glGetNamedProgramStringEXT = NULL;
PFNGLGETNAMEDPROGRAMIVEXTPROC glo_glGetNamedProgramivEXT = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC glo_glGetNamedRenderbufferParameteriv = NULL;
PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC glo_glGetNamedRenderbufferParameterivEXT = NULL;
PFNGLGETNAMEDSTRINGARBPROC glo_glGetNamedStringARB = NULL;
PFNGLGETNAMEDSTRINGIVARBPROC glo_glGetNamedStringivARB = NULL;
PFNGLGETNEXTPERFQUERYIDINTELPROC glo_glGetNextPerfQueryIdINTEL = NULL;
PFNGLGETOBJECTBUFFERFVATIPROC glo_glGetObjectBufferfvATI = NULL;
PFNGLGETOBJECTBUFFERIVATIPROC glo_glGetObjectBufferivATI = NULL;
PFNGLGETOBJECTLABELPROC glo_glGetObjectLabel = NULL;
PFNGLGETOBJECTLABELEXTPROC glo_glGetObjectLabelEXT = NULL;
PFNGLGETOBJECTPARAMETERFVARBPROC glo_glGetObjectParameterfvARB = NULL;
PFNGLGETOBJECTPARAMETERIVAPPLEPROC glo_glGetObjectParameterivAPPLE = NULL;
PFNGLGETOBJECTPARAMETERIVARBPROC glo_glGetObjectParameterivARB = NULL;
PFNGLGETOBJECTPTRLABELPROC glo_glGetObjectPtrLabel = NULL;
PFNGLGETOCCLUSIONQUERYIVNVPROC glo_glGetOcclusionQueryivNV = NULL;
PFNGLGETOCCLUSIONQUERYUIVNVPROC glo_glGetOcclusionQueryuivNV = NULL;
PFNGLGETPATHCOMMANDSNVPROC glo_glGetPathCommandsNV = NULL;
PFNGLGETPATHCOORDSNVPROC glo_glGetPathCoordsNV = NULL;
PFNGLGETPATHDASHARRAYNVPROC glo_glGetPathDashArrayNV = NULL;
PFNGLGETPATHLENGTHNVPROC glo_glGetPathLengthNV = NULL;
PFNGLGETPATHMETRICRANGENVPROC glo_glGetPathMetricRangeNV = NULL;
PFNGLGETPATHMETRICSNVPROC glo_glGetPathMetricsNV = NULL;
PFNGLGETPATHPARAMETERFVNVPROC glo_glGetPathParameterfvNV = NULL;
PFNGLGETPATHPARAMETERIVNVPROC glo_glGetPathParameterivNV = NULL;
PFNGLGETPATHSPACINGNVPROC glo_glGetPathSpacingNV = NULL;
PFNGLGETPERFCOUNTERINFOINTELPROC glo_glGetPerfCounterInfoINTEL = NULL;
PFNGLGETPERFMONITORCOUNTERDATAAMDPROC glo_glGetPerfMonitorCounterDataAMD = NULL;
PFNGLGETPERFMONITORCOUNTERINFOAMDPROC glo_glGetPerfMonitorCounterInfoAMD = NULL;
PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC glo_glGetPerfMonitorCounterStringAMD = NULL;
PFNGLGETPERFMONITORCOUNTERSAMDPROC glo_glGetPerfMonitorCountersAMD = NULL;
PFNGLGETPERFMONITORGROUPSTRINGAMDPROC glo_glGetPerfMonitorGroupStringAMD = NULL;
PFNGLGETPERFMONITORGROUPSAMDPROC glo_glGetPerfMonitorGroupsAMD = NULL;
PFNGLGETPERFQUERYDATAINTELPROC glo_glGetPerfQueryDataINTEL = NULL;
PFNGLGETPERFQUERYIDBYNAMEINTELPROC glo_glGetPerfQueryIdByNameINTEL = NULL;
PFNGLGETPERFQUERYINFOINTELPROC glo_glGetPerfQueryInfoINTEL = NULL;
PFNGLGETPIXELMAPXVPROC glo_glGetPixelMapxv = NULL;
PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC glo_glGetPixelTexGenParameterfvSGIS = NULL;
PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC glo_glGetPixelTexGenParameterivSGIS = NULL;
PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC glo_glGetPixelTransformParameterfvEXT = NULL;
PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC glo_glGetPixelTransformParameterivEXT = NULL;
PFNGLGETPOINTERINDEXEDVEXTPROC glo_glGetPointerIndexedvEXT = NULL;
PFNGLGETPOINTERI_VEXTPROC glo_glGetPointeri_vEXT = NULL;
PFNGLGETPOINTERVPROC glo_glGetPointerv = NULL;
PFNGLGETPOINTERVEXTPROC glo_glGetPointervEXT = NULL;
PFNGLGETPROGRAMBINARYPROC glo_glGetProgramBinary = NULL;
PFNGLGETPROGRAMENVPARAMETERIIVNVPROC glo_glGetProgramEnvParameterIivNV = NULL;
PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC glo_glGetProgramEnvParameterIuivNV = NULL;
PFNGLGETPROGRAMENVPARAMETERDVARBPROC glo_glGetProgramEnvParameterdvARB = NULL;
PFNGLGETPROGRAMENVPARAMETERFVARBPROC glo_glGetProgramEnvParameterfvARB = NULL;
PFNGLGETPROGRAMINFOLOGPROC glo_glGetProgramInfoLog = NULL;
PFNGLGETPROGRAMINTERFACEIVPROC glo_glGetProgramInterfaceiv = NULL;
PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC glo_glGetProgramLocalParameterIivNV = NULL;
PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC glo_glGetProgramLocalParameterIuivNV = NULL;
PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC glo_glGetProgramLocalParameterdvARB = NULL;
PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC glo_glGetProgramLocalParameterfvARB = NULL;
PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC glo_glGetProgramNamedParameterdvNV = NULL;
PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC glo_glGetProgramNamedParameterfvNV = NULL;
PFNGLGETPROGRAMPARAMETERDVNVPROC glo_glGetProgramParameterdvNV = NULL;
PFNGLGETPROGRAMPARAMETERFVNVPROC glo_glGetProgramParameterfvNV = NULL;
PFNGLGETPROGRAMPIPELINEINFOLOGPROC glo_glGetProgramPipelineInfoLog = NULL;
PFNGLGETPROGRAMPIPELINEIVPROC glo_glGetProgramPipelineiv = NULL;
PFNGLGETPROGRAMRESOURCEINDEXPROC glo_glGetProgramResourceIndex = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONPROC glo_glGetProgramResourceLocation = NULL;
PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC glo_glGetProgramResourceLocationIndex = NULL;
PFNGLGETPROGRAMRESOURCENAMEPROC glo_glGetProgramResourceName = NULL;
PFNGLGETPROGRAMRESOURCEFVNVPROC glo_glGetProgramResourcefvNV = NULL;
PFNGLGETPROGRAMRESOURCEIVPROC glo_glGetProgramResourceiv = NULL;
PFNGLGETPROGRAMSTAGEIVPROC glo_glGetProgramStageiv = NULL;
PFNGLGETPROGRAMSTRINGARBPROC glo_glGetProgramStringARB = NULL;
PFNGLGETPROGRAMSTRINGNVPROC glo_glGetProgramStringNV = NULL;
PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC glo_glGetProgramSubroutineParameteruivNV = NULL;
PFNGLGETPROGRAMIVPROC glo_glGetProgramiv = NULL;
PFNGLGETPROGRAMIVARBPROC glo_glGetProgramivARB = NULL;
PFNGLGETPROGRAMIVNVPROC glo_glGetProgramivNV = NULL;
PFNGLGETQUERYBUFFEROBJECTI64VPROC glo_glGetQueryBufferObjecti64v = NULL;
PFNGLGETQUERYBUFFEROBJECTIVPROC glo_glGetQueryBufferObjectiv = NULL;
PFNGLGETQUERYBUFFEROBJECTUI64VPROC glo_glGetQueryBufferObjectui64v = NULL;
PFNGLGETQUERYBUFFEROBJECTUIVPROC glo_glGetQueryBufferObjectuiv = NULL;
PFNGLGETQUERYINDEXEDIVPROC glo_glGetQueryIndexediv = NULL;
PFNGLGETQUERYOBJECTI64VPROC glo_glGetQueryObjecti64v = NULL;
PFNGLGETQUERYOBJECTI64VEXTPROC glo_glGetQueryObjecti64vEXT = NULL;
PFNGLGETQUERYOBJECTIVPROC glo_glGetQueryObjectiv = NULL;
PFNGLGETQUERYOBJECTIVARBPROC glo_glGetQueryObjectivARB = NULL;
PFNGLGETQUERYOBJECTUI64VPROC glo_glGetQueryObjectui64v = NULL;
PFNGLGETQUERYOBJECTUI64VEXTPROC glo_glGetQueryObjectui64vEXT = NULL;
PFNGLGETQUERYOBJECTUIVPROC glo_glGetQueryObjectuiv = NULL;
PFNGLGETQUERYOBJECTUIVARBPROC glo_glGetQueryObjectuivARB = NULL;
PFNGLGETQUERYIVPROC glo_glGetQueryiv = NULL;
PFNGLGETQUERYIVARBPROC glo_glGetQueryivARB = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVPROC glo_glGetRenderbufferParameteriv = NULL;
PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC glo_glGetRenderbufferParameterivEXT = NULL;
PFNGLGETSAMPLERPARAMETERIIVPROC glo_glGetSamplerParameterIiv = NULL;
PFNGLGETSAMPLERPARAMETERIUIVPROC glo_glGetSamplerParameterIuiv = NULL;
PFNGLGETSAMPLERPARAMETERFVPROC glo_glGetSamplerParameterfv = NULL;
PFNGLGETSAMPLERPARAMETERIVPROC glo_glGetSamplerParameteriv = NULL;
PFNGLGETSEMAPHOREPARAMETERIVNVPROC glo_glGetSemaphoreParameterivNV = NULL;
PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC glo_glGetSemaphoreParameterui64vEXT = NULL;
PFNGLGETSEPARABLEFILTEREXTPROC glo_glGetSeparableFilterEXT = NULL;
PFNGLGETSHADERINFOLOGPROC glo_glGetShaderInfoLog = NULL;
PFNGLGETSHADERPRECISIONFORMATPROC glo_glGetShaderPrecisionFormat = NULL;
PFNGLGETSHADERSOURCEPROC glo_glGetShaderSource = NULL;
PFNGLGETSHADERSOURCEARBPROC glo_glGetShaderSourceARB = NULL;
PFNGLGETSHADERIVPROC glo_glGetShaderiv = NULL;
PFNGLGETSHADINGRATEIMAGEPALETTENVPROC glo_glGetShadingRateImagePaletteNV = NULL;
PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC glo_glGetShadingRateSampleLocationivNV = NULL;
PFNGLGETSHARPENTEXFUNCSGISPROC glo_glGetSharpenTexFuncSGIS = NULL;
PFNGLGETSTAGEINDEXNVPROC glo_glGetStageIndexNV = NULL;
PFNGLGETSTRINGPROC glo_glGetString = NULL;
PFNGLGETSTRINGIPROC glo_glGetStringi = NULL;
PFNGLGETSUBROUTINEINDEXPROC glo_glGetSubroutineIndex = NULL;
PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC glo_glGetSubroutineUniformLocation = NULL;
PFNGLGETSYNCIVPROC glo_glGetSynciv = NULL;
PFNGLGETTEXBUMPPARAMETERFVATIPROC glo_glGetTexBumpParameterfvATI = NULL;
PFNGLGETTEXBUMPPARAMETERIVATIPROC glo_glGetTexBumpParameterivATI = NULL;
PFNGLGETTEXENVXVOESPROC glo_glGetTexEnvxvOES = NULL;
PFNGLGETTEXFILTERFUNCSGISPROC glo_glGetTexFilterFuncSGIS = NULL;
PFNGLGETTEXGENXVOESPROC glo_glGetTexGenxvOES = NULL;
PFNGLGETTEXIMAGEPROC glo_glGetTexImage = NULL;
PFNGLGETTEXLEVELPARAMETERFVPROC glo_glGetTexLevelParameterfv = NULL;
PFNGLGETTEXLEVELPARAMETERIVPROC glo_glGetTexLevelParameteriv = NULL;
PFNGLGETTEXLEVELPARAMETERXVOESPROC glo_glGetTexLevelParameterxvOES = NULL;
PFNGLGETTEXPARAMETERIIVPROC glo_glGetTexParameterIiv = NULL;
PFNGLGETTEXPARAMETERIIVEXTPROC glo_glGetTexParameterIivEXT = NULL;
PFNGLGETTEXPARAMETERIUIVPROC glo_glGetTexParameterIuiv = NULL;
PFNGLGETTEXPARAMETERIUIVEXTPROC glo_glGetTexParameterIuivEXT = NULL;
PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC glo_glGetTexParameterPointervAPPLE = NULL;
PFNGLGETTEXPARAMETERFVPROC glo_glGetTexParameterfv = NULL;
PFNGLGETTEXPARAMETERIVPROC glo_glGetTexParameteriv = NULL;
PFNGLGETTEXPARAMETERXVOESPROC glo_glGetTexParameterxvOES = NULL;
PFNGLGETTEXTUREHANDLEARBPROC glo_glGetTextureHandleARB = NULL;
PFNGLGETTEXTUREHANDLENVPROC glo_glGetTextureHandleNV = NULL;
PFNGLGETTEXTUREIMAGEPROC glo_glGetTextureImage = NULL;
PFNGLGETTEXTUREIMAGEEXTPROC glo_glGetTextureImageEXT = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVPROC glo_glGetTextureLevelParameterfv = NULL;
PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC glo_glGetTextureLevelParameterfvEXT = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVPROC glo_glGetTextureLevelParameteriv = NULL;
PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC glo_glGetTextureLevelParameterivEXT = NULL;
PFNGLGETTEXTUREPARAMETERIIVPROC glo_glGetTextureParameterIiv = NULL;
PFNGLGETTEXTUREPARAMETERIIVEXTPROC glo_glGetTextureParameterIivEXT = NULL;
PFNGLGETTEXTUREPARAMETERIUIVPROC glo_glGetTextureParameterIuiv = NULL;
PFNGLGETTEXTUREPARAMETERIUIVEXTPROC glo_glGetTextureParameterIuivEXT = NULL;
PFNGLGETTEXTUREPARAMETERFVPROC glo_glGetTextureParameterfv = NULL;
PFNGLGETTEXTUREPARAMETERFVEXTPROC glo_glGetTextureParameterfvEXT = NULL;
PFNGLGETTEXTUREPARAMETERIVPROC glo_glGetTextureParameteriv = NULL;
PFNGLGETTEXTUREPARAMETERIVEXTPROC glo_glGetTextureParameterivEXT = NULL;
PFNGLGETTEXTURESAMPLERHANDLEARBPROC glo_glGetTextureSamplerHandleARB = NULL;
PFNGLGETTEXTURESAMPLERHANDLENVPROC glo_glGetTextureSamplerHandleNV = NULL;
PFNGLGETTEXTURESUBIMAGEPROC glo_glGetTextureSubImage = NULL;
PFNGLGETTRACKMATRIXIVNVPROC glo_glGetTrackMatrixivNV = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGPROC glo_glGetTransformFeedbackVarying = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC glo_glGetTransformFeedbackVaryingEXT = NULL;
PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC glo_glGetTransformFeedbackVaryingNV = NULL;
PFNGLGETTRANSFORMFEEDBACKI64_VPROC glo_glGetTransformFeedbacki64_v = NULL;
PFNGLGETTRANSFORMFEEDBACKI_VPROC glo_glGetTransformFeedbacki_v = NULL;
PFNGLGETTRANSFORMFEEDBACKIVPROC glo_glGetTransformFeedbackiv = NULL;
PFNGLGETUNIFORMBLOCKINDEXPROC glo_glGetUniformBlockIndex = NULL;
PFNGLGETUNIFORMBUFFERSIZEEXTPROC glo_glGetUniformBufferSizeEXT = NULL;
PFNGLGETUNIFORMINDICESPROC glo_glGetUniformIndices = NULL;
PFNGLGETUNIFORMLOCATIONPROC glo_glGetUniformLocation = NULL;
PFNGLGETUNIFORMLOCATIONARBPROC glo_glGetUniformLocationARB = NULL;
PFNGLGETUNIFORMOFFSETEXTPROC glo_glGetUniformOffsetEXT = NULL;
PFNGLGETUNIFORMSUBROUTINEUIVPROC glo_glGetUniformSubroutineuiv = NULL;
PFNGLGETUNIFORMDVPROC glo_glGetUniformdv = NULL;
PFNGLGETUNIFORMFVPROC glo_glGetUniformfv = NULL;
PFNGLGETUNIFORMFVARBPROC glo_glGetUniformfvARB = NULL;
PFNGLGETUNIFORMI64VARBPROC glo_glGetUniformi64vARB = NULL;
PFNGLGETUNIFORMI64VNVPROC glo_glGetUniformi64vNV = NULL;
PFNGLGETUNIFORMIVPROC glo_glGetUniformiv = NULL;
PFNGLGETUNIFORMIVARBPROC glo_glGetUniformivARB = NULL;
PFNGLGETUNIFORMUI64VARBPROC glo_glGetUniformui64vARB = NULL;
PFNGLGETUNIFORMUI64VNVPROC glo_glGetUniformui64vNV = NULL;
PFNGLGETUNIFORMUIVPROC glo_glGetUniformuiv = NULL;
PFNGLGETUNIFORMUIVEXTPROC glo_glGetUniformuivEXT = NULL;
PFNGLGETUNSIGNEDBYTEI_VEXTPROC glo_glGetUnsignedBytei_vEXT = NULL;
PFNGLGETUNSIGNEDBYTEVEXTPROC glo_glGetUnsignedBytevEXT = NULL;
PFNGLGETVARIANTARRAYOBJECTFVATIPROC glo_glGetVariantArrayObjectfvATI = NULL;
PFNGLGETVARIANTARRAYOBJECTIVATIPROC glo_glGetVariantArrayObjectivATI = NULL;
PFNGLGETVARIANTBOOLEANVEXTPROC glo_glGetVariantBooleanvEXT = NULL;
PFNGLGETVARIANTFLOATVEXTPROC glo_glGetVariantFloatvEXT = NULL;
PFNGLGETVARIANTINTEGERVEXTPROC glo_glGetVariantIntegervEXT = NULL;
PFNGLGETVARIANTPOINTERVEXTPROC glo_glGetVariantPointervEXT = NULL;
PFNGLGETVARYINGLOCATIONNVPROC glo_glGetVaryingLocationNV = NULL;
PFNGLGETVERTEXARRAYINDEXED64IVPROC glo_glGetVertexArrayIndexed64iv = NULL;
PFNGLGETVERTEXARRAYINDEXEDIVPROC glo_glGetVertexArrayIndexediv = NULL;
PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC glo_glGetVertexArrayIntegeri_vEXT = NULL;
PFNGLGETVERTEXARRAYINTEGERVEXTPROC glo_glGetVertexArrayIntegervEXT = NULL;
PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC glo_glGetVertexArrayPointeri_vEXT = NULL;
PFNGLGETVERTEXARRAYPOINTERVEXTPROC glo_glGetVertexArrayPointervEXT = NULL;
PFNGLGETVERTEXARRAYIVPROC glo_glGetVertexArrayiv = NULL;
PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC glo_glGetVertexAttribArrayObjectfvATI = NULL;
PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC glo_glGetVertexAttribArrayObjectivATI = NULL;
PFNGLGETVERTEXATTRIBIIVPROC glo_glGetVertexAttribIiv = NULL;
PFNGLGETVERTEXATTRIBIIVEXTPROC glo_glGetVertexAttribIivEXT = NULL;
PFNGLGETVERTEXATTRIBIUIVPROC glo_glGetVertexAttribIuiv = NULL;
PFNGLGETVERTEXATTRIBIUIVEXTPROC glo_glGetVertexAttribIuivEXT = NULL;
PFNGLGETVERTEXATTRIBLDVPROC glo_glGetVertexAttribLdv = NULL;
PFNGLGETVERTEXATTRIBLDVEXTPROC glo_glGetVertexAttribLdvEXT = NULL;
PFNGLGETVERTEXATTRIBLI64VNVPROC glo_glGetVertexAttribLi64vNV = NULL;
PFNGLGETVERTEXATTRIBLUI64VARBPROC glo_glGetVertexAttribLui64vARB = NULL;
PFNGLGETVERTEXATTRIBLUI64VNVPROC glo_glGetVertexAttribLui64vNV = NULL;
PFNGLGETVERTEXATTRIBPOINTERVPROC glo_glGetVertexAttribPointerv = NULL;
PFNGLGETVERTEXATTRIBPOINTERVARBPROC glo_glGetVertexAttribPointervARB = NULL;
PFNGLGETVERTEXATTRIBPOINTERVNVPROC glo_glGetVertexAttribPointervNV = NULL;
PFNGLGETVERTEXATTRIBDVPROC glo_glGetVertexAttribdv = NULL;
PFNGLGETVERTEXATTRIBDVARBPROC glo_glGetVertexAttribdvARB = NULL;
PFNGLGETVERTEXATTRIBDVNVPROC glo_glGetVertexAttribdvNV = NULL;
PFNGLGETVERTEXATTRIBFVPROC glo_glGetVertexAttribfv = NULL;
PFNGLGETVERTEXATTRIBFVARBPROC glo_glGetVertexAttribfvARB = NULL;
PFNGLGETVERTEXATTRIBFVNVPROC glo_glGetVertexAttribfvNV = NULL;
PFNGLGETVERTEXATTRIBIVPROC glo_glGetVertexAttribiv = NULL;
PFNGLGETVERTEXATTRIBIVARBPROC glo_glGetVertexAttribivARB = NULL;
PFNGLGETVERTEXATTRIBIVNVPROC glo_glGetVertexAttribivNV = NULL;
PFNGLGETVIDEOCAPTURESTREAMDVNVPROC glo_glGetVideoCaptureStreamdvNV = NULL;
PFNGLGETVIDEOCAPTURESTREAMFVNVPROC glo_glGetVideoCaptureStreamfvNV = NULL;
PFNGLGETVIDEOCAPTURESTREAMIVNVPROC glo_glGetVideoCaptureStreamivNV = NULL;
PFNGLGETVIDEOCAPTUREIVNVPROC glo_glGetVideoCaptureivNV = NULL;
PFNGLGETVIDEOI64VNVPROC glo_glGetVideoi64vNV = NULL;
PFNGLGETVIDEOIVNVPROC glo_glGetVideoivNV = NULL;
PFNGLGETVIDEOUI64VNVPROC glo_glGetVideoui64vNV = NULL;
PFNGLGETVIDEOUIVNVPROC glo_glGetVideouivNV = NULL;
PFNGLGETVKPROCADDRNVPROC glo_glGetVkProcAddrNV = NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEPROC glo_glGetnCompressedTexImage = NULL;
PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC glo_glGetnCompressedTexImageARB = NULL;
PFNGLGETNTEXIMAGEPROC glo_glGetnTexImage = NULL;
PFNGLGETNTEXIMAGEARBPROC glo_glGetnTexImageARB = NULL;
PFNGLGETNUNIFORMDVPROC glo_glGetnUniformdv = NULL;
PFNGLGETNUNIFORMDVARBPROC glo_glGetnUniformdvARB = NULL;
PFNGLGETNUNIFORMFVPROC glo_glGetnUniformfv = NULL;
PFNGLGETNUNIFORMFVARBPROC glo_glGetnUniformfvARB = NULL;
PFNGLGETNUNIFORMI64VARBPROC glo_glGetnUniformi64vARB = NULL;
PFNGLGETNUNIFORMIVPROC glo_glGetnUniformiv = NULL;
PFNGLGETNUNIFORMIVARBPROC glo_glGetnUniformivARB = NULL;
PFNGLGETNUNIFORMUI64VARBPROC glo_glGetnUniformui64vARB = NULL;
PFNGLGETNUNIFORMUIVPROC glo_glGetnUniformuiv = NULL;
PFNGLGETNUNIFORMUIVARBPROC glo_glGetnUniformuivARB = NULL;
PFNGLGLOBALALPHAFACTORBSUNPROC glo_glGlobalAlphaFactorbSUN = NULL;
PFNGLGLOBALALPHAFACTORDSUNPROC glo_glGlobalAlphaFactordSUN = NULL;
PFNGLGLOBALALPHAFACTORFSUNPROC glo_glGlobalAlphaFactorfSUN = NULL;
PFNGLGLOBALALPHAFACTORISUNPROC glo_glGlobalAlphaFactoriSUN = NULL;
PFNGLGLOBALALPHAFACTORSSUNPROC glo_glGlobalAlphaFactorsSUN = NULL;
PFNGLGLOBALALPHAFACTORUBSUNPROC glo_glGlobalAlphaFactorubSUN = NULL;
PFNGLGLOBALALPHAFACTORUISUNPROC glo_glGlobalAlphaFactoruiSUN = NULL;
PFNGLGLOBALALPHAFACTORUSSUNPROC glo_glGlobalAlphaFactorusSUN = NULL;
PFNGLHINTPROC glo_glHint = NULL;
PFNGLHINTPGIPROC glo_glHintPGI = NULL;
PFNGLHISTOGRAMEXTPROC glo_glHistogramEXT = NULL;
PFNGLIGLOOINTERFACESGIXPROC glo_glIglooInterfaceSGIX = NULL;
PFNGLIMAGETRANSFORMPARAMETERFHPPROC glo_glImageTransformParameterfHP = NULL;
PFNGLIMAGETRANSFORMPARAMETERFVHPPROC glo_glImageTransformParameterfvHP = NULL;
PFNGLIMAGETRANSFORMPARAMETERIHPPROC glo_glImageTransformParameteriHP = NULL;
PFNGLIMAGETRANSFORMPARAMETERIVHPPROC glo_glImageTransformParameterivHP = NULL;
PFNGLIMPORTMEMORYFDEXTPROC glo_glImportMemoryFdEXT = NULL;
PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC glo_glImportMemoryWin32HandleEXT = NULL;
PFNGLIMPORTMEMORYWIN32NAMEEXTPROC glo_glImportMemoryWin32NameEXT = NULL;
PFNGLIMPORTSEMAPHOREFDEXTPROC glo_glImportSemaphoreFdEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC glo_glImportSemaphoreWin32HandleEXT = NULL;
PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC glo_glImportSemaphoreWin32NameEXT = NULL;
PFNGLIMPORTSYNCEXTPROC glo_glImportSyncEXT = NULL;
PFNGLINDEXFORMATNVPROC glo_glIndexFormatNV = NULL;
PFNGLINDEXFUNCEXTPROC glo_glIndexFuncEXT = NULL;
PFNGLINDEXMATERIALEXTPROC glo_glIndexMaterialEXT = NULL;
PFNGLINDEXPOINTEREXTPROC glo_glIndexPointerEXT = NULL;
PFNGLINDEXPOINTERLISTIBMPROC glo_glIndexPointerListIBM = NULL;
PFNGLINDEXXOESPROC glo_glIndexxOES = NULL;
PFNGLINDEXXVOESPROC glo_glIndexxvOES = NULL;
PFNGLINSERTCOMPONENTEXTPROC glo_glInsertComponentEXT = NULL;
PFNGLINSERTEVENTMARKEREXTPROC glo_glInsertEventMarkerEXT = NULL;
PFNGLINSTRUMENTSBUFFERSGIXPROC glo_glInstrumentsBufferSGIX = NULL;
PFNGLINTERPOLATEPATHSNVPROC glo_glInterpolatePathsNV = NULL;
PFNGLINVALIDATEBUFFERDATAPROC glo_glInvalidateBufferData = NULL;
PFNGLINVALIDATEBUFFERSUBDATAPROC glo_glInvalidateBufferSubData = NULL;
PFNGLINVALIDATEFRAMEBUFFERPROC glo_glInvalidateFramebuffer = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC glo_glInvalidateNamedFramebufferData = NULL;
PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC glo_glInvalidateNamedFramebufferSubData = NULL;
PFNGLINVALIDATESUBFRAMEBUFFERPROC glo_glInvalidateSubFramebuffer = NULL;
PFNGLINVALIDATETEXIMAGEPROC glo_glInvalidateTexImage = NULL;
PFNGLINVALIDATETEXSUBIMAGEPROC glo_glInvalidateTexSubImage = NULL;
PFNGLISASYNCMARKERSGIXPROC glo_glIsAsyncMarkerSGIX = NULL;
PFNGLISBUFFERPROC glo_glIsBuffer = NULL;
PFNGLISBUFFERARBPROC glo_glIsBufferARB = NULL;
PFNGLISBUFFERRESIDENTNVPROC glo_glIsBufferResidentNV = NULL;
PFNGLISCOMMANDLISTNVPROC glo_glIsCommandListNV = NULL;
PFNGLISENABLEDPROC glo_glIsEnabled = NULL;
PFNGLISENABLEDINDEXEDEXTPROC glo_glIsEnabledIndexedEXT = NULL;
PFNGLISENABLEDIPROC glo_glIsEnabledi = NULL;
PFNGLISFENCEAPPLEPROC glo_glIsFenceAPPLE = NULL;
PFNGLISFENCENVPROC glo_glIsFenceNV = NULL;
PFNGLISFRAMEBUFFERPROC glo_glIsFramebuffer = NULL;
PFNGLISFRAMEBUFFEREXTPROC glo_glIsFramebufferEXT = NULL;
PFNGLISIMAGEHANDLERESIDENTARBPROC glo_glIsImageHandleResidentARB = NULL;
PFNGLISIMAGEHANDLERESIDENTNVPROC glo_glIsImageHandleResidentNV = NULL;
PFNGLISMEMORYOBJECTEXTPROC glo_glIsMemoryObjectEXT = NULL;
PFNGLISNAMEAMDPROC glo_glIsNameAMD = NULL;
PFNGLISNAMEDBUFFERRESIDENTNVPROC glo_glIsNamedBufferResidentNV = NULL;
PFNGLISNAMEDSTRINGARBPROC glo_glIsNamedStringARB = NULL;
PFNGLISOBJECTBUFFERATIPROC glo_glIsObjectBufferATI = NULL;
PFNGLISOCCLUSIONQUERYNVPROC glo_glIsOcclusionQueryNV = NULL;
PFNGLISPATHNVPROC glo_glIsPathNV = NULL;
PFNGLISPOINTINFILLPATHNVPROC glo_glIsPointInFillPathNV = NULL;
PFNGLISPOINTINSTROKEPATHNVPROC glo_glIsPointInStrokePathNV = NULL;
PFNGLISPROGRAMPROC glo_glIsProgram = NULL;
PFNGLISPROGRAMARBPROC glo_glIsProgramARB = NULL;
PFNGLISPROGRAMNVPROC glo_glIsProgramNV = NULL;
PFNGLISPROGRAMPIPELINEPROC glo_glIsProgramPipeline = NULL;
PFNGLISQUERYPROC glo_glIsQuery = NULL;
PFNGLISQUERYARBPROC glo_glIsQueryARB = NULL;
PFNGLISRENDERBUFFERPROC glo_glIsRenderbuffer = NULL;
PFNGLISRENDERBUFFEREXTPROC glo_glIsRenderbufferEXT = NULL;
PFNGLISSAMPLERPROC glo_glIsSampler = NULL;
PFNGLISSEMAPHOREEXTPROC glo_glIsSemaphoreEXT = NULL;
PFNGLISSHADERPROC glo_glIsShader = NULL;
PFNGLISSTATENVPROC glo_glIsStateNV = NULL;
PFNGLISSYNCPROC glo_glIsSync = NULL;
PFNGLISTEXTUREPROC glo_glIsTexture = NULL;
PFNGLISTEXTUREEXTPROC glo_glIsTextureEXT = NULL;
PFNGLISTEXTUREHANDLERESIDENTARBPROC glo_glIsTextureHandleResidentARB = NULL;
PFNGLISTEXTUREHANDLERESIDENTNVPROC glo_glIsTextureHandleResidentNV = NULL;
PFNGLISTRANSFORMFEEDBACKPROC glo_glIsTransformFeedback = NULL;
PFNGLISTRANSFORMFEEDBACKNVPROC glo_glIsTransformFeedbackNV = NULL;
PFNGLISVARIANTENABLEDEXTPROC glo_glIsVariantEnabledEXT = NULL;
PFNGLISVERTEXARRAYPROC glo_glIsVertexArray = NULL;
PFNGLISVERTEXARRAYAPPLEPROC glo_glIsVertexArrayAPPLE = NULL;
PFNGLISVERTEXATTRIBENABLEDAPPLEPROC glo_glIsVertexAttribEnabledAPPLE = NULL;
PFNGLLGPUCOPYIMAGESUBDATANVXPROC glo_glLGPUCopyImageSubDataNVX = NULL;
PFNGLLGPUINTERLOCKNVXPROC glo_glLGPUInterlockNVX = NULL;
PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC glo_glLGPUNamedBufferSubDataNVX = NULL;
PFNGLLABELOBJECTEXTPROC glo_glLabelObjectEXT = NULL;
PFNGLLIGHTENVISGIXPROC glo_glLightEnviSGIX = NULL;
PFNGLLIGHTMODELXOESPROC glo_glLightModelxOES = NULL;
PFNGLLIGHTMODELXVOESPROC glo_glLightModelxvOES = NULL;
PFNGLLIGHTXOESPROC glo_glLightxOES = NULL;
PFNGLLIGHTXVOESPROC glo_glLightxvOES = NULL;
PFNGLLINEWIDTHPROC glo_glLineWidth = NULL;
PFNGLLINEWIDTHXOESPROC glo_glLineWidthxOES = NULL;
PFNGLLINKPROGRAMPROC glo_glLinkProgram = NULL;
PFNGLLINKPROGRAMARBPROC glo_glLinkProgramARB = NULL;
PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC glo_glListDrawCommandsStatesClientNV = NULL;
PFNGLLISTPARAMETERFSGIXPROC glo_glListParameterfSGIX = NULL;
PFNGLLISTPARAMETERFVSGIXPROC glo_glListParameterfvSGIX = NULL;
PFNGLLISTPARAMETERISGIXPROC glo_glListParameteriSGIX = NULL;
PFNGLLISTPARAMETERIVSGIXPROC glo_glListParameterivSGIX = NULL;
PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC glo_glLoadIdentityDeformationMapSGIX = NULL;
PFNGLLOADMATRIXXOESPROC glo_glLoadMatrixxOES = NULL;
PFNGLLOADPROGRAMNVPROC glo_glLoadProgramNV = NULL;
PFNGLLOADTRANSPOSEMATRIXDARBPROC glo_glLoadTransposeMatrixdARB = NULL;
PFNGLLOADTRANSPOSEMATRIXFARBPROC glo_glLoadTransposeMatrixfARB = NULL;
PFNGLLOADTRANSPOSEMATRIXXOESPROC glo_glLoadTransposeMatrixxOES = NULL;
PFNGLLOCKARRAYSEXTPROC glo_glLockArraysEXT = NULL;
PFNGLLOGICOPPROC glo_glLogicOp = NULL;
PFNGLMAKEBUFFERNONRESIDENTNVPROC glo_glMakeBufferNonResidentNV = NULL;
PFNGLMAKEBUFFERRESIDENTNVPROC glo_glMakeBufferResidentNV = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC glo_glMakeImageHandleNonResidentARB = NULL;
PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC glo_glMakeImageHandleNonResidentNV = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTARBPROC glo_glMakeImageHandleResidentARB = NULL;
PFNGLMAKEIMAGEHANDLERESIDENTNVPROC glo_glMakeImageHandleResidentNV = NULL;
PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC glo_glMakeNamedBufferNonResidentNV = NULL;
PFNGLMAKENAMEDBUFFERRESIDENTNVPROC glo_glMakeNamedBufferResidentNV = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC glo_glMakeTextureHandleNonResidentARB = NULL;
PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC glo_glMakeTextureHandleNonResidentNV = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTARBPROC glo_glMakeTextureHandleResidentARB = NULL;
PFNGLMAKETEXTUREHANDLERESIDENTNVPROC glo_glMakeTextureHandleResidentNV = NULL;
PFNGLMAP1XOESPROC glo_glMap1xOES = NULL;
PFNGLMAP2XOESPROC glo_glMap2xOES = NULL;
PFNGLMAPBUFFERPROC glo_glMapBuffer = NULL;
PFNGLMAPBUFFERARBPROC glo_glMapBufferARB = NULL;
PFNGLMAPBUFFERRANGEPROC glo_glMapBufferRange = NULL;
PFNGLMAPCONTROLPOINTSNVPROC glo_glMapControlPointsNV = NULL;
PFNGLMAPGRID1XOESPROC glo_glMapGrid1xOES = NULL;
PFNGLMAPGRID2XOESPROC glo_glMapGrid2xOES = NULL;
PFNGLMAPNAMEDBUFFERPROC glo_glMapNamedBuffer = NULL;
PFNGLMAPNAMEDBUFFEREXTPROC glo_glMapNamedBufferEXT = NULL;
PFNGLMAPNAMEDBUFFERRANGEPROC glo_glMapNamedBufferRange = NULL;
PFNGLMAPNAMEDBUFFERRANGEEXTPROC glo_glMapNamedBufferRangeEXT = NULL;
PFNGLMAPOBJECTBUFFERATIPROC glo_glMapObjectBufferATI = NULL;
PFNGLMAPPARAMETERFVNVPROC glo_glMapParameterfvNV = NULL;
PFNGLMAPPARAMETERIVNVPROC glo_glMapParameterivNV = NULL;
PFNGLMAPTEXTURE2DINTELPROC glo_glMapTexture2DINTEL = NULL;
PFNGLMAPVERTEXATTRIB1DAPPLEPROC glo_glMapVertexAttrib1dAPPLE = NULL;
PFNGLMAPVERTEXATTRIB1FAPPLEPROC glo_glMapVertexAttrib1fAPPLE = NULL;
PFNGLMAPVERTEXATTRIB2DAPPLEPROC glo_glMapVertexAttrib2dAPPLE = NULL;
PFNGLMAPVERTEXATTRIB2FAPPLEPROC glo_glMapVertexAttrib2fAPPLE = NULL;
PFNGLMATERIALXOESPROC glo_glMaterialxOES = NULL;
PFNGLMATERIALXVOESPROC glo_glMaterialxvOES = NULL;
PFNGLMATRIXFRUSTUMEXTPROC glo_glMatrixFrustumEXT = NULL;
PFNGLMATRIXINDEXPOINTERARBPROC glo_glMatrixIndexPointerARB = NULL;
PFNGLMATRIXINDEXUBVARBPROC glo_glMatrixIndexubvARB = NULL;
PFNGLMATRIXINDEXUIVARBPROC glo_glMatrixIndexuivARB = NULL;
PFNGLMATRIXINDEXUSVARBPROC glo_glMatrixIndexusvARB = NULL;
PFNGLMATRIXLOAD3X2FNVPROC glo_glMatrixLoad3x2fNV = NULL;
PFNGLMATRIXLOAD3X3FNVPROC glo_glMatrixLoad3x3fNV = NULL;
PFNGLMATRIXLOADIDENTITYEXTPROC glo_glMatrixLoadIdentityEXT = NULL;
PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC glo_glMatrixLoadTranspose3x3fNV = NULL;
PFNGLMATRIXLOADTRANSPOSEDEXTPROC glo_glMatrixLoadTransposedEXT = NULL;
PFNGLMATRIXLOADTRANSPOSEFEXTPROC glo_glMatrixLoadTransposefEXT = NULL;
PFNGLMATRIXLOADDEXTPROC glo_glMatrixLoaddEXT = NULL;
PFNGLMATRIXLOADFEXTPROC glo_glMatrixLoadfEXT = NULL;
PFNGLMATRIXMULT3X2FNVPROC glo_glMatrixMult3x2fNV = NULL;
PFNGLMATRIXMULT3X3FNVPROC glo_glMatrixMult3x3fNV = NULL;
PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC glo_glMatrixMultTranspose3x3fNV = NULL;
PFNGLMATRIXMULTTRANSPOSEDEXTPROC glo_glMatrixMultTransposedEXT = NULL;
PFNGLMATRIXMULTTRANSPOSEFEXTPROC glo_glMatrixMultTransposefEXT = NULL;
PFNGLMATRIXMULTDEXTPROC glo_glMatrixMultdEXT = NULL;
PFNGLMATRIXMULTFEXTPROC glo_glMatrixMultfEXT = NULL;
PFNGLMATRIXORTHOEXTPROC glo_glMatrixOrthoEXT = NULL;
PFNGLMATRIXPOPEXTPROC glo_glMatrixPopEXT = NULL;
PFNGLMATRIXPUSHEXTPROC glo_glMatrixPushEXT = NULL;
PFNGLMATRIXROTATEDEXTPROC glo_glMatrixRotatedEXT = NULL;
PFNGLMATRIXROTATEFEXTPROC glo_glMatrixRotatefEXT = NULL;
PFNGLMATRIXSCALEDEXTPROC glo_glMatrixScaledEXT = NULL;
PFNGLMATRIXSCALEFEXTPROC glo_glMatrixScalefEXT = NULL;
PFNGLMATRIXTRANSLATEDEXTPROC glo_glMatrixTranslatedEXT = NULL;
PFNGLMATRIXTRANSLATEFEXTPROC glo_glMatrixTranslatefEXT = NULL;
PFNGLMAXSHADERCOMPILERTHREADSARBPROC glo_glMaxShaderCompilerThreadsARB = NULL;
PFNGLMAXSHADERCOMPILERTHREADSKHRPROC glo_glMaxShaderCompilerThreadsKHR = NULL;
PFNGLMEMORYBARRIERPROC glo_glMemoryBarrier = NULL;
PFNGLMEMORYBARRIERBYREGIONPROC glo_glMemoryBarrierByRegion = NULL;
PFNGLMEMORYBARRIEREXTPROC glo_glMemoryBarrierEXT = NULL;
PFNGLMEMORYOBJECTPARAMETERIVEXTPROC glo_glMemoryObjectParameterivEXT = NULL;
PFNGLMINSAMPLESHADINGPROC glo_glMinSampleShading = NULL;
PFNGLMINSAMPLESHADINGARBPROC glo_glMinSampleShadingARB = NULL;
PFNGLMINMAXEXTPROC glo_glMinmaxEXT = NULL;
PFNGLMULTMATRIXXOESPROC glo_glMultMatrixxOES = NULL;
PFNGLMULTTRANSPOSEMATRIXDARBPROC glo_glMultTransposeMatrixdARB = NULL;
PFNGLMULTTRANSPOSEMATRIXFARBPROC glo_glMultTransposeMatrixfARB = NULL;
PFNGLMULTTRANSPOSEMATRIXXOESPROC glo_glMultTransposeMatrixxOES = NULL;
PFNGLMULTIDRAWARRAYSPROC glo_glMultiDrawArrays = NULL;
PFNGLMULTIDRAWARRAYSEXTPROC glo_glMultiDrawArraysEXT = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTPROC glo_glMultiDrawArraysIndirect = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC glo_glMultiDrawArraysIndirectAMD = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC glo_glMultiDrawArraysIndirectBindlessCountNV = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC glo_glMultiDrawArraysIndirectBindlessNV = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC glo_glMultiDrawArraysIndirectCount = NULL;
PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC glo_glMultiDrawArraysIndirectCountARB = NULL;
PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC glo_glMultiDrawElementArrayAPPLE = NULL;
PFNGLMULTIDRAWELEMENTSPROC glo_glMultiDrawElements = NULL;
PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC glo_glMultiDrawElementsBaseVertex = NULL;
PFNGLMULTIDRAWELEMENTSEXTPROC glo_glMultiDrawElementsEXT = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTPROC glo_glMultiDrawElementsIndirect = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC glo_glMultiDrawElementsIndirectAMD = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC glo_glMultiDrawElementsIndirectBindlessCountNV = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC glo_glMultiDrawElementsIndirectBindlessNV = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC glo_glMultiDrawElementsIndirectCount = NULL;
PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC glo_glMultiDrawElementsIndirectCountARB = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTEXTPROC glo_glMultiDrawMeshTasksIndirectCountEXT = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC glo_glMultiDrawMeshTasksIndirectCountNV = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTEXTPROC glo_glMultiDrawMeshTasksIndirectEXT = NULL;
PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC glo_glMultiDrawMeshTasksIndirectNV = NULL;
PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC glo_glMultiDrawRangeElementArrayAPPLE = NULL;
PFNGLMULTIMODEDRAWARRAYSIBMPROC glo_glMultiModeDrawArraysIBM = NULL;
PFNGLMULTIMODEDRAWELEMENTSIBMPROC glo_glMultiModeDrawElementsIBM = NULL;
PFNGLMULTITEXBUFFEREXTPROC glo_glMultiTexBufferEXT = NULL;
PFNGLMULTITEXCOORD1BOESPROC glo_glMultiTexCoord1bOES = NULL;
PFNGLMULTITEXCOORD1BVOESPROC glo_glMultiTexCoord1bvOES = NULL;
PFNGLMULTITEXCOORD1DARBPROC glo_glMultiTexCoord1dARB = NULL;
PFNGLMULTITEXCOORD1DVARBPROC glo_glMultiTexCoord1dvARB = NULL;
PFNGLMULTITEXCOORD1FARBPROC glo_glMultiTexCoord1fARB = NULL;
PFNGLMULTITEXCOORD1FVARBPROC glo_glMultiTexCoord1fvARB = NULL;
PFNGLMULTITEXCOORD1HNVPROC glo_glMultiTexCoord1hNV = NULL;
PFNGLMULTITEXCOORD1HVNVPROC glo_glMultiTexCoord1hvNV = NULL;
PFNGLMULTITEXCOORD1IARBPROC glo_glMultiTexCoord1iARB = NULL;
PFNGLMULTITEXCOORD1IVARBPROC glo_glMultiTexCoord1ivARB = NULL;
PFNGLMULTITEXCOORD1SARBPROC glo_glMultiTexCoord1sARB = NULL;
PFNGLMULTITEXCOORD1SVARBPROC glo_glMultiTexCoord1svARB = NULL;
PFNGLMULTITEXCOORD1XOESPROC glo_glMultiTexCoord1xOES = NULL;
PFNGLMULTITEXCOORD1XVOESPROC glo_glMultiTexCoord1xvOES = NULL;
PFNGLMULTITEXCOORD2BOESPROC glo_glMultiTexCoord2bOES = NULL;
PFNGLMULTITEXCOORD2BVOESPROC glo_glMultiTexCoord2bvOES = NULL;
PFNGLMULTITEXCOORD2DARBPROC glo_glMultiTexCoord2dARB = NULL;
PFNGLMULTITEXCOORD2DVARBPROC glo_glMultiTexCoord2dvARB = NULL;
PFNGLMULTITEXCOORD2FARBPROC glo_glMultiTexCoord2fARB = NULL;
PFNGLMULTITEXCOORD2FVARBPROC glo_glMultiTexCoord2fvARB = NULL;
PFNGLMULTITEXCOORD2HNVPROC glo_glMultiTexCoord2hNV = NULL;
PFNGLMULTITEXCOORD2HVNVPROC glo_glMultiTexCoord2hvNV = NULL;
PFNGLMULTITEXCOORD2IARBPROC glo_glMultiTexCoord2iARB = NULL;
PFNGLMULTITEXCOORD2IVARBPROC glo_glMultiTexCoord2ivARB = NULL;
PFNGLMULTITEXCOORD2SARBPROC glo_glMultiTexCoord2sARB = NULL;
PFNGLMULTITEXCOORD2SVARBPROC glo_glMultiTexCoord2svARB = NULL;
PFNGLMULTITEXCOORD2XOESPROC glo_glMultiTexCoord2xOES = NULL;
PFNGLMULTITEXCOORD2XVOESPROC glo_glMultiTexCoord2xvOES = NULL;
PFNGLMULTITEXCOORD3BOESPROC glo_glMultiTexCoord3bOES = NULL;
PFNGLMULTITEXCOORD3BVOESPROC glo_glMultiTexCoord3bvOES = NULL;
PFNGLMULTITEXCOORD3DARBPROC glo_glMultiTexCoord3dARB = NULL;
PFNGLMULTITEXCOORD3DVARBPROC glo_glMultiTexCoord3dvARB = NULL;
PFNGLMULTITEXCOORD3FARBPROC glo_glMultiTexCoord3fARB = NULL;
PFNGLMULTITEXCOORD3FVARBPROC glo_glMultiTexCoord3fvARB = NULL;
PFNGLMULTITEXCOORD3HNVPROC glo_glMultiTexCoord3hNV = NULL;
PFNGLMULTITEXCOORD3HVNVPROC glo_glMultiTexCoord3hvNV = NULL;
PFNGLMULTITEXCOORD3IARBPROC glo_glMultiTexCoord3iARB = NULL;
PFNGLMULTITEXCOORD3IVARBPROC glo_glMultiTexCoord3ivARB = NULL;
PFNGLMULTITEXCOORD3SARBPROC glo_glMultiTexCoord3sARB = NULL;
PFNGLMULTITEXCOORD3SVARBPROC glo_glMultiTexCoord3svARB = NULL;
PFNGLMULTITEXCOORD3XOESPROC glo_glMultiTexCoord3xOES = NULL;
PFNGLMULTITEXCOORD3XVOESPROC glo_glMultiTexCoord3xvOES = NULL;
PFNGLMULTITEXCOORD4BOESPROC glo_glMultiTexCoord4bOES = NULL;
PFNGLMULTITEXCOORD4BVOESPROC glo_glMultiTexCoord4bvOES = NULL;
PFNGLMULTITEXCOORD4DARBPROC glo_glMultiTexCoord4dARB = NULL;
PFNGLMULTITEXCOORD4DVARBPROC glo_glMultiTexCoord4dvARB = NULL;
PFNGLMULTITEXCOORD4FARBPROC glo_glMultiTexCoord4fARB = NULL;
PFNGLMULTITEXCOORD4FVARBPROC glo_glMultiTexCoord4fvARB = NULL;
PFNGLMULTITEXCOORD4HNVPROC glo_glMultiTexCoord4hNV = NULL;
PFNGLMULTITEXCOORD4HVNVPROC glo_glMultiTexCoord4hvNV = NULL;
PFNGLMULTITEXCOORD4IARBPROC glo_glMultiTexCoord4iARB = NULL;
PFNGLMULTITEXCOORD4IVARBPROC glo_glMultiTexCoord4ivARB = NULL;
PFNGLMULTITEXCOORD4SARBPROC glo_glMultiTexCoord4sARB = NULL;
PFNGLMULTITEXCOORD4SVARBPROC glo_glMultiTexCoord4svARB = NULL;
PFNGLMULTITEXCOORD4XOESPROC glo_glMultiTexCoord4xOES = NULL;
PFNGLMULTITEXCOORD4XVOESPROC glo_glMultiTexCoord4xvOES = NULL;
PFNGLMULTITEXCOORDPOINTEREXTPROC glo_glMultiTexCoordPointerEXT = NULL;
PFNGLMULTITEXENVFEXTPROC glo_glMultiTexEnvfEXT = NULL;
PFNGLMULTITEXENVFVEXTPROC glo_glMultiTexEnvfvEXT = NULL;
PFNGLMULTITEXENVIEXTPROC glo_glMultiTexEnviEXT = NULL;
PFNGLMULTITEXENVIVEXTPROC glo_glMultiTexEnvivEXT = NULL;
PFNGLMULTITEXGENDEXTPROC glo_glMultiTexGendEXT = NULL;
PFNGLMULTITEXGENDVEXTPROC glo_glMultiTexGendvEXT = NULL;
PFNGLMULTITEXGENFEXTPROC glo_glMultiTexGenfEXT = NULL;
PFNGLMULTITEXGENFVEXTPROC glo_glMultiTexGenfvEXT = NULL;
PFNGLMULTITEXGENIEXTPROC glo_glMultiTexGeniEXT = NULL;
PFNGLMULTITEXGENIVEXTPROC glo_glMultiTexGenivEXT = NULL;
PFNGLMULTITEXIMAGE1DEXTPROC glo_glMultiTexImage1DEXT = NULL;
PFNGLMULTITEXIMAGE2DEXTPROC glo_glMultiTexImage2DEXT = NULL;
PFNGLMULTITEXIMAGE3DEXTPROC glo_glMultiTexImage3DEXT = NULL;
PFNGLMULTITEXPARAMETERIIVEXTPROC glo_glMultiTexParameterIivEXT = NULL;
PFNGLMULTITEXPARAMETERIUIVEXTPROC glo_glMultiTexParameterIuivEXT = NULL;
PFNGLMULTITEXPARAMETERFEXTPROC glo_glMultiTexParameterfEXT = NULL;
PFNGLMULTITEXPARAMETERFVEXTPROC glo_glMultiTexParameterfvEXT = NULL;
PFNGLMULTITEXPARAMETERIEXTPROC glo_glMultiTexParameteriEXT = NULL;
PFNGLMULTITEXPARAMETERIVEXTPROC glo_glMultiTexParameterivEXT = NULL;
PFNGLMULTITEXRENDERBUFFEREXTPROC glo_glMultiTexRenderbufferEXT = NULL;
PFNGLMULTITEXSUBIMAGE1DEXTPROC glo_glMultiTexSubImage1DEXT = NULL;
PFNGLMULTITEXSUBIMAGE2DEXTPROC glo_glMultiTexSubImage2DEXT = NULL;
PFNGLMULTITEXSUBIMAGE3DEXTPROC glo_glMultiTexSubImage3DEXT = NULL;
PFNGLMULTICASTBARRIERNVPROC glo_glMulticastBarrierNV = NULL;
PFNGLMULTICASTBLITFRAMEBUFFERNVPROC glo_glMulticastBlitFramebufferNV = NULL;
PFNGLMULTICASTBUFFERSUBDATANVPROC glo_glMulticastBufferSubDataNV = NULL;
PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC glo_glMulticastCopyBufferSubDataNV = NULL;
PFNGLMULTICASTCOPYIMAGESUBDATANVPROC glo_glMulticastCopyImageSubDataNV = NULL;
PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glo_glMulticastFramebufferSampleLocationsfvNV = NULL;
PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC glo_glMulticastGetQueryObjecti64vNV = NULL;
PFNGLMULTICASTGETQUERYOBJECTIVNVPROC glo_glMulticastGetQueryObjectivNV = NULL;
PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC glo_glMulticastGetQueryObjectui64vNV = NULL;
PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC glo_glMulticastGetQueryObjectuivNV = NULL;
PFNGLMULTICASTSCISSORARRAYVNVXPROC glo_glMulticastScissorArrayvNVX = NULL;
PFNGLMULTICASTVIEWPORTARRAYVNVXPROC glo_glMulticastViewportArrayvNVX = NULL;
PFNGLMULTICASTVIEWPORTPOSITIONWSCALENVXPROC glo_glMulticastViewportPositionWScaleNVX = NULL;
PFNGLMULTICASTWAITSYNCNVPROC glo_glMulticastWaitSyncNV = NULL;
PFNGLNAMEDBUFFERATTACHMEMORYNVPROC glo_glNamedBufferAttachMemoryNV = NULL;
PFNGLNAMEDBUFFERDATAPROC glo_glNamedBufferData = NULL;
PFNGLNAMEDBUFFERDATAEXTPROC glo_glNamedBufferDataEXT = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC glo_glNamedBufferPageCommitmentARB = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC glo_glNamedBufferPageCommitmentEXT = NULL;
PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC glo_glNamedBufferPageCommitmentMemNV = NULL;
PFNGLNAMEDBUFFERSTORAGEPROC glo_glNamedBufferStorage = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTPROC glo_glNamedBufferStorageEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC glo_glNamedBufferStorageExternalEXT = NULL;
PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC glo_glNamedBufferStorageMemEXT = NULL;
PFNGLNAMEDBUFFERSUBDATAPROC glo_glNamedBufferSubData = NULL;
PFNGLNAMEDBUFFERSUBDATAEXTPROC glo_glNamedBufferSubDataEXT = NULL;
PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC glo_glNamedCopyBufferSubDataEXT = NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC glo_glNamedFramebufferDrawBuffer = NULL;
PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC glo_glNamedFramebufferDrawBuffers = NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC glo_glNamedFramebufferParameteri = NULL;
PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC glo_glNamedFramebufferParameteriEXT = NULL;
PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC glo_glNamedFramebufferReadBuffer = NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC glo_glNamedFramebufferRenderbuffer = NULL;
PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC glo_glNamedFramebufferRenderbufferEXT = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC glo_glNamedFramebufferSampleLocationsfvARB = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC glo_glNamedFramebufferSampleLocationsfvNV = NULL;
PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC glo_glNamedFramebufferSamplePositionsfvAMD = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREPROC glo_glNamedFramebufferTexture = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC glo_glNamedFramebufferTexture1DEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC glo_glNamedFramebufferTexture2DEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC glo_glNamedFramebufferTexture3DEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC glo_glNamedFramebufferTextureEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC glo_glNamedFramebufferTextureFaceEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC glo_glNamedFramebufferTextureLayer = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC glo_glNamedFramebufferTextureLayerEXT = NULL;
PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC glo_glNamedFramebufferTextureMultiviewOVR = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC glo_glNamedProgramLocalParameter4dEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC glo_glNamedProgramLocalParameter4dvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC glo_glNamedProgramLocalParameter4fEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC glo_glNamedProgramLocalParameter4fvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC glo_glNamedProgramLocalParameterI4iEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC glo_glNamedProgramLocalParameterI4ivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC glo_glNamedProgramLocalParameterI4uiEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC glo_glNamedProgramLocalParameterI4uivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC glo_glNamedProgramLocalParameters4fvEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC glo_glNamedProgramLocalParametersI4ivEXT = NULL;
PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC glo_glNamedProgramLocalParametersI4uivEXT = NULL;
PFNGLNAMEDPROGRAMSTRINGEXTPROC glo_glNamedProgramStringEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEPROC glo_glNamedRenderbufferStorage = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC glo_glNamedRenderbufferStorageEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC glo_glNamedRenderbufferStorageMultisample = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glo_glNamedRenderbufferStorageMultisampleAdvancedAMD = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC glo_glNamedRenderbufferStorageMultisampleCoverageEXT = NULL;
PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glo_glNamedRenderbufferStorageMultisampleEXT = NULL;
PFNGLNAMEDSTRINGARBPROC glo_glNamedStringARB = NULL;
PFNGLNEWOBJECTBUFFERATIPROC glo_glNewObjectBufferATI = NULL;
PFNGLNORMAL3FVERTEX3FSUNPROC glo_glNormal3fVertex3fSUN = NULL;
PFNGLNORMAL3FVERTEX3FVSUNPROC glo_glNormal3fVertex3fvSUN = NULL;
PFNGLNORMAL3HNVPROC glo_glNormal3hNV = NULL;
PFNGLNORMAL3HVNVPROC glo_glNormal3hvNV = NULL;
PFNGLNORMAL3XOESPROC glo_glNormal3xOES = NULL;
PFNGLNORMAL3XVOESPROC glo_glNormal3xvOES = NULL;
PFNGLNORMALFORMATNVPROC glo_glNormalFormatNV = NULL;
PFNGLNORMALPOINTEREXTPROC glo_glNormalPointerEXT = NULL;
PFNGLNORMALPOINTERLISTIBMPROC glo_glNormalPointerListIBM = NULL;
PFNGLNORMALPOINTERVINTELPROC glo_glNormalPointervINTEL = NULL;
PFNGLNORMALSTREAM3BATIPROC glo_glNormalStream3bATI = NULL;
PFNGLNORMALSTREAM3BVATIPROC glo_glNormalStream3bvATI = NULL;
PFNGLNORMALSTREAM3DATIPROC glo_glNormalStream3dATI = NULL;
PFNGLNORMALSTREAM3DVATIPROC glo_glNormalStream3dvATI = NULL;
PFNGLNORMALSTREAM3FATIPROC glo_glNormalStream3fATI = NULL;
PFNGLNORMALSTREAM3FVATIPROC glo_glNormalStream3fvATI = NULL;
PFNGLNORMALSTREAM3IATIPROC glo_glNormalStream3iATI = NULL;
PFNGLNORMALSTREAM3IVATIPROC glo_glNormalStream3ivATI = NULL;
PFNGLNORMALSTREAM3SATIPROC glo_glNormalStream3sATI = NULL;
PFNGLNORMALSTREAM3SVATIPROC glo_glNormalStream3svATI = NULL;
PFNGLOBJECTLABELPROC glo_glObjectLabel = NULL;
PFNGLOBJECTPTRLABELPROC glo_glObjectPtrLabel = NULL;
PFNGLOBJECTPURGEABLEAPPLEPROC glo_glObjectPurgeableAPPLE = NULL;
PFNGLOBJECTUNPURGEABLEAPPLEPROC glo_glObjectUnpurgeableAPPLE = NULL;
PFNGLORTHOFOESPROC glo_glOrthofOES = NULL;
PFNGLORTHOXOESPROC glo_glOrthoxOES = NULL;
PFNGLPNTRIANGLESFATIPROC glo_glPNTrianglesfATI = NULL;
PFNGLPNTRIANGLESIATIPROC glo_glPNTrianglesiATI = NULL;
PFNGLPASSTEXCOORDATIPROC glo_glPassTexCoordATI = NULL;
PFNGLPASSTHROUGHXOESPROC glo_glPassThroughxOES = NULL;
PFNGLPATCHPARAMETERFVPROC glo_glPatchParameterfv = NULL;
PFNGLPATCHPARAMETERIPROC glo_glPatchParameteri = NULL;
PFNGLPATHCOMMANDSNVPROC glo_glPathCommandsNV = NULL;
PFNGLPATHCOORDSNVPROC glo_glPathCoordsNV = NULL;
PFNGLPATHCOVERDEPTHFUNCNVPROC glo_glPathCoverDepthFuncNV = NULL;
PFNGLPATHDASHARRAYNVPROC glo_glPathDashArrayNV = NULL;
PFNGLPATHGLYPHINDEXARRAYNVPROC glo_glPathGlyphIndexArrayNV = NULL;
PFNGLPATHGLYPHINDEXRANGENVPROC glo_glPathGlyphIndexRangeNV = NULL;
PFNGLPATHGLYPHRANGENVPROC glo_glPathGlyphRangeNV = NULL;
PFNGLPATHGLYPHSNVPROC glo_glPathGlyphsNV = NULL;
PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC glo_glPathMemoryGlyphIndexArrayNV = NULL;
PFNGLPATHPARAMETERFNVPROC glo_glPathParameterfNV = NULL;
PFNGLPATHPARAMETERFVNVPROC glo_glPathParameterfvNV = NULL;
PFNGLPATHPARAMETERINVPROC glo_glPathParameteriNV = NULL;
PFNGLPATHPARAMETERIVNVPROC glo_glPathParameterivNV = NULL;
PFNGLPATHSTENCILDEPTHOFFSETNVPROC glo_glPathStencilDepthOffsetNV = NULL;
PFNGLPATHSTENCILFUNCNVPROC glo_glPathStencilFuncNV = NULL;
PFNGLPATHSTRINGNVPROC glo_glPathStringNV = NULL;
PFNGLPATHSUBCOMMANDSNVPROC glo_glPathSubCommandsNV = NULL;
PFNGLPATHSUBCOORDSNVPROC glo_glPathSubCoordsNV = NULL;
PFNGLPAUSETRANSFORMFEEDBACKPROC glo_glPauseTransformFeedback = NULL;
PFNGLPAUSETRANSFORMFEEDBACKNVPROC glo_glPauseTransformFeedbackNV = NULL;
PFNGLPIXELDATARANGENVPROC glo_glPixelDataRangeNV = NULL;
PFNGLPIXELMAPXPROC glo_glPixelMapx = NULL;
PFNGLPIXELSTOREFPROC glo_glPixelStoref = NULL;
PFNGLPIXELSTOREIPROC glo_glPixelStorei = NULL;
PFNGLPIXELSTOREXPROC glo_glPixelStorex = NULL;
PFNGLPIXELTEXGENPARAMETERFSGISPROC glo_glPixelTexGenParameterfSGIS = NULL;
PFNGLPIXELTEXGENPARAMETERFVSGISPROC glo_glPixelTexGenParameterfvSGIS = NULL;
PFNGLPIXELTEXGENPARAMETERISGISPROC glo_glPixelTexGenParameteriSGIS = NULL;
PFNGLPIXELTEXGENPARAMETERIVSGISPROC glo_glPixelTexGenParameterivSGIS = NULL;
PFNGLPIXELTEXGENSGIXPROC glo_glPixelTexGenSGIX = NULL;
PFNGLPIXELTRANSFERXOESPROC glo_glPixelTransferxOES = NULL;
PFNGLPIXELTRANSFORMPARAMETERFEXTPROC glo_glPixelTransformParameterfEXT = NULL;
PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC glo_glPixelTransformParameterfvEXT = NULL;
PFNGLPIXELTRANSFORMPARAMETERIEXTPROC glo_glPixelTransformParameteriEXT = NULL;
PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC glo_glPixelTransformParameterivEXT = NULL;
PFNGLPIXELZOOMXOESPROC glo_glPixelZoomxOES = NULL;
PFNGLPOINTALONGPATHNVPROC glo_glPointAlongPathNV = NULL;
PFNGLPOINTPARAMETERFPROC glo_glPointParameterf = NULL;
PFNGLPOINTPARAMETERFARBPROC glo_glPointParameterfARB = NULL;
PFNGLPOINTPARAMETERFEXTPROC glo_glPointParameterfEXT = NULL;
PFNGLPOINTPARAMETERFSGISPROC glo_glPointParameterfSGIS = NULL;
PFNGLPOINTPARAMETERFVPROC glo_glPointParameterfv = NULL;
PFNGLPOINTPARAMETERFVARBPROC glo_glPointParameterfvARB = NULL;
PFNGLPOINTPARAMETERFVEXTPROC glo_glPointParameterfvEXT = NULL;
PFNGLPOINTPARAMETERFVSGISPROC glo_glPointParameterfvSGIS = NULL;
PFNGLPOINTPARAMETERIPROC glo_glPointParameteri = NULL;
PFNGLPOINTPARAMETERINVPROC glo_glPointParameteriNV = NULL;
PFNGLPOINTPARAMETERIVPROC glo_glPointParameteriv = NULL;
PFNGLPOINTPARAMETERIVNVPROC glo_glPointParameterivNV = NULL;
PFNGLPOINTPARAMETERXVOESPROC glo_glPointParameterxvOES = NULL;
PFNGLPOINTSIZEPROC glo_glPointSize = NULL;
PFNGLPOINTSIZEXOESPROC glo_glPointSizexOES = NULL;
PFNGLPOLLASYNCSGIXPROC glo_glPollAsyncSGIX = NULL;
PFNGLPOLLINSTRUMENTSSGIXPROC glo_glPollInstrumentsSGIX = NULL;
PFNGLPOLYGONMODEPROC glo_glPolygonMode = NULL;
PFNGLPOLYGONOFFSETPROC glo_glPolygonOffset = NULL;
PFNGLPOLYGONOFFSETCLAMPPROC glo_glPolygonOffsetClamp = NULL;
PFNGLPOLYGONOFFSETCLAMPEXTPROC glo_glPolygonOffsetClampEXT = NULL;
PFNGLPOLYGONOFFSETEXTPROC glo_glPolygonOffsetEXT = NULL;
PFNGLPOLYGONOFFSETXOESPROC glo_glPolygonOffsetxOES = NULL;
PFNGLPOPDEBUGGROUPPROC glo_glPopDebugGroup = NULL;
PFNGLPOPGROUPMARKEREXTPROC glo_glPopGroupMarkerEXT = NULL;
PFNGLPRESENTFRAMEDUALFILLNVPROC glo_glPresentFrameDualFillNV = NULL;
PFNGLPRESENTFRAMEKEYEDNVPROC glo_glPresentFrameKeyedNV = NULL;
PFNGLPRIMITIVEBOUNDINGBOXARBPROC glo_glPrimitiveBoundingBoxARB = NULL;
PFNGLPRIMITIVERESTARTINDEXPROC glo_glPrimitiveRestartIndex = NULL;
PFNGLPRIMITIVERESTARTINDEXNVPROC glo_glPrimitiveRestartIndexNV = NULL;
PFNGLPRIMITIVERESTARTNVPROC glo_glPrimitiveRestartNV = NULL;
PFNGLPRIORITIZETEXTURESEXTPROC glo_glPrioritizeTexturesEXT = NULL;
PFNGLPRIORITIZETEXTURESXOESPROC glo_glPrioritizeTexturesxOES = NULL;
PFNGLPROGRAMBINARYPROC glo_glProgramBinary = NULL;
PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC glo_glProgramBufferParametersIivNV = NULL;
PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC glo_glProgramBufferParametersIuivNV = NULL;
PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC glo_glProgramBufferParametersfvNV = NULL;
PFNGLPROGRAMENVPARAMETER4DARBPROC glo_glProgramEnvParameter4dARB = NULL;
PFNGLPROGRAMENVPARAMETER4DVARBPROC glo_glProgramEnvParameter4dvARB = NULL;
PFNGLPROGRAMENVPARAMETER4FARBPROC glo_glProgramEnvParameter4fARB = NULL;
PFNGLPROGRAMENVPARAMETER4FVARBPROC glo_glProgramEnvParameter4fvARB = NULL;
PFNGLPROGRAMENVPARAMETERI4INVPROC glo_glProgramEnvParameterI4iNV = NULL;
PFNGLPROGRAMENVPARAMETERI4IVNVPROC glo_glProgramEnvParameterI4ivNV = NULL;
PFNGLPROGRAMENVPARAMETERI4UINVPROC glo_glProgramEnvParameterI4uiNV = NULL;
PFNGLPROGRAMENVPARAMETERI4UIVNVPROC glo_glProgramEnvParameterI4uivNV = NULL;
PFNGLPROGRAMENVPARAMETERS4FVEXTPROC glo_glProgramEnvParameters4fvEXT = NULL;
PFNGLPROGRAMENVPARAMETERSI4IVNVPROC glo_glProgramEnvParametersI4ivNV = NULL;
PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC glo_glProgramEnvParametersI4uivNV = NULL;
PFNGLPROGRAMLOCALPARAMETER4DARBPROC glo_glProgramLocalParameter4dARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4DVARBPROC glo_glProgramLocalParameter4dvARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4FARBPROC glo_glProgramLocalParameter4fARB = NULL;
PFNGLPROGRAMLOCALPARAMETER4FVARBPROC glo_glProgramLocalParameter4fvARB = NULL;
PFNGLPROGRAMLOCALPARAMETERI4INVPROC glo_glProgramLocalParameterI4iNV = NULL;
PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC glo_glProgramLocalParameterI4ivNV = NULL;
PFNGLPROGRAMLOCALPARAMETERI4UINVPROC glo_glProgramLocalParameterI4uiNV = NULL;
PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC glo_glProgramLocalParameterI4uivNV = NULL;
PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC glo_glProgramLocalParameters4fvEXT = NULL;
PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC glo_glProgramLocalParametersI4ivNV = NULL;
PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC glo_glProgramLocalParametersI4uivNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4DNVPROC glo_glProgramNamedParameter4dNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC glo_glProgramNamedParameter4dvNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4FNVPROC glo_glProgramNamedParameter4fNV = NULL;
PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC glo_glProgramNamedParameter4fvNV = NULL;
PFNGLPROGRAMPARAMETER4DNVPROC glo_glProgramParameter4dNV = NULL;
PFNGLPROGRAMPARAMETER4DVNVPROC glo_glProgramParameter4dvNV = NULL;
PFNGLPROGRAMPARAMETER4FNVPROC glo_glProgramParameter4fNV = NULL;
PFNGLPROGRAMPARAMETER4FVNVPROC glo_glProgramParameter4fvNV = NULL;
PFNGLPROGRAMPARAMETERIPROC glo_glProgramParameteri = NULL;
PFNGLPROGRAMPARAMETERIARBPROC glo_glProgramParameteriARB = NULL;
PFNGLPROGRAMPARAMETERIEXTPROC glo_glProgramParameteriEXT = NULL;
PFNGLPROGRAMPARAMETERS4DVNVPROC glo_glProgramParameters4dvNV = NULL;
PFNGLPROGRAMPARAMETERS4FVNVPROC glo_glProgramParameters4fvNV = NULL;
PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC glo_glProgramPathFragmentInputGenNV = NULL;
PFNGLPROGRAMSTRINGARBPROC glo_glProgramStringARB = NULL;
PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC glo_glProgramSubroutineParametersuivNV = NULL;
PFNGLPROGRAMUNIFORM1DPROC glo_glProgramUniform1d = NULL;
PFNGLPROGRAMUNIFORM1DEXTPROC glo_glProgramUniform1dEXT = NULL;
PFNGLPROGRAMUNIFORM1DVPROC glo_glProgramUniform1dv = NULL;
PFNGLPROGRAMUNIFORM1DVEXTPROC glo_glProgramUniform1dvEXT = NULL;
PFNGLPROGRAMUNIFORM1FPROC glo_glProgramUniform1f = NULL;
PFNGLPROGRAMUNIFORM1FEXTPROC glo_glProgramUniform1fEXT = NULL;
PFNGLPROGRAMUNIFORM1FVPROC glo_glProgramUniform1fv = NULL;
PFNGLPROGRAMUNIFORM1FVEXTPROC glo_glProgramUniform1fvEXT = NULL;
PFNGLPROGRAMUNIFORM1IPROC glo_glProgramUniform1i = NULL;
PFNGLPROGRAMUNIFORM1I64ARBPROC glo_glProgramUniform1i64ARB = NULL;
PFNGLPROGRAMUNIFORM1I64NVPROC glo_glProgramUniform1i64NV = NULL;
PFNGLPROGRAMUNIFORM1I64VARBPROC glo_glProgramUniform1i64vARB = NULL;
PFNGLPROGRAMUNIFORM1I64VNVPROC glo_glProgramUniform1i64vNV = NULL;
PFNGLPROGRAMUNIFORM1IEXTPROC glo_glProgramUniform1iEXT = NULL;
PFNGLPROGRAMUNIFORM1IVPROC glo_glProgramUniform1iv = NULL;
PFNGLPROGRAMUNIFORM1IVEXTPROC glo_glProgramUniform1ivEXT = NULL;
PFNGLPROGRAMUNIFORM1UIPROC glo_glProgramUniform1ui = NULL;
PFNGLPROGRAMUNIFORM1UI64ARBPROC glo_glProgramUniform1ui64ARB = NULL;
PFNGLPROGRAMUNIFORM1UI64NVPROC glo_glProgramUniform1ui64NV = NULL;
PFNGLPROGRAMUNIFORM1UI64VARBPROC glo_glProgramUniform1ui64vARB = NULL;
PFNGLPROGRAMUNIFORM1UI64VNVPROC glo_glProgramUniform1ui64vNV = NULL;
PFNGLPROGRAMUNIFORM1UIEXTPROC glo_glProgramUniform1uiEXT = NULL;
PFNGLPROGRAMUNIFORM1UIVPROC glo_glProgramUniform1uiv = NULL;
PFNGLPROGRAMUNIFORM1UIVEXTPROC glo_glProgramUniform1uivEXT = NULL;
PFNGLPROGRAMUNIFORM2DPROC glo_glProgramUniform2d = NULL;
PFNGLPROGRAMUNIFORM2DEXTPROC glo_glProgramUniform2dEXT = NULL;
PFNGLPROGRAMUNIFORM2DVPROC glo_glProgramUniform2dv = NULL;
PFNGLPROGRAMUNIFORM2DVEXTPROC glo_glProgramUniform2dvEXT = NULL;
PFNGLPROGRAMUNIFORM2FPROC glo_glProgramUniform2f = NULL;
PFNGLPROGRAMUNIFORM2FEXTPROC glo_glProgramUniform2fEXT = NULL;
PFNGLPROGRAMUNIFORM2FVPROC glo_glProgramUniform2fv = NULL;
PFNGLPROGRAMUNIFORM2FVEXTPROC glo_glProgramUniform2fvEXT = NULL;
PFNGLPROGRAMUNIFORM2IPROC glo_glProgramUniform2i = NULL;
PFNGLPROGRAMUNIFORM2I64ARBPROC glo_glProgramUniform2i64ARB = NULL;
PFNGLPROGRAMUNIFORM2I64NVPROC glo_glProgramUniform2i64NV = NULL;
PFNGLPROGRAMUNIFORM2I64VARBPROC glo_glProgramUniform2i64vARB = NULL;
PFNGLPROGRAMUNIFORM2I64VNVPROC glo_glProgramUniform2i64vNV = NULL;
PFNGLPROGRAMUNIFORM2IEXTPROC glo_glProgramUniform2iEXT = NULL;
PFNGLPROGRAMUNIFORM2IVPROC glo_glProgramUniform2iv = NULL;
PFNGLPROGRAMUNIFORM2IVEXTPROC glo_glProgramUniform2ivEXT = NULL;
PFNGLPROGRAMUNIFORM2UIPROC glo_glProgramUniform2ui = NULL;
PFNGLPROGRAMUNIFORM2UI64ARBPROC glo_glProgramUniform2ui64ARB = NULL;
PFNGLPROGRAMUNIFORM2UI64NVPROC glo_glProgramUniform2ui64NV = NULL;
PFNGLPROGRAMUNIFORM2UI64VARBPROC glo_glProgramUniform2ui64vARB = NULL;
PFNGLPROGRAMUNIFORM2UI64VNVPROC glo_glProgramUniform2ui64vNV = NULL;
PFNGLPROGRAMUNIFORM2UIEXTPROC glo_glProgramUniform2uiEXT = NULL;
PFNGLPROGRAMUNIFORM2UIVPROC glo_glProgramUniform2uiv = NULL;
PFNGLPROGRAMUNIFORM2UIVEXTPROC glo_glProgramUniform2uivEXT = NULL;
PFNGLPROGRAMUNIFORM3DPROC glo_glProgramUniform3d = NULL;
PFNGLPROGRAMUNIFORM3DEXTPROC glo_glProgramUniform3dEXT = NULL;
PFNGLPROGRAMUNIFORM3DVPROC glo_glProgramUniform3dv = NULL;
PFNGLPROGRAMUNIFORM3DVEXTPROC glo_glProgramUniform3dvEXT = NULL;
PFNGLPROGRAMUNIFORM3FPROC glo_glProgramUniform3f = NULL;
PFNGLPROGRAMUNIFORM3FEXTPROC glo_glProgramUniform3fEXT = NULL;
PFNGLPROGRAMUNIFORM3FVPROC glo_glProgramUniform3fv = NULL;
PFNGLPROGRAMUNIFORM3FVEXTPROC glo_glProgramUniform3fvEXT = NULL;
PFNGLPROGRAMUNIFORM3IPROC glo_glProgramUniform3i = NULL;
PFNGLPROGRAMUNIFORM3I64ARBPROC glo_glProgramUniform3i64ARB = NULL;
PFNGLPROGRAMUNIFORM3I64NVPROC glo_glProgramUniform3i64NV = NULL;
PFNGLPROGRAMUNIFORM3I64VARBPROC glo_glProgramUniform3i64vARB = NULL;
PFNGLPROGRAMUNIFORM3I64VNVPROC glo_glProgramUniform3i64vNV = NULL;
PFNGLPROGRAMUNIFORM3IEXTPROC glo_glProgramUniform3iEXT = NULL;
PFNGLPROGRAMUNIFORM3IVPROC glo_glProgramUniform3iv = NULL;
PFNGLPROGRAMUNIFORM3IVEXTPROC glo_glProgramUniform3ivEXT = NULL;
PFNGLPROGRAMUNIFORM3UIPROC glo_glProgramUniform3ui = NULL;
PFNGLPROGRAMUNIFORM3UI64ARBPROC glo_glProgramUniform3ui64ARB = NULL;
PFNGLPROGRAMUNIFORM3UI64NVPROC glo_glProgramUniform3ui64NV = NULL;
PFNGLPROGRAMUNIFORM3UI64VARBPROC glo_glProgramUniform3ui64vARB = NULL;
PFNGLPROGRAMUNIFORM3UI64VNVPROC glo_glProgramUniform3ui64vNV = NULL;
PFNGLPROGRAMUNIFORM3UIEXTPROC glo_glProgramUniform3uiEXT = NULL;
PFNGLPROGRAMUNIFORM3UIVPROC glo_glProgramUniform3uiv = NULL;
PFNGLPROGRAMUNIFORM3UIVEXTPROC glo_glProgramUniform3uivEXT = NULL;
PFNGLPROGRAMUNIFORM4DPROC glo_glProgramUniform4d = NULL;
PFNGLPROGRAMUNIFORM4DEXTPROC glo_glProgramUniform4dEXT = NULL;
PFNGLPROGRAMUNIFORM4DVPROC glo_glProgramUniform4dv = NULL;
PFNGLPROGRAMUNIFORM4DVEXTPROC glo_glProgramUniform4dvEXT = NULL;
PFNGLPROGRAMUNIFORM4FPROC glo_glProgramUniform4f = NULL;
PFNGLPROGRAMUNIFORM4FEXTPROC glo_glProgramUniform4fEXT = NULL;
PFNGLPROGRAMUNIFORM4FVPROC glo_glProgramUniform4fv = NULL;
PFNGLPROGRAMUNIFORM4FVEXTPROC glo_glProgramUniform4fvEXT = NULL;
PFNGLPROGRAMUNIFORM4IPROC glo_glProgramUniform4i = NULL;
PFNGLPROGRAMUNIFORM4I64ARBPROC glo_glProgramUniform4i64ARB = NULL;
PFNGLPROGRAMUNIFORM4I64NVPROC glo_glProgramUniform4i64NV = NULL;
PFNGLPROGRAMUNIFORM4I64VARBPROC glo_glProgramUniform4i64vARB = NULL;
PFNGLPROGRAMUNIFORM4I64VNVPROC glo_glProgramUniform4i64vNV = NULL;
PFNGLPROGRAMUNIFORM4IEXTPROC glo_glProgramUniform4iEXT = NULL;
PFNGLPROGRAMUNIFORM4IVPROC glo_glProgramUniform4iv = NULL;
PFNGLPROGRAMUNIFORM4IVEXTPROC glo_glProgramUniform4ivEXT = NULL;
PFNGLPROGRAMUNIFORM4UIPROC glo_glProgramUniform4ui = NULL;
PFNGLPROGRAMUNIFORM4UI64ARBPROC glo_glProgramUniform4ui64ARB = NULL;
PFNGLPROGRAMUNIFORM4UI64NVPROC glo_glProgramUniform4ui64NV = NULL;
PFNGLPROGRAMUNIFORM4UI64VARBPROC glo_glProgramUniform4ui64vARB = NULL;
PFNGLPROGRAMUNIFORM4UI64VNVPROC glo_glProgramUniform4ui64vNV = NULL;
PFNGLPROGRAMUNIFORM4UIEXTPROC glo_glProgramUniform4uiEXT = NULL;
PFNGLPROGRAMUNIFORM4UIVPROC glo_glProgramUniform4uiv = NULL;
PFNGLPROGRAMUNIFORM4UIVEXTPROC glo_glProgramUniform4uivEXT = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC glo_glProgramUniformHandleui64ARB = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC glo_glProgramUniformHandleui64NV = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC glo_glProgramUniformHandleui64vARB = NULL;
PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC glo_glProgramUniformHandleui64vNV = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVPROC glo_glProgramUniformMatrix2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC glo_glProgramUniformMatrix2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVPROC glo_glProgramUniformMatrix2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC glo_glProgramUniformMatrix2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC glo_glProgramUniformMatrix2x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC glo_glProgramUniformMatrix2x3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC glo_glProgramUniformMatrix2x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC glo_glProgramUniformMatrix2x3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC glo_glProgramUniformMatrix2x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC glo_glProgramUniformMatrix2x4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC glo_glProgramUniformMatrix2x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC glo_glProgramUniformMatrix2x4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVPROC glo_glProgramUniformMatrix3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC glo_glProgramUniformMatrix3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVPROC glo_glProgramUniformMatrix3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC glo_glProgramUniformMatrix3fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC glo_glProgramUniformMatrix3x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC glo_glProgramUniformMatrix3x2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC glo_glProgramUniformMatrix3x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC glo_glProgramUniformMatrix3x2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC glo_glProgramUniformMatrix3x4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC glo_glProgramUniformMatrix3x4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC glo_glProgramUniformMatrix3x4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC glo_glProgramUniformMatrix3x4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVPROC glo_glProgramUniformMatrix4dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC glo_glProgramUniformMatrix4dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVPROC glo_glProgramUniformMatrix4fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC glo_glProgramUniformMatrix4fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC glo_glProgramUniformMatrix4x2dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC glo_glProgramUniformMatrix4x2dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC glo_glProgramUniformMatrix4x2fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC glo_glProgramUniformMatrix4x2fvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC glo_glProgramUniformMatrix4x3dv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC glo_glProgramUniformMatrix4x3dvEXT = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC glo_glProgramUniformMatrix4x3fv = NULL;
PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC glo_glProgramUniformMatrix4x3fvEXT = NULL;
PFNGLPROGRAMUNIFORMUI64NVPROC glo_glProgramUniformui64NV = NULL;
PFNGLPROGRAMUNIFORMUI64VNVPROC glo_glProgramUniformui64vNV = NULL;
PFNGLPROGRAMVERTEXLIMITNVPROC glo_glProgramVertexLimitNV = NULL;
PFNGLPROVOKINGVERTEXPROC glo_glProvokingVertex = NULL;
PFNGLPROVOKINGVERTEXEXTPROC glo_glProvokingVertexEXT = NULL;
PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC glo_glPushClientAttribDefaultEXT = NULL;
PFNGLPUSHDEBUGGROUPPROC glo_glPushDebugGroup = NULL;
PFNGLPUSHGROUPMARKEREXTPROC glo_glPushGroupMarkerEXT = NULL;
PFNGLQUERYCOUNTERPROC glo_glQueryCounter = NULL;
PFNGLQUERYMATRIXXOESPROC glo_glQueryMatrixxOES = NULL;
PFNGLQUERYOBJECTPARAMETERUIAMDPROC glo_glQueryObjectParameteruiAMD = NULL;
PFNGLQUERYRESOURCENVPROC glo_glQueryResourceNV = NULL;
PFNGLQUERYRESOURCETAGNVPROC glo_glQueryResourceTagNV = NULL;
PFNGLRASTERPOS2XOESPROC glo_glRasterPos2xOES = NULL;
PFNGLRASTERPOS2XVOESPROC glo_glRasterPos2xvOES = NULL;
PFNGLRASTERPOS3XOESPROC glo_glRasterPos3xOES = NULL;
PFNGLRASTERPOS3XVOESPROC glo_glRasterPos3xvOES = NULL;
PFNGLRASTERPOS4XOESPROC glo_glRasterPos4xOES = NULL;
PFNGLRASTERPOS4XVOESPROC glo_glRasterPos4xvOES = NULL;
PFNGLRASTERSAMPLESEXTPROC glo_glRasterSamplesEXT = NULL;
PFNGLREADBUFFERPROC glo_glReadBuffer = NULL;
PFNGLREADINSTRUMENTSSGIXPROC glo_glReadInstrumentsSGIX = NULL;
PFNGLREADPIXELSPROC glo_glReadPixels = NULL;
PFNGLREADNPIXELSPROC glo_glReadnPixels = NULL;
PFNGLREADNPIXELSARBPROC glo_glReadnPixelsARB = NULL;
PFNGLRECTXOESPROC glo_glRectxOES = NULL;
PFNGLRECTXVOESPROC glo_glRectxvOES = NULL;
PFNGLREFERENCEPLANESGIXPROC glo_glReferencePlaneSGIX = NULL;
PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC glo_glReleaseKeyedMutexWin32EXT = NULL;
PFNGLRELEASESHADERCOMPILERPROC glo_glReleaseShaderCompiler = NULL;
PFNGLRENDERGPUMASKNVPROC glo_glRenderGpuMaskNV = NULL;
PFNGLRENDERBUFFERSTORAGEPROC glo_glRenderbufferStorage = NULL;
PFNGLRENDERBUFFERSTORAGEEXTPROC glo_glRenderbufferStorageEXT = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC glo_glRenderbufferStorageMultisample = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC glo_glRenderbufferStorageMultisampleAdvancedAMD = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC glo_glRenderbufferStorageMultisampleCoverageNV = NULL;
PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC glo_glRenderbufferStorageMultisampleEXT = NULL;
PFNGLREPLACEMENTCODEPOINTERSUNPROC glo_glReplacementCodePointerSUN = NULL;
PFNGLREPLACEMENTCODEUBSUNPROC glo_glReplacementCodeubSUN = NULL;
PFNGLREPLACEMENTCODEUBVSUNPROC glo_glReplacementCodeubvSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC glo_glReplacementCodeuiColor3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC glo_glReplacementCodeuiColor3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC glo_glReplacementCodeuiColor4fNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC glo_glReplacementCodeuiColor4fNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC glo_glReplacementCodeuiColor4ubVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC glo_glReplacementCodeuiColor4ubVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC glo_glReplacementCodeuiNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC glo_glReplacementCodeuiNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUISUNPROC glo_glReplacementCodeuiSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glo_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glo_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC glo_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glo_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC glo_glReplacementCodeuiTexCoord2fVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC glo_glReplacementCodeuiTexCoord2fVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC glo_glReplacementCodeuiVertex3fSUN = NULL;
PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC glo_glReplacementCodeuiVertex3fvSUN = NULL;
PFNGLREPLACEMENTCODEUIVSUNPROC glo_glReplacementCodeuivSUN = NULL;
PFNGLREPLACEMENTCODEUSSUNPROC glo_glReplacementCodeusSUN = NULL;
PFNGLREPLACEMENTCODEUSVSUNPROC glo_glReplacementCodeusvSUN = NULL;
PFNGLREQUESTRESIDENTPROGRAMSNVPROC glo_glRequestResidentProgramsNV = NULL;
PFNGLRESETHISTOGRAMEXTPROC glo_glResetHistogramEXT = NULL;
PFNGLRESETMEMORYOBJECTPARAMETERNVPROC glo_glResetMemoryObjectParameterNV = NULL;
PFNGLRESETMINMAXEXTPROC glo_glResetMinmaxEXT = NULL;
PFNGLRESIZEBUFFERSMESAPROC glo_glResizeBuffersMESA = NULL;
PFNGLRESOLVEDEPTHVALUESNVPROC glo_glResolveDepthValuesNV = NULL;
PFNGLRESUMETRANSFORMFEEDBACKPROC glo_glResumeTransformFeedback = NULL;
PFNGLRESUMETRANSFORMFEEDBACKNVPROC glo_glResumeTransformFeedbackNV = NULL;
PFNGLROTATEXOESPROC glo_glRotatexOES = NULL;
PFNGLSAMPLECOVERAGEPROC glo_glSampleCoverage = NULL;
PFNGLSAMPLECOVERAGEARBPROC glo_glSampleCoverageARB = NULL;
PFNGLSAMPLEMAPATIPROC glo_glSampleMapATI = NULL;
PFNGLSAMPLEMASKEXTPROC glo_glSampleMaskEXT = NULL;
PFNGLSAMPLEMASKINDEXEDNVPROC glo_glSampleMaskIndexedNV = NULL;
PFNGLSAMPLEMASKSGISPROC glo_glSampleMaskSGIS = NULL;
PFNGLSAMPLEMASKIPROC glo_glSampleMaski = NULL;
PFNGLSAMPLEPATTERNEXTPROC glo_glSamplePatternEXT = NULL;
PFNGLSAMPLEPATTERNSGISPROC glo_glSamplePatternSGIS = NULL;
PFNGLSAMPLERPARAMETERIIVPROC glo_glSamplerParameterIiv = NULL;
PFNGLSAMPLERPARAMETERIUIVPROC glo_glSamplerParameterIuiv = NULL;
PFNGLSAMPLERPARAMETERFPROC glo_glSamplerParameterf = NULL;
PFNGLSAMPLERPARAMETERFVPROC glo_glSamplerParameterfv = NULL;
PFNGLSAMPLERPARAMETERIPROC glo_glSamplerParameteri = NULL;
PFNGLSAMPLERPARAMETERIVPROC glo_glSamplerParameteriv = NULL;
PFNGLSCALEXOESPROC glo_glScalexOES = NULL;
PFNGLSCISSORPROC glo_glScissor = NULL;
PFNGLSCISSORARRAYVPROC glo_glScissorArrayv = NULL;
PFNGLSCISSOREXCLUSIVEARRAYVNVPROC glo_glScissorExclusiveArrayvNV = NULL;
PFNGLSCISSOREXCLUSIVENVPROC glo_glScissorExclusiveNV = NULL;
PFNGLSCISSORINDEXEDPROC glo_glScissorIndexed = NULL;
PFNGLSCISSORINDEXEDVPROC glo_glScissorIndexedv = NULL;
PFNGLSECONDARYCOLOR3BEXTPROC glo_glSecondaryColor3bEXT = NULL;
PFNGLSECONDARYCOLOR3BVEXTPROC glo_glSecondaryColor3bvEXT = NULL;
PFNGLSECONDARYCOLOR3DEXTPROC glo_glSecondaryColor3dEXT = NULL;
PFNGLSECONDARYCOLOR3DVEXTPROC glo_glSecondaryColor3dvEXT = NULL;
PFNGLSECONDARYCOLOR3FEXTPROC glo_glSecondaryColor3fEXT = NULL;
PFNGLSECONDARYCOLOR3FVEXTPROC glo_glSecondaryColor3fvEXT = NULL;
PFNGLSECONDARYCOLOR3HNVPROC glo_glSecondaryColor3hNV = NULL;
PFNGLSECONDARYCOLOR3HVNVPROC glo_glSecondaryColor3hvNV = NULL;
PFNGLSECONDARYCOLOR3IEXTPROC glo_glSecondaryColor3iEXT = NULL;
PFNGLSECONDARYCOLOR3IVEXTPROC glo_glSecondaryColor3ivEXT = NULL;
PFNGLSECONDARYCOLOR3SEXTPROC glo_glSecondaryColor3sEXT = NULL;
PFNGLSECONDARYCOLOR3SVEXTPROC glo_glSecondaryColor3svEXT = NULL;
PFNGLSECONDARYCOLOR3UBEXTPROC glo_glSecondaryColor3ubEXT = NULL;
PFNGLSECONDARYCOLOR3UBVEXTPROC glo_glSecondaryColor3ubvEXT = NULL;
PFNGLSECONDARYCOLOR3UIEXTPROC glo_glSecondaryColor3uiEXT = NULL;
PFNGLSECONDARYCOLOR3UIVEXTPROC glo_glSecondaryColor3uivEXT = NULL;
PFNGLSECONDARYCOLOR3USEXTPROC glo_glSecondaryColor3usEXT = NULL;
PFNGLSECONDARYCOLOR3USVEXTPROC glo_glSecondaryColor3usvEXT = NULL;
PFNGLSECONDARYCOLORFORMATNVPROC glo_glSecondaryColorFormatNV = NULL;
PFNGLSECONDARYCOLORPOINTEREXTPROC glo_glSecondaryColorPointerEXT = NULL;
PFNGLSECONDARYCOLORPOINTERLISTIBMPROC glo_glSecondaryColorPointerListIBM = NULL;
PFNGLSELECTPERFMONITORCOUNTERSAMDPROC glo_glSelectPerfMonitorCountersAMD = NULL;
PFNGLSEMAPHOREPARAMETERIVNVPROC glo_glSemaphoreParameterivNV = NULL;
PFNGLSEMAPHOREPARAMETERUI64VEXTPROC glo_glSemaphoreParameterui64vEXT = NULL;
PFNGLSEPARABLEFILTER2DEXTPROC glo_glSeparableFilter2DEXT = NULL;
PFNGLSETFENCEAPPLEPROC glo_glSetFenceAPPLE = NULL;
PFNGLSETFENCENVPROC glo_glSetFenceNV = NULL;
PFNGLSETFRAGMENTSHADERCONSTANTATIPROC glo_glSetFragmentShaderConstantATI = NULL;
PFNGLSETINVARIANTEXTPROC glo_glSetInvariantEXT = NULL;
PFNGLSETLOCALCONSTANTEXTPROC glo_glSetLocalConstantEXT = NULL;
PFNGLSETMULTISAMPLEFVAMDPROC glo_glSetMultisamplefvAMD = NULL;
PFNGLSHADERBINARYPROC glo_glShaderBinary = NULL;
PFNGLSHADEROP1EXTPROC glo_glShaderOp1EXT = NULL;
PFNGLSHADEROP2EXTPROC glo_glShaderOp2EXT = NULL;
PFNGLSHADEROP3EXTPROC glo_glShaderOp3EXT = NULL;
PFNGLSHADERSOURCEPROC glo_glShaderSource = NULL;
PFNGLSHADERSOURCEARBPROC glo_glShaderSourceARB = NULL;
PFNGLSHADERSTORAGEBLOCKBINDINGPROC glo_glShaderStorageBlockBinding = NULL;
PFNGLSHADINGRATECOMBINEROPSEXTPROC glo_glShadingRateCombinerOpsEXT = NULL;
PFNGLSHADINGRATEEXTPROC glo_glShadingRateEXT = NULL;
PFNGLSHADINGRATEIMAGEBARRIERNVPROC glo_glShadingRateImageBarrierNV = NULL;
PFNGLSHADINGRATEIMAGEPALETTENVPROC glo_glShadingRateImagePaletteNV = NULL;
PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC glo_glShadingRateSampleOrderCustomNV = NULL;
PFNGLSHADINGRATESAMPLEORDERNVPROC glo_glShadingRateSampleOrderNV = NULL;
PFNGLSHARPENTEXFUNCSGISPROC glo_glSharpenTexFuncSGIS = NULL;
PFNGLSIGNALSEMAPHOREEXTPROC glo_glSignalSemaphoreEXT = NULL;
PFNGLSIGNALSEMAPHOREUI64NVXPROC glo_glSignalSemaphoreui64NVX = NULL;
PFNGLSIGNALVKFENCENVPROC glo_glSignalVkFenceNV = NULL;
PFNGLSIGNALVKSEMAPHORENVPROC glo_glSignalVkSemaphoreNV = NULL;
PFNGLSPECIALIZESHADERPROC glo_glSpecializeShader = NULL;
PFNGLSPECIALIZESHADERARBPROC glo_glSpecializeShaderARB = NULL;
PFNGLSPRITEPARAMETERFSGIXPROC glo_glSpriteParameterfSGIX = NULL;
PFNGLSPRITEPARAMETERFVSGIXPROC glo_glSpriteParameterfvSGIX = NULL;
PFNGLSPRITEPARAMETERISGIXPROC glo_glSpriteParameteriSGIX = NULL;
PFNGLSPRITEPARAMETERIVSGIXPROC glo_glSpriteParameterivSGIX = NULL;
PFNGLSTARTINSTRUMENTSSGIXPROC glo_glStartInstrumentsSGIX = NULL;
PFNGLSTATECAPTURENVPROC glo_glStateCaptureNV = NULL;
PFNGLSTENCILCLEARTAGEXTPROC glo_glStencilClearTagEXT = NULL;
PFNGLSTENCILFILLPATHINSTANCEDNVPROC glo_glStencilFillPathInstancedNV = NULL;
PFNGLSTENCILFILLPATHNVPROC glo_glStencilFillPathNV = NULL;
PFNGLSTENCILFUNCPROC glo_glStencilFunc = NULL;
PFNGLSTENCILFUNCSEPARATEPROC glo_glStencilFuncSeparate = NULL;
PFNGLSTENCILFUNCSEPARATEATIPROC glo_glStencilFuncSeparateATI = NULL;
PFNGLSTENCILMASKPROC glo_glStencilMask = NULL;
PFNGLSTENCILMASKSEPARATEPROC glo_glStencilMaskSeparate = NULL;
PFNGLSTENCILOPPROC glo_glStencilOp = NULL;
PFNGLSTENCILOPSEPARATEPROC glo_glStencilOpSeparate = NULL;
PFNGLSTENCILOPSEPARATEATIPROC glo_glStencilOpSeparateATI = NULL;
PFNGLSTENCILOPVALUEAMDPROC glo_glStencilOpValueAMD = NULL;
PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC glo_glStencilStrokePathInstancedNV = NULL;
PFNGLSTENCILSTROKEPATHNVPROC glo_glStencilStrokePathNV = NULL;
PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC glo_glStencilThenCoverFillPathInstancedNV = NULL;
PFNGLSTENCILTHENCOVERFILLPATHNVPROC glo_glStencilThenCoverFillPathNV = NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC glo_glStencilThenCoverStrokePathInstancedNV = NULL;
PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC glo_glStencilThenCoverStrokePathNV = NULL;
PFNGLSTOPINSTRUMENTSSGIXPROC glo_glStopInstrumentsSGIX = NULL;
PFNGLSTRINGMARKERGREMEDYPROC glo_glStringMarkerGREMEDY = NULL;
PFNGLSUBPIXELPRECISIONBIASNVPROC glo_glSubpixelPrecisionBiasNV = NULL;
PFNGLSWIZZLEEXTPROC glo_glSwizzleEXT = NULL;
PFNGLSYNCTEXTUREINTELPROC glo_glSyncTextureINTEL = NULL;
PFNGLTAGSAMPLEBUFFERSGIXPROC glo_glTagSampleBufferSGIX = NULL;
PFNGLTANGENT3BEXTPROC glo_glTangent3bEXT = NULL;
PFNGLTANGENT3BVEXTPROC glo_glTangent3bvEXT = NULL;
PFNGLTANGENT3DEXTPROC glo_glTangent3dEXT = NULL;
PFNGLTANGENT3DVEXTPROC glo_glTangent3dvEXT = NULL;
PFNGLTANGENT3FEXTPROC glo_glTangent3fEXT = NULL;
PFNGLTANGENT3FVEXTPROC glo_glTangent3fvEXT = NULL;
PFNGLTANGENT3IEXTPROC glo_glTangent3iEXT = NULL;
PFNGLTANGENT3IVEXTPROC glo_glTangent3ivEXT = NULL;
PFNGLTANGENT3SEXTPROC glo_glTangent3sEXT = NULL;
PFNGLTANGENT3SVEXTPROC glo_glTangent3svEXT = NULL;
PFNGLTANGENTPOINTEREXTPROC glo_glTangentPointerEXT = NULL;
PFNGLTBUFFERMASK3DFXPROC glo_glTbufferMask3DFX = NULL;
PFNGLTESSELLATIONFACTORAMDPROC glo_glTessellationFactorAMD = NULL;
PFNGLTESSELLATIONMODEAMDPROC glo_glTessellationModeAMD = NULL;
PFNGLTESTFENCEAPPLEPROC glo_glTestFenceAPPLE = NULL;
PFNGLTESTFENCENVPROC glo_glTestFenceNV = NULL;
PFNGLTESTOBJECTAPPLEPROC glo_glTestObjectAPPLE = NULL;
PFNGLTEXATTACHMEMORYNVPROC glo_glTexAttachMemoryNV = NULL;
PFNGLTEXBUFFERPROC glo_glTexBuffer = NULL;
PFNGLTEXBUFFERARBPROC glo_glTexBufferARB = NULL;
PFNGLTEXBUFFEREXTPROC glo_glTexBufferEXT = NULL;
PFNGLTEXBUFFERRANGEPROC glo_glTexBufferRange = NULL;
PFNGLTEXBUMPPARAMETERFVATIPROC glo_glTexBumpParameterfvATI = NULL;
PFNGLTEXBUMPPARAMETERIVATIPROC glo_glTexBumpParameterivATI = NULL;
PFNGLTEXCOORD1BOESPROC glo_glTexCoord1bOES = NULL;
PFNGLTEXCOORD1BVOESPROC glo_glTexCoord1bvOES = NULL;
PFNGLTEXCOORD1HNVPROC glo_glTexCoord1hNV = NULL;
PFNGLTEXCOORD1HVNVPROC glo_glTexCoord1hvNV = NULL;
PFNGLTEXCOORD1XOESPROC glo_glTexCoord1xOES = NULL;
PFNGLTEXCOORD1XVOESPROC glo_glTexCoord1xvOES = NULL;
PFNGLTEXCOORD2BOESPROC glo_glTexCoord2bOES = NULL;
PFNGLTEXCOORD2BVOESPROC glo_glTexCoord2bvOES = NULL;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC glo_glTexCoord2fColor3fVertex3fSUN = NULL;
PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC glo_glTexCoord2fColor3fVertex3fvSUN = NULL;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC glo_glTexCoord2fColor4fNormal3fVertex3fSUN = NULL;
PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC glo_glTexCoord2fColor4fNormal3fVertex3fvSUN = NULL;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC glo_glTexCoord2fColor4ubVertex3fSUN = NULL;
PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC glo_glTexCoord2fColor4ubVertex3fvSUN = NULL;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC glo_glTexCoord2fNormal3fVertex3fSUN = NULL;
PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC glo_glTexCoord2fNormal3fVertex3fvSUN = NULL;
PFNGLTEXCOORD2FVERTEX3FSUNPROC glo_glTexCoord2fVertex3fSUN = NULL;
PFNGLTEXCOORD2FVERTEX3FVSUNPROC glo_glTexCoord2fVertex3fvSUN = NULL;
PFNGLTEXCOORD2HNVPROC glo_glTexCoord2hNV = NULL;
PFNGLTEXCOORD2HVNVPROC glo_glTexCoord2hvNV = NULL;
PFNGLTEXCOORD2XOESPROC glo_glTexCoord2xOES = NULL;
PFNGLTEXCOORD2XVOESPROC glo_glTexCoord2xvOES = NULL;
PFNGLTEXCOORD3BOESPROC glo_glTexCoord3bOES = NULL;
PFNGLTEXCOORD3BVOESPROC glo_glTexCoord3bvOES = NULL;
PFNGLTEXCOORD3HNVPROC glo_glTexCoord3hNV = NULL;
PFNGLTEXCOORD3HVNVPROC glo_glTexCoord3hvNV = NULL;
PFNGLTEXCOORD3XOESPROC glo_glTexCoord3xOES = NULL;
PFNGLTEXCOORD3XVOESPROC glo_glTexCoord3xvOES = NULL;
PFNGLTEXCOORD4BOESPROC glo_glTexCoord4bOES = NULL;
PFNGLTEXCOORD4BVOESPROC glo_glTexCoord4bvOES = NULL;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC glo_glTexCoord4fColor4fNormal3fVertex4fSUN = NULL;
PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC glo_glTexCoord4fColor4fNormal3fVertex4fvSUN = NULL;
PFNGLTEXCOORD4FVERTEX4FSUNPROC glo_glTexCoord4fVertex4fSUN = NULL;
PFNGLTEXCOORD4FVERTEX4FVSUNPROC glo_glTexCoord4fVertex4fvSUN = NULL;
PFNGLTEXCOORD4HNVPROC glo_glTexCoord4hNV = NULL;
PFNGLTEXCOORD4HVNVPROC glo_glTexCoord4hvNV = NULL;
PFNGLTEXCOORD4XOESPROC glo_glTexCoord4xOES = NULL;
PFNGLTEXCOORD4XVOESPROC glo_glTexCoord4xvOES = NULL;
PFNGLTEXCOORDFORMATNVPROC glo_glTexCoordFormatNV = NULL;
PFNGLTEXCOORDPOINTEREXTPROC glo_glTexCoordPointerEXT = NULL;
PFNGLTEXCOORDPOINTERLISTIBMPROC glo_glTexCoordPointerListIBM = NULL;
PFNGLTEXCOORDPOINTERVINTELPROC glo_glTexCoordPointervINTEL = NULL;
PFNGLTEXENVXOESPROC glo_glTexEnvxOES = NULL;
PFNGLTEXENVXVOESPROC glo_glTexEnvxvOES = NULL;
PFNGLTEXFILTERFUNCSGISPROC glo_glTexFilterFuncSGIS = NULL;
PFNGLTEXGENXOESPROC glo_glTexGenxOES = NULL;
PFNGLTEXGENXVOESPROC glo_glTexGenxvOES = NULL;
PFNGLTEXIMAGE1DPROC glo_glTexImage1D = NULL;
PFNGLTEXIMAGE2DPROC glo_glTexImage2D = NULL;
PFNGLTEXIMAGE2DMULTISAMPLEPROC glo_glTexImage2DMultisample = NULL;
PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC glo_glTexImage2DMultisampleCoverageNV = NULL;
PFNGLTEXIMAGE3DPROC glo_glTexImage3D = NULL;
PFNGLTEXIMAGE3DEXTPROC glo_glTexImage3DEXT = NULL;
PFNGLTEXIMAGE3DMULTISAMPLEPROC glo_glTexImage3DMultisample = NULL;
PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC glo_glTexImage3DMultisampleCoverageNV = NULL;
PFNGLTEXIMAGE4DSGISPROC glo_glTexImage4DSGIS = NULL;
PFNGLTEXPAGECOMMITMENTARBPROC glo_glTexPageCommitmentARB = NULL;
PFNGLTEXPAGECOMMITMENTMEMNVPROC glo_glTexPageCommitmentMemNV = NULL;
PFNGLTEXPARAMETERIIVPROC glo_glTexParameterIiv = NULL;
PFNGLTEXPARAMETERIIVEXTPROC glo_glTexParameterIivEXT = NULL;
PFNGLTEXPARAMETERIUIVPROC glo_glTexParameterIuiv = NULL;
PFNGLTEXPARAMETERIUIVEXTPROC glo_glTexParameterIuivEXT = NULL;
PFNGLTEXPARAMETERFPROC glo_glTexParameterf = NULL;
PFNGLTEXPARAMETERFVPROC glo_glTexParameterfv = NULL;
PFNGLTEXPARAMETERIPROC glo_glTexParameteri = NULL;
PFNGLTEXPARAMETERIVPROC glo_glTexParameteriv = NULL;
PFNGLTEXPARAMETERXOESPROC glo_glTexParameterxOES = NULL;
PFNGLTEXPARAMETERXVOESPROC glo_glTexParameterxvOES = NULL;
PFNGLTEXRENDERBUFFERNVPROC glo_glTexRenderbufferNV = NULL;
PFNGLTEXSTORAGE1DPROC glo_glTexStorage1D = NULL;
PFNGLTEXSTORAGE1DEXTPROC glo_glTexStorage1DEXT = NULL;
PFNGLTEXSTORAGE2DPROC glo_glTexStorage2D = NULL;
PFNGLTEXSTORAGE2DEXTPROC glo_glTexStorage2DEXT = NULL;
PFNGLTEXSTORAGE2DMULTISAMPLEPROC glo_glTexStorage2DMultisample = NULL;
PFNGLTEXSTORAGE3DPROC glo_glTexStorage3D = NULL;
PFNGLTEXSTORAGE3DEXTPROC glo_glTexStorage3DEXT = NULL;
PFNGLTEXSTORAGE3DMULTISAMPLEPROC glo_glTexStorage3DMultisample = NULL;
PFNGLTEXSTORAGEMEM1DEXTPROC glo_glTexStorageMem1DEXT = NULL;
PFNGLTEXSTORAGEMEM2DEXTPROC glo_glTexStorageMem2DEXT = NULL;
PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC glo_glTexStorageMem2DMultisampleEXT = NULL;
PFNGLTEXSTORAGEMEM3DEXTPROC glo_glTexStorageMem3DEXT = NULL;
PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC glo_glTexStorageMem3DMultisampleEXT = NULL;
PFNGLTEXSTORAGESPARSEAMDPROC glo_glTexStorageSparseAMD = NULL;
PFNGLTEXSUBIMAGE1DPROC glo_glTexSubImage1D = NULL;
PFNGLTEXSUBIMAGE1DEXTPROC glo_glTexSubImage1DEXT = NULL;
PFNGLTEXSUBIMAGE2DPROC glo_glTexSubImage2D = NULL;
PFNGLTEXSUBIMAGE2DEXTPROC glo_glTexSubImage2DEXT = NULL;
PFNGLTEXSUBIMAGE3DPROC glo_glTexSubImage3D = NULL;
PFNGLTEXSUBIMAGE3DEXTPROC glo_glTexSubImage3DEXT = NULL;
PFNGLTEXSUBIMAGE4DSGISPROC glo_glTexSubImage4DSGIS = NULL;
PFNGLTEXTUREATTACHMEMORYNVPROC glo_glTextureAttachMemoryNV = NULL;
PFNGLTEXTUREBARRIERPROC glo_glTextureBarrier = NULL;
PFNGLTEXTUREBARRIERNVPROC glo_glTextureBarrierNV = NULL;
PFNGLTEXTUREBUFFERPROC glo_glTextureBuffer = NULL;
PFNGLTEXTUREBUFFEREXTPROC glo_glTextureBufferEXT = NULL;
PFNGLTEXTUREBUFFERRANGEPROC glo_glTextureBufferRange = NULL;
PFNGLTEXTUREBUFFERRANGEEXTPROC glo_glTextureBufferRangeEXT = NULL;
PFNGLTEXTURECOLORMASKSGISPROC glo_glTextureColorMaskSGIS = NULL;
PFNGLTEXTUREIMAGE1DEXTPROC glo_glTextureImage1DEXT = NULL;
PFNGLTEXTUREIMAGE2DEXTPROC glo_glTextureImage2DEXT = NULL;
PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC glo_glTextureImage2DMultisampleCoverageNV = NULL;
PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC glo_glTextureImage2DMultisampleNV = NULL;
PFNGLTEXTUREIMAGE3DEXTPROC glo_glTextureImage3DEXT = NULL;
PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC glo_glTextureImage3DMultisampleCoverageNV = NULL;
PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC glo_glTextureImage3DMultisampleNV = NULL;
PFNGLTEXTURELIGHTEXTPROC glo_glTextureLightEXT = NULL;
PFNGLTEXTUREMATERIALEXTPROC glo_glTextureMaterialEXT = NULL;
PFNGLTEXTURENORMALEXTPROC glo_glTextureNormalEXT = NULL;
PFNGLTEXTUREPAGECOMMITMENTEXTPROC glo_glTexturePageCommitmentEXT = NULL;
PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC glo_glTexturePageCommitmentMemNV = NULL;
PFNGLTEXTUREPARAMETERIIVPROC glo_glTextureParameterIiv = NULL;
PFNGLTEXTUREPARAMETERIIVEXTPROC glo_glTextureParameterIivEXT = NULL;
PFNGLTEXTUREPARAMETERIUIVPROC glo_glTextureParameterIuiv = NULL;
PFNGLTEXTUREPARAMETERIUIVEXTPROC glo_glTextureParameterIuivEXT = NULL;
PFNGLTEXTUREPARAMETERFPROC glo_glTextureParameterf = NULL;
PFNGLTEXTUREPARAMETERFEXTPROC glo_glTextureParameterfEXT = NULL;
PFNGLTEXTUREPARAMETERFVPROC glo_glTextureParameterfv = NULL;
PFNGLTEXTUREPARAMETERFVEXTPROC glo_glTextureParameterfvEXT = NULL;
PFNGLTEXTUREPARAMETERIPROC glo_glTextureParameteri = NULL;
PFNGLTEXTUREPARAMETERIEXTPROC glo_glTextureParameteriEXT = NULL;
PFNGLTEXTUREPARAMETERIVPROC glo_glTextureParameteriv = NULL;
PFNGLTEXTUREPARAMETERIVEXTPROC glo_glTextureParameterivEXT = NULL;
PFNGLTEXTURERANGEAPPLEPROC glo_glTextureRangeAPPLE = NULL;
PFNGLTEXTURERENDERBUFFEREXTPROC glo_glTextureRenderbufferEXT = NULL;
PFNGLTEXTURESTORAGE1DPROC glo_glTextureStorage1D = NULL;
PFNGLTEXTURESTORAGE1DEXTPROC glo_glTextureStorage1DEXT = NULL;
PFNGLTEXTURESTORAGE2DPROC glo_glTextureStorage2D = NULL;
PFNGLTEXTURESTORAGE2DEXTPROC glo_glTextureStorage2DEXT = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC glo_glTextureStorage2DMultisample = NULL;
PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC glo_glTextureStorage2DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGE3DPROC glo_glTextureStorage3D = NULL;
PFNGLTEXTURESTORAGE3DEXTPROC glo_glTextureStorage3DEXT = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC glo_glTextureStorage3DMultisample = NULL;
PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC glo_glTextureStorage3DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGEMEM1DEXTPROC glo_glTextureStorageMem1DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DEXTPROC glo_glTextureStorageMem2DEXT = NULL;
PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC glo_glTextureStorageMem2DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DEXTPROC glo_glTextureStorageMem3DEXT = NULL;
PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC glo_glTextureStorageMem3DMultisampleEXT = NULL;
PFNGLTEXTURESTORAGESPARSEAMDPROC glo_glTextureStorageSparseAMD = NULL;
PFNGLTEXTURESUBIMAGE1DPROC glo_glTextureSubImage1D = NULL;
PFNGLTEXTURESUBIMAGE1DEXTPROC glo_glTextureSubImage1DEXT = NULL;
PFNGLTEXTURESUBIMAGE2DPROC glo_glTextureSubImage2D = NULL;
PFNGLTEXTURESUBIMAGE2DEXTPROC glo_glTextureSubImage2DEXT = NULL;
PFNGLTEXTURESUBIMAGE3DPROC glo_glTextureSubImage3D = NULL;
PFNGLTEXTURESUBIMAGE3DEXTPROC glo_glTextureSubImage3DEXT = NULL;
PFNGLTEXTUREVIEWPROC glo_glTextureView = NULL;
PFNGLTRACKMATRIXNVPROC glo_glTrackMatrixNV = NULL;
PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC glo_glTransformFeedbackAttribsNV = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC glo_glTransformFeedbackBufferBase = NULL;
PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC glo_glTransformFeedbackBufferRange = NULL;
PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC glo_glTransformFeedbackStreamAttribsNV = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSPROC glo_glTransformFeedbackVaryings = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC glo_glTransformFeedbackVaryingsEXT = NULL;
PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC glo_glTransformFeedbackVaryingsNV = NULL;
PFNGLTRANSFORMPATHNVPROC glo_glTransformPathNV = NULL;
PFNGLTRANSLATEXOESPROC glo_glTranslatexOES = NULL;
PFNGLUNIFORM1DPROC glo_glUniform1d = NULL;
PFNGLUNIFORM1DVPROC glo_glUniform1dv = NULL;
PFNGLUNIFORM1FPROC glo_glUniform1f = NULL;
PFNGLUNIFORM1FARBPROC glo_glUniform1fARB = NULL;
PFNGLUNIFORM1FVPROC glo_glUniform1fv = NULL;
PFNGLUNIFORM1FVARBPROC glo_glUniform1fvARB = NULL;
PFNGLUNIFORM1IPROC glo_glUniform1i = NULL;
PFNGLUNIFORM1I64ARBPROC glo_glUniform1i64ARB = NULL;
PFNGLUNIFORM1I64NVPROC glo_glUniform1i64NV = NULL;
PFNGLUNIFORM1I64VARBPROC glo_glUniform1i64vARB = NULL;
PFNGLUNIFORM1I64VNVPROC glo_glUniform1i64vNV = NULL;
PFNGLUNIFORM1IARBPROC glo_glUniform1iARB = NULL;
PFNGLUNIFORM1IVPROC glo_glUniform1iv = NULL;
PFNGLUNIFORM1IVARBPROC glo_glUniform1ivARB = NULL;
PFNGLUNIFORM1UIPROC glo_glUniform1ui = NULL;
PFNGLUNIFORM1UI64ARBPROC glo_glUniform1ui64ARB = NULL;
PFNGLUNIFORM1UI64NVPROC glo_glUniform1ui64NV = NULL;
PFNGLUNIFORM1UI64VARBPROC glo_glUniform1ui64vARB = NULL;
PFNGLUNIFORM1UI64VNVPROC glo_glUniform1ui64vNV = NULL;
PFNGLUNIFORM1UIEXTPROC glo_glUniform1uiEXT = NULL;
PFNGLUNIFORM1UIVPROC glo_glUniform1uiv = NULL;
PFNGLUNIFORM1UIVEXTPROC glo_glUniform1uivEXT = NULL;
PFNGLUNIFORM2DPROC glo_glUniform2d = NULL;
PFNGLUNIFORM2DVPROC glo_glUniform2dv = NULL;
PFNGLUNIFORM2FPROC glo_glUniform2f = NULL;
PFNGLUNIFORM2FARBPROC glo_glUniform2fARB = NULL;
PFNGLUNIFORM2FVPROC glo_glUniform2fv = NULL;
PFNGLUNIFORM2FVARBPROC glo_glUniform2fvARB = NULL;
PFNGLUNIFORM2IPROC glo_glUniform2i = NULL;
PFNGLUNIFORM2I64ARBPROC glo_glUniform2i64ARB = NULL;
PFNGLUNIFORM2I64NVPROC glo_glUniform2i64NV = NULL;
PFNGLUNIFORM2I64VARBPROC glo_glUniform2i64vARB = NULL;
PFNGLUNIFORM2I64VNVPROC glo_glUniform2i64vNV = NULL;
PFNGLUNIFORM2IARBPROC glo_glUniform2iARB = NULL;
PFNGLUNIFORM2IVPROC glo_glUniform2iv = NULL;
PFNGLUNIFORM2IVARBPROC glo_glUniform2ivARB = NULL;
PFNGLUNIFORM2UIPROC glo_glUniform2ui = NULL;
PFNGLUNIFORM2UI64ARBPROC glo_glUniform2ui64ARB = NULL;
PFNGLUNIFORM2UI64NVPROC glo_glUniform2ui64NV = NULL;
PFNGLUNIFORM2UI64VARBPROC glo_glUniform2ui64vARB = NULL;
PFNGLUNIFORM2UI64VNVPROC glo_glUniform2ui64vNV = NULL;
PFNGLUNIFORM2UIEXTPROC glo_glUniform2uiEXT = NULL;
PFNGLUNIFORM2UIVPROC glo_glUniform2uiv = NULL;
PFNGLUNIFORM2UIVEXTPROC glo_glUniform2uivEXT = NULL;
PFNGLUNIFORM3DPROC glo_glUniform3d = NULL;
PFNGLUNIFORM3DVPROC glo_glUniform3dv = NULL;
PFNGLUNIFORM3FPROC glo_glUniform3f = NULL;
PFNGLUNIFORM3FARBPROC glo_glUniform3fARB = NULL;
PFNGLUNIFORM3FVPROC glo_glUniform3fv = NULL;
PFNGLUNIFORM3FVARBPROC glo_glUniform3fvARB = NULL;
PFNGLUNIFORM3IPROC glo_glUniform3i = NULL;
PFNGLUNIFORM3I64ARBPROC glo_glUniform3i64ARB = NULL;
PFNGLUNIFORM3I64NVPROC glo_glUniform3i64NV = NULL;
PFNGLUNIFORM3I64VARBPROC glo_glUniform3i64vARB = NULL;
PFNGLUNIFORM3I64VNVPROC glo_glUniform3i64vNV = NULL;
PFNGLUNIFORM3IARBPROC glo_glUniform3iARB = NULL;
PFNGLUNIFORM3IVPROC glo_glUniform3iv = NULL;
PFNGLUNIFORM3IVARBPROC glo_glUniform3ivARB = NULL;
PFNGLUNIFORM3UIPROC glo_glUniform3ui = NULL;
PFNGLUNIFORM3UI64ARBPROC glo_glUniform3ui64ARB = NULL;
PFNGLUNIFORM3UI64NVPROC glo_glUniform3ui64NV = NULL;
PFNGLUNIFORM3UI64VARBPROC glo_glUniform3ui64vARB = NULL;
PFNGLUNIFORM3UI64VNVPROC glo_glUniform3ui64vNV = NULL;
PFNGLUNIFORM3UIEXTPROC glo_glUniform3uiEXT = NULL;
PFNGLUNIFORM3UIVPROC glo_glUniform3uiv = NULL;
PFNGLUNIFORM3UIVEXTPROC glo_glUniform3uivEXT = NULL;
PFNGLUNIFORM4DPROC glo_glUniform4d = NULL;
PFNGLUNIFORM4DVPROC glo_glUniform4dv = NULL;
PFNGLUNIFORM4FPROC glo_glUniform4f = NULL;
PFNGLUNIFORM4FARBPROC glo_glUniform4fARB = NULL;
PFNGLUNIFORM4FVPROC glo_glUniform4fv = NULL;
PFNGLUNIFORM4FVARBPROC glo_glUniform4fvARB = NULL;
PFNGLUNIFORM4IPROC glo_glUniform4i = NULL;
PFNGLUNIFORM4I64ARBPROC glo_glUniform4i64ARB = NULL;
PFNGLUNIFORM4I64NVPROC glo_glUniform4i64NV = NULL;
PFNGLUNIFORM4I64VARBPROC glo_glUniform4i64vARB = NULL;
PFNGLUNIFORM4I64VNVPROC glo_glUniform4i64vNV = NULL;
PFNGLUNIFORM4IARBPROC glo_glUniform4iARB = NULL;
PFNGLUNIFORM4IVPROC glo_glUniform4iv = NULL;
PFNGLUNIFORM4IVARBPROC glo_glUniform4ivARB = NULL;
PFNGLUNIFORM4UIPROC glo_glUniform4ui = NULL;
PFNGLUNIFORM4UI64ARBPROC glo_glUniform4ui64ARB = NULL;
PFNGLUNIFORM4UI64NVPROC glo_glUniform4ui64NV = NULL;
PFNGLUNIFORM4UI64VARBPROC glo_glUniform4ui64vARB = NULL;
PFNGLUNIFORM4UI64VNVPROC glo_glUniform4ui64vNV = NULL;
PFNGLUNIFORM4UIEXTPROC glo_glUniform4uiEXT = NULL;
PFNGLUNIFORM4UIVPROC glo_glUniform4uiv = NULL;
PFNGLUNIFORM4UIVEXTPROC glo_glUniform4uivEXT = NULL;
PFNGLUNIFORMBLOCKBINDINGPROC glo_glUniformBlockBinding = NULL;
PFNGLUNIFORMBUFFEREXTPROC glo_glUniformBufferEXT = NULL;
PFNGLUNIFORMHANDLEUI64ARBPROC glo_glUniformHandleui64ARB = NULL;
PFNGLUNIFORMHANDLEUI64NVPROC glo_glUniformHandleui64NV = NULL;
PFNGLUNIFORMHANDLEUI64VARBPROC glo_glUniformHandleui64vARB = NULL;
PFNGLUNIFORMHANDLEUI64VNVPROC glo_glUniformHandleui64vNV = NULL;
PFNGLUNIFORMMATRIX2DVPROC glo_glUniformMatrix2dv = NULL;
PFNGLUNIFORMMATRIX2FVPROC glo_glUniformMatrix2fv = NULL;
PFNGLUNIFORMMATRIX2FVARBPROC glo_glUniformMatrix2fvARB = NULL;
PFNGLUNIFORMMATRIX2X3DVPROC glo_glUniformMatrix2x3dv = NULL;
PFNGLUNIFORMMATRIX2X3FVPROC glo_glUniformMatrix2x3fv = NULL;
PFNGLUNIFORMMATRIX2X4DVPROC glo_glUniformMatrix2x4dv = NULL;
PFNGLUNIFORMMATRIX2X4FVPROC glo_glUniformMatrix2x4fv = NULL;
PFNGLUNIFORMMATRIX3DVPROC glo_glUniformMatrix3dv = NULL;
PFNGLUNIFORMMATRIX3FVPROC glo_glUniformMatrix3fv = NULL;
PFNGLUNIFORMMATRIX3FVARBPROC glo_glUniformMatrix3fvARB = NULL;
PFNGLUNIFORMMATRIX3X2DVPROC glo_glUniformMatrix3x2dv = NULL;
PFNGLUNIFORMMATRIX3X2FVPROC glo_glUniformMatrix3x2fv = NULL;
PFNGLUNIFORMMATRIX3X4DVPROC glo_glUniformMatrix3x4dv = NULL;
PFNGLUNIFORMMATRIX3X4FVPROC glo_glUniformMatrix3x4fv = NULL;
PFNGLUNIFORMMATRIX4DVPROC glo_glUniformMatrix4dv = NULL;
PFNGLUNIFORMMATRIX4FVPROC glo_glUniformMatrix4fv = NULL;
PFNGLUNIFORMMATRIX4FVARBPROC glo_glUniformMatrix4fvARB = NULL;
PFNGLUNIFORMMATRIX4X2DVPROC glo_glUniformMatrix4x2dv = NULL;
PFNGLUNIFORMMATRIX4X2FVPROC glo_glUniformMatrix4x2fv = NULL;
PFNGLUNIFORMMATRIX4X3DVPROC glo_glUniformMatrix4x3dv = NULL;
PFNGLUNIFORMMATRIX4X3FVPROC glo_glUniformMatrix4x3fv = NULL;
PFNGLUNIFORMSUBROUTINESUIVPROC glo_glUniformSubroutinesuiv = NULL;
PFNGLUNIFORMUI64NVPROC glo_glUniformui64NV = NULL;
PFNGLUNIFORMUI64VNVPROC glo_glUniformui64vNV = NULL;
PFNGLUNLOCKARRAYSEXTPROC glo_glUnlockArraysEXT = NULL;
PFNGLUNMAPBUFFERPROC glo_glUnmapBuffer = NULL;
PFNGLUNMAPBUFFERARBPROC glo_glUnmapBufferARB = NULL;
PFNGLUNMAPNAMEDBUFFERPROC glo_glUnmapNamedBuffer = NULL;
PFNGLUNMAPNAMEDBUFFEREXTPROC glo_glUnmapNamedBufferEXT = NULL;
PFNGLUNMAPOBJECTBUFFERATIPROC glo_glUnmapObjectBufferATI = NULL;
PFNGLUNMAPTEXTURE2DINTELPROC glo_glUnmapTexture2DINTEL = NULL;
PFNGLUPDATEOBJECTBUFFERATIPROC glo_glUpdateObjectBufferATI = NULL;
PFNGLUPLOADGPUMASKNVXPROC glo_glUploadGpuMaskNVX = NULL;
PFNGLUSEPROGRAMPROC glo_glUseProgram = NULL;
PFNGLUSEPROGRAMOBJECTARBPROC glo_glUseProgramObjectARB = NULL;
PFNGLUSEPROGRAMSTAGESPROC glo_glUseProgramStages = NULL;
PFNGLUSESHADERPROGRAMEXTPROC glo_glUseShaderProgramEXT = NULL;
PFNGLVDPAUFININVPROC glo_glVDPAUFiniNV = NULL;
PFNGLVDPAUGETSURFACEIVNVPROC glo_glVDPAUGetSurfaceivNV = NULL;
PFNGLVDPAUINITNVPROC glo_glVDPAUInitNV = NULL;
PFNGLVDPAUISSURFACENVPROC glo_glVDPAUIsSurfaceNV = NULL;
PFNGLVDPAUMAPSURFACESNVPROC glo_glVDPAUMapSurfacesNV = NULL;
PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC glo_glVDPAURegisterOutputSurfaceNV = NULL;
PFNGLVDPAUREGISTERVIDEOSURFACENVPROC glo_glVDPAURegisterVideoSurfaceNV = NULL;
PFNGLVDPAUREGISTERVIDEOSURFACEWITHPICTURESTRUCTURENVPROC glo_glVDPAURegisterVideoSurfaceWithPictureStructureNV = NULL;
PFNGLVDPAUSURFACEACCESSNVPROC glo_glVDPAUSurfaceAccessNV = NULL;
PFNGLVDPAUUNMAPSURFACESNVPROC glo_glVDPAUUnmapSurfacesNV = NULL;
PFNGLVDPAUUNREGISTERSURFACENVPROC glo_glVDPAUUnregisterSurfaceNV = NULL;
PFNGLVALIDATEPROGRAMPROC glo_glValidateProgram = NULL;
PFNGLVALIDATEPROGRAMARBPROC glo_glValidateProgramARB = NULL;
PFNGLVALIDATEPROGRAMPIPELINEPROC glo_glValidateProgramPipeline = NULL;
PFNGLVARIANTARRAYOBJECTATIPROC glo_glVariantArrayObjectATI = NULL;
PFNGLVARIANTPOINTEREXTPROC glo_glVariantPointerEXT = NULL;
PFNGLVARIANTBVEXTPROC glo_glVariantbvEXT = NULL;
PFNGLVARIANTDVEXTPROC glo_glVariantdvEXT = NULL;
PFNGLVARIANTFVEXTPROC glo_glVariantfvEXT = NULL;
PFNGLVARIANTIVEXTPROC glo_glVariantivEXT = NULL;
PFNGLVARIANTSVEXTPROC glo_glVariantsvEXT = NULL;
PFNGLVARIANTUBVEXTPROC glo_glVariantubvEXT = NULL;
PFNGLVARIANTUIVEXTPROC glo_glVariantuivEXT = NULL;
PFNGLVARIANTUSVEXTPROC glo_glVariantusvEXT = NULL;
PFNGLVERTEX2BOESPROC glo_glVertex2bOES = NULL;
PFNGLVERTEX2BVOESPROC glo_glVertex2bvOES = NULL;
PFNGLVERTEX2HNVPROC glo_glVertex2hNV = NULL;
PFNGLVERTEX2HVNVPROC glo_glVertex2hvNV = NULL;
PFNGLVERTEX2XOESPROC glo_glVertex2xOES = NULL;
PFNGLVERTEX2XVOESPROC glo_glVertex2xvOES = NULL;
PFNGLVERTEX3BOESPROC glo_glVertex3bOES = NULL;
PFNGLVERTEX3BVOESPROC glo_glVertex3bvOES = NULL;
PFNGLVERTEX3HNVPROC glo_glVertex3hNV = NULL;
PFNGLVERTEX3HVNVPROC glo_glVertex3hvNV = NULL;
PFNGLVERTEX3XOESPROC glo_glVertex3xOES = NULL;
PFNGLVERTEX3XVOESPROC glo_glVertex3xvOES = NULL;
PFNGLVERTEX4BOESPROC glo_glVertex4bOES = NULL;
PFNGLVERTEX4BVOESPROC glo_glVertex4bvOES = NULL;
PFNGLVERTEX4HNVPROC glo_glVertex4hNV = NULL;
PFNGLVERTEX4HVNVPROC glo_glVertex4hvNV = NULL;
PFNGLVERTEX4XOESPROC glo_glVertex4xOES = NULL;
PFNGLVERTEX4XVOESPROC glo_glVertex4xvOES = NULL;
PFNGLVERTEXARRAYATTRIBBINDINGPROC glo_glVertexArrayAttribBinding = NULL;
PFNGLVERTEXARRAYATTRIBFORMATPROC glo_glVertexArrayAttribFormat = NULL;
PFNGLVERTEXARRAYATTRIBIFORMATPROC glo_glVertexArrayAttribIFormat = NULL;
PFNGLVERTEXARRAYATTRIBLFORMATPROC glo_glVertexArrayAttribLFormat = NULL;
PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC glo_glVertexArrayBindVertexBufferEXT = NULL;
PFNGLVERTEXARRAYBINDINGDIVISORPROC glo_glVertexArrayBindingDivisor = NULL;
PFNGLVERTEXARRAYCOLOROFFSETEXTPROC glo_glVertexArrayColorOffsetEXT = NULL;
PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC glo_glVertexArrayEdgeFlagOffsetEXT = NULL;
PFNGLVERTEXARRAYELEMENTBUFFERPROC glo_glVertexArrayElementBuffer = NULL;
PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC glo_glVertexArrayFogCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYINDEXOFFSETEXTPROC glo_glVertexArrayIndexOffsetEXT = NULL;
PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC glo_glVertexArrayMultiTexCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYNORMALOFFSETEXTPROC glo_glVertexArrayNormalOffsetEXT = NULL;
PFNGLVERTEXARRAYPARAMETERIAPPLEPROC glo_glVertexArrayParameteriAPPLE = NULL;
PFNGLVERTEXARRAYRANGEAPPLEPROC glo_glVertexArrayRangeAPPLE = NULL;
PFNGLVERTEXARRAYRANGENVPROC glo_glVertexArrayRangeNV = NULL;
PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC glo_glVertexArraySecondaryColorOffsetEXT = NULL;
PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC glo_glVertexArrayTexCoordOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC glo_glVertexArrayVertexAttribBindingEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC glo_glVertexArrayVertexAttribDivisorEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC glo_glVertexArrayVertexAttribFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC glo_glVertexArrayVertexAttribIFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC glo_glVertexArrayVertexAttribIOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC glo_glVertexArrayVertexAttribLFormatEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC glo_glVertexArrayVertexAttribLOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC glo_glVertexArrayVertexAttribOffsetEXT = NULL;
PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC glo_glVertexArrayVertexBindingDivisorEXT = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERPROC glo_glVertexArrayVertexBuffer = NULL;
PFNGLVERTEXARRAYVERTEXBUFFERSPROC glo_glVertexArrayVertexBuffers = NULL;
PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC glo_glVertexArrayVertexOffsetEXT = NULL;
PFNGLVERTEXATTRIB1DPROC glo_glVertexAttrib1d = NULL;
PFNGLVERTEXATTRIB1DARBPROC glo_glVertexAttrib1dARB = NULL;
PFNGLVERTEXATTRIB1DNVPROC glo_glVertexAttrib1dNV = NULL;
PFNGLVERTEXATTRIB1DVPROC glo_glVertexAttrib1dv = NULL;
PFNGLVERTEXATTRIB1DVARBPROC glo_glVertexAttrib1dvARB = NULL;
PFNGLVERTEXATTRIB1DVNVPROC glo_glVertexAttrib1dvNV = NULL;
PFNGLVERTEXATTRIB1FPROC glo_glVertexAttrib1f = NULL;
PFNGLVERTEXATTRIB1FARBPROC glo_glVertexAttrib1fARB = NULL;
PFNGLVERTEXATTRIB1FNVPROC glo_glVertexAttrib1fNV = NULL;
PFNGLVERTEXATTRIB1FVPROC glo_glVertexAttrib1fv = NULL;
PFNGLVERTEXATTRIB1FVARBPROC glo_glVertexAttrib1fvARB = NULL;
PFNGLVERTEXATTRIB1FVNVPROC glo_glVertexAttrib1fvNV = NULL;
PFNGLVERTEXATTRIB1HNVPROC glo_glVertexAttrib1hNV = NULL;
PFNGLVERTEXATTRIB1HVNVPROC glo_glVertexAttrib1hvNV = NULL;
PFNGLVERTEXATTRIB1SPROC glo_glVertexAttrib1s = NULL;
PFNGLVERTEXATTRIB1SARBPROC glo_glVertexAttrib1sARB = NULL;
PFNGLVERTEXATTRIB1SNVPROC glo_glVertexAttrib1sNV = NULL;
PFNGLVERTEXATTRIB1SVPROC glo_glVertexAttrib1sv = NULL;
PFNGLVERTEXATTRIB1SVARBPROC glo_glVertexAttrib1svARB = NULL;
PFNGLVERTEXATTRIB1SVNVPROC glo_glVertexAttrib1svNV = NULL;
PFNGLVERTEXATTRIB2DPROC glo_glVertexAttrib2d = NULL;
PFNGLVERTEXATTRIB2DARBPROC glo_glVertexAttrib2dARB = NULL;
PFNGLVERTEXATTRIB2DNVPROC glo_glVertexAttrib2dNV = NULL;
PFNGLVERTEXATTRIB2DVPROC glo_glVertexAttrib2dv = NULL;
PFNGLVERTEXATTRIB2DVARBPROC glo_glVertexAttrib2dvARB = NULL;
PFNGLVERTEXATTRIB2DVNVPROC glo_glVertexAttrib2dvNV = NULL;
PFNGLVERTEXATTRIB2FPROC glo_glVertexAttrib2f = NULL;
PFNGLVERTEXATTRIB2FARBPROC glo_glVertexAttrib2fARB = NULL;
PFNGLVERTEXATTRIB2FNVPROC glo_glVertexAttrib2fNV = NULL;
PFNGLVERTEXATTRIB2FVPROC glo_glVertexAttrib2fv = NULL;
PFNGLVERTEXATTRIB2FVARBPROC glo_glVertexAttrib2fvARB = NULL;
PFNGLVERTEXATTRIB2FVNVPROC glo_glVertexAttrib2fvNV = NULL;
PFNGLVERTEXATTRIB2HNVPROC glo_glVertexAttrib2hNV = NULL;
PFNGLVERTEXATTRIB2HVNVPROC glo_glVertexAttrib2hvNV = NULL;
PFNGLVERTEXATTRIB2SPROC glo_glVertexAttrib2s = NULL;
PFNGLVERTEXATTRIB2SARBPROC glo_glVertexAttrib2sARB = NULL;
PFNGLVERTEXATTRIB2SNVPROC glo_glVertexAttrib2sNV = NULL;
PFNGLVERTEXATTRIB2SVPROC glo_glVertexAttrib2sv = NULL;
PFNGLVERTEXATTRIB2SVARBPROC glo_glVertexAttrib2svARB = NULL;
PFNGLVERTEXATTRIB2SVNVPROC glo_glVertexAttrib2svNV = NULL;
PFNGLVERTEXATTRIB3DPROC glo_glVertexAttrib3d = NULL;
PFNGLVERTEXATTRIB3DARBPROC glo_glVertexAttrib3dARB = NULL;
PFNGLVERTEXATTRIB3DNVPROC glo_glVertexAttrib3dNV = NULL;
PFNGLVERTEXATTRIB3DVPROC glo_glVertexAttrib3dv = NULL;
PFNGLVERTEXATTRIB3DVARBPROC glo_glVertexAttrib3dvARB = NULL;
PFNGLVERTEXATTRIB3DVNVPROC glo_glVertexAttrib3dvNV = NULL;
PFNGLVERTEXATTRIB3FPROC glo_glVertexAttrib3f = NULL;
PFNGLVERTEXATTRIB3FARBPROC glo_glVertexAttrib3fARB = NULL;
PFNGLVERTEXATTRIB3FNVPROC glo_glVertexAttrib3fNV = NULL;
PFNGLVERTEXATTRIB3FVPROC glo_glVertexAttrib3fv = NULL;
PFNGLVERTEXATTRIB3FVARBPROC glo_glVertexAttrib3fvARB = NULL;
PFNGLVERTEXATTRIB3FVNVPROC glo_glVertexAttrib3fvNV = NULL;
PFNGLVERTEXATTRIB3HNVPROC glo_glVertexAttrib3hNV = NULL;
PFNGLVERTEXATTRIB3HVNVPROC glo_glVertexAttrib3hvNV = NULL;
PFNGLVERTEXATTRIB3SPROC glo_glVertexAttrib3s = NULL;
PFNGLVERTEXATTRIB3SARBPROC glo_glVertexAttrib3sARB = NULL;
PFNGLVERTEXATTRIB3SNVPROC glo_glVertexAttrib3sNV = NULL;
PFNGLVERTEXATTRIB3SVPROC glo_glVertexAttrib3sv = NULL;
PFNGLVERTEXATTRIB3SVARBPROC glo_glVertexAttrib3svARB = NULL;
PFNGLVERTEXATTRIB3SVNVPROC glo_glVertexAttrib3svNV = NULL;
PFNGLVERTEXATTRIB4NBVPROC glo_glVertexAttrib4Nbv = NULL;
PFNGLVERTEXATTRIB4NBVARBPROC glo_glVertexAttrib4NbvARB = NULL;
PFNGLVERTEXATTRIB4NIVPROC glo_glVertexAttrib4Niv = NULL;
PFNGLVERTEXATTRIB4NIVARBPROC glo_glVertexAttrib4NivARB = NULL;
PFNGLVERTEXATTRIB4NSVPROC glo_glVertexAttrib4Nsv = NULL;
PFNGLVERTEXATTRIB4NSVARBPROC glo_glVertexAttrib4NsvARB = NULL;
PFNGLVERTEXATTRIB4NUBPROC glo_glVertexAttrib4Nub = NULL;
PFNGLVERTEXATTRIB4NUBARBPROC glo_glVertexAttrib4NubARB = NULL;
PFNGLVERTEXATTRIB4NUBVPROC glo_glVertexAttrib4Nubv = NULL;
PFNGLVERTEXATTRIB4NUBVARBPROC glo_glVertexAttrib4NubvARB = NULL;
PFNGLVERTEXATTRIB4NUIVPROC glo_glVertexAttrib4Nuiv = NULL;
PFNGLVERTEXATTRIB4NUIVARBPROC glo_glVertexAttrib4NuivARB = NULL;
PFNGLVERTEXATTRIB4NUSVPROC glo_glVertexAttrib4Nusv = NULL;
PFNGLVERTEXATTRIB4NUSVARBPROC glo_glVertexAttrib4NusvARB = NULL;
PFNGLVERTEXATTRIB4BVPROC glo_glVertexAttrib4bv = NULL;
PFNGLVERTEXATTRIB4BVARBPROC glo_glVertexAttrib4bvARB = NULL;
PFNGLVERTEXATTRIB4DPROC glo_glVertexAttrib4d = NULL;
PFNGLVERTEXATTRIB4DARBPROC glo_glVertexAttrib4dARB = NULL;
PFNGLVERTEXATTRIB4DNVPROC glo_glVertexAttrib4dNV = NULL;
PFNGLVERTEXATTRIB4DVPROC glo_glVertexAttrib4dv = NULL;
PFNGLVERTEXATTRIB4DVARBPROC glo_glVertexAttrib4dvARB = NULL;
PFNGLVERTEXATTRIB4DVNVPROC glo_glVertexAttrib4dvNV = NULL;
PFNGLVERTEXATTRIB4FPROC glo_glVertexAttrib4f = NULL;
PFNGLVERTEXATTRIB4FARBPROC glo_glVertexAttrib4fARB = NULL;
PFNGLVERTEXATTRIB4FNVPROC glo_glVertexAttrib4fNV = NULL;
PFNGLVERTEXATTRIB4FVPROC glo_glVertexAttrib4fv = NULL;
PFNGLVERTEXATTRIB4FVARBPROC glo_glVertexAttrib4fvARB = NULL;
PFNGLVERTEXATTRIB4FVNVPROC glo_glVertexAttrib4fvNV = NULL;
PFNGLVERTEXATTRIB4HNVPROC glo_glVertexAttrib4hNV = NULL;
PFNGLVERTEXATTRIB4HVNVPROC glo_glVertexAttrib4hvNV = NULL;
PFNGLVERTEXATTRIB4IVPROC glo_glVertexAttrib4iv = NULL;
PFNGLVERTEXATTRIB4IVARBPROC glo_glVertexAttrib4ivARB = NULL;
PFNGLVERTEXATTRIB4SPROC glo_glVertexAttrib4s = NULL;
PFNGLVERTEXATTRIB4SARBPROC glo_glVertexAttrib4sARB = NULL;
PFNGLVERTEXATTRIB4SNVPROC glo_glVertexAttrib4sNV = NULL;
PFNGLVERTEXATTRIB4SVPROC glo_glVertexAttrib4sv = NULL;
PFNGLVERTEXATTRIB4SVARBPROC glo_glVertexAttrib4svARB = NULL;
PFNGLVERTEXATTRIB4SVNVPROC glo_glVertexAttrib4svNV = NULL;
PFNGLVERTEXATTRIB4UBNVPROC glo_glVertexAttrib4ubNV = NULL;
PFNGLVERTEXATTRIB4UBVPROC glo_glVertexAttrib4ubv = NULL;
PFNGLVERTEXATTRIB4UBVARBPROC glo_glVertexAttrib4ubvARB = NULL;
PFNGLVERTEXATTRIB4UBVNVPROC glo_glVertexAttrib4ubvNV = NULL;
PFNGLVERTEXATTRIB4UIVPROC glo_glVertexAttrib4uiv = NULL;
PFNGLVERTEXATTRIB4UIVARBPROC glo_glVertexAttrib4uivARB = NULL;
PFNGLVERTEXATTRIB4USVPROC glo_glVertexAttrib4usv = NULL;
PFNGLVERTEXATTRIB4USVARBPROC glo_glVertexAttrib4usvARB = NULL;
PFNGLVERTEXATTRIBARRAYOBJECTATIPROC glo_glVertexAttribArrayObjectATI = NULL;
PFNGLVERTEXATTRIBBINDINGPROC glo_glVertexAttribBinding = NULL;
PFNGLVERTEXATTRIBDIVISORPROC glo_glVertexAttribDivisor = NULL;
PFNGLVERTEXATTRIBDIVISORARBPROC glo_glVertexAttribDivisorARB = NULL;
PFNGLVERTEXATTRIBFORMATPROC glo_glVertexAttribFormat = NULL;
PFNGLVERTEXATTRIBFORMATNVPROC glo_glVertexAttribFormatNV = NULL;
PFNGLVERTEXATTRIBI1IPROC glo_glVertexAttribI1i = NULL;
PFNGLVERTEXATTRIBI1IEXTPROC glo_glVertexAttribI1iEXT = NULL;
PFNGLVERTEXATTRIBI1IVPROC glo_glVertexAttribI1iv = NULL;
PFNGLVERTEXATTRIBI1IVEXTPROC glo_glVertexAttribI1ivEXT = NULL;
PFNGLVERTEXATTRIBI1UIPROC glo_glVertexAttribI1ui = NULL;
PFNGLVERTEXATTRIBI1UIEXTPROC glo_glVertexAttribI1uiEXT = NULL;
PFNGLVERTEXATTRIBI1UIVPROC glo_glVertexAttribI1uiv = NULL;
PFNGLVERTEXATTRIBI1UIVEXTPROC glo_glVertexAttribI1uivEXT = NULL;
PFNGLVERTEXATTRIBI2IPROC glo_glVertexAttribI2i = NULL;
PFNGLVERTEXATTRIBI2IEXTPROC glo_glVertexAttribI2iEXT = NULL;
PFNGLVERTEXATTRIBI2IVPROC glo_glVertexAttribI2iv = NULL;
PFNGLVERTEXATTRIBI2IVEXTPROC glo_glVertexAttribI2ivEXT = NULL;
PFNGLVERTEXATTRIBI2UIPROC glo_glVertexAttribI2ui = NULL;
PFNGLVERTEXATTRIBI2UIEXTPROC glo_glVertexAttribI2uiEXT = NULL;
PFNGLVERTEXATTRIBI2UIVPROC glo_glVertexAttribI2uiv = NULL;
PFNGLVERTEXATTRIBI2UIVEXTPROC glo_glVertexAttribI2uivEXT = NULL;
PFNGLVERTEXATTRIBI3IPROC glo_glVertexAttribI3i = NULL;
PFNGLVERTEXATTRIBI3IEXTPROC glo_glVertexAttribI3iEXT = NULL;
PFNGLVERTEXATTRIBI3IVPROC glo_glVertexAttribI3iv = NULL;
PFNGLVERTEXATTRIBI3IVEXTPROC glo_glVertexAttribI3ivEXT = NULL;
PFNGLVERTEXATTRIBI3UIPROC glo_glVertexAttribI3ui = NULL;
PFNGLVERTEXATTRIBI3UIEXTPROC glo_glVertexAttribI3uiEXT = NULL;
PFNGLVERTEXATTRIBI3UIVPROC glo_glVertexAttribI3uiv = NULL;
PFNGLVERTEXATTRIBI3UIVEXTPROC glo_glVertexAttribI3uivEXT = NULL;
PFNGLVERTEXATTRIBI4BVPROC glo_glVertexAttribI4bv = NULL;
PFNGLVERTEXATTRIBI4BVEXTPROC glo_glVertexAttribI4bvEXT = NULL;
PFNGLVERTEXATTRIBI4IPROC glo_glVertexAttribI4i = NULL;
PFNGLVERTEXATTRIBI4IEXTPROC glo_glVertexAttribI4iEXT = NULL;
PFNGLVERTEXATTRIBI4IVPROC glo_glVertexAttribI4iv = NULL;
PFNGLVERTEXATTRIBI4IVEXTPROC glo_glVertexAttribI4ivEXT = NULL;
PFNGLVERTEXATTRIBI4SVPROC glo_glVertexAttribI4sv = NULL;
PFNGLVERTEXATTRIBI4SVEXTPROC glo_glVertexAttribI4svEXT = NULL;
PFNGLVERTEXATTRIBI4UBVPROC glo_glVertexAttribI4ubv = NULL;
PFNGLVERTEXATTRIBI4UBVEXTPROC glo_glVertexAttribI4ubvEXT = NULL;
PFNGLVERTEXATTRIBI4UIPROC glo_glVertexAttribI4ui = NULL;
PFNGLVERTEXATTRIBI4UIEXTPROC glo_glVertexAttribI4uiEXT = NULL;
PFNGLVERTEXATTRIBI4UIVPROC glo_glVertexAttribI4uiv = NULL;
PFNGLVERTEXATTRIBI4UIVEXTPROC glo_glVertexAttribI4uivEXT = NULL;
PFNGLVERTEXATTRIBI4USVPROC glo_glVertexAttribI4usv = NULL;
PFNGLVERTEXATTRIBI4USVEXTPROC glo_glVertexAttribI4usvEXT = NULL;
PFNGLVERTEXATTRIBIFORMATPROC glo_glVertexAttribIFormat = NULL;
PFNGLVERTEXATTRIBIFORMATNVPROC glo_glVertexAttribIFormatNV = NULL;
PFNGLVERTEXATTRIBIPOINTERPROC glo_glVertexAttribIPointer = NULL;
PFNGLVERTEXATTRIBIPOINTEREXTPROC glo_glVertexAttribIPointerEXT = NULL;
PFNGLVERTEXATTRIBL1DPROC glo_glVertexAttribL1d = NULL;
PFNGLVERTEXATTRIBL1DEXTPROC glo_glVertexAttribL1dEXT = NULL;
PFNGLVERTEXATTRIBL1DVPROC glo_glVertexAttribL1dv = NULL;
PFNGLVERTEXATTRIBL1DVEXTPROC glo_glVertexAttribL1dvEXT = NULL;
PFNGLVERTEXATTRIBL1I64NVPROC glo_glVertexAttribL1i64NV = NULL;
PFNGLVERTEXATTRIBL1I64VNVPROC glo_glVertexAttribL1i64vNV = NULL;
PFNGLVERTEXATTRIBL1UI64ARBPROC glo_glVertexAttribL1ui64ARB = NULL;
PFNGLVERTEXATTRIBL1UI64NVPROC glo_glVertexAttribL1ui64NV = NULL;
PFNGLVERTEXATTRIBL1UI64VARBPROC glo_glVertexAttribL1ui64vARB = NULL;
PFNGLVERTEXATTRIBL1UI64VNVPROC glo_glVertexAttribL1ui64vNV = NULL;
PFNGLVERTEXATTRIBL2DPROC glo_glVertexAttribL2d = NULL;
PFNGLVERTEXATTRIBL2DEXTPROC glo_glVertexAttribL2dEXT = NULL;
PFNGLVERTEXATTRIBL2DVPROC glo_glVertexAttribL2dv = NULL;
PFNGLVERTEXATTRIBL2DVEXTPROC glo_glVertexAttribL2dvEXT = NULL;
PFNGLVERTEXATTRIBL2I64NVPROC glo_glVertexAttribL2i64NV = NULL;
PFNGLVERTEXATTRIBL2I64VNVPROC glo_glVertexAttribL2i64vNV = NULL;
PFNGLVERTEXATTRIBL2UI64NVPROC glo_glVertexAttribL2ui64NV = NULL;
PFNGLVERTEXATTRIBL2UI64VNVPROC glo_glVertexAttribL2ui64vNV = NULL;
PFNGLVERTEXATTRIBL3DPROC glo_glVertexAttribL3d = NULL;
PFNGLVERTEXATTRIBL3DEXTPROC glo_glVertexAttribL3dEXT = NULL;
PFNGLVERTEXATTRIBL3DVPROC glo_glVertexAttribL3dv = NULL;
PFNGLVERTEXATTRIBL3DVEXTPROC glo_glVertexAttribL3dvEXT = NULL;
PFNGLVERTEXATTRIBL3I64NVPROC glo_glVertexAttribL3i64NV = NULL;
PFNGLVERTEXATTRIBL3I64VNVPROC glo_glVertexAttribL3i64vNV = NULL;
PFNGLVERTEXATTRIBL3UI64NVPROC glo_glVertexAttribL3ui64NV = NULL;
PFNGLVERTEXATTRIBL3UI64VNVPROC glo_glVertexAttribL3ui64vNV = NULL;
PFNGLVERTEXATTRIBL4DPROC glo_glVertexAttribL4d = NULL;
PFNGLVERTEXATTRIBL4DEXTPROC glo_glVertexAttribL4dEXT = NULL;
PFNGLVERTEXATTRIBL4DVPROC glo_glVertexAttribL4dv = NULL;
PFNGLVERTEXATTRIBL4DVEXTPROC glo_glVertexAttribL4dvEXT = NULL;
PFNGLVERTEXATTRIBL4I64NVPROC glo_glVertexAttribL4i64NV = NULL;
PFNGLVERTEXATTRIBL4I64VNVPROC glo_glVertexAttribL4i64vNV = NULL;
PFNGLVERTEXATTRIBL4UI64NVPROC glo_glVertexAttribL4ui64NV = NULL;
PFNGLVERTEXATTRIBL4UI64VNVPROC glo_glVertexAttribL4ui64vNV = NULL;
PFNGLVERTEXATTRIBLFORMATPROC glo_glVertexAttribLFormat = NULL;
PFNGLVERTEXATTRIBLFORMATNVPROC glo_glVertexAttribLFormatNV = NULL;
PFNGLVERTEXATTRIBLPOINTERPROC glo_glVertexAttribLPointer = NULL;
PFNGLVERTEXATTRIBLPOINTEREXTPROC glo_glVertexAttribLPointerEXT = NULL;
PFNGLVERTEXATTRIBP1UIPROC glo_glVertexAttribP1ui = NULL;
PFNGLVERTEXATTRIBP1UIVPROC glo_glVertexAttribP1uiv = NULL;
PFNGLVERTEXATTRIBP2UIPROC glo_glVertexAttribP2ui = NULL;
PFNGLVERTEXATTRIBP2UIVPROC glo_glVertexAttribP2uiv = NULL;
PFNGLVERTEXATTRIBP3UIPROC glo_glVertexAttribP3ui = NULL;
PFNGLVERTEXATTRIBP3UIVPROC glo_glVertexAttribP3uiv = NULL;
PFNGLVERTEXATTRIBP4UIPROC glo_glVertexAttribP4ui = NULL;
PFNGLVERTEXATTRIBP4UIVPROC glo_glVertexAttribP4uiv = NULL;
PFNGLVERTEXATTRIBPARAMETERIAMDPROC glo_glVertexAttribParameteriAMD = NULL;
PFNGLVERTEXATTRIBPOINTERPROC glo_glVertexAttribPointer = NULL;
PFNGLVERTEXATTRIBPOINTERARBPROC glo_glVertexAttribPointerARB = NULL;
PFNGLVERTEXATTRIBPOINTERNVPROC glo_glVertexAttribPointerNV = NULL;
PFNGLVERTEXATTRIBS1DVNVPROC glo_glVertexAttribs1dvNV = NULL;
PFNGLVERTEXATTRIBS1FVNVPROC glo_glVertexAttribs1fvNV = NULL;
PFNGLVERTEXATTRIBS1HVNVPROC glo_glVertexAttribs1hvNV = NULL;
PFNGLVERTEXATTRIBS1SVNVPROC glo_glVertexAttribs1svNV = NULL;
PFNGLVERTEXATTRIBS2DVNVPROC glo_glVertexAttribs2dvNV = NULL;
PFNGLVERTEXATTRIBS2FVNVPROC glo_glVertexAttribs2fvNV = NULL;
PFNGLVERTEXATTRIBS2HVNVPROC glo_glVertexAttribs2hvNV = NULL;
PFNGLVERTEXATTRIBS2SVNVPROC glo_glVertexAttribs2svNV = NULL;
PFNGLVERTEXATTRIBS3DVNVPROC glo_glVertexAttribs3dvNV = NULL;
PFNGLVERTEXATTRIBS3FVNVPROC glo_glVertexAttribs3fvNV = NULL;
PFNGLVERTEXATTRIBS3HVNVPROC glo_glVertexAttribs3hvNV = NULL;
PFNGLVERTEXATTRIBS3SVNVPROC glo_glVertexAttribs3svNV = NULL;
PFNGLVERTEXATTRIBS4DVNVPROC glo_glVertexAttribs4dvNV = NULL;
PFNGLVERTEXATTRIBS4FVNVPROC glo_glVertexAttribs4fvNV = NULL;
PFNGLVERTEXATTRIBS4HVNVPROC glo_glVertexAttribs4hvNV = NULL;
PFNGLVERTEXATTRIBS4SVNVPROC glo_glVertexAttribs4svNV = NULL;
PFNGLVERTEXATTRIBS4UBVNVPROC glo_glVertexAttribs4ubvNV = NULL;
PFNGLVERTEXBINDINGDIVISORPROC glo_glVertexBindingDivisor = NULL;
PFNGLVERTEXBLENDARBPROC glo_glVertexBlendARB = NULL;
PFNGLVERTEXBLENDENVFATIPROC glo_glVertexBlendEnvfATI = NULL;
PFNGLVERTEXBLENDENVIATIPROC glo_glVertexBlendEnviATI = NULL;
PFNGLVERTEXFORMATNVPROC glo_glVertexFormatNV = NULL;
PFNGLVERTEXPOINTEREXTPROC glo_glVertexPointerEXT = NULL;
PFNGLVERTEXPOINTERLISTIBMPROC glo_glVertexPointerListIBM = NULL;
PFNGLVERTEXPOINTERVINTELPROC glo_glVertexPointervINTEL = NULL;
PFNGLVERTEXSTREAM1DATIPROC glo_glVertexStream1dATI = NULL;
PFNGLVERTEXSTREAM1DVATIPROC glo_glVertexStream1dvATI = NULL;
PFNGLVERTEXSTREAM1FATIPROC glo_glVertexStream1fATI = NULL;
PFNGLVERTEXSTREAM1FVATIPROC glo_glVertexStream1fvATI = NULL;
PFNGLVERTEXSTREAM1IATIPROC glo_glVertexStream1iATI = NULL;
PFNGLVERTEXSTREAM1IVATIPROC glo_glVertexStream1ivATI = NULL;
PFNGLVERTEXSTREAM1SATIPROC glo_glVertexStream1sATI = NULL;
PFNGLVERTEXSTREAM1SVATIPROC glo_glVertexStream1svATI = NULL;
PFNGLVERTEXSTREAM2DATIPROC glo_glVertexStream2dATI = NULL;
PFNGLVERTEXSTREAM2DVATIPROC glo_glVertexStream2dvATI = NULL;
PFNGLVERTEXSTREAM2FATIPROC glo_glVertexStream2fATI = NULL;
PFNGLVERTEXSTREAM2FVATIPROC glo_glVertexStream2fvATI = NULL;
PFNGLVERTEXSTREAM2IATIPROC glo_glVertexStream2iATI = NULL;
PFNGLVERTEXSTREAM2IVATIPROC glo_glVertexStream2ivATI = NULL;
PFNGLVERTEXSTREAM2SATIPROC glo_glVertexStream2sATI = NULL;
PFNGLVERTEXSTREAM2SVATIPROC glo_glVertexStream2svATI = NULL;
PFNGLVERTEXSTREAM3DATIPROC glo_glVertexStream3dATI = NULL;
PFNGLVERTEXSTREAM3DVATIPROC glo_glVertexStream3dvATI = NULL;
PFNGLVERTEXSTREAM3FATIPROC glo_glVertexStream3fATI = NULL;
PFNGLVERTEXSTREAM3FVATIPROC glo_glVertexStream3fvATI = NULL;
PFNGLVERTEXSTREAM3IATIPROC glo_glVertexStream3iATI = NULL;
PFNGLVERTEXSTREAM3IVATIPROC glo_glVertexStream3ivATI = NULL;
PFNGLVERTEXSTREAM3SATIPROC glo_glVertexStream3sATI = NULL;
PFNGLVERTEXSTREAM3SVATIPROC glo_glVertexStream3svATI = NULL;
PFNGLVERTEXSTREAM4DATIPROC glo_glVertexStream4dATI = NULL;
PFNGLVERTEXSTREAM4DVATIPROC glo_glVertexStream4dvATI = NULL;
PFNGLVERTEXSTREAM4FATIPROC glo_glVertexStream4fATI = NULL;
PFNGLVERTEXSTREAM4FVATIPROC glo_glVertexStream4fvATI = NULL;
PFNGLVERTEXSTREAM4IATIPROC glo_glVertexStream4iATI = NULL;
PFNGLVERTEXSTREAM4IVATIPROC glo_glVertexStream4ivATI = NULL;
PFNGLVERTEXSTREAM4SATIPROC glo_glVertexStream4sATI = NULL;
PFNGLVERTEXSTREAM4SVATIPROC glo_glVertexStream4svATI = NULL;
PFNGLVERTEXWEIGHTPOINTEREXTPROC glo_glVertexWeightPointerEXT = NULL;
PFNGLVERTEXWEIGHTFEXTPROC glo_glVertexWeightfEXT = NULL;
PFNGLVERTEXWEIGHTFVEXTPROC glo_glVertexWeightfvEXT = NULL;
PFNGLVERTEXWEIGHTHNVPROC glo_glVertexWeighthNV = NULL;
PFNGLVERTEXWEIGHTHVNVPROC glo_glVertexWeighthvNV = NULL;
PFNGLVIDEOCAPTURENVPROC glo_glVideoCaptureNV = NULL;
PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC glo_glVideoCaptureStreamParameterdvNV = NULL;
PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC glo_glVideoCaptureStreamParameterfvNV = NULL;
PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC glo_glVideoCaptureStreamParameterivNV = NULL;
PFNGLVIEWPORTPROC glo_glViewport = NULL;
PFNGLVIEWPORTARRAYVPROC glo_glViewportArrayv = NULL;
PFNGLVIEWPORTINDEXEDFPROC glo_glViewportIndexedf = NULL;
PFNGLVIEWPORTINDEXEDFVPROC glo_glViewportIndexedfv = NULL;
PFNGLVIEWPORTPOSITIONWSCALENVPROC glo_glViewportPositionWScaleNV = NULL;
PFNGLVIEWPORTSWIZZLENVPROC glo_glViewportSwizzleNV = NULL;
PFNGLWAITSEMAPHOREEXTPROC glo_glWaitSemaphoreEXT = NULL;
PFNGLWAITSEMAPHOREUI64NVXPROC glo_glWaitSemaphoreui64NVX = NULL;
PFNGLWAITSYNCPROC glo_glWaitSync = NULL;
PFNGLWAITVKSEMAPHORENVPROC glo_glWaitVkSemaphoreNV = NULL;
PFNGLWEIGHTPATHSNVPROC glo_glWeightPathsNV = NULL;
PFNGLWEIGHTPOINTERARBPROC glo_glWeightPointerARB = NULL;
PFNGLWEIGHTBVARBPROC glo_glWeightbvARB = NULL;
PFNGLWEIGHTDVARBPROC glo_glWeightdvARB = NULL;
PFNGLWEIGHTFVARBPROC glo_glWeightfvARB = NULL;
PFNGLWEIGHTIVARBPROC glo_glWeightivARB = NULL;
PFNGLWEIGHTSVARBPROC glo_glWeightsvARB = NULL;
PFNGLWEIGHTUBVARBPROC glo_glWeightubvARB = NULL;
PFNGLWEIGHTUIVARBPROC glo_glWeightuivARB = NULL;
PFNGLWEIGHTUSVARBPROC glo_glWeightusvARB = NULL;
PFNGLWINDOWPOS2DARBPROC glo_glWindowPos2dARB = NULL;
PFNGLWINDOWPOS2DMESAPROC glo_glWindowPos2dMESA = NULL;
PFNGLWINDOWPOS2DVARBPROC glo_glWindowPos2dvARB = NULL;
PFNGLWINDOWPOS2DVMESAPROC glo_glWindowPos2dvMESA = NULL;
PFNGLWINDOWPOS2FARBPROC glo_glWindowPos2fARB = NULL;
PFNGLWINDOWPOS2FMESAPROC glo_glWindowPos2fMESA = NULL;
PFNGLWINDOWPOS2FVARBPROC glo_glWindowPos2fvARB = NULL;
PFNGLWINDOWPOS2FVMESAPROC glo_glWindowPos2fvMESA = NULL;
PFNGLWINDOWPOS2IARBPROC glo_glWindowPos2iARB = NULL;
PFNGLWINDOWPOS2IMESAPROC glo_glWindowPos2iMESA = NULL;
PFNGLWINDOWPOS2IVARBPROC glo_glWindowPos2ivARB = NULL;
PFNGLWINDOWPOS2IVMESAPROC glo_glWindowPos2ivMESA = NULL;
PFNGLWINDOWPOS2SARBPROC glo_glWindowPos2sARB = NULL;
PFNGLWINDOWPOS2SMESAPROC glo_glWindowPos2sMESA = NULL;
PFNGLWINDOWPOS2SVARBPROC glo_glWindowPos2svARB = NULL;
PFNGLWINDOWPOS2SVMESAPROC glo_glWindowPos2svMESA = NULL;
PFNGLWINDOWPOS3DARBPROC glo_glWindowPos3dARB = NULL;
PFNGLWINDOWPOS3DMESAPROC glo_glWindowPos3dMESA = NULL;
PFNGLWINDOWPOS3DVARBPROC glo_glWindowPos3dvARB = NULL;
PFNGLWINDOWPOS3DVMESAPROC glo_glWindowPos3dvMESA = NULL;
PFNGLWINDOWPOS3FARBPROC glo_glWindowPos3fARB = NULL;
PFNGLWINDOWPOS3FMESAPROC glo_glWindowPos3fMESA = NULL;
PFNGLWINDOWPOS3FVARBPROC glo_glWindowPos3fvARB = NULL;
PFNGLWINDOWPOS3FVMESAPROC glo_glWindowPos3fvMESA = NULL;
PFNGLWINDOWPOS3IARBPROC glo_glWindowPos3iARB = NULL;
PFNGLWINDOWPOS3IMESAPROC glo_glWindowPos3iMESA = NULL;
PFNGLWINDOWPOS3IVARBPROC glo_glWindowPos3ivARB = NULL;
PFNGLWINDOWPOS3IVMESAPROC glo_glWindowPos3ivMESA = NULL;
PFNGLWINDOWPOS3SARBPROC glo_glWindowPos3sARB = NULL;
PFNGLWINDOWPOS3SMESAPROC glo_glWindowPos3sMESA = NULL;
PFNGLWINDOWPOS3SVARBPROC glo_glWindowPos3svARB = NULL;
PFNGLWINDOWPOS3SVMESAPROC glo_glWindowPos3svMESA = NULL;
PFNGLWINDOWPOS4DMESAPROC glo_glWindowPos4dMESA = NULL;
PFNGLWINDOWPOS4DVMESAPROC glo_glWindowPos4dvMESA = NULL;
PFNGLWINDOWPOS4FMESAPROC glo_glWindowPos4fMESA = NULL;
PFNGLWINDOWPOS4FVMESAPROC glo_glWindowPos4fvMESA = NULL;
PFNGLWINDOWPOS4IMESAPROC glo_glWindowPos4iMESA = NULL;
PFNGLWINDOWPOS4IVMESAPROC glo_glWindowPos4ivMESA = NULL;
PFNGLWINDOWPOS4SMESAPROC glo_glWindowPos4sMESA = NULL;
PFNGLWINDOWPOS4SVMESAPROC glo_glWindowPos4svMESA = NULL;
PFNGLWINDOWRECTANGLESEXTPROC glo_glWindowRectanglesEXT = NULL;
PFNGLWRITEMASKEXTPROC glo_glWriteMaskEXT = NULL;


static void glo_gl_load_GL_VERSION_1_0( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_1_0) return;
    glo_glBlendFunc = (PFNGLBLENDFUNCPROC) load(userptr, "glBlendFunc");
    glo_glClear = (PFNGLCLEARPROC) load(userptr, "glClear");
    glo_glClearColor = (PFNGLCLEARCOLORPROC) load(userptr, "glClearColor");
    glo_glClearDepth = (PFNGLCLEARDEPTHPROC) load(userptr, "glClearDepth");
    glo_glClearStencil = (PFNGLCLEARSTENCILPROC) load(userptr, "glClearStencil");
    glo_glColorMask = (PFNGLCOLORMASKPROC) load(userptr, "glColorMask");
    glo_glCullFace = (PFNGLCULLFACEPROC) load(userptr, "glCullFace");
    glo_glDepthFunc = (PFNGLDEPTHFUNCPROC) load(userptr, "glDepthFunc");
    glo_glDepthMask = (PFNGLDEPTHMASKPROC) load(userptr, "glDepthMask");
    glo_glDepthRange = (PFNGLDEPTHRANGEPROC) load(userptr, "glDepthRange");
    glo_glDisable = (PFNGLDISABLEPROC) load(userptr, "glDisable");
    glo_glDrawBuffer = (PFNGLDRAWBUFFERPROC) load(userptr, "glDrawBuffer");
    glo_glEnable = (PFNGLENABLEPROC) load(userptr, "glEnable");
    glo_glFinish = (PFNGLFINISHPROC) load(userptr, "glFinish");
    glo_glFlush = (PFNGLFLUSHPROC) load(userptr, "glFlush");
    glo_glFrontFace = (PFNGLFRONTFACEPROC) load(userptr, "glFrontFace");
    glo_glGetBooleanv = (PFNGLGETBOOLEANVPROC) load(userptr, "glGetBooleanv");
    glo_glGetDoublev = (PFNGLGETDOUBLEVPROC) load(userptr, "glGetDoublev");
    glo_glGetError = (PFNGLGETERRORPROC) load(userptr, "glGetError");
    glo_glGetFloatv = (PFNGLGETFLOATVPROC) load(userptr, "glGetFloatv");
    glo_glGetIntegerv = (PFNGLGETINTEGERVPROC) load(userptr, "glGetIntegerv");
    glo_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    glo_glGetTexImage = (PFNGLGETTEXIMAGEPROC) load(userptr, "glGetTexImage");
    glo_glGetTexLevelParameterfv = (PFNGLGETTEXLEVELPARAMETERFVPROC) load(userptr, "glGetTexLevelParameterfv");
    glo_glGetTexLevelParameteriv = (PFNGLGETTEXLEVELPARAMETERIVPROC) load(userptr, "glGetTexLevelParameteriv");
    glo_glGetTexParameterfv = (PFNGLGETTEXPARAMETERFVPROC) load(userptr, "glGetTexParameterfv");
    glo_glGetTexParameteriv = (PFNGLGETTEXPARAMETERIVPROC) load(userptr, "glGetTexParameteriv");
    glo_glHint = (PFNGLHINTPROC) load(userptr, "glHint");
    glo_glIsEnabled = (PFNGLISENABLEDPROC) load(userptr, "glIsEnabled");
    glo_glLineWidth = (PFNGLLINEWIDTHPROC) load(userptr, "glLineWidth");
    glo_glLogicOp = (PFNGLLOGICOPPROC) load(userptr, "glLogicOp");
    glo_glPixelStoref = (PFNGLPIXELSTOREFPROC) load(userptr, "glPixelStoref");
    glo_glPixelStorei = (PFNGLPIXELSTOREIPROC) load(userptr, "glPixelStorei");
    glo_glPointSize = (PFNGLPOINTSIZEPROC) load(userptr, "glPointSize");
    glo_glPolygonMode = (PFNGLPOLYGONMODEPROC) load(userptr, "glPolygonMode");
    glo_glReadBuffer = (PFNGLREADBUFFERPROC) load(userptr, "glReadBuffer");
    glo_glReadPixels = (PFNGLREADPIXELSPROC) load(userptr, "glReadPixels");
    glo_glScissor = (PFNGLSCISSORPROC) load(userptr, "glScissor");
    glo_glStencilFunc = (PFNGLSTENCILFUNCPROC) load(userptr, "glStencilFunc");
    glo_glStencilMask = (PFNGLSTENCILMASKPROC) load(userptr, "glStencilMask");
    glo_glStencilOp = (PFNGLSTENCILOPPROC) load(userptr, "glStencilOp");
    glo_glTexImage1D = (PFNGLTEXIMAGE1DPROC) load(userptr, "glTexImage1D");
    glo_glTexImage2D = (PFNGLTEXIMAGE2DPROC) load(userptr, "glTexImage2D");
    glo_glTexParameterf = (PFNGLTEXPARAMETERFPROC) load(userptr, "glTexParameterf");
    glo_glTexParameterfv = (PFNGLTEXPARAMETERFVPROC) load(userptr, "glTexParameterfv");
    glo_glTexParameteri = (PFNGLTEXPARAMETERIPROC) load(userptr, "glTexParameteri");
    glo_glTexParameteriv = (PFNGLTEXPARAMETERIVPROC) load(userptr, "glTexParameteriv");
    glo_glViewport = (PFNGLVIEWPORTPROC) load(userptr, "glViewport");
}
static void glo_gl_load_GL_VERSION_1_1( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_1_1) return;
    glo_glBindTexture = (PFNGLBINDTEXTUREPROC) load(userptr, "glBindTexture");
    glo_glCopyTexImage1D = (PFNGLCOPYTEXIMAGE1DPROC) load(userptr, "glCopyTexImage1D");
    glo_glCopyTexImage2D = (PFNGLCOPYTEXIMAGE2DPROC) load(userptr, "glCopyTexImage2D");
    glo_glCopyTexSubImage1D = (PFNGLCOPYTEXSUBIMAGE1DPROC) load(userptr, "glCopyTexSubImage1D");
    glo_glCopyTexSubImage2D = (PFNGLCOPYTEXSUBIMAGE2DPROC) load(userptr, "glCopyTexSubImage2D");
    glo_glDeleteTextures = (PFNGLDELETETEXTURESPROC) load(userptr, "glDeleteTextures");
    glo_glDrawArrays = (PFNGLDRAWARRAYSPROC) load(userptr, "glDrawArrays");
    glo_glDrawElements = (PFNGLDRAWELEMENTSPROC) load(userptr, "glDrawElements");
    glo_glGenTextures = (PFNGLGENTEXTURESPROC) load(userptr, "glGenTextures");
    glo_glGetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    glo_glIsTexture = (PFNGLISTEXTUREPROC) load(userptr, "glIsTexture");
    glo_glPolygonOffset = (PFNGLPOLYGONOFFSETPROC) load(userptr, "glPolygonOffset");
    glo_glTexSubImage1D = (PFNGLTEXSUBIMAGE1DPROC) load(userptr, "glTexSubImage1D");
    glo_glTexSubImage2D = (PFNGLTEXSUBIMAGE2DPROC) load(userptr, "glTexSubImage2D");
}
static void glo_gl_load_GL_VERSION_1_2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_1_2) return;
    glo_glCopyTexSubImage3D = (PFNGLCOPYTEXSUBIMAGE3DPROC) load(userptr, "glCopyTexSubImage3D");
    glo_glDrawRangeElements = (PFNGLDRAWRANGEELEMENTSPROC) load(userptr, "glDrawRangeElements");
    glo_glTexImage3D = (PFNGLTEXIMAGE3DPROC) load(userptr, "glTexImage3D");
    glo_glTexSubImage3D = (PFNGLTEXSUBIMAGE3DPROC) load(userptr, "glTexSubImage3D");
}
static void glo_gl_load_GL_VERSION_1_3( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_1_3) return;
    glo_glActiveTexture = (PFNGLACTIVETEXTUREPROC) load(userptr, "glActiveTexture");
    glo_glCompressedTexImage1D = (PFNGLCOMPRESSEDTEXIMAGE1DPROC) load(userptr, "glCompressedTexImage1D");
    glo_glCompressedTexImage2D = (PFNGLCOMPRESSEDTEXIMAGE2DPROC) load(userptr, "glCompressedTexImage2D");
    glo_glCompressedTexImage3D = (PFNGLCOMPRESSEDTEXIMAGE3DPROC) load(userptr, "glCompressedTexImage3D");
    glo_glCompressedTexSubImage1D = (PFNGLCOMPRESSEDTEXSUBIMAGE1DPROC) load(userptr, "glCompressedTexSubImage1D");
    glo_glCompressedTexSubImage2D = (PFNGLCOMPRESSEDTEXSUBIMAGE2DPROC) load(userptr, "glCompressedTexSubImage2D");
    glo_glCompressedTexSubImage3D = (PFNGLCOMPRESSEDTEXSUBIMAGE3DPROC) load(userptr, "glCompressedTexSubImage3D");
    glo_glGetCompressedTexImage = (PFNGLGETCOMPRESSEDTEXIMAGEPROC) load(userptr, "glGetCompressedTexImage");
    glo_glSampleCoverage = (PFNGLSAMPLECOVERAGEPROC) load(userptr, "glSampleCoverage");
}
static void glo_gl_load_GL_VERSION_1_4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_1_4) return;
    glo_glBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glo_glBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
    glo_glBlendFuncSeparate = (PFNGLBLENDFUNCSEPARATEPROC) load(userptr, "glBlendFuncSeparate");
    glo_glMultiDrawArrays = (PFNGLMULTIDRAWARRAYSPROC) load(userptr, "glMultiDrawArrays");
    glo_glMultiDrawElements = (PFNGLMULTIDRAWELEMENTSPROC) load(userptr, "glMultiDrawElements");
    glo_glPointParameterf = (PFNGLPOINTPARAMETERFPROC) load(userptr, "glPointParameterf");
    glo_glPointParameterfv = (PFNGLPOINTPARAMETERFVPROC) load(userptr, "glPointParameterfv");
    glo_glPointParameteri = (PFNGLPOINTPARAMETERIPROC) load(userptr, "glPointParameteri");
    glo_glPointParameteriv = (PFNGLPOINTPARAMETERIVPROC) load(userptr, "glPointParameteriv");
}
static void glo_gl_load_GL_VERSION_1_5( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_1_5) return;
    glo_glBeginQuery = (PFNGLBEGINQUERYPROC) load(userptr, "glBeginQuery");
    glo_glBindBuffer = (PFNGLBINDBUFFERPROC) load(userptr, "glBindBuffer");
    glo_glBufferData = (PFNGLBUFFERDATAPROC) load(userptr, "glBufferData");
    glo_glBufferSubData = (PFNGLBUFFERSUBDATAPROC) load(userptr, "glBufferSubData");
    glo_glDeleteBuffers = (PFNGLDELETEBUFFERSPROC) load(userptr, "glDeleteBuffers");
    glo_glDeleteQueries = (PFNGLDELETEQUERIESPROC) load(userptr, "glDeleteQueries");
    glo_glEndQuery = (PFNGLENDQUERYPROC) load(userptr, "glEndQuery");
    glo_glGenBuffers = (PFNGLGENBUFFERSPROC) load(userptr, "glGenBuffers");
    glo_glGenQueries = (PFNGLGENQUERIESPROC) load(userptr, "glGenQueries");
    glo_glGetBufferParameteriv = (PFNGLGETBUFFERPARAMETERIVPROC) load(userptr, "glGetBufferParameteriv");
    glo_glGetBufferPointerv = (PFNGLGETBUFFERPOINTERVPROC) load(userptr, "glGetBufferPointerv");
    glo_glGetBufferSubData = (PFNGLGETBUFFERSUBDATAPROC) load(userptr, "glGetBufferSubData");
    glo_glGetQueryObjectiv = (PFNGLGETQUERYOBJECTIVPROC) load(userptr, "glGetQueryObjectiv");
    glo_glGetQueryObjectuiv = (PFNGLGETQUERYOBJECTUIVPROC) load(userptr, "glGetQueryObjectuiv");
    glo_glGetQueryiv = (PFNGLGETQUERYIVPROC) load(userptr, "glGetQueryiv");
    glo_glIsBuffer = (PFNGLISBUFFERPROC) load(userptr, "glIsBuffer");
    glo_glIsQuery = (PFNGLISQUERYPROC) load(userptr, "glIsQuery");
    glo_glMapBuffer = (PFNGLMAPBUFFERPROC) load(userptr, "glMapBuffer");
    glo_glUnmapBuffer = (PFNGLUNMAPBUFFERPROC) load(userptr, "glUnmapBuffer");
}
static void glo_gl_load_GL_VERSION_2_0( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_2_0) return;
    glo_glAttachShader = (PFNGLATTACHSHADERPROC) load(userptr, "glAttachShader");
    glo_glBindAttribLocation = (PFNGLBINDATTRIBLOCATIONPROC) load(userptr, "glBindAttribLocation");
    glo_glBlendEquationSeparate = (PFNGLBLENDEQUATIONSEPARATEPROC) load(userptr, "glBlendEquationSeparate");
    glo_glCompileShader = (PFNGLCOMPILESHADERPROC) load(userptr, "glCompileShader");
    glo_glCreateProgram = (PFNGLCREATEPROGRAMPROC) load(userptr, "glCreateProgram");
    glo_glCreateShader = (PFNGLCREATESHADERPROC) load(userptr, "glCreateShader");
    glo_glDeleteProgram = (PFNGLDELETEPROGRAMPROC) load(userptr, "glDeleteProgram");
    glo_glDeleteShader = (PFNGLDELETESHADERPROC) load(userptr, "glDeleteShader");
    glo_glDetachShader = (PFNGLDETACHSHADERPROC) load(userptr, "glDetachShader");
    glo_glDisableVertexAttribArray = (PFNGLDISABLEVERTEXATTRIBARRAYPROC) load(userptr, "glDisableVertexAttribArray");
    glo_glDrawBuffers = (PFNGLDRAWBUFFERSPROC) load(userptr, "glDrawBuffers");
    glo_glEnableVertexAttribArray = (PFNGLENABLEVERTEXATTRIBARRAYPROC) load(userptr, "glEnableVertexAttribArray");
    glo_glGetActiveAttrib = (PFNGLGETACTIVEATTRIBPROC) load(userptr, "glGetActiveAttrib");
    glo_glGetActiveUniform = (PFNGLGETACTIVEUNIFORMPROC) load(userptr, "glGetActiveUniform");
    glo_glGetAttachedShaders = (PFNGLGETATTACHEDSHADERSPROC) load(userptr, "glGetAttachedShaders");
    glo_glGetAttribLocation = (PFNGLGETATTRIBLOCATIONPROC) load(userptr, "glGetAttribLocation");
    glo_glGetProgramInfoLog = (PFNGLGETPROGRAMINFOLOGPROC) load(userptr, "glGetProgramInfoLog");
    glo_glGetProgramiv = (PFNGLGETPROGRAMIVPROC) load(userptr, "glGetProgramiv");
    glo_glGetShaderInfoLog = (PFNGLGETSHADERINFOLOGPROC) load(userptr, "glGetShaderInfoLog");
    glo_glGetShaderSource = (PFNGLGETSHADERSOURCEPROC) load(userptr, "glGetShaderSource");
    glo_glGetShaderiv = (PFNGLGETSHADERIVPROC) load(userptr, "glGetShaderiv");
    glo_glGetUniformLocation = (PFNGLGETUNIFORMLOCATIONPROC) load(userptr, "glGetUniformLocation");
    glo_glGetUniformfv = (PFNGLGETUNIFORMFVPROC) load(userptr, "glGetUniformfv");
    glo_glGetUniformiv = (PFNGLGETUNIFORMIVPROC) load(userptr, "glGetUniformiv");
    glo_glGetVertexAttribPointerv = (PFNGLGETVERTEXATTRIBPOINTERVPROC) load(userptr, "glGetVertexAttribPointerv");
    glo_glGetVertexAttribdv = (PFNGLGETVERTEXATTRIBDVPROC) load(userptr, "glGetVertexAttribdv");
    glo_glGetVertexAttribfv = (PFNGLGETVERTEXATTRIBFVPROC) load(userptr, "glGetVertexAttribfv");
    glo_glGetVertexAttribiv = (PFNGLGETVERTEXATTRIBIVPROC) load(userptr, "glGetVertexAttribiv");
    glo_glIsProgram = (PFNGLISPROGRAMPROC) load(userptr, "glIsProgram");
    glo_glIsShader = (PFNGLISSHADERPROC) load(userptr, "glIsShader");
    glo_glLinkProgram = (PFNGLLINKPROGRAMPROC) load(userptr, "glLinkProgram");
    glo_glShaderSource = (PFNGLSHADERSOURCEPROC) load(userptr, "glShaderSource");
    glo_glStencilFuncSeparate = (PFNGLSTENCILFUNCSEPARATEPROC) load(userptr, "glStencilFuncSeparate");
    glo_glStencilMaskSeparate = (PFNGLSTENCILMASKSEPARATEPROC) load(userptr, "glStencilMaskSeparate");
    glo_glStencilOpSeparate = (PFNGLSTENCILOPSEPARATEPROC) load(userptr, "glStencilOpSeparate");
    glo_glUniform1f = (PFNGLUNIFORM1FPROC) load(userptr, "glUniform1f");
    glo_glUniform1fv = (PFNGLUNIFORM1FVPROC) load(userptr, "glUniform1fv");
    glo_glUniform1i = (PFNGLUNIFORM1IPROC) load(userptr, "glUniform1i");
    glo_glUniform1iv = (PFNGLUNIFORM1IVPROC) load(userptr, "glUniform1iv");
    glo_glUniform2f = (PFNGLUNIFORM2FPROC) load(userptr, "glUniform2f");
    glo_glUniform2fv = (PFNGLUNIFORM2FVPROC) load(userptr, "glUniform2fv");
    glo_glUniform2i = (PFNGLUNIFORM2IPROC) load(userptr, "glUniform2i");
    glo_glUniform2iv = (PFNGLUNIFORM2IVPROC) load(userptr, "glUniform2iv");
    glo_glUniform3f = (PFNGLUNIFORM3FPROC) load(userptr, "glUniform3f");
    glo_glUniform3fv = (PFNGLUNIFORM3FVPROC) load(userptr, "glUniform3fv");
    glo_glUniform3i = (PFNGLUNIFORM3IPROC) load(userptr, "glUniform3i");
    glo_glUniform3iv = (PFNGLUNIFORM3IVPROC) load(userptr, "glUniform3iv");
    glo_glUniform4f = (PFNGLUNIFORM4FPROC) load(userptr, "glUniform4f");
    glo_glUniform4fv = (PFNGLUNIFORM4FVPROC) load(userptr, "glUniform4fv");
    glo_glUniform4i = (PFNGLUNIFORM4IPROC) load(userptr, "glUniform4i");
    glo_glUniform4iv = (PFNGLUNIFORM4IVPROC) load(userptr, "glUniform4iv");
    glo_glUniformMatrix2fv = (PFNGLUNIFORMMATRIX2FVPROC) load(userptr, "glUniformMatrix2fv");
    glo_glUniformMatrix3fv = (PFNGLUNIFORMMATRIX3FVPROC) load(userptr, "glUniformMatrix3fv");
    glo_glUniformMatrix4fv = (PFNGLUNIFORMMATRIX4FVPROC) load(userptr, "glUniformMatrix4fv");
    glo_glUseProgram = (PFNGLUSEPROGRAMPROC) load(userptr, "glUseProgram");
    glo_glValidateProgram = (PFNGLVALIDATEPROGRAMPROC) load(userptr, "glValidateProgram");
    glo_glVertexAttrib1d = (PFNGLVERTEXATTRIB1DPROC) load(userptr, "glVertexAttrib1d");
    glo_glVertexAttrib1dv = (PFNGLVERTEXATTRIB1DVPROC) load(userptr, "glVertexAttrib1dv");
    glo_glVertexAttrib1f = (PFNGLVERTEXATTRIB1FPROC) load(userptr, "glVertexAttrib1f");
    glo_glVertexAttrib1fv = (PFNGLVERTEXATTRIB1FVPROC) load(userptr, "glVertexAttrib1fv");
    glo_glVertexAttrib1s = (PFNGLVERTEXATTRIB1SPROC) load(userptr, "glVertexAttrib1s");
    glo_glVertexAttrib1sv = (PFNGLVERTEXATTRIB1SVPROC) load(userptr, "glVertexAttrib1sv");
    glo_glVertexAttrib2d = (PFNGLVERTEXATTRIB2DPROC) load(userptr, "glVertexAttrib2d");
    glo_glVertexAttrib2dv = (PFNGLVERTEXATTRIB2DVPROC) load(userptr, "glVertexAttrib2dv");
    glo_glVertexAttrib2f = (PFNGLVERTEXATTRIB2FPROC) load(userptr, "glVertexAttrib2f");
    glo_glVertexAttrib2fv = (PFNGLVERTEXATTRIB2FVPROC) load(userptr, "glVertexAttrib2fv");
    glo_glVertexAttrib2s = (PFNGLVERTEXATTRIB2SPROC) load(userptr, "glVertexAttrib2s");
    glo_glVertexAttrib2sv = (PFNGLVERTEXATTRIB2SVPROC) load(userptr, "glVertexAttrib2sv");
    glo_glVertexAttrib3d = (PFNGLVERTEXATTRIB3DPROC) load(userptr, "glVertexAttrib3d");
    glo_glVertexAttrib3dv = (PFNGLVERTEXATTRIB3DVPROC) load(userptr, "glVertexAttrib3dv");
    glo_glVertexAttrib3f = (PFNGLVERTEXATTRIB3FPROC) load(userptr, "glVertexAttrib3f");
    glo_glVertexAttrib3fv = (PFNGLVERTEXATTRIB3FVPROC) load(userptr, "glVertexAttrib3fv");
    glo_glVertexAttrib3s = (PFNGLVERTEXATTRIB3SPROC) load(userptr, "glVertexAttrib3s");
    glo_glVertexAttrib3sv = (PFNGLVERTEXATTRIB3SVPROC) load(userptr, "glVertexAttrib3sv");
    glo_glVertexAttrib4Nbv = (PFNGLVERTEXATTRIB4NBVPROC) load(userptr, "glVertexAttrib4Nbv");
    glo_glVertexAttrib4Niv = (PFNGLVERTEXATTRIB4NIVPROC) load(userptr, "glVertexAttrib4Niv");
    glo_glVertexAttrib4Nsv = (PFNGLVERTEXATTRIB4NSVPROC) load(userptr, "glVertexAttrib4Nsv");
    glo_glVertexAttrib4Nub = (PFNGLVERTEXATTRIB4NUBPROC) load(userptr, "glVertexAttrib4Nub");
    glo_glVertexAttrib4Nubv = (PFNGLVERTEXATTRIB4NUBVPROC) load(userptr, "glVertexAttrib4Nubv");
    glo_glVertexAttrib4Nuiv = (PFNGLVERTEXATTRIB4NUIVPROC) load(userptr, "glVertexAttrib4Nuiv");
    glo_glVertexAttrib4Nusv = (PFNGLVERTEXATTRIB4NUSVPROC) load(userptr, "glVertexAttrib4Nusv");
    glo_glVertexAttrib4bv = (PFNGLVERTEXATTRIB4BVPROC) load(userptr, "glVertexAttrib4bv");
    glo_glVertexAttrib4d = (PFNGLVERTEXATTRIB4DPROC) load(userptr, "glVertexAttrib4d");
    glo_glVertexAttrib4dv = (PFNGLVERTEXATTRIB4DVPROC) load(userptr, "glVertexAttrib4dv");
    glo_glVertexAttrib4f = (PFNGLVERTEXATTRIB4FPROC) load(userptr, "glVertexAttrib4f");
    glo_glVertexAttrib4fv = (PFNGLVERTEXATTRIB4FVPROC) load(userptr, "glVertexAttrib4fv");
    glo_glVertexAttrib4iv = (PFNGLVERTEXATTRIB4IVPROC) load(userptr, "glVertexAttrib4iv");
    glo_glVertexAttrib4s = (PFNGLVERTEXATTRIB4SPROC) load(userptr, "glVertexAttrib4s");
    glo_glVertexAttrib4sv = (PFNGLVERTEXATTRIB4SVPROC) load(userptr, "glVertexAttrib4sv");
    glo_glVertexAttrib4ubv = (PFNGLVERTEXATTRIB4UBVPROC) load(userptr, "glVertexAttrib4ubv");
    glo_glVertexAttrib4uiv = (PFNGLVERTEXATTRIB4UIVPROC) load(userptr, "glVertexAttrib4uiv");
    glo_glVertexAttrib4usv = (PFNGLVERTEXATTRIB4USVPROC) load(userptr, "glVertexAttrib4usv");
    glo_glVertexAttribPointer = (PFNGLVERTEXATTRIBPOINTERPROC) load(userptr, "glVertexAttribPointer");
}
static void glo_gl_load_GL_VERSION_2_1( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_2_1) return;
    glo_glUniformMatrix2x3fv = (PFNGLUNIFORMMATRIX2X3FVPROC) load(userptr, "glUniformMatrix2x3fv");
    glo_glUniformMatrix2x4fv = (PFNGLUNIFORMMATRIX2X4FVPROC) load(userptr, "glUniformMatrix2x4fv");
    glo_glUniformMatrix3x2fv = (PFNGLUNIFORMMATRIX3X2FVPROC) load(userptr, "glUniformMatrix3x2fv");
    glo_glUniformMatrix3x4fv = (PFNGLUNIFORMMATRIX3X4FVPROC) load(userptr, "glUniformMatrix3x4fv");
    glo_glUniformMatrix4x2fv = (PFNGLUNIFORMMATRIX4X2FVPROC) load(userptr, "glUniformMatrix4x2fv");
    glo_glUniformMatrix4x3fv = (PFNGLUNIFORMMATRIX4X3FVPROC) load(userptr, "glUniformMatrix4x3fv");
}
static void glo_gl_load_GL_VERSION_3_0( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_3_0) return;
    glo_glBeginConditionalRender = (PFNGLBEGINCONDITIONALRENDERPROC) load(userptr, "glBeginConditionalRender");
    glo_glBeginTransformFeedback = (PFNGLBEGINTRANSFORMFEEDBACKPROC) load(userptr, "glBeginTransformFeedback");
    glo_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glo_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glo_glBindFragDataLocation = (PFNGLBINDFRAGDATALOCATIONPROC) load(userptr, "glBindFragDataLocation");
    glo_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glo_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glo_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    glo_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    glo_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glo_glClampColor = (PFNGLCLAMPCOLORPROC) load(userptr, "glClampColor");
    glo_glClearBufferfi = (PFNGLCLEARBUFFERFIPROC) load(userptr, "glClearBufferfi");
    glo_glClearBufferfv = (PFNGLCLEARBUFFERFVPROC) load(userptr, "glClearBufferfv");
    glo_glClearBufferiv = (PFNGLCLEARBUFFERIVPROC) load(userptr, "glClearBufferiv");
    glo_glClearBufferuiv = (PFNGLCLEARBUFFERUIVPROC) load(userptr, "glClearBufferuiv");
    glo_glColorMaski = (PFNGLCOLORMASKIPROC) load(userptr, "glColorMaski");
    glo_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glo_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glo_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    glo_glDisablei = (PFNGLDISABLEIPROC) load(userptr, "glDisablei");
    glo_glEnablei = (PFNGLENABLEIPROC) load(userptr, "glEnablei");
    glo_glEndConditionalRender = (PFNGLENDCONDITIONALRENDERPROC) load(userptr, "glEndConditionalRender");
    glo_glEndTransformFeedback = (PFNGLENDTRANSFORMFEEDBACKPROC) load(userptr, "glEndTransformFeedback");
    glo_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    glo_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glo_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) load(userptr, "glFramebufferTexture1D");
    glo_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glo_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) load(userptr, "glFramebufferTexture3D");
    glo_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    glo_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glo_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glo_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    glo_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glo_glGetBooleani_v = (PFNGLGETBOOLEANI_VPROC) load(userptr, "glGetBooleani_v");
    glo_glGetFragDataLocation = (PFNGLGETFRAGDATALOCATIONPROC) load(userptr, "glGetFragDataLocation");
    glo_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glo_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glo_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glo_glGetStringi = (PFNGLGETSTRINGIPROC) load(userptr, "glGetStringi");
    glo_glGetTexParameterIiv = (PFNGLGETTEXPARAMETERIIVPROC) load(userptr, "glGetTexParameterIiv");
    glo_glGetTexParameterIuiv = (PFNGLGETTEXPARAMETERIUIVPROC) load(userptr, "glGetTexParameterIuiv");
    glo_glGetTransformFeedbackVarying = (PFNGLGETTRANSFORMFEEDBACKVARYINGPROC) load(userptr, "glGetTransformFeedbackVarying");
    glo_glGetUniformuiv = (PFNGLGETUNIFORMUIVPROC) load(userptr, "glGetUniformuiv");
    glo_glGetVertexAttribIiv = (PFNGLGETVERTEXATTRIBIIVPROC) load(userptr, "glGetVertexAttribIiv");
    glo_glGetVertexAttribIuiv = (PFNGLGETVERTEXATTRIBIUIVPROC) load(userptr, "glGetVertexAttribIuiv");
    glo_glIsEnabledi = (PFNGLISENABLEDIPROC) load(userptr, "glIsEnabledi");
    glo_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glo_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glo_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
    glo_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
    glo_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glo_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
    glo_glTexParameterIiv = (PFNGLTEXPARAMETERIIVPROC) load(userptr, "glTexParameterIiv");
    glo_glTexParameterIuiv = (PFNGLTEXPARAMETERIUIVPROC) load(userptr, "glTexParameterIuiv");
    glo_glTransformFeedbackVaryings = (PFNGLTRANSFORMFEEDBACKVARYINGSPROC) load(userptr, "glTransformFeedbackVaryings");
    glo_glUniform1ui = (PFNGLUNIFORM1UIPROC) load(userptr, "glUniform1ui");
    glo_glUniform1uiv = (PFNGLUNIFORM1UIVPROC) load(userptr, "glUniform1uiv");
    glo_glUniform2ui = (PFNGLUNIFORM2UIPROC) load(userptr, "glUniform2ui");
    glo_glUniform2uiv = (PFNGLUNIFORM2UIVPROC) load(userptr, "glUniform2uiv");
    glo_glUniform3ui = (PFNGLUNIFORM3UIPROC) load(userptr, "glUniform3ui");
    glo_glUniform3uiv = (PFNGLUNIFORM3UIVPROC) load(userptr, "glUniform3uiv");
    glo_glUniform4ui = (PFNGLUNIFORM4UIPROC) load(userptr, "glUniform4ui");
    glo_glUniform4uiv = (PFNGLUNIFORM4UIVPROC) load(userptr, "glUniform4uiv");
    glo_glVertexAttribI1i = (PFNGLVERTEXATTRIBI1IPROC) load(userptr, "glVertexAttribI1i");
    glo_glVertexAttribI1iv = (PFNGLVERTEXATTRIBI1IVPROC) load(userptr, "glVertexAttribI1iv");
    glo_glVertexAttribI1ui = (PFNGLVERTEXATTRIBI1UIPROC) load(userptr, "glVertexAttribI1ui");
    glo_glVertexAttribI1uiv = (PFNGLVERTEXATTRIBI1UIVPROC) load(userptr, "glVertexAttribI1uiv");
    glo_glVertexAttribI2i = (PFNGLVERTEXATTRIBI2IPROC) load(userptr, "glVertexAttribI2i");
    glo_glVertexAttribI2iv = (PFNGLVERTEXATTRIBI2IVPROC) load(userptr, "glVertexAttribI2iv");
    glo_glVertexAttribI2ui = (PFNGLVERTEXATTRIBI2UIPROC) load(userptr, "glVertexAttribI2ui");
    glo_glVertexAttribI2uiv = (PFNGLVERTEXATTRIBI2UIVPROC) load(userptr, "glVertexAttribI2uiv");
    glo_glVertexAttribI3i = (PFNGLVERTEXATTRIBI3IPROC) load(userptr, "glVertexAttribI3i");
    glo_glVertexAttribI3iv = (PFNGLVERTEXATTRIBI3IVPROC) load(userptr, "glVertexAttribI3iv");
    glo_glVertexAttribI3ui = (PFNGLVERTEXATTRIBI3UIPROC) load(userptr, "glVertexAttribI3ui");
    glo_glVertexAttribI3uiv = (PFNGLVERTEXATTRIBI3UIVPROC) load(userptr, "glVertexAttribI3uiv");
    glo_glVertexAttribI4bv = (PFNGLVERTEXATTRIBI4BVPROC) load(userptr, "glVertexAttribI4bv");
    glo_glVertexAttribI4i = (PFNGLVERTEXATTRIBI4IPROC) load(userptr, "glVertexAttribI4i");
    glo_glVertexAttribI4iv = (PFNGLVERTEXATTRIBI4IVPROC) load(userptr, "glVertexAttribI4iv");
    glo_glVertexAttribI4sv = (PFNGLVERTEXATTRIBI4SVPROC) load(userptr, "glVertexAttribI4sv");
    glo_glVertexAttribI4ubv = (PFNGLVERTEXATTRIBI4UBVPROC) load(userptr, "glVertexAttribI4ubv");
    glo_glVertexAttribI4ui = (PFNGLVERTEXATTRIBI4UIPROC) load(userptr, "glVertexAttribI4ui");
    glo_glVertexAttribI4uiv = (PFNGLVERTEXATTRIBI4UIVPROC) load(userptr, "glVertexAttribI4uiv");
    glo_glVertexAttribI4usv = (PFNGLVERTEXATTRIBI4USVPROC) load(userptr, "glVertexAttribI4usv");
    glo_glVertexAttribIPointer = (PFNGLVERTEXATTRIBIPOINTERPROC) load(userptr, "glVertexAttribIPointer");
}
static void glo_gl_load_GL_VERSION_3_1( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_3_1) return;
    glo_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glo_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glo_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) load(userptr, "glCopyBufferSubData");
    glo_glDrawArraysInstanced = (PFNGLDRAWARRAYSINSTANCEDPROC) load(userptr, "glDrawArraysInstanced");
    glo_glDrawElementsInstanced = (PFNGLDRAWELEMENTSINSTANCEDPROC) load(userptr, "glDrawElementsInstanced");
    glo_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) load(userptr, "glGetActiveUniformBlockName");
    glo_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) load(userptr, "glGetActiveUniformBlockiv");
    glo_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) load(userptr, "glGetActiveUniformName");
    glo_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) load(userptr, "glGetActiveUniformsiv");
    glo_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glo_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) load(userptr, "glGetUniformBlockIndex");
    glo_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) load(userptr, "glGetUniformIndices");
    glo_glPrimitiveRestartIndex = (PFNGLPRIMITIVERESTARTINDEXPROC) load(userptr, "glPrimitiveRestartIndex");
    glo_glTexBuffer = (PFNGLTEXBUFFERPROC) load(userptr, "glTexBuffer");
    glo_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) load(userptr, "glUniformBlockBinding");
}
static void glo_gl_load_GL_VERSION_3_2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_3_2) return;
    glo_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) load(userptr, "glClientWaitSync");
    glo_glDeleteSync = (PFNGLDELETESYNCPROC) load(userptr, "glDeleteSync");
    glo_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glDrawElementsBaseVertex");
    glo_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) load(userptr, "glDrawElementsInstancedBaseVertex");
    glo_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) load(userptr, "glDrawRangeElementsBaseVertex");
    glo_glFenceSync = (PFNGLFENCESYNCPROC) load(userptr, "glFenceSync");
    glo_glFramebufferTexture = (PFNGLFRAMEBUFFERTEXTUREPROC) load(userptr, "glFramebufferTexture");
    glo_glGetBufferParameteri64v = (PFNGLGETBUFFERPARAMETERI64VPROC) load(userptr, "glGetBufferParameteri64v");
    glo_glGetInteger64i_v = (PFNGLGETINTEGER64I_VPROC) load(userptr, "glGetInteger64i_v");
    glo_glGetInteger64v = (PFNGLGETINTEGER64VPROC) load(userptr, "glGetInteger64v");
    glo_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) load(userptr, "glGetMultisamplefv");
    glo_glGetSynciv = (PFNGLGETSYNCIVPROC) load(userptr, "glGetSynciv");
    glo_glIsSync = (PFNGLISSYNCPROC) load(userptr, "glIsSync");
    glo_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glMultiDrawElementsBaseVertex");
    glo_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) load(userptr, "glProvokingVertex");
    glo_glSampleMaski = (PFNGLSAMPLEMASKIPROC) load(userptr, "glSampleMaski");
    glo_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) load(userptr, "glTexImage2DMultisample");
    glo_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) load(userptr, "glTexImage3DMultisample");
    glo_glWaitSync = (PFNGLWAITSYNCPROC) load(userptr, "glWaitSync");
}
static void glo_gl_load_GL_VERSION_3_3( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_3_3) return;
    glo_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) load(userptr, "glBindFragDataLocationIndexed");
    glo_glBindSampler = (PFNGLBINDSAMPLERPROC) load(userptr, "glBindSampler");
    glo_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) load(userptr, "glDeleteSamplers");
    glo_glGenSamplers = (PFNGLGENSAMPLERSPROC) load(userptr, "glGenSamplers");
    glo_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) load(userptr, "glGetFragDataIndex");
    glo_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) load(userptr, "glGetQueryObjecti64v");
    glo_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) load(userptr, "glGetQueryObjectui64v");
    glo_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) load(userptr, "glGetSamplerParameterIiv");
    glo_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) load(userptr, "glGetSamplerParameterIuiv");
    glo_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) load(userptr, "glGetSamplerParameterfv");
    glo_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) load(userptr, "glGetSamplerParameteriv");
    glo_glIsSampler = (PFNGLISSAMPLERPROC) load(userptr, "glIsSampler");
    glo_glQueryCounter = (PFNGLQUERYCOUNTERPROC) load(userptr, "glQueryCounter");
    glo_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) load(userptr, "glSamplerParameterIiv");
    glo_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) load(userptr, "glSamplerParameterIuiv");
    glo_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) load(userptr, "glSamplerParameterf");
    glo_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) load(userptr, "glSamplerParameterfv");
    glo_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) load(userptr, "glSamplerParameteri");
    glo_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) load(userptr, "glSamplerParameteriv");
    glo_glVertexAttribDivisor = (PFNGLVERTEXATTRIBDIVISORPROC) load(userptr, "glVertexAttribDivisor");
    glo_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) load(userptr, "glVertexAttribP1ui");
    glo_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) load(userptr, "glVertexAttribP1uiv");
    glo_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) load(userptr, "glVertexAttribP2ui");
    glo_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) load(userptr, "glVertexAttribP2uiv");
    glo_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) load(userptr, "glVertexAttribP3ui");
    glo_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) load(userptr, "glVertexAttribP3uiv");
    glo_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) load(userptr, "glVertexAttribP4ui");
    glo_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) load(userptr, "glVertexAttribP4uiv");
}
static void glo_gl_load_GL_VERSION_4_0( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_0) return;
    glo_glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) load(userptr, "glBeginQueryIndexed");
    glo_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) load(userptr, "glBindTransformFeedback");
    glo_glBlendEquationSeparatei = (PFNGLBLENDEQUATIONSEPARATEIPROC) load(userptr, "glBlendEquationSeparatei");
    glo_glBlendEquationi = (PFNGLBLENDEQUATIONIPROC) load(userptr, "glBlendEquationi");
    glo_glBlendFuncSeparatei = (PFNGLBLENDFUNCSEPARATEIPROC) load(userptr, "glBlendFuncSeparatei");
    glo_glBlendFunci = (PFNGLBLENDFUNCIPROC) load(userptr, "glBlendFunci");
    glo_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) load(userptr, "glDeleteTransformFeedbacks");
    glo_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) load(userptr, "glDrawArraysIndirect");
    glo_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) load(userptr, "glDrawElementsIndirect");
    glo_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) load(userptr, "glDrawTransformFeedback");
    glo_glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) load(userptr, "glDrawTransformFeedbackStream");
    glo_glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) load(userptr, "glEndQueryIndexed");
    glo_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) load(userptr, "glGenTransformFeedbacks");
    glo_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) load(userptr, "glGetActiveSubroutineName");
    glo_glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) load(userptr, "glGetActiveSubroutineUniformName");
    glo_glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) load(userptr, "glGetActiveSubroutineUniformiv");
    glo_glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) load(userptr, "glGetProgramStageiv");
    glo_glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) load(userptr, "glGetQueryIndexediv");
    glo_glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) load(userptr, "glGetSubroutineIndex");
    glo_glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) load(userptr, "glGetSubroutineUniformLocation");
    glo_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) load(userptr, "glGetUniformSubroutineuiv");
    glo_glGetUniformdv = (PFNGLGETUNIFORMDVPROC) load(userptr, "glGetUniformdv");
    glo_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) load(userptr, "glIsTransformFeedback");
    glo_glMinSampleShading = (PFNGLMINSAMPLESHADINGPROC) load(userptr, "glMinSampleShading");
    glo_glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) load(userptr, "glPatchParameterfv");
    glo_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) load(userptr, "glPatchParameteri");
    glo_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) load(userptr, "glPauseTransformFeedback");
    glo_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) load(userptr, "glResumeTransformFeedback");
    glo_glUniform1d = (PFNGLUNIFORM1DPROC) load(userptr, "glUniform1d");
    glo_glUniform1dv = (PFNGLUNIFORM1DVPROC) load(userptr, "glUniform1dv");
    glo_glUniform2d = (PFNGLUNIFORM2DPROC) load(userptr, "glUniform2d");
    glo_glUniform2dv = (PFNGLUNIFORM2DVPROC) load(userptr, "glUniform2dv");
    glo_glUniform3d = (PFNGLUNIFORM3DPROC) load(userptr, "glUniform3d");
    glo_glUniform3dv = (PFNGLUNIFORM3DVPROC) load(userptr, "glUniform3dv");
    glo_glUniform4d = (PFNGLUNIFORM4DPROC) load(userptr, "glUniform4d");
    glo_glUniform4dv = (PFNGLUNIFORM4DVPROC) load(userptr, "glUniform4dv");
    glo_glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) load(userptr, "glUniformMatrix2dv");
    glo_glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) load(userptr, "glUniformMatrix2x3dv");
    glo_glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) load(userptr, "glUniformMatrix2x4dv");
    glo_glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) load(userptr, "glUniformMatrix3dv");
    glo_glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) load(userptr, "glUniformMatrix3x2dv");
    glo_glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) load(userptr, "glUniformMatrix3x4dv");
    glo_glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) load(userptr, "glUniformMatrix4dv");
    glo_glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) load(userptr, "glUniformMatrix4x2dv");
    glo_glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) load(userptr, "glUniformMatrix4x3dv");
    glo_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) load(userptr, "glUniformSubroutinesuiv");
}
static void glo_gl_load_GL_VERSION_4_1( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_1) return;
    glo_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) load(userptr, "glActiveShaderProgram");
    glo_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) load(userptr, "glBindProgramPipeline");
    glo_glClearDepthf = (PFNGLCLEARDEPTHFPROC) load(userptr, "glClearDepthf");
    glo_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) load(userptr, "glCreateShaderProgramv");
    glo_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) load(userptr, "glDeleteProgramPipelines");
    glo_glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) load(userptr, "glDepthRangeArrayv");
    glo_glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) load(userptr, "glDepthRangeIndexed");
    glo_glDepthRangef = (PFNGLDEPTHRANGEFPROC) load(userptr, "glDepthRangef");
    glo_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) load(userptr, "glGenProgramPipelines");
    glo_glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) load(userptr, "glGetDoublei_v");
    glo_glGetFloati_v = (PFNGLGETFLOATI_VPROC) load(userptr, "glGetFloati_v");
    glo_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) load(userptr, "glGetProgramBinary");
    glo_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) load(userptr, "glGetProgramPipelineInfoLog");
    glo_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) load(userptr, "glGetProgramPipelineiv");
    glo_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) load(userptr, "glGetShaderPrecisionFormat");
    glo_glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) load(userptr, "glGetVertexAttribLdv");
    glo_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) load(userptr, "glIsProgramPipeline");
    glo_glProgramBinary = (PFNGLPROGRAMBINARYPROC) load(userptr, "glProgramBinary");
    glo_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
    glo_glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) load(userptr, "glProgramUniform1d");
    glo_glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) load(userptr, "glProgramUniform1dv");
    glo_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) load(userptr, "glProgramUniform1f");
    glo_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) load(userptr, "glProgramUniform1fv");
    glo_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) load(userptr, "glProgramUniform1i");
    glo_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) load(userptr, "glProgramUniform1iv");
    glo_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) load(userptr, "glProgramUniform1ui");
    glo_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) load(userptr, "glProgramUniform1uiv");
    glo_glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) load(userptr, "glProgramUniform2d");
    glo_glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) load(userptr, "glProgramUniform2dv");
    glo_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) load(userptr, "glProgramUniform2f");
    glo_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) load(userptr, "glProgramUniform2fv");
    glo_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) load(userptr, "glProgramUniform2i");
    glo_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) load(userptr, "glProgramUniform2iv");
    glo_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) load(userptr, "glProgramUniform2ui");
    glo_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) load(userptr, "glProgramUniform2uiv");
    glo_glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) load(userptr, "glProgramUniform3d");
    glo_glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) load(userptr, "glProgramUniform3dv");
    glo_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) load(userptr, "glProgramUniform3f");
    glo_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) load(userptr, "glProgramUniform3fv");
    glo_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) load(userptr, "glProgramUniform3i");
    glo_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) load(userptr, "glProgramUniform3iv");
    glo_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) load(userptr, "glProgramUniform3ui");
    glo_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) load(userptr, "glProgramUniform3uiv");
    glo_glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) load(userptr, "glProgramUniform4d");
    glo_glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) load(userptr, "glProgramUniform4dv");
    glo_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) load(userptr, "glProgramUniform4f");
    glo_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) load(userptr, "glProgramUniform4fv");
    glo_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) load(userptr, "glProgramUniform4i");
    glo_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) load(userptr, "glProgramUniform4iv");
    glo_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) load(userptr, "glProgramUniform4ui");
    glo_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) load(userptr, "glProgramUniform4uiv");
    glo_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) load(userptr, "glProgramUniformMatrix2dv");
    glo_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) load(userptr, "glProgramUniformMatrix2fv");
    glo_glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) load(userptr, "glProgramUniformMatrix2x3dv");
    glo_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) load(userptr, "glProgramUniformMatrix2x3fv");
    glo_glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) load(userptr, "glProgramUniformMatrix2x4dv");
    glo_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) load(userptr, "glProgramUniformMatrix2x4fv");
    glo_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) load(userptr, "glProgramUniformMatrix3dv");
    glo_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) load(userptr, "glProgramUniformMatrix3fv");
    glo_glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) load(userptr, "glProgramUniformMatrix3x2dv");
    glo_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) load(userptr, "glProgramUniformMatrix3x2fv");
    glo_glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) load(userptr, "glProgramUniformMatrix3x4dv");
    glo_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) load(userptr, "glProgramUniformMatrix3x4fv");
    glo_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) load(userptr, "glProgramUniformMatrix4dv");
    glo_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) load(userptr, "glProgramUniformMatrix4fv");
    glo_glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) load(userptr, "glProgramUniformMatrix4x2dv");
    glo_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) load(userptr, "glProgramUniformMatrix4x2fv");
    glo_glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) load(userptr, "glProgramUniformMatrix4x3dv");
    glo_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) load(userptr, "glProgramUniformMatrix4x3fv");
    glo_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) load(userptr, "glReleaseShaderCompiler");
    glo_glScissorArrayv = (PFNGLSCISSORARRAYVPROC) load(userptr, "glScissorArrayv");
    glo_glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) load(userptr, "glScissorIndexed");
    glo_glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) load(userptr, "glScissorIndexedv");
    glo_glShaderBinary = (PFNGLSHADERBINARYPROC) load(userptr, "glShaderBinary");
    glo_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) load(userptr, "glUseProgramStages");
    glo_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) load(userptr, "glValidateProgramPipeline");
    glo_glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) load(userptr, "glVertexAttribL1d");
    glo_glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) load(userptr, "glVertexAttribL1dv");
    glo_glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) load(userptr, "glVertexAttribL2d");
    glo_glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) load(userptr, "glVertexAttribL2dv");
    glo_glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) load(userptr, "glVertexAttribL3d");
    glo_glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) load(userptr, "glVertexAttribL3dv");
    glo_glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) load(userptr, "glVertexAttribL4d");
    glo_glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) load(userptr, "glVertexAttribL4dv");
    glo_glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) load(userptr, "glVertexAttribLPointer");
    glo_glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) load(userptr, "glViewportArrayv");
    glo_glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) load(userptr, "glViewportIndexedf");
    glo_glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) load(userptr, "glViewportIndexedfv");
}
static void glo_gl_load_GL_VERSION_4_2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_2) return;
    glo_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) load(userptr, "glBindImageTexture");
    glo_glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) load(userptr, "glDrawArraysInstancedBaseInstance");
    glo_glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) load(userptr, "glDrawElementsInstancedBaseInstance");
    glo_glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) load(userptr, "glDrawElementsInstancedBaseVertexBaseInstance");
    glo_glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) load(userptr, "glDrawTransformFeedbackInstanced");
    glo_glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) load(userptr, "glDrawTransformFeedbackStreamInstanced");
    glo_glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) load(userptr, "glGetActiveAtomicCounterBufferiv");
    glo_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) load(userptr, "glGetInternalformativ");
    glo_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) load(userptr, "glMemoryBarrier");
    glo_glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) load(userptr, "glTexStorage1D");
    glo_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) load(userptr, "glTexStorage2D");
    glo_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) load(userptr, "glTexStorage3D");
}
static void glo_gl_load_GL_VERSION_4_3( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_3) return;
    glo_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) load(userptr, "glBindVertexBuffer");
    glo_glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) load(userptr, "glClearBufferData");
    glo_glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) load(userptr, "glClearBufferSubData");
    glo_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) load(userptr, "glCopyImageSubData");
    glo_glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) load(userptr, "glDebugMessageCallback");
    glo_glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) load(userptr, "glDebugMessageControl");
    glo_glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) load(userptr, "glDebugMessageInsert");
    glo_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) load(userptr, "glDispatchCompute");
    glo_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) load(userptr, "glDispatchComputeIndirect");
    glo_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) load(userptr, "glFramebufferParameteri");
    glo_glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) load(userptr, "glGetDebugMessageLog");
    glo_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetFramebufferParameteriv");
    glo_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) load(userptr, "glGetInternalformati64v");
    glo_glGetObjectLabel = (PFNGLGETOBJECTLABELPROC) load(userptr, "glGetObjectLabel");
    glo_glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) load(userptr, "glGetObjectPtrLabel");
    glo_glGetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    glo_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) load(userptr, "glGetProgramInterfaceiv");
    glo_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) load(userptr, "glGetProgramResourceIndex");
    glo_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) load(userptr, "glGetProgramResourceLocation");
    glo_glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) load(userptr, "glGetProgramResourceLocationIndex");
    glo_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) load(userptr, "glGetProgramResourceName");
    glo_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) load(userptr, "glGetProgramResourceiv");
    glo_glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) load(userptr, "glInvalidateBufferData");
    glo_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) load(userptr, "glInvalidateBufferSubData");
    glo_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) load(userptr, "glInvalidateFramebuffer");
    glo_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) load(userptr, "glInvalidateSubFramebuffer");
    glo_glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) load(userptr, "glInvalidateTexImage");
    glo_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) load(userptr, "glInvalidateTexSubImage");
    glo_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) load(userptr, "glMultiDrawArraysIndirect");
    glo_glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) load(userptr, "glMultiDrawElementsIndirect");
    glo_glObjectLabel = (PFNGLOBJECTLABELPROC) load(userptr, "glObjectLabel");
    glo_glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) load(userptr, "glObjectPtrLabel");
    glo_glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) load(userptr, "glPopDebugGroup");
    glo_glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) load(userptr, "glPushDebugGroup");
    glo_glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) load(userptr, "glShaderStorageBlockBinding");
    glo_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) load(userptr, "glTexBufferRange");
    glo_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) load(userptr, "glTexStorage2DMultisample");
    glo_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) load(userptr, "glTexStorage3DMultisample");
    glo_glTextureView = (PFNGLTEXTUREVIEWPROC) load(userptr, "glTextureView");
    glo_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) load(userptr, "glVertexAttribBinding");
    glo_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) load(userptr, "glVertexAttribFormat");
    glo_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) load(userptr, "glVertexAttribIFormat");
    glo_glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) load(userptr, "glVertexAttribLFormat");
    glo_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) load(userptr, "glVertexBindingDivisor");
}
static void glo_gl_load_GL_VERSION_4_4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_4) return;
    glo_glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) load(userptr, "glBindBuffersBase");
    glo_glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) load(userptr, "glBindBuffersRange");
    glo_glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) load(userptr, "glBindImageTextures");
    glo_glBindSamplers = (PFNGLBINDSAMPLERSPROC) load(userptr, "glBindSamplers");
    glo_glBindTextures = (PFNGLBINDTEXTURESPROC) load(userptr, "glBindTextures");
    glo_glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) load(userptr, "glBindVertexBuffers");
    glo_glBufferStorage = (PFNGLBUFFERSTORAGEPROC) load(userptr, "glBufferStorage");
    glo_glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) load(userptr, "glClearTexImage");
    glo_glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) load(userptr, "glClearTexSubImage");
}
static void glo_gl_load_GL_VERSION_4_5( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_5) return;
    glo_glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) load(userptr, "glBindTextureUnit");
    glo_glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) load(userptr, "glBlitNamedFramebuffer");
    glo_glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckNamedFramebufferStatus");
    glo_glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) load(userptr, "glClearNamedBufferData");
    glo_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) load(userptr, "glClearNamedBufferSubData");
    glo_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) load(userptr, "glClearNamedFramebufferfi");
    glo_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) load(userptr, "glClearNamedFramebufferfv");
    glo_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) load(userptr, "glClearNamedFramebufferiv");
    glo_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) load(userptr, "glClearNamedFramebufferuiv");
    glo_glClipControl = (PFNGLCLIPCONTROLPROC) load(userptr, "glClipControl");
    glo_glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) load(userptr, "glCompressedTextureSubImage1D");
    glo_glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) load(userptr, "glCompressedTextureSubImage2D");
    glo_glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) load(userptr, "glCompressedTextureSubImage3D");
    glo_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) load(userptr, "glCopyNamedBufferSubData");
    glo_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) load(userptr, "glCopyTextureSubImage1D");
    glo_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) load(userptr, "glCopyTextureSubImage2D");
    glo_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) load(userptr, "glCopyTextureSubImage3D");
    glo_glCreateBuffers = (PFNGLCREATEBUFFERSPROC) load(userptr, "glCreateBuffers");
    glo_glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) load(userptr, "glCreateFramebuffers");
    glo_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) load(userptr, "glCreateProgramPipelines");
    glo_glCreateQueries = (PFNGLCREATEQUERIESPROC) load(userptr, "glCreateQueries");
    glo_glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) load(userptr, "glCreateRenderbuffers");
    glo_glCreateSamplers = (PFNGLCREATESAMPLERSPROC) load(userptr, "glCreateSamplers");
    glo_glCreateTextures = (PFNGLCREATETEXTURESPROC) load(userptr, "glCreateTextures");
    glo_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) load(userptr, "glCreateTransformFeedbacks");
    glo_glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) load(userptr, "glCreateVertexArrays");
    glo_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) load(userptr, "glDisableVertexArrayAttrib");
    glo_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) load(userptr, "glEnableVertexArrayAttrib");
    glo_glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) load(userptr, "glFlushMappedNamedBufferRange");
    glo_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) load(userptr, "glGenerateTextureMipmap");
    glo_glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) load(userptr, "glGetCompressedTextureImage");
    glo_glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) load(userptr, "glGetCompressedTextureSubImage");
    glo_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) load(userptr, "glGetGraphicsResetStatus");
    glo_glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) load(userptr, "glGetNamedBufferParameteri64v");
    glo_glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedBufferParameteriv");
    glo_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) load(userptr, "glGetNamedBufferPointerv");
    glo_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) load(userptr, "glGetNamedBufferSubData");
    glo_glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetNamedFramebufferAttachmentParameteriv");
    glo_glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedFramebufferParameteriv");
    glo_glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedRenderbufferParameteriv");
    glo_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) load(userptr, "glGetQueryBufferObjecti64v");
    glo_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) load(userptr, "glGetQueryBufferObjectiv");
    glo_glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) load(userptr, "glGetQueryBufferObjectui64v");
    glo_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) load(userptr, "glGetQueryBufferObjectuiv");
    glo_glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) load(userptr, "glGetTextureImage");
    glo_glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) load(userptr, "glGetTextureLevelParameterfv");
    glo_glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) load(userptr, "glGetTextureLevelParameteriv");
    glo_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) load(userptr, "glGetTextureParameterIiv");
    glo_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) load(userptr, "glGetTextureParameterIuiv");
    glo_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) load(userptr, "glGetTextureParameterfv");
    glo_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) load(userptr, "glGetTextureParameteriv");
    glo_glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) load(userptr, "glGetTextureSubImage");
    glo_glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) load(userptr, "glGetTransformFeedbacki64_v");
    glo_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) load(userptr, "glGetTransformFeedbacki_v");
    glo_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) load(userptr, "glGetTransformFeedbackiv");
    glo_glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) load(userptr, "glGetVertexArrayIndexed64iv");
    glo_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) load(userptr, "glGetVertexArrayIndexediv");
    glo_glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) load(userptr, "glGetVertexArrayiv");
    glo_glGetnCompressedTexImage = (PFNGLGETNCOMPRESSEDTEXIMAGEPROC) load(userptr, "glGetnCompressedTexImage");
    glo_glGetnTexImage = (PFNGLGETNTEXIMAGEPROC) load(userptr, "glGetnTexImage");
    glo_glGetnUniformdv = (PFNGLGETNUNIFORMDVPROC) load(userptr, "glGetnUniformdv");
    glo_glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) load(userptr, "glGetnUniformfv");
    glo_glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) load(userptr, "glGetnUniformiv");
    glo_glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) load(userptr, "glGetnUniformuiv");
    glo_glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) load(userptr, "glInvalidateNamedFramebufferData");
    glo_glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) load(userptr, "glInvalidateNamedFramebufferSubData");
    glo_glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) load(userptr, "glMapNamedBuffer");
    glo_glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) load(userptr, "glMapNamedBufferRange");
    glo_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) load(userptr, "glMemoryBarrierByRegion");
    glo_glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) load(userptr, "glNamedBufferData");
    glo_glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) load(userptr, "glNamedBufferStorage");
    glo_glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) load(userptr, "glNamedBufferSubData");
    glo_glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) load(userptr, "glNamedFramebufferDrawBuffer");
    glo_glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) load(userptr, "glNamedFramebufferDrawBuffers");
    glo_glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) load(userptr, "glNamedFramebufferParameteri");
    glo_glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) load(userptr, "glNamedFramebufferReadBuffer");
    glo_glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glNamedFramebufferRenderbuffer");
    glo_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) load(userptr, "glNamedFramebufferTexture");
    glo_glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glNamedFramebufferTextureLayer");
    glo_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) load(userptr, "glNamedRenderbufferStorage");
    glo_glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glNamedRenderbufferStorageMultisample");
    glo_glReadnPixels = (PFNGLREADNPIXELSPROC) load(userptr, "glReadnPixels");
    glo_glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) load(userptr, "glTextureBarrier");
    glo_glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) load(userptr, "glTextureBuffer");
    glo_glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) load(userptr, "glTextureBufferRange");
    glo_glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) load(userptr, "glTextureParameterIiv");
    glo_glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) load(userptr, "glTextureParameterIuiv");
    glo_glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) load(userptr, "glTextureParameterf");
    glo_glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) load(userptr, "glTextureParameterfv");
    glo_glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) load(userptr, "glTextureParameteri");
    glo_glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) load(userptr, "glTextureParameteriv");
    glo_glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) load(userptr, "glTextureStorage1D");
    glo_glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) load(userptr, "glTextureStorage2D");
    glo_glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) load(userptr, "glTextureStorage2DMultisample");
    glo_glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) load(userptr, "glTextureStorage3D");
    glo_glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) load(userptr, "glTextureStorage3DMultisample");
    glo_glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) load(userptr, "glTextureSubImage1D");
    glo_glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) load(userptr, "glTextureSubImage2D");
    glo_glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) load(userptr, "glTextureSubImage3D");
    glo_glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) load(userptr, "glTransformFeedbackBufferBase");
    glo_glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) load(userptr, "glTransformFeedbackBufferRange");
    glo_glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) load(userptr, "glUnmapNamedBuffer");
    glo_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) load(userptr, "glVertexArrayAttribBinding");
    glo_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) load(userptr, "glVertexArrayAttribFormat");
    glo_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) load(userptr, "glVertexArrayAttribIFormat");
    glo_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) load(userptr, "glVertexArrayAttribLFormat");
    glo_glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) load(userptr, "glVertexArrayBindingDivisor");
    glo_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) load(userptr, "glVertexArrayElementBuffer");
    glo_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) load(userptr, "glVertexArrayVertexBuffer");
    glo_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) load(userptr, "glVertexArrayVertexBuffers");
}
static void glo_gl_load_GL_VERSION_4_6( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_VERSION_4_6) return;
    glo_glMultiDrawArraysIndirectCount = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTPROC) load(userptr, "glMultiDrawArraysIndirectCount");
    glo_glMultiDrawElementsIndirectCount = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTPROC) load(userptr, "glMultiDrawElementsIndirectCount");
    glo_glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) load(userptr, "glPolygonOffsetClamp");
    glo_glSpecializeShader = (PFNGLSPECIALIZESHADERPROC) load(userptr, "glSpecializeShader");
}
static void glo_gl_load_GL_3DFX_tbuffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_3DFX_tbuffer) return;
    glo_glTbufferMask3DFX = (PFNGLTBUFFERMASK3DFXPROC) load(userptr, "glTbufferMask3DFX");
}
static void glo_gl_load_GL_AMD_debug_output( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_debug_output) return;
    glo_glDebugMessageCallbackAMD = (PFNGLDEBUGMESSAGECALLBACKAMDPROC) load(userptr, "glDebugMessageCallbackAMD");
    glo_glDebugMessageEnableAMD = (PFNGLDEBUGMESSAGEENABLEAMDPROC) load(userptr, "glDebugMessageEnableAMD");
    glo_glDebugMessageInsertAMD = (PFNGLDEBUGMESSAGEINSERTAMDPROC) load(userptr, "glDebugMessageInsertAMD");
    glo_glGetDebugMessageLogAMD = (PFNGLGETDEBUGMESSAGELOGAMDPROC) load(userptr, "glGetDebugMessageLogAMD");
}
static void glo_gl_load_GL_AMD_draw_buffers_blend( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_draw_buffers_blend) return;
    glo_glBlendEquationIndexedAMD = (PFNGLBLENDEQUATIONINDEXEDAMDPROC) load(userptr, "glBlendEquationIndexedAMD");
    glo_glBlendEquationSeparateIndexedAMD = (PFNGLBLENDEQUATIONSEPARATEINDEXEDAMDPROC) load(userptr, "glBlendEquationSeparateIndexedAMD");
    glo_glBlendFuncIndexedAMD = (PFNGLBLENDFUNCINDEXEDAMDPROC) load(userptr, "glBlendFuncIndexedAMD");
    glo_glBlendFuncSeparateIndexedAMD = (PFNGLBLENDFUNCSEPARATEINDEXEDAMDPROC) load(userptr, "glBlendFuncSeparateIndexedAMD");
}
static void glo_gl_load_GL_AMD_framebuffer_multisample_advanced( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_framebuffer_multisample_advanced) return;
    glo_glNamedRenderbufferStorageMultisampleAdvancedAMD = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) load(userptr, "glNamedRenderbufferStorageMultisampleAdvancedAMD");
    glo_glRenderbufferStorageMultisampleAdvancedAMD = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEADVANCEDAMDPROC) load(userptr, "glRenderbufferStorageMultisampleAdvancedAMD");
}
static void glo_gl_load_GL_AMD_framebuffer_sample_positions( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_framebuffer_sample_positions) return;
    glo_glFramebufferSamplePositionsfvAMD = (PFNGLFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC) load(userptr, "glFramebufferSamplePositionsfvAMD");
    glo_glGetFramebufferParameterfvAMD = (PFNGLGETFRAMEBUFFERPARAMETERFVAMDPROC) load(userptr, "glGetFramebufferParameterfvAMD");
    glo_glGetNamedFramebufferParameterfvAMD = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERFVAMDPROC) load(userptr, "glGetNamedFramebufferParameterfvAMD");
    glo_glNamedFramebufferSamplePositionsfvAMD = (PFNGLNAMEDFRAMEBUFFERSAMPLEPOSITIONSFVAMDPROC) load(userptr, "glNamedFramebufferSamplePositionsfvAMD");
}
static void glo_gl_load_GL_AMD_gpu_shader_int64( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_gpu_shader_int64) return;
    glo_glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC) load(userptr, "glGetUniformi64vNV");
    glo_glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC) load(userptr, "glGetUniformui64vNV");
    glo_glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC) load(userptr, "glProgramUniform1i64NV");
    glo_glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC) load(userptr, "glProgramUniform1i64vNV");
    glo_glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC) load(userptr, "glProgramUniform1ui64NV");
    glo_glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) load(userptr, "glProgramUniform1ui64vNV");
    glo_glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC) load(userptr, "glProgramUniform2i64NV");
    glo_glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC) load(userptr, "glProgramUniform2i64vNV");
    glo_glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC) load(userptr, "glProgramUniform2ui64NV");
    glo_glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) load(userptr, "glProgramUniform2ui64vNV");
    glo_glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC) load(userptr, "glProgramUniform3i64NV");
    glo_glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC) load(userptr, "glProgramUniform3i64vNV");
    glo_glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC) load(userptr, "glProgramUniform3ui64NV");
    glo_glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) load(userptr, "glProgramUniform3ui64vNV");
    glo_glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC) load(userptr, "glProgramUniform4i64NV");
    glo_glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC) load(userptr, "glProgramUniform4i64vNV");
    glo_glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC) load(userptr, "glProgramUniform4ui64NV");
    glo_glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) load(userptr, "glProgramUniform4ui64vNV");
    glo_glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC) load(userptr, "glUniform1i64NV");
    glo_glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC) load(userptr, "glUniform1i64vNV");
    glo_glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC) load(userptr, "glUniform1ui64NV");
    glo_glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC) load(userptr, "glUniform1ui64vNV");
    glo_glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC) load(userptr, "glUniform2i64NV");
    glo_glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC) load(userptr, "glUniform2i64vNV");
    glo_glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC) load(userptr, "glUniform2ui64NV");
    glo_glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC) load(userptr, "glUniform2ui64vNV");
    glo_glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC) load(userptr, "glUniform3i64NV");
    glo_glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC) load(userptr, "glUniform3i64vNV");
    glo_glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC) load(userptr, "glUniform3ui64NV");
    glo_glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC) load(userptr, "glUniform3ui64vNV");
    glo_glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC) load(userptr, "glUniform4i64NV");
    glo_glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC) load(userptr, "glUniform4i64vNV");
    glo_glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC) load(userptr, "glUniform4ui64NV");
    glo_glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC) load(userptr, "glUniform4ui64vNV");
}
static void glo_gl_load_GL_AMD_interleaved_elements( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_interleaved_elements) return;
    glo_glVertexAttribParameteriAMD = (PFNGLVERTEXATTRIBPARAMETERIAMDPROC) load(userptr, "glVertexAttribParameteriAMD");
}
static void glo_gl_load_GL_AMD_multi_draw_indirect( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_multi_draw_indirect) return;
    glo_glMultiDrawArraysIndirectAMD = (PFNGLMULTIDRAWARRAYSINDIRECTAMDPROC) load(userptr, "glMultiDrawArraysIndirectAMD");
    glo_glMultiDrawElementsIndirectAMD = (PFNGLMULTIDRAWELEMENTSINDIRECTAMDPROC) load(userptr, "glMultiDrawElementsIndirectAMD");
}
static void glo_gl_load_GL_AMD_name_gen_delete( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_name_gen_delete) return;
    glo_glDeleteNamesAMD = (PFNGLDELETENAMESAMDPROC) load(userptr, "glDeleteNamesAMD");
    glo_glGenNamesAMD = (PFNGLGENNAMESAMDPROC) load(userptr, "glGenNamesAMD");
    glo_glIsNameAMD = (PFNGLISNAMEAMDPROC) load(userptr, "glIsNameAMD");
}
static void glo_gl_load_GL_AMD_occlusion_query_event( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_occlusion_query_event) return;
    glo_glQueryObjectParameteruiAMD = (PFNGLQUERYOBJECTPARAMETERUIAMDPROC) load(userptr, "glQueryObjectParameteruiAMD");
}
static void glo_gl_load_GL_AMD_performance_monitor( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_performance_monitor) return;
    glo_glBeginPerfMonitorAMD = (PFNGLBEGINPERFMONITORAMDPROC) load(userptr, "glBeginPerfMonitorAMD");
    glo_glDeletePerfMonitorsAMD = (PFNGLDELETEPERFMONITORSAMDPROC) load(userptr, "glDeletePerfMonitorsAMD");
    glo_glEndPerfMonitorAMD = (PFNGLENDPERFMONITORAMDPROC) load(userptr, "glEndPerfMonitorAMD");
    glo_glGenPerfMonitorsAMD = (PFNGLGENPERFMONITORSAMDPROC) load(userptr, "glGenPerfMonitorsAMD");
    glo_glGetPerfMonitorCounterDataAMD = (PFNGLGETPERFMONITORCOUNTERDATAAMDPROC) load(userptr, "glGetPerfMonitorCounterDataAMD");
    glo_glGetPerfMonitorCounterInfoAMD = (PFNGLGETPERFMONITORCOUNTERINFOAMDPROC) load(userptr, "glGetPerfMonitorCounterInfoAMD");
    glo_glGetPerfMonitorCounterStringAMD = (PFNGLGETPERFMONITORCOUNTERSTRINGAMDPROC) load(userptr, "glGetPerfMonitorCounterStringAMD");
    glo_glGetPerfMonitorCountersAMD = (PFNGLGETPERFMONITORCOUNTERSAMDPROC) load(userptr, "glGetPerfMonitorCountersAMD");
    glo_glGetPerfMonitorGroupStringAMD = (PFNGLGETPERFMONITORGROUPSTRINGAMDPROC) load(userptr, "glGetPerfMonitorGroupStringAMD");
    glo_glGetPerfMonitorGroupsAMD = (PFNGLGETPERFMONITORGROUPSAMDPROC) load(userptr, "glGetPerfMonitorGroupsAMD");
    glo_glSelectPerfMonitorCountersAMD = (PFNGLSELECTPERFMONITORCOUNTERSAMDPROC) load(userptr, "glSelectPerfMonitorCountersAMD");
}
static void glo_gl_load_GL_AMD_sample_positions( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_sample_positions) return;
    glo_glSetMultisamplefvAMD = (PFNGLSETMULTISAMPLEFVAMDPROC) load(userptr, "glSetMultisamplefvAMD");
}
static void glo_gl_load_GL_AMD_sparse_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_sparse_texture) return;
    glo_glTexStorageSparseAMD = (PFNGLTEXSTORAGESPARSEAMDPROC) load(userptr, "glTexStorageSparseAMD");
    glo_glTextureStorageSparseAMD = (PFNGLTEXTURESTORAGESPARSEAMDPROC) load(userptr, "glTextureStorageSparseAMD");
}
static void glo_gl_load_GL_AMD_stencil_operation_extended( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_stencil_operation_extended) return;
    glo_glStencilOpValueAMD = (PFNGLSTENCILOPVALUEAMDPROC) load(userptr, "glStencilOpValueAMD");
}
static void glo_gl_load_GL_AMD_vertex_shader_tessellator( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_AMD_vertex_shader_tessellator) return;
    glo_glTessellationFactorAMD = (PFNGLTESSELLATIONFACTORAMDPROC) load(userptr, "glTessellationFactorAMD");
    glo_glTessellationModeAMD = (PFNGLTESSELLATIONMODEAMDPROC) load(userptr, "glTessellationModeAMD");
}
static void glo_gl_load_GL_APPLE_element_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_element_array) return;
    glo_glDrawElementArrayAPPLE = (PFNGLDRAWELEMENTARRAYAPPLEPROC) load(userptr, "glDrawElementArrayAPPLE");
    glo_glDrawRangeElementArrayAPPLE = (PFNGLDRAWRANGEELEMENTARRAYAPPLEPROC) load(userptr, "glDrawRangeElementArrayAPPLE");
    glo_glElementPointerAPPLE = (PFNGLELEMENTPOINTERAPPLEPROC) load(userptr, "glElementPointerAPPLE");
    glo_glMultiDrawElementArrayAPPLE = (PFNGLMULTIDRAWELEMENTARRAYAPPLEPROC) load(userptr, "glMultiDrawElementArrayAPPLE");
    glo_glMultiDrawRangeElementArrayAPPLE = (PFNGLMULTIDRAWRANGEELEMENTARRAYAPPLEPROC) load(userptr, "glMultiDrawRangeElementArrayAPPLE");
}
static void glo_gl_load_GL_APPLE_fence( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_fence) return;
    glo_glDeleteFencesAPPLE = (PFNGLDELETEFENCESAPPLEPROC) load(userptr, "glDeleteFencesAPPLE");
    glo_glFinishFenceAPPLE = (PFNGLFINISHFENCEAPPLEPROC) load(userptr, "glFinishFenceAPPLE");
    glo_glFinishObjectAPPLE = (PFNGLFINISHOBJECTAPPLEPROC) load(userptr, "glFinishObjectAPPLE");
    glo_glGenFencesAPPLE = (PFNGLGENFENCESAPPLEPROC) load(userptr, "glGenFencesAPPLE");
    glo_glIsFenceAPPLE = (PFNGLISFENCEAPPLEPROC) load(userptr, "glIsFenceAPPLE");
    glo_glSetFenceAPPLE = (PFNGLSETFENCEAPPLEPROC) load(userptr, "glSetFenceAPPLE");
    glo_glTestFenceAPPLE = (PFNGLTESTFENCEAPPLEPROC) load(userptr, "glTestFenceAPPLE");
    glo_glTestObjectAPPLE = (PFNGLTESTOBJECTAPPLEPROC) load(userptr, "glTestObjectAPPLE");
}
static void glo_gl_load_GL_APPLE_flush_buffer_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_flush_buffer_range) return;
    glo_glBufferParameteriAPPLE = (PFNGLBUFFERPARAMETERIAPPLEPROC) load(userptr, "glBufferParameteriAPPLE");
    glo_glFlushMappedBufferRangeAPPLE = (PFNGLFLUSHMAPPEDBUFFERRANGEAPPLEPROC) load(userptr, "glFlushMappedBufferRangeAPPLE");
}
static void glo_gl_load_GL_APPLE_object_purgeable( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_object_purgeable) return;
    glo_glGetObjectParameterivAPPLE = (PFNGLGETOBJECTPARAMETERIVAPPLEPROC) load(userptr, "glGetObjectParameterivAPPLE");
    glo_glObjectPurgeableAPPLE = (PFNGLOBJECTPURGEABLEAPPLEPROC) load(userptr, "glObjectPurgeableAPPLE");
    glo_glObjectUnpurgeableAPPLE = (PFNGLOBJECTUNPURGEABLEAPPLEPROC) load(userptr, "glObjectUnpurgeableAPPLE");
}
static void glo_gl_load_GL_APPLE_texture_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_texture_range) return;
    glo_glGetTexParameterPointervAPPLE = (PFNGLGETTEXPARAMETERPOINTERVAPPLEPROC) load(userptr, "glGetTexParameterPointervAPPLE");
    glo_glTextureRangeAPPLE = (PFNGLTEXTURERANGEAPPLEPROC) load(userptr, "glTextureRangeAPPLE");
}
static void glo_gl_load_GL_APPLE_vertex_array_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_vertex_array_object) return;
    glo_glBindVertexArrayAPPLE = (PFNGLBINDVERTEXARRAYAPPLEPROC) load(userptr, "glBindVertexArrayAPPLE");
    glo_glDeleteVertexArraysAPPLE = (PFNGLDELETEVERTEXARRAYSAPPLEPROC) load(userptr, "glDeleteVertexArraysAPPLE");
    glo_glGenVertexArraysAPPLE = (PFNGLGENVERTEXARRAYSAPPLEPROC) load(userptr, "glGenVertexArraysAPPLE");
    glo_glIsVertexArrayAPPLE = (PFNGLISVERTEXARRAYAPPLEPROC) load(userptr, "glIsVertexArrayAPPLE");
}
static void glo_gl_load_GL_APPLE_vertex_array_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_vertex_array_range) return;
    glo_glFlushVertexArrayRangeAPPLE = (PFNGLFLUSHVERTEXARRAYRANGEAPPLEPROC) load(userptr, "glFlushVertexArrayRangeAPPLE");
    glo_glVertexArrayParameteriAPPLE = (PFNGLVERTEXARRAYPARAMETERIAPPLEPROC) load(userptr, "glVertexArrayParameteriAPPLE");
    glo_glVertexArrayRangeAPPLE = (PFNGLVERTEXARRAYRANGEAPPLEPROC) load(userptr, "glVertexArrayRangeAPPLE");
}
static void glo_gl_load_GL_APPLE_vertex_program_evaluators( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_APPLE_vertex_program_evaluators) return;
    glo_glDisableVertexAttribAPPLE = (PFNGLDISABLEVERTEXATTRIBAPPLEPROC) load(userptr, "glDisableVertexAttribAPPLE");
    glo_glEnableVertexAttribAPPLE = (PFNGLENABLEVERTEXATTRIBAPPLEPROC) load(userptr, "glEnableVertexAttribAPPLE");
    glo_glIsVertexAttribEnabledAPPLE = (PFNGLISVERTEXATTRIBENABLEDAPPLEPROC) load(userptr, "glIsVertexAttribEnabledAPPLE");
    glo_glMapVertexAttrib1dAPPLE = (PFNGLMAPVERTEXATTRIB1DAPPLEPROC) load(userptr, "glMapVertexAttrib1dAPPLE");
    glo_glMapVertexAttrib1fAPPLE = (PFNGLMAPVERTEXATTRIB1FAPPLEPROC) load(userptr, "glMapVertexAttrib1fAPPLE");
    glo_glMapVertexAttrib2dAPPLE = (PFNGLMAPVERTEXATTRIB2DAPPLEPROC) load(userptr, "glMapVertexAttrib2dAPPLE");
    glo_glMapVertexAttrib2fAPPLE = (PFNGLMAPVERTEXATTRIB2FAPPLEPROC) load(userptr, "glMapVertexAttrib2fAPPLE");
}
static void glo_gl_load_GL_ARB_ES2_compatibility( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_ES2_compatibility) return;
    glo_glClearDepthf = (PFNGLCLEARDEPTHFPROC) load(userptr, "glClearDepthf");
    glo_glDepthRangef = (PFNGLDEPTHRANGEFPROC) load(userptr, "glDepthRangef");
    glo_glGetShaderPrecisionFormat = (PFNGLGETSHADERPRECISIONFORMATPROC) load(userptr, "glGetShaderPrecisionFormat");
    glo_glReleaseShaderCompiler = (PFNGLRELEASESHADERCOMPILERPROC) load(userptr, "glReleaseShaderCompiler");
    glo_glShaderBinary = (PFNGLSHADERBINARYPROC) load(userptr, "glShaderBinary");
}
static void glo_gl_load_GL_ARB_ES3_1_compatibility( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_ES3_1_compatibility) return;
    glo_glMemoryBarrierByRegion = (PFNGLMEMORYBARRIERBYREGIONPROC) load(userptr, "glMemoryBarrierByRegion");
}
static void glo_gl_load_GL_ARB_ES3_2_compatibility( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_ES3_2_compatibility) return;
    glo_glPrimitiveBoundingBoxARB = (PFNGLPRIMITIVEBOUNDINGBOXARBPROC) load(userptr, "glPrimitiveBoundingBoxARB");
}
static void glo_gl_load_GL_ARB_base_instance( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_base_instance) return;
    glo_glDrawArraysInstancedBaseInstance = (PFNGLDRAWARRAYSINSTANCEDBASEINSTANCEPROC) load(userptr, "glDrawArraysInstancedBaseInstance");
    glo_glDrawElementsInstancedBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEINSTANCEPROC) load(userptr, "glDrawElementsInstancedBaseInstance");
    glo_glDrawElementsInstancedBaseVertexBaseInstance = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEPROC) load(userptr, "glDrawElementsInstancedBaseVertexBaseInstance");
}
static void glo_gl_load_GL_ARB_bindless_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_bindless_texture) return;
    glo_glGetImageHandleARB = (PFNGLGETIMAGEHANDLEARBPROC) load(userptr, "glGetImageHandleARB");
    glo_glGetTextureHandleARB = (PFNGLGETTEXTUREHANDLEARBPROC) load(userptr, "glGetTextureHandleARB");
    glo_glGetTextureSamplerHandleARB = (PFNGLGETTEXTURESAMPLERHANDLEARBPROC) load(userptr, "glGetTextureSamplerHandleARB");
    glo_glGetVertexAttribLui64vARB = (PFNGLGETVERTEXATTRIBLUI64VARBPROC) load(userptr, "glGetVertexAttribLui64vARB");
    glo_glIsImageHandleResidentARB = (PFNGLISIMAGEHANDLERESIDENTARBPROC) load(userptr, "glIsImageHandleResidentARB");
    glo_glIsTextureHandleResidentARB = (PFNGLISTEXTUREHANDLERESIDENTARBPROC) load(userptr, "glIsTextureHandleResidentARB");
    glo_glMakeImageHandleNonResidentARB = (PFNGLMAKEIMAGEHANDLENONRESIDENTARBPROC) load(userptr, "glMakeImageHandleNonResidentARB");
    glo_glMakeImageHandleResidentARB = (PFNGLMAKEIMAGEHANDLERESIDENTARBPROC) load(userptr, "glMakeImageHandleResidentARB");
    glo_glMakeTextureHandleNonResidentARB = (PFNGLMAKETEXTUREHANDLENONRESIDENTARBPROC) load(userptr, "glMakeTextureHandleNonResidentARB");
    glo_glMakeTextureHandleResidentARB = (PFNGLMAKETEXTUREHANDLERESIDENTARBPROC) load(userptr, "glMakeTextureHandleResidentARB");
    glo_glProgramUniformHandleui64ARB = (PFNGLPROGRAMUNIFORMHANDLEUI64ARBPROC) load(userptr, "glProgramUniformHandleui64ARB");
    glo_glProgramUniformHandleui64vARB = (PFNGLPROGRAMUNIFORMHANDLEUI64VARBPROC) load(userptr, "glProgramUniformHandleui64vARB");
    glo_glUniformHandleui64ARB = (PFNGLUNIFORMHANDLEUI64ARBPROC) load(userptr, "glUniformHandleui64ARB");
    glo_glUniformHandleui64vARB = (PFNGLUNIFORMHANDLEUI64VARBPROC) load(userptr, "glUniformHandleui64vARB");
    glo_glVertexAttribL1ui64ARB = (PFNGLVERTEXATTRIBL1UI64ARBPROC) load(userptr, "glVertexAttribL1ui64ARB");
    glo_glVertexAttribL1ui64vARB = (PFNGLVERTEXATTRIBL1UI64VARBPROC) load(userptr, "glVertexAttribL1ui64vARB");
}
static void glo_gl_load_GL_ARB_blend_func_extended( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_blend_func_extended) return;
    glo_glBindFragDataLocationIndexed = (PFNGLBINDFRAGDATALOCATIONINDEXEDPROC) load(userptr, "glBindFragDataLocationIndexed");
    glo_glGetFragDataIndex = (PFNGLGETFRAGDATAINDEXPROC) load(userptr, "glGetFragDataIndex");
}
static void glo_gl_load_GL_ARB_buffer_storage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_buffer_storage) return;
    glo_glBufferStorage = (PFNGLBUFFERSTORAGEPROC) load(userptr, "glBufferStorage");
}
static void glo_gl_load_GL_ARB_cl_event( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_cl_event) return;
    glo_glCreateSyncFromCLeventARB = (PFNGLCREATESYNCFROMCLEVENTARBPROC) load(userptr, "glCreateSyncFromCLeventARB");
}
static void glo_gl_load_GL_ARB_clear_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_clear_buffer_object) return;
    glo_glClearBufferData = (PFNGLCLEARBUFFERDATAPROC) load(userptr, "glClearBufferData");
    glo_glClearBufferSubData = (PFNGLCLEARBUFFERSUBDATAPROC) load(userptr, "glClearBufferSubData");
}
static void glo_gl_load_GL_ARB_clear_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_clear_texture) return;
    glo_glClearTexImage = (PFNGLCLEARTEXIMAGEPROC) load(userptr, "glClearTexImage");
    glo_glClearTexSubImage = (PFNGLCLEARTEXSUBIMAGEPROC) load(userptr, "glClearTexSubImage");
}
static void glo_gl_load_GL_ARB_clip_control( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_clip_control) return;
    glo_glClipControl = (PFNGLCLIPCONTROLPROC) load(userptr, "glClipControl");
}
static void glo_gl_load_GL_ARB_color_buffer_float( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_color_buffer_float) return;
    glo_glClampColorARB = (PFNGLCLAMPCOLORARBPROC) load(userptr, "glClampColorARB");
}
static void glo_gl_load_GL_ARB_compute_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_compute_shader) return;
    glo_glDispatchCompute = (PFNGLDISPATCHCOMPUTEPROC) load(userptr, "glDispatchCompute");
    glo_glDispatchComputeIndirect = (PFNGLDISPATCHCOMPUTEINDIRECTPROC) load(userptr, "glDispatchComputeIndirect");
}
static void glo_gl_load_GL_ARB_compute_variable_group_size( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_compute_variable_group_size) return;
    glo_glDispatchComputeGroupSizeARB = (PFNGLDISPATCHCOMPUTEGROUPSIZEARBPROC) load(userptr, "glDispatchComputeGroupSizeARB");
}
static void glo_gl_load_GL_ARB_copy_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_copy_buffer) return;
    glo_glCopyBufferSubData = (PFNGLCOPYBUFFERSUBDATAPROC) load(userptr, "glCopyBufferSubData");
}
static void glo_gl_load_GL_ARB_copy_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_copy_image) return;
    glo_glCopyImageSubData = (PFNGLCOPYIMAGESUBDATAPROC) load(userptr, "glCopyImageSubData");
}
static void glo_gl_load_GL_ARB_debug_output( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_debug_output) return;
    glo_glDebugMessageCallbackARB = (PFNGLDEBUGMESSAGECALLBACKARBPROC) load(userptr, "glDebugMessageCallbackARB");
    glo_glDebugMessageControlARB = (PFNGLDEBUGMESSAGECONTROLARBPROC) load(userptr, "glDebugMessageControlARB");
    glo_glDebugMessageInsertARB = (PFNGLDEBUGMESSAGEINSERTARBPROC) load(userptr, "glDebugMessageInsertARB");
    glo_glGetDebugMessageLogARB = (PFNGLGETDEBUGMESSAGELOGARBPROC) load(userptr, "glGetDebugMessageLogARB");
}
static void glo_gl_load_GL_ARB_direct_state_access( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_direct_state_access) return;
    glo_glBindTextureUnit = (PFNGLBINDTEXTUREUNITPROC) load(userptr, "glBindTextureUnit");
    glo_glBlitNamedFramebuffer = (PFNGLBLITNAMEDFRAMEBUFFERPROC) load(userptr, "glBlitNamedFramebuffer");
    glo_glCheckNamedFramebufferStatus = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckNamedFramebufferStatus");
    glo_glClearNamedBufferData = (PFNGLCLEARNAMEDBUFFERDATAPROC) load(userptr, "glClearNamedBufferData");
    glo_glClearNamedBufferSubData = (PFNGLCLEARNAMEDBUFFERSUBDATAPROC) load(userptr, "glClearNamedBufferSubData");
    glo_glClearNamedFramebufferfi = (PFNGLCLEARNAMEDFRAMEBUFFERFIPROC) load(userptr, "glClearNamedFramebufferfi");
    glo_glClearNamedFramebufferfv = (PFNGLCLEARNAMEDFRAMEBUFFERFVPROC) load(userptr, "glClearNamedFramebufferfv");
    glo_glClearNamedFramebufferiv = (PFNGLCLEARNAMEDFRAMEBUFFERIVPROC) load(userptr, "glClearNamedFramebufferiv");
    glo_glClearNamedFramebufferuiv = (PFNGLCLEARNAMEDFRAMEBUFFERUIVPROC) load(userptr, "glClearNamedFramebufferuiv");
    glo_glCompressedTextureSubImage1D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DPROC) load(userptr, "glCompressedTextureSubImage1D");
    glo_glCompressedTextureSubImage2D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DPROC) load(userptr, "glCompressedTextureSubImage2D");
    glo_glCompressedTextureSubImage3D = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DPROC) load(userptr, "glCompressedTextureSubImage3D");
    glo_glCopyNamedBufferSubData = (PFNGLCOPYNAMEDBUFFERSUBDATAPROC) load(userptr, "glCopyNamedBufferSubData");
    glo_glCopyTextureSubImage1D = (PFNGLCOPYTEXTURESUBIMAGE1DPROC) load(userptr, "glCopyTextureSubImage1D");
    glo_glCopyTextureSubImage2D = (PFNGLCOPYTEXTURESUBIMAGE2DPROC) load(userptr, "glCopyTextureSubImage2D");
    glo_glCopyTextureSubImage3D = (PFNGLCOPYTEXTURESUBIMAGE3DPROC) load(userptr, "glCopyTextureSubImage3D");
    glo_glCreateBuffers = (PFNGLCREATEBUFFERSPROC) load(userptr, "glCreateBuffers");
    glo_glCreateFramebuffers = (PFNGLCREATEFRAMEBUFFERSPROC) load(userptr, "glCreateFramebuffers");
    glo_glCreateProgramPipelines = (PFNGLCREATEPROGRAMPIPELINESPROC) load(userptr, "glCreateProgramPipelines");
    glo_glCreateQueries = (PFNGLCREATEQUERIESPROC) load(userptr, "glCreateQueries");
    glo_glCreateRenderbuffers = (PFNGLCREATERENDERBUFFERSPROC) load(userptr, "glCreateRenderbuffers");
    glo_glCreateSamplers = (PFNGLCREATESAMPLERSPROC) load(userptr, "glCreateSamplers");
    glo_glCreateTextures = (PFNGLCREATETEXTURESPROC) load(userptr, "glCreateTextures");
    glo_glCreateTransformFeedbacks = (PFNGLCREATETRANSFORMFEEDBACKSPROC) load(userptr, "glCreateTransformFeedbacks");
    glo_glCreateVertexArrays = (PFNGLCREATEVERTEXARRAYSPROC) load(userptr, "glCreateVertexArrays");
    glo_glDisableVertexArrayAttrib = (PFNGLDISABLEVERTEXARRAYATTRIBPROC) load(userptr, "glDisableVertexArrayAttrib");
    glo_glEnableVertexArrayAttrib = (PFNGLENABLEVERTEXARRAYATTRIBPROC) load(userptr, "glEnableVertexArrayAttrib");
    glo_glFlushMappedNamedBufferRange = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEPROC) load(userptr, "glFlushMappedNamedBufferRange");
    glo_glGenerateTextureMipmap = (PFNGLGENERATETEXTUREMIPMAPPROC) load(userptr, "glGenerateTextureMipmap");
    glo_glGetCompressedTextureImage = (PFNGLGETCOMPRESSEDTEXTUREIMAGEPROC) load(userptr, "glGetCompressedTextureImage");
    glo_glGetNamedBufferParameteri64v = (PFNGLGETNAMEDBUFFERPARAMETERI64VPROC) load(userptr, "glGetNamedBufferParameteri64v");
    glo_glGetNamedBufferParameteriv = (PFNGLGETNAMEDBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedBufferParameteriv");
    glo_glGetNamedBufferPointerv = (PFNGLGETNAMEDBUFFERPOINTERVPROC) load(userptr, "glGetNamedBufferPointerv");
    glo_glGetNamedBufferSubData = (PFNGLGETNAMEDBUFFERSUBDATAPROC) load(userptr, "glGetNamedBufferSubData");
    glo_glGetNamedFramebufferAttachmentParameteriv = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetNamedFramebufferAttachmentParameteriv");
    glo_glGetNamedFramebufferParameteriv = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedFramebufferParameteriv");
    glo_glGetNamedRenderbufferParameteriv = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetNamedRenderbufferParameteriv");
    glo_glGetQueryBufferObjecti64v = (PFNGLGETQUERYBUFFEROBJECTI64VPROC) load(userptr, "glGetQueryBufferObjecti64v");
    glo_glGetQueryBufferObjectiv = (PFNGLGETQUERYBUFFEROBJECTIVPROC) load(userptr, "glGetQueryBufferObjectiv");
    glo_glGetQueryBufferObjectui64v = (PFNGLGETQUERYBUFFEROBJECTUI64VPROC) load(userptr, "glGetQueryBufferObjectui64v");
    glo_glGetQueryBufferObjectuiv = (PFNGLGETQUERYBUFFEROBJECTUIVPROC) load(userptr, "glGetQueryBufferObjectuiv");
    glo_glGetTextureImage = (PFNGLGETTEXTUREIMAGEPROC) load(userptr, "glGetTextureImage");
    glo_glGetTextureLevelParameterfv = (PFNGLGETTEXTURELEVELPARAMETERFVPROC) load(userptr, "glGetTextureLevelParameterfv");
    glo_glGetTextureLevelParameteriv = (PFNGLGETTEXTURELEVELPARAMETERIVPROC) load(userptr, "glGetTextureLevelParameteriv");
    glo_glGetTextureParameterIiv = (PFNGLGETTEXTUREPARAMETERIIVPROC) load(userptr, "glGetTextureParameterIiv");
    glo_glGetTextureParameterIuiv = (PFNGLGETTEXTUREPARAMETERIUIVPROC) load(userptr, "glGetTextureParameterIuiv");
    glo_glGetTextureParameterfv = (PFNGLGETTEXTUREPARAMETERFVPROC) load(userptr, "glGetTextureParameterfv");
    glo_glGetTextureParameteriv = (PFNGLGETTEXTUREPARAMETERIVPROC) load(userptr, "glGetTextureParameteriv");
    glo_glGetTransformFeedbacki64_v = (PFNGLGETTRANSFORMFEEDBACKI64_VPROC) load(userptr, "glGetTransformFeedbacki64_v");
    glo_glGetTransformFeedbacki_v = (PFNGLGETTRANSFORMFEEDBACKI_VPROC) load(userptr, "glGetTransformFeedbacki_v");
    glo_glGetTransformFeedbackiv = (PFNGLGETTRANSFORMFEEDBACKIVPROC) load(userptr, "glGetTransformFeedbackiv");
    glo_glGetVertexArrayIndexed64iv = (PFNGLGETVERTEXARRAYINDEXED64IVPROC) load(userptr, "glGetVertexArrayIndexed64iv");
    glo_glGetVertexArrayIndexediv = (PFNGLGETVERTEXARRAYINDEXEDIVPROC) load(userptr, "glGetVertexArrayIndexediv");
    glo_glGetVertexArrayiv = (PFNGLGETVERTEXARRAYIVPROC) load(userptr, "glGetVertexArrayiv");
    glo_glInvalidateNamedFramebufferData = (PFNGLINVALIDATENAMEDFRAMEBUFFERDATAPROC) load(userptr, "glInvalidateNamedFramebufferData");
    glo_glInvalidateNamedFramebufferSubData = (PFNGLINVALIDATENAMEDFRAMEBUFFERSUBDATAPROC) load(userptr, "glInvalidateNamedFramebufferSubData");
    glo_glMapNamedBuffer = (PFNGLMAPNAMEDBUFFERPROC) load(userptr, "glMapNamedBuffer");
    glo_glMapNamedBufferRange = (PFNGLMAPNAMEDBUFFERRANGEPROC) load(userptr, "glMapNamedBufferRange");
    glo_glNamedBufferData = (PFNGLNAMEDBUFFERDATAPROC) load(userptr, "glNamedBufferData");
    glo_glNamedBufferStorage = (PFNGLNAMEDBUFFERSTORAGEPROC) load(userptr, "glNamedBufferStorage");
    glo_glNamedBufferSubData = (PFNGLNAMEDBUFFERSUBDATAPROC) load(userptr, "glNamedBufferSubData");
    glo_glNamedFramebufferDrawBuffer = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERPROC) load(userptr, "glNamedFramebufferDrawBuffer");
    glo_glNamedFramebufferDrawBuffers = (PFNGLNAMEDFRAMEBUFFERDRAWBUFFERSPROC) load(userptr, "glNamedFramebufferDrawBuffers");
    glo_glNamedFramebufferParameteri = (PFNGLNAMEDFRAMEBUFFERPARAMETERIPROC) load(userptr, "glNamedFramebufferParameteri");
    glo_glNamedFramebufferReadBuffer = (PFNGLNAMEDFRAMEBUFFERREADBUFFERPROC) load(userptr, "glNamedFramebufferReadBuffer");
    glo_glNamedFramebufferRenderbuffer = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glNamedFramebufferRenderbuffer");
    glo_glNamedFramebufferTexture = (PFNGLNAMEDFRAMEBUFFERTEXTUREPROC) load(userptr, "glNamedFramebufferTexture");
    glo_glNamedFramebufferTextureLayer = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glNamedFramebufferTextureLayer");
    glo_glNamedRenderbufferStorage = (PFNGLNAMEDRENDERBUFFERSTORAGEPROC) load(userptr, "glNamedRenderbufferStorage");
    glo_glNamedRenderbufferStorageMultisample = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glNamedRenderbufferStorageMultisample");
    glo_glTextureBuffer = (PFNGLTEXTUREBUFFERPROC) load(userptr, "glTextureBuffer");
    glo_glTextureBufferRange = (PFNGLTEXTUREBUFFERRANGEPROC) load(userptr, "glTextureBufferRange");
    glo_glTextureParameterIiv = (PFNGLTEXTUREPARAMETERIIVPROC) load(userptr, "glTextureParameterIiv");
    glo_glTextureParameterIuiv = (PFNGLTEXTUREPARAMETERIUIVPROC) load(userptr, "glTextureParameterIuiv");
    glo_glTextureParameterf = (PFNGLTEXTUREPARAMETERFPROC) load(userptr, "glTextureParameterf");
    glo_glTextureParameterfv = (PFNGLTEXTUREPARAMETERFVPROC) load(userptr, "glTextureParameterfv");
    glo_glTextureParameteri = (PFNGLTEXTUREPARAMETERIPROC) load(userptr, "glTextureParameteri");
    glo_glTextureParameteriv = (PFNGLTEXTUREPARAMETERIVPROC) load(userptr, "glTextureParameteriv");
    glo_glTextureStorage1D = (PFNGLTEXTURESTORAGE1DPROC) load(userptr, "glTextureStorage1D");
    glo_glTextureStorage2D = (PFNGLTEXTURESTORAGE2DPROC) load(userptr, "glTextureStorage2D");
    glo_glTextureStorage2DMultisample = (PFNGLTEXTURESTORAGE2DMULTISAMPLEPROC) load(userptr, "glTextureStorage2DMultisample");
    glo_glTextureStorage3D = (PFNGLTEXTURESTORAGE3DPROC) load(userptr, "glTextureStorage3D");
    glo_glTextureStorage3DMultisample = (PFNGLTEXTURESTORAGE3DMULTISAMPLEPROC) load(userptr, "glTextureStorage3DMultisample");
    glo_glTextureSubImage1D = (PFNGLTEXTURESUBIMAGE1DPROC) load(userptr, "glTextureSubImage1D");
    glo_glTextureSubImage2D = (PFNGLTEXTURESUBIMAGE2DPROC) load(userptr, "glTextureSubImage2D");
    glo_glTextureSubImage3D = (PFNGLTEXTURESUBIMAGE3DPROC) load(userptr, "glTextureSubImage3D");
    glo_glTransformFeedbackBufferBase = (PFNGLTRANSFORMFEEDBACKBUFFERBASEPROC) load(userptr, "glTransformFeedbackBufferBase");
    glo_glTransformFeedbackBufferRange = (PFNGLTRANSFORMFEEDBACKBUFFERRANGEPROC) load(userptr, "glTransformFeedbackBufferRange");
    glo_glUnmapNamedBuffer = (PFNGLUNMAPNAMEDBUFFERPROC) load(userptr, "glUnmapNamedBuffer");
    glo_glVertexArrayAttribBinding = (PFNGLVERTEXARRAYATTRIBBINDINGPROC) load(userptr, "glVertexArrayAttribBinding");
    glo_glVertexArrayAttribFormat = (PFNGLVERTEXARRAYATTRIBFORMATPROC) load(userptr, "glVertexArrayAttribFormat");
    glo_glVertexArrayAttribIFormat = (PFNGLVERTEXARRAYATTRIBIFORMATPROC) load(userptr, "glVertexArrayAttribIFormat");
    glo_glVertexArrayAttribLFormat = (PFNGLVERTEXARRAYATTRIBLFORMATPROC) load(userptr, "glVertexArrayAttribLFormat");
    glo_glVertexArrayBindingDivisor = (PFNGLVERTEXARRAYBINDINGDIVISORPROC) load(userptr, "glVertexArrayBindingDivisor");
    glo_glVertexArrayElementBuffer = (PFNGLVERTEXARRAYELEMENTBUFFERPROC) load(userptr, "glVertexArrayElementBuffer");
    glo_glVertexArrayVertexBuffer = (PFNGLVERTEXARRAYVERTEXBUFFERPROC) load(userptr, "glVertexArrayVertexBuffer");
    glo_glVertexArrayVertexBuffers = (PFNGLVERTEXARRAYVERTEXBUFFERSPROC) load(userptr, "glVertexArrayVertexBuffers");
}
static void glo_gl_load_GL_ARB_draw_buffers( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_draw_buffers) return;
    glo_glDrawBuffersARB = (PFNGLDRAWBUFFERSARBPROC) load(userptr, "glDrawBuffersARB");
}
static void glo_gl_load_GL_ARB_draw_buffers_blend( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_draw_buffers_blend) return;
    glo_glBlendEquationSeparateiARB = (PFNGLBLENDEQUATIONSEPARATEIARBPROC) load(userptr, "glBlendEquationSeparateiARB");
    glo_glBlendEquationiARB = (PFNGLBLENDEQUATIONIARBPROC) load(userptr, "glBlendEquationiARB");
    glo_glBlendFuncSeparateiARB = (PFNGLBLENDFUNCSEPARATEIARBPROC) load(userptr, "glBlendFuncSeparateiARB");
    glo_glBlendFunciARB = (PFNGLBLENDFUNCIARBPROC) load(userptr, "glBlendFunciARB");
}
static void glo_gl_load_GL_ARB_draw_elements_base_vertex( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_draw_elements_base_vertex) return;
    glo_glDrawElementsBaseVertex = (PFNGLDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glDrawElementsBaseVertex");
    glo_glDrawElementsInstancedBaseVertex = (PFNGLDRAWELEMENTSINSTANCEDBASEVERTEXPROC) load(userptr, "glDrawElementsInstancedBaseVertex");
    glo_glDrawRangeElementsBaseVertex = (PFNGLDRAWRANGEELEMENTSBASEVERTEXPROC) load(userptr, "glDrawRangeElementsBaseVertex");
    glo_glMultiDrawElementsBaseVertex = (PFNGLMULTIDRAWELEMENTSBASEVERTEXPROC) load(userptr, "glMultiDrawElementsBaseVertex");
}
static void glo_gl_load_GL_ARB_draw_indirect( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_draw_indirect) return;
    glo_glDrawArraysIndirect = (PFNGLDRAWARRAYSINDIRECTPROC) load(userptr, "glDrawArraysIndirect");
    glo_glDrawElementsIndirect = (PFNGLDRAWELEMENTSINDIRECTPROC) load(userptr, "glDrawElementsIndirect");
}
static void glo_gl_load_GL_ARB_draw_instanced( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_draw_instanced) return;
    glo_glDrawArraysInstancedARB = (PFNGLDRAWARRAYSINSTANCEDARBPROC) load(userptr, "glDrawArraysInstancedARB");
    glo_glDrawElementsInstancedARB = (PFNGLDRAWELEMENTSINSTANCEDARBPROC) load(userptr, "glDrawElementsInstancedARB");
}
static void glo_gl_load_GL_ARB_fragment_program( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_fragment_program) return;
    glo_glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) load(userptr, "glBindProgramARB");
    glo_glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) load(userptr, "glDeleteProgramsARB");
    glo_glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) load(userptr, "glGenProgramsARB");
    glo_glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) load(userptr, "glGetProgramEnvParameterdvARB");
    glo_glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) load(userptr, "glGetProgramEnvParameterfvARB");
    glo_glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) load(userptr, "glGetProgramLocalParameterdvARB");
    glo_glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) load(userptr, "glGetProgramLocalParameterfvARB");
    glo_glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) load(userptr, "glGetProgramStringARB");
    glo_glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) load(userptr, "glGetProgramivARB");
    glo_glIsProgramARB = (PFNGLISPROGRAMARBPROC) load(userptr, "glIsProgramARB");
    glo_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) load(userptr, "glProgramEnvParameter4dARB");
    glo_glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) load(userptr, "glProgramEnvParameter4dvARB");
    glo_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) load(userptr, "glProgramEnvParameter4fARB");
    glo_glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) load(userptr, "glProgramEnvParameter4fvARB");
    glo_glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) load(userptr, "glProgramLocalParameter4dARB");
    glo_glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) load(userptr, "glProgramLocalParameter4dvARB");
    glo_glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) load(userptr, "glProgramLocalParameter4fARB");
    glo_glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) load(userptr, "glProgramLocalParameter4fvARB");
    glo_glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) load(userptr, "glProgramStringARB");
}
static void glo_gl_load_GL_ARB_framebuffer_no_attachments( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_framebuffer_no_attachments) return;
    glo_glFramebufferParameteri = (PFNGLFRAMEBUFFERPARAMETERIPROC) load(userptr, "glFramebufferParameteri");
    glo_glGetFramebufferParameteriv = (PFNGLGETFRAMEBUFFERPARAMETERIVPROC) load(userptr, "glGetFramebufferParameteriv");
}
static void glo_gl_load_GL_ARB_framebuffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_framebuffer_object) return;
    glo_glBindFramebuffer = (PFNGLBINDFRAMEBUFFERPROC) load(userptr, "glBindFramebuffer");
    glo_glBindRenderbuffer = (PFNGLBINDRENDERBUFFERPROC) load(userptr, "glBindRenderbuffer");
    glo_glBlitFramebuffer = (PFNGLBLITFRAMEBUFFERPROC) load(userptr, "glBlitFramebuffer");
    glo_glCheckFramebufferStatus = (PFNGLCHECKFRAMEBUFFERSTATUSPROC) load(userptr, "glCheckFramebufferStatus");
    glo_glDeleteFramebuffers = (PFNGLDELETEFRAMEBUFFERSPROC) load(userptr, "glDeleteFramebuffers");
    glo_glDeleteRenderbuffers = (PFNGLDELETERENDERBUFFERSPROC) load(userptr, "glDeleteRenderbuffers");
    glo_glFramebufferRenderbuffer = (PFNGLFRAMEBUFFERRENDERBUFFERPROC) load(userptr, "glFramebufferRenderbuffer");
    glo_glFramebufferTexture1D = (PFNGLFRAMEBUFFERTEXTURE1DPROC) load(userptr, "glFramebufferTexture1D");
    glo_glFramebufferTexture2D = (PFNGLFRAMEBUFFERTEXTURE2DPROC) load(userptr, "glFramebufferTexture2D");
    glo_glFramebufferTexture3D = (PFNGLFRAMEBUFFERTEXTURE3DPROC) load(userptr, "glFramebufferTexture3D");
    glo_glFramebufferTextureLayer = (PFNGLFRAMEBUFFERTEXTURELAYERPROC) load(userptr, "glFramebufferTextureLayer");
    glo_glGenFramebuffers = (PFNGLGENFRAMEBUFFERSPROC) load(userptr, "glGenFramebuffers");
    glo_glGenRenderbuffers = (PFNGLGENRENDERBUFFERSPROC) load(userptr, "glGenRenderbuffers");
    glo_glGenerateMipmap = (PFNGLGENERATEMIPMAPPROC) load(userptr, "glGenerateMipmap");
    glo_glGetFramebufferAttachmentParameteriv = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVPROC) load(userptr, "glGetFramebufferAttachmentParameteriv");
    glo_glGetRenderbufferParameteriv = (PFNGLGETRENDERBUFFERPARAMETERIVPROC) load(userptr, "glGetRenderbufferParameteriv");
    glo_glIsFramebuffer = (PFNGLISFRAMEBUFFERPROC) load(userptr, "glIsFramebuffer");
    glo_glIsRenderbuffer = (PFNGLISRENDERBUFFERPROC) load(userptr, "glIsRenderbuffer");
    glo_glRenderbufferStorage = (PFNGLRENDERBUFFERSTORAGEPROC) load(userptr, "glRenderbufferStorage");
    glo_glRenderbufferStorageMultisample = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEPROC) load(userptr, "glRenderbufferStorageMultisample");
}
static void glo_gl_load_GL_ARB_geometry_shader4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_geometry_shader4) return;
    glo_glFramebufferTextureARB = (PFNGLFRAMEBUFFERTEXTUREARBPROC) load(userptr, "glFramebufferTextureARB");
    glo_glFramebufferTextureFaceARB = (PFNGLFRAMEBUFFERTEXTUREFACEARBPROC) load(userptr, "glFramebufferTextureFaceARB");
    glo_glFramebufferTextureLayerARB = (PFNGLFRAMEBUFFERTEXTURELAYERARBPROC) load(userptr, "glFramebufferTextureLayerARB");
    glo_glProgramParameteriARB = (PFNGLPROGRAMPARAMETERIARBPROC) load(userptr, "glProgramParameteriARB");
}
static void glo_gl_load_GL_ARB_get_program_binary( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_get_program_binary) return;
    glo_glGetProgramBinary = (PFNGLGETPROGRAMBINARYPROC) load(userptr, "glGetProgramBinary");
    glo_glProgramBinary = (PFNGLPROGRAMBINARYPROC) load(userptr, "glProgramBinary");
    glo_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
}
static void glo_gl_load_GL_ARB_get_texture_sub_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_get_texture_sub_image) return;
    glo_glGetCompressedTextureSubImage = (PFNGLGETCOMPRESSEDTEXTURESUBIMAGEPROC) load(userptr, "glGetCompressedTextureSubImage");
    glo_glGetTextureSubImage = (PFNGLGETTEXTURESUBIMAGEPROC) load(userptr, "glGetTextureSubImage");
}
static void glo_gl_load_GL_ARB_gl_spirv( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_gl_spirv) return;
    glo_glSpecializeShaderARB = (PFNGLSPECIALIZESHADERARBPROC) load(userptr, "glSpecializeShaderARB");
}
static void glo_gl_load_GL_ARB_gpu_shader_fp64( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_gpu_shader_fp64) return;
    glo_glGetUniformdv = (PFNGLGETUNIFORMDVPROC) load(userptr, "glGetUniformdv");
    glo_glUniform1d = (PFNGLUNIFORM1DPROC) load(userptr, "glUniform1d");
    glo_glUniform1dv = (PFNGLUNIFORM1DVPROC) load(userptr, "glUniform1dv");
    glo_glUniform2d = (PFNGLUNIFORM2DPROC) load(userptr, "glUniform2d");
    glo_glUniform2dv = (PFNGLUNIFORM2DVPROC) load(userptr, "glUniform2dv");
    glo_glUniform3d = (PFNGLUNIFORM3DPROC) load(userptr, "glUniform3d");
    glo_glUniform3dv = (PFNGLUNIFORM3DVPROC) load(userptr, "glUniform3dv");
    glo_glUniform4d = (PFNGLUNIFORM4DPROC) load(userptr, "glUniform4d");
    glo_glUniform4dv = (PFNGLUNIFORM4DVPROC) load(userptr, "glUniform4dv");
    glo_glUniformMatrix2dv = (PFNGLUNIFORMMATRIX2DVPROC) load(userptr, "glUniformMatrix2dv");
    glo_glUniformMatrix2x3dv = (PFNGLUNIFORMMATRIX2X3DVPROC) load(userptr, "glUniformMatrix2x3dv");
    glo_glUniformMatrix2x4dv = (PFNGLUNIFORMMATRIX2X4DVPROC) load(userptr, "glUniformMatrix2x4dv");
    glo_glUniformMatrix3dv = (PFNGLUNIFORMMATRIX3DVPROC) load(userptr, "glUniformMatrix3dv");
    glo_glUniformMatrix3x2dv = (PFNGLUNIFORMMATRIX3X2DVPROC) load(userptr, "glUniformMatrix3x2dv");
    glo_glUniformMatrix3x4dv = (PFNGLUNIFORMMATRIX3X4DVPROC) load(userptr, "glUniformMatrix3x4dv");
    glo_glUniformMatrix4dv = (PFNGLUNIFORMMATRIX4DVPROC) load(userptr, "glUniformMatrix4dv");
    glo_glUniformMatrix4x2dv = (PFNGLUNIFORMMATRIX4X2DVPROC) load(userptr, "glUniformMatrix4x2dv");
    glo_glUniformMatrix4x3dv = (PFNGLUNIFORMMATRIX4X3DVPROC) load(userptr, "glUniformMatrix4x3dv");
}
static void glo_gl_load_GL_ARB_gpu_shader_int64( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_gpu_shader_int64) return;
    glo_glGetUniformi64vARB = (PFNGLGETUNIFORMI64VARBPROC) load(userptr, "glGetUniformi64vARB");
    glo_glGetUniformui64vARB = (PFNGLGETUNIFORMUI64VARBPROC) load(userptr, "glGetUniformui64vARB");
    glo_glGetnUniformi64vARB = (PFNGLGETNUNIFORMI64VARBPROC) load(userptr, "glGetnUniformi64vARB");
    glo_glGetnUniformui64vARB = (PFNGLGETNUNIFORMUI64VARBPROC) load(userptr, "glGetnUniformui64vARB");
    glo_glProgramUniform1i64ARB = (PFNGLPROGRAMUNIFORM1I64ARBPROC) load(userptr, "glProgramUniform1i64ARB");
    glo_glProgramUniform1i64vARB = (PFNGLPROGRAMUNIFORM1I64VARBPROC) load(userptr, "glProgramUniform1i64vARB");
    glo_glProgramUniform1ui64ARB = (PFNGLPROGRAMUNIFORM1UI64ARBPROC) load(userptr, "glProgramUniform1ui64ARB");
    glo_glProgramUniform1ui64vARB = (PFNGLPROGRAMUNIFORM1UI64VARBPROC) load(userptr, "glProgramUniform1ui64vARB");
    glo_glProgramUniform2i64ARB = (PFNGLPROGRAMUNIFORM2I64ARBPROC) load(userptr, "glProgramUniform2i64ARB");
    glo_glProgramUniform2i64vARB = (PFNGLPROGRAMUNIFORM2I64VARBPROC) load(userptr, "glProgramUniform2i64vARB");
    glo_glProgramUniform2ui64ARB = (PFNGLPROGRAMUNIFORM2UI64ARBPROC) load(userptr, "glProgramUniform2ui64ARB");
    glo_glProgramUniform2ui64vARB = (PFNGLPROGRAMUNIFORM2UI64VARBPROC) load(userptr, "glProgramUniform2ui64vARB");
    glo_glProgramUniform3i64ARB = (PFNGLPROGRAMUNIFORM3I64ARBPROC) load(userptr, "glProgramUniform3i64ARB");
    glo_glProgramUniform3i64vARB = (PFNGLPROGRAMUNIFORM3I64VARBPROC) load(userptr, "glProgramUniform3i64vARB");
    glo_glProgramUniform3ui64ARB = (PFNGLPROGRAMUNIFORM3UI64ARBPROC) load(userptr, "glProgramUniform3ui64ARB");
    glo_glProgramUniform3ui64vARB = (PFNGLPROGRAMUNIFORM3UI64VARBPROC) load(userptr, "glProgramUniform3ui64vARB");
    glo_glProgramUniform4i64ARB = (PFNGLPROGRAMUNIFORM4I64ARBPROC) load(userptr, "glProgramUniform4i64ARB");
    glo_glProgramUniform4i64vARB = (PFNGLPROGRAMUNIFORM4I64VARBPROC) load(userptr, "glProgramUniform4i64vARB");
    glo_glProgramUniform4ui64ARB = (PFNGLPROGRAMUNIFORM4UI64ARBPROC) load(userptr, "glProgramUniform4ui64ARB");
    glo_glProgramUniform4ui64vARB = (PFNGLPROGRAMUNIFORM4UI64VARBPROC) load(userptr, "glProgramUniform4ui64vARB");
    glo_glUniform1i64ARB = (PFNGLUNIFORM1I64ARBPROC) load(userptr, "glUniform1i64ARB");
    glo_glUniform1i64vARB = (PFNGLUNIFORM1I64VARBPROC) load(userptr, "glUniform1i64vARB");
    glo_glUniform1ui64ARB = (PFNGLUNIFORM1UI64ARBPROC) load(userptr, "glUniform1ui64ARB");
    glo_glUniform1ui64vARB = (PFNGLUNIFORM1UI64VARBPROC) load(userptr, "glUniform1ui64vARB");
    glo_glUniform2i64ARB = (PFNGLUNIFORM2I64ARBPROC) load(userptr, "glUniform2i64ARB");
    glo_glUniform2i64vARB = (PFNGLUNIFORM2I64VARBPROC) load(userptr, "glUniform2i64vARB");
    glo_glUniform2ui64ARB = (PFNGLUNIFORM2UI64ARBPROC) load(userptr, "glUniform2ui64ARB");
    glo_glUniform2ui64vARB = (PFNGLUNIFORM2UI64VARBPROC) load(userptr, "glUniform2ui64vARB");
    glo_glUniform3i64ARB = (PFNGLUNIFORM3I64ARBPROC) load(userptr, "glUniform3i64ARB");
    glo_glUniform3i64vARB = (PFNGLUNIFORM3I64VARBPROC) load(userptr, "glUniform3i64vARB");
    glo_glUniform3ui64ARB = (PFNGLUNIFORM3UI64ARBPROC) load(userptr, "glUniform3ui64ARB");
    glo_glUniform3ui64vARB = (PFNGLUNIFORM3UI64VARBPROC) load(userptr, "glUniform3ui64vARB");
    glo_glUniform4i64ARB = (PFNGLUNIFORM4I64ARBPROC) load(userptr, "glUniform4i64ARB");
    glo_glUniform4i64vARB = (PFNGLUNIFORM4I64VARBPROC) load(userptr, "glUniform4i64vARB");
    glo_glUniform4ui64ARB = (PFNGLUNIFORM4UI64ARBPROC) load(userptr, "glUniform4ui64ARB");
    glo_glUniform4ui64vARB = (PFNGLUNIFORM4UI64VARBPROC) load(userptr, "glUniform4ui64vARB");
}
static void glo_gl_load_GL_ARB_imaging( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_imaging) return;
    glo_glBlendColor = (PFNGLBLENDCOLORPROC) load(userptr, "glBlendColor");
    glo_glBlendEquation = (PFNGLBLENDEQUATIONPROC) load(userptr, "glBlendEquation");
}
static void glo_gl_load_GL_ARB_indirect_parameters( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_indirect_parameters) return;
    glo_glMultiDrawArraysIndirectCountARB = (PFNGLMULTIDRAWARRAYSINDIRECTCOUNTARBPROC) load(userptr, "glMultiDrawArraysIndirectCountARB");
    glo_glMultiDrawElementsIndirectCountARB = (PFNGLMULTIDRAWELEMENTSINDIRECTCOUNTARBPROC) load(userptr, "glMultiDrawElementsIndirectCountARB");
}
static void glo_gl_load_GL_ARB_instanced_arrays( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_instanced_arrays) return;
    glo_glVertexAttribDivisorARB = (PFNGLVERTEXATTRIBDIVISORARBPROC) load(userptr, "glVertexAttribDivisorARB");
}
static void glo_gl_load_GL_ARB_internalformat_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_internalformat_query) return;
    glo_glGetInternalformativ = (PFNGLGETINTERNALFORMATIVPROC) load(userptr, "glGetInternalformativ");
}
static void glo_gl_load_GL_ARB_internalformat_query2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_internalformat_query2) return;
    glo_glGetInternalformati64v = (PFNGLGETINTERNALFORMATI64VPROC) load(userptr, "glGetInternalformati64v");
}
static void glo_gl_load_GL_ARB_invalidate_subdata( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_invalidate_subdata) return;
    glo_glInvalidateBufferData = (PFNGLINVALIDATEBUFFERDATAPROC) load(userptr, "glInvalidateBufferData");
    glo_glInvalidateBufferSubData = (PFNGLINVALIDATEBUFFERSUBDATAPROC) load(userptr, "glInvalidateBufferSubData");
    glo_glInvalidateFramebuffer = (PFNGLINVALIDATEFRAMEBUFFERPROC) load(userptr, "glInvalidateFramebuffer");
    glo_glInvalidateSubFramebuffer = (PFNGLINVALIDATESUBFRAMEBUFFERPROC) load(userptr, "glInvalidateSubFramebuffer");
    glo_glInvalidateTexImage = (PFNGLINVALIDATETEXIMAGEPROC) load(userptr, "glInvalidateTexImage");
    glo_glInvalidateTexSubImage = (PFNGLINVALIDATETEXSUBIMAGEPROC) load(userptr, "glInvalidateTexSubImage");
}
static void glo_gl_load_GL_ARB_map_buffer_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_map_buffer_range) return;
    glo_glFlushMappedBufferRange = (PFNGLFLUSHMAPPEDBUFFERRANGEPROC) load(userptr, "glFlushMappedBufferRange");
    glo_glMapBufferRange = (PFNGLMAPBUFFERRANGEPROC) load(userptr, "glMapBufferRange");
}
static void glo_gl_load_GL_ARB_matrix_palette( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_matrix_palette) return;
    glo_glCurrentPaletteMatrixARB = (PFNGLCURRENTPALETTEMATRIXARBPROC) load(userptr, "glCurrentPaletteMatrixARB");
    glo_glMatrixIndexPointerARB = (PFNGLMATRIXINDEXPOINTERARBPROC) load(userptr, "glMatrixIndexPointerARB");
    glo_glMatrixIndexubvARB = (PFNGLMATRIXINDEXUBVARBPROC) load(userptr, "glMatrixIndexubvARB");
    glo_glMatrixIndexuivARB = (PFNGLMATRIXINDEXUIVARBPROC) load(userptr, "glMatrixIndexuivARB");
    glo_glMatrixIndexusvARB = (PFNGLMATRIXINDEXUSVARBPROC) load(userptr, "glMatrixIndexusvARB");
}
static void glo_gl_load_GL_ARB_multi_bind( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_multi_bind) return;
    glo_glBindBuffersBase = (PFNGLBINDBUFFERSBASEPROC) load(userptr, "glBindBuffersBase");
    glo_glBindBuffersRange = (PFNGLBINDBUFFERSRANGEPROC) load(userptr, "glBindBuffersRange");
    glo_glBindImageTextures = (PFNGLBINDIMAGETEXTURESPROC) load(userptr, "glBindImageTextures");
    glo_glBindSamplers = (PFNGLBINDSAMPLERSPROC) load(userptr, "glBindSamplers");
    glo_glBindTextures = (PFNGLBINDTEXTURESPROC) load(userptr, "glBindTextures");
    glo_glBindVertexBuffers = (PFNGLBINDVERTEXBUFFERSPROC) load(userptr, "glBindVertexBuffers");
}
static void glo_gl_load_GL_ARB_multi_draw_indirect( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_multi_draw_indirect) return;
    glo_glMultiDrawArraysIndirect = (PFNGLMULTIDRAWARRAYSINDIRECTPROC) load(userptr, "glMultiDrawArraysIndirect");
    glo_glMultiDrawElementsIndirect = (PFNGLMULTIDRAWELEMENTSINDIRECTPROC) load(userptr, "glMultiDrawElementsIndirect");
}
static void glo_gl_load_GL_ARB_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_multisample) return;
    glo_glSampleCoverageARB = (PFNGLSAMPLECOVERAGEARBPROC) load(userptr, "glSampleCoverageARB");
}
static void glo_gl_load_GL_ARB_multitexture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_multitexture) return;
    glo_glActiveTextureARB = (PFNGLACTIVETEXTUREARBPROC) load(userptr, "glActiveTextureARB");
    glo_glClientActiveTextureARB = (PFNGLCLIENTACTIVETEXTUREARBPROC) load(userptr, "glClientActiveTextureARB");
    glo_glMultiTexCoord1dARB = (PFNGLMULTITEXCOORD1DARBPROC) load(userptr, "glMultiTexCoord1dARB");
    glo_glMultiTexCoord1dvARB = (PFNGLMULTITEXCOORD1DVARBPROC) load(userptr, "glMultiTexCoord1dvARB");
    glo_glMultiTexCoord1fARB = (PFNGLMULTITEXCOORD1FARBPROC) load(userptr, "glMultiTexCoord1fARB");
    glo_glMultiTexCoord1fvARB = (PFNGLMULTITEXCOORD1FVARBPROC) load(userptr, "glMultiTexCoord1fvARB");
    glo_glMultiTexCoord1iARB = (PFNGLMULTITEXCOORD1IARBPROC) load(userptr, "glMultiTexCoord1iARB");
    glo_glMultiTexCoord1ivARB = (PFNGLMULTITEXCOORD1IVARBPROC) load(userptr, "glMultiTexCoord1ivARB");
    glo_glMultiTexCoord1sARB = (PFNGLMULTITEXCOORD1SARBPROC) load(userptr, "glMultiTexCoord1sARB");
    glo_glMultiTexCoord1svARB = (PFNGLMULTITEXCOORD1SVARBPROC) load(userptr, "glMultiTexCoord1svARB");
    glo_glMultiTexCoord2dARB = (PFNGLMULTITEXCOORD2DARBPROC) load(userptr, "glMultiTexCoord2dARB");
    glo_glMultiTexCoord2dvARB = (PFNGLMULTITEXCOORD2DVARBPROC) load(userptr, "glMultiTexCoord2dvARB");
    glo_glMultiTexCoord2fARB = (PFNGLMULTITEXCOORD2FARBPROC) load(userptr, "glMultiTexCoord2fARB");
    glo_glMultiTexCoord2fvARB = (PFNGLMULTITEXCOORD2FVARBPROC) load(userptr, "glMultiTexCoord2fvARB");
    glo_glMultiTexCoord2iARB = (PFNGLMULTITEXCOORD2IARBPROC) load(userptr, "glMultiTexCoord2iARB");
    glo_glMultiTexCoord2ivARB = (PFNGLMULTITEXCOORD2IVARBPROC) load(userptr, "glMultiTexCoord2ivARB");
    glo_glMultiTexCoord2sARB = (PFNGLMULTITEXCOORD2SARBPROC) load(userptr, "glMultiTexCoord2sARB");
    glo_glMultiTexCoord2svARB = (PFNGLMULTITEXCOORD2SVARBPROC) load(userptr, "glMultiTexCoord2svARB");
    glo_glMultiTexCoord3dARB = (PFNGLMULTITEXCOORD3DARBPROC) load(userptr, "glMultiTexCoord3dARB");
    glo_glMultiTexCoord3dvARB = (PFNGLMULTITEXCOORD3DVARBPROC) load(userptr, "glMultiTexCoord3dvARB");
    glo_glMultiTexCoord3fARB = (PFNGLMULTITEXCOORD3FARBPROC) load(userptr, "glMultiTexCoord3fARB");
    glo_glMultiTexCoord3fvARB = (PFNGLMULTITEXCOORD3FVARBPROC) load(userptr, "glMultiTexCoord3fvARB");
    glo_glMultiTexCoord3iARB = (PFNGLMULTITEXCOORD3IARBPROC) load(userptr, "glMultiTexCoord3iARB");
    glo_glMultiTexCoord3ivARB = (PFNGLMULTITEXCOORD3IVARBPROC) load(userptr, "glMultiTexCoord3ivARB");
    glo_glMultiTexCoord3sARB = (PFNGLMULTITEXCOORD3SARBPROC) load(userptr, "glMultiTexCoord3sARB");
    glo_glMultiTexCoord3svARB = (PFNGLMULTITEXCOORD3SVARBPROC) load(userptr, "glMultiTexCoord3svARB");
    glo_glMultiTexCoord4dARB = (PFNGLMULTITEXCOORD4DARBPROC) load(userptr, "glMultiTexCoord4dARB");
    glo_glMultiTexCoord4dvARB = (PFNGLMULTITEXCOORD4DVARBPROC) load(userptr, "glMultiTexCoord4dvARB");
    glo_glMultiTexCoord4fARB = (PFNGLMULTITEXCOORD4FARBPROC) load(userptr, "glMultiTexCoord4fARB");
    glo_glMultiTexCoord4fvARB = (PFNGLMULTITEXCOORD4FVARBPROC) load(userptr, "glMultiTexCoord4fvARB");
    glo_glMultiTexCoord4iARB = (PFNGLMULTITEXCOORD4IARBPROC) load(userptr, "glMultiTexCoord4iARB");
    glo_glMultiTexCoord4ivARB = (PFNGLMULTITEXCOORD4IVARBPROC) load(userptr, "glMultiTexCoord4ivARB");
    glo_glMultiTexCoord4sARB = (PFNGLMULTITEXCOORD4SARBPROC) load(userptr, "glMultiTexCoord4sARB");
    glo_glMultiTexCoord4svARB = (PFNGLMULTITEXCOORD4SVARBPROC) load(userptr, "glMultiTexCoord4svARB");
}
static void glo_gl_load_GL_ARB_occlusion_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_occlusion_query) return;
    glo_glBeginQueryARB = (PFNGLBEGINQUERYARBPROC) load(userptr, "glBeginQueryARB");
    glo_glDeleteQueriesARB = (PFNGLDELETEQUERIESARBPROC) load(userptr, "glDeleteQueriesARB");
    glo_glEndQueryARB = (PFNGLENDQUERYARBPROC) load(userptr, "glEndQueryARB");
    glo_glGenQueriesARB = (PFNGLGENQUERIESARBPROC) load(userptr, "glGenQueriesARB");
    glo_glGetQueryObjectivARB = (PFNGLGETQUERYOBJECTIVARBPROC) load(userptr, "glGetQueryObjectivARB");
    glo_glGetQueryObjectuivARB = (PFNGLGETQUERYOBJECTUIVARBPROC) load(userptr, "glGetQueryObjectuivARB");
    glo_glGetQueryivARB = (PFNGLGETQUERYIVARBPROC) load(userptr, "glGetQueryivARB");
    glo_glIsQueryARB = (PFNGLISQUERYARBPROC) load(userptr, "glIsQueryARB");
}
static void glo_gl_load_GL_ARB_parallel_shader_compile( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_parallel_shader_compile) return;
    glo_glMaxShaderCompilerThreadsARB = (PFNGLMAXSHADERCOMPILERTHREADSARBPROC) load(userptr, "glMaxShaderCompilerThreadsARB");
}
static void glo_gl_load_GL_ARB_point_parameters( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_point_parameters) return;
    glo_glPointParameterfARB = (PFNGLPOINTPARAMETERFARBPROC) load(userptr, "glPointParameterfARB");
    glo_glPointParameterfvARB = (PFNGLPOINTPARAMETERFVARBPROC) load(userptr, "glPointParameterfvARB");
}
static void glo_gl_load_GL_ARB_polygon_offset_clamp( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_polygon_offset_clamp) return;
    glo_glPolygonOffsetClamp = (PFNGLPOLYGONOFFSETCLAMPPROC) load(userptr, "glPolygonOffsetClamp");
}
static void glo_gl_load_GL_ARB_program_interface_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_program_interface_query) return;
    glo_glGetProgramInterfaceiv = (PFNGLGETPROGRAMINTERFACEIVPROC) load(userptr, "glGetProgramInterfaceiv");
    glo_glGetProgramResourceIndex = (PFNGLGETPROGRAMRESOURCEINDEXPROC) load(userptr, "glGetProgramResourceIndex");
    glo_glGetProgramResourceLocation = (PFNGLGETPROGRAMRESOURCELOCATIONPROC) load(userptr, "glGetProgramResourceLocation");
    glo_glGetProgramResourceLocationIndex = (PFNGLGETPROGRAMRESOURCELOCATIONINDEXPROC) load(userptr, "glGetProgramResourceLocationIndex");
    glo_glGetProgramResourceName = (PFNGLGETPROGRAMRESOURCENAMEPROC) load(userptr, "glGetProgramResourceName");
    glo_glGetProgramResourceiv = (PFNGLGETPROGRAMRESOURCEIVPROC) load(userptr, "glGetProgramResourceiv");
}
static void glo_gl_load_GL_ARB_provoking_vertex( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_provoking_vertex) return;
    glo_glProvokingVertex = (PFNGLPROVOKINGVERTEXPROC) load(userptr, "glProvokingVertex");
}
static void glo_gl_load_GL_ARB_robustness( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_robustness) return;
    glo_glGetGraphicsResetStatusARB = (PFNGLGETGRAPHICSRESETSTATUSARBPROC) load(userptr, "glGetGraphicsResetStatusARB");
    glo_glGetnCompressedTexImageARB = (PFNGLGETNCOMPRESSEDTEXIMAGEARBPROC) load(userptr, "glGetnCompressedTexImageARB");
    glo_glGetnTexImageARB = (PFNGLGETNTEXIMAGEARBPROC) load(userptr, "glGetnTexImageARB");
    glo_glGetnUniformdvARB = (PFNGLGETNUNIFORMDVARBPROC) load(userptr, "glGetnUniformdvARB");
    glo_glGetnUniformfvARB = (PFNGLGETNUNIFORMFVARBPROC) load(userptr, "glGetnUniformfvARB");
    glo_glGetnUniformivARB = (PFNGLGETNUNIFORMIVARBPROC) load(userptr, "glGetnUniformivARB");
    glo_glGetnUniformuivARB = (PFNGLGETNUNIFORMUIVARBPROC) load(userptr, "glGetnUniformuivARB");
    glo_glReadnPixelsARB = (PFNGLREADNPIXELSARBPROC) load(userptr, "glReadnPixelsARB");
}
static void glo_gl_load_GL_ARB_sample_locations( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_sample_locations) return;
    glo_glEvaluateDepthValuesARB = (PFNGLEVALUATEDEPTHVALUESARBPROC) load(userptr, "glEvaluateDepthValuesARB");
    glo_glFramebufferSampleLocationsfvARB = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) load(userptr, "glFramebufferSampleLocationsfvARB");
    glo_glNamedFramebufferSampleLocationsfvARB = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVARBPROC) load(userptr, "glNamedFramebufferSampleLocationsfvARB");
}
static void glo_gl_load_GL_ARB_sample_shading( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_sample_shading) return;
    glo_glMinSampleShadingARB = (PFNGLMINSAMPLESHADINGARBPROC) load(userptr, "glMinSampleShadingARB");
}
static void glo_gl_load_GL_ARB_sampler_objects( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_sampler_objects) return;
    glo_glBindSampler = (PFNGLBINDSAMPLERPROC) load(userptr, "glBindSampler");
    glo_glDeleteSamplers = (PFNGLDELETESAMPLERSPROC) load(userptr, "glDeleteSamplers");
    glo_glGenSamplers = (PFNGLGENSAMPLERSPROC) load(userptr, "glGenSamplers");
    glo_glGetSamplerParameterIiv = (PFNGLGETSAMPLERPARAMETERIIVPROC) load(userptr, "glGetSamplerParameterIiv");
    glo_glGetSamplerParameterIuiv = (PFNGLGETSAMPLERPARAMETERIUIVPROC) load(userptr, "glGetSamplerParameterIuiv");
    glo_glGetSamplerParameterfv = (PFNGLGETSAMPLERPARAMETERFVPROC) load(userptr, "glGetSamplerParameterfv");
    glo_glGetSamplerParameteriv = (PFNGLGETSAMPLERPARAMETERIVPROC) load(userptr, "glGetSamplerParameteriv");
    glo_glIsSampler = (PFNGLISSAMPLERPROC) load(userptr, "glIsSampler");
    glo_glSamplerParameterIiv = (PFNGLSAMPLERPARAMETERIIVPROC) load(userptr, "glSamplerParameterIiv");
    glo_glSamplerParameterIuiv = (PFNGLSAMPLERPARAMETERIUIVPROC) load(userptr, "glSamplerParameterIuiv");
    glo_glSamplerParameterf = (PFNGLSAMPLERPARAMETERFPROC) load(userptr, "glSamplerParameterf");
    glo_glSamplerParameterfv = (PFNGLSAMPLERPARAMETERFVPROC) load(userptr, "glSamplerParameterfv");
    glo_glSamplerParameteri = (PFNGLSAMPLERPARAMETERIPROC) load(userptr, "glSamplerParameteri");
    glo_glSamplerParameteriv = (PFNGLSAMPLERPARAMETERIVPROC) load(userptr, "glSamplerParameteriv");
}
static void glo_gl_load_GL_ARB_separate_shader_objects( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_separate_shader_objects) return;
    glo_glActiveShaderProgram = (PFNGLACTIVESHADERPROGRAMPROC) load(userptr, "glActiveShaderProgram");
    glo_glBindProgramPipeline = (PFNGLBINDPROGRAMPIPELINEPROC) load(userptr, "glBindProgramPipeline");
    glo_glCreateShaderProgramv = (PFNGLCREATESHADERPROGRAMVPROC) load(userptr, "glCreateShaderProgramv");
    glo_glDeleteProgramPipelines = (PFNGLDELETEPROGRAMPIPELINESPROC) load(userptr, "glDeleteProgramPipelines");
    glo_glGenProgramPipelines = (PFNGLGENPROGRAMPIPELINESPROC) load(userptr, "glGenProgramPipelines");
    glo_glGetProgramPipelineInfoLog = (PFNGLGETPROGRAMPIPELINEINFOLOGPROC) load(userptr, "glGetProgramPipelineInfoLog");
    glo_glGetProgramPipelineiv = (PFNGLGETPROGRAMPIPELINEIVPROC) load(userptr, "glGetProgramPipelineiv");
    glo_glIsProgramPipeline = (PFNGLISPROGRAMPIPELINEPROC) load(userptr, "glIsProgramPipeline");
    glo_glProgramParameteri = (PFNGLPROGRAMPARAMETERIPROC) load(userptr, "glProgramParameteri");
    glo_glProgramUniform1d = (PFNGLPROGRAMUNIFORM1DPROC) load(userptr, "glProgramUniform1d");
    glo_glProgramUniform1dv = (PFNGLPROGRAMUNIFORM1DVPROC) load(userptr, "glProgramUniform1dv");
    glo_glProgramUniform1f = (PFNGLPROGRAMUNIFORM1FPROC) load(userptr, "glProgramUniform1f");
    glo_glProgramUniform1fv = (PFNGLPROGRAMUNIFORM1FVPROC) load(userptr, "glProgramUniform1fv");
    glo_glProgramUniform1i = (PFNGLPROGRAMUNIFORM1IPROC) load(userptr, "glProgramUniform1i");
    glo_glProgramUniform1iv = (PFNGLPROGRAMUNIFORM1IVPROC) load(userptr, "glProgramUniform1iv");
    glo_glProgramUniform1ui = (PFNGLPROGRAMUNIFORM1UIPROC) load(userptr, "glProgramUniform1ui");
    glo_glProgramUniform1uiv = (PFNGLPROGRAMUNIFORM1UIVPROC) load(userptr, "glProgramUniform1uiv");
    glo_glProgramUniform2d = (PFNGLPROGRAMUNIFORM2DPROC) load(userptr, "glProgramUniform2d");
    glo_glProgramUniform2dv = (PFNGLPROGRAMUNIFORM2DVPROC) load(userptr, "glProgramUniform2dv");
    glo_glProgramUniform2f = (PFNGLPROGRAMUNIFORM2FPROC) load(userptr, "glProgramUniform2f");
    glo_glProgramUniform2fv = (PFNGLPROGRAMUNIFORM2FVPROC) load(userptr, "glProgramUniform2fv");
    glo_glProgramUniform2i = (PFNGLPROGRAMUNIFORM2IPROC) load(userptr, "glProgramUniform2i");
    glo_glProgramUniform2iv = (PFNGLPROGRAMUNIFORM2IVPROC) load(userptr, "glProgramUniform2iv");
    glo_glProgramUniform2ui = (PFNGLPROGRAMUNIFORM2UIPROC) load(userptr, "glProgramUniform2ui");
    glo_glProgramUniform2uiv = (PFNGLPROGRAMUNIFORM2UIVPROC) load(userptr, "glProgramUniform2uiv");
    glo_glProgramUniform3d = (PFNGLPROGRAMUNIFORM3DPROC) load(userptr, "glProgramUniform3d");
    glo_glProgramUniform3dv = (PFNGLPROGRAMUNIFORM3DVPROC) load(userptr, "glProgramUniform3dv");
    glo_glProgramUniform3f = (PFNGLPROGRAMUNIFORM3FPROC) load(userptr, "glProgramUniform3f");
    glo_glProgramUniform3fv = (PFNGLPROGRAMUNIFORM3FVPROC) load(userptr, "glProgramUniform3fv");
    glo_glProgramUniform3i = (PFNGLPROGRAMUNIFORM3IPROC) load(userptr, "glProgramUniform3i");
    glo_glProgramUniform3iv = (PFNGLPROGRAMUNIFORM3IVPROC) load(userptr, "glProgramUniform3iv");
    glo_glProgramUniform3ui = (PFNGLPROGRAMUNIFORM3UIPROC) load(userptr, "glProgramUniform3ui");
    glo_glProgramUniform3uiv = (PFNGLPROGRAMUNIFORM3UIVPROC) load(userptr, "glProgramUniform3uiv");
    glo_glProgramUniform4d = (PFNGLPROGRAMUNIFORM4DPROC) load(userptr, "glProgramUniform4d");
    glo_glProgramUniform4dv = (PFNGLPROGRAMUNIFORM4DVPROC) load(userptr, "glProgramUniform4dv");
    glo_glProgramUniform4f = (PFNGLPROGRAMUNIFORM4FPROC) load(userptr, "glProgramUniform4f");
    glo_glProgramUniform4fv = (PFNGLPROGRAMUNIFORM4FVPROC) load(userptr, "glProgramUniform4fv");
    glo_glProgramUniform4i = (PFNGLPROGRAMUNIFORM4IPROC) load(userptr, "glProgramUniform4i");
    glo_glProgramUniform4iv = (PFNGLPROGRAMUNIFORM4IVPROC) load(userptr, "glProgramUniform4iv");
    glo_glProgramUniform4ui = (PFNGLPROGRAMUNIFORM4UIPROC) load(userptr, "glProgramUniform4ui");
    glo_glProgramUniform4uiv = (PFNGLPROGRAMUNIFORM4UIVPROC) load(userptr, "glProgramUniform4uiv");
    glo_glProgramUniformMatrix2dv = (PFNGLPROGRAMUNIFORMMATRIX2DVPROC) load(userptr, "glProgramUniformMatrix2dv");
    glo_glProgramUniformMatrix2fv = (PFNGLPROGRAMUNIFORMMATRIX2FVPROC) load(userptr, "glProgramUniformMatrix2fv");
    glo_glProgramUniformMatrix2x3dv = (PFNGLPROGRAMUNIFORMMATRIX2X3DVPROC) load(userptr, "glProgramUniformMatrix2x3dv");
    glo_glProgramUniformMatrix2x3fv = (PFNGLPROGRAMUNIFORMMATRIX2X3FVPROC) load(userptr, "glProgramUniformMatrix2x3fv");
    glo_glProgramUniformMatrix2x4dv = (PFNGLPROGRAMUNIFORMMATRIX2X4DVPROC) load(userptr, "glProgramUniformMatrix2x4dv");
    glo_glProgramUniformMatrix2x4fv = (PFNGLPROGRAMUNIFORMMATRIX2X4FVPROC) load(userptr, "glProgramUniformMatrix2x4fv");
    glo_glProgramUniformMatrix3dv = (PFNGLPROGRAMUNIFORMMATRIX3DVPROC) load(userptr, "glProgramUniformMatrix3dv");
    glo_glProgramUniformMatrix3fv = (PFNGLPROGRAMUNIFORMMATRIX3FVPROC) load(userptr, "glProgramUniformMatrix3fv");
    glo_glProgramUniformMatrix3x2dv = (PFNGLPROGRAMUNIFORMMATRIX3X2DVPROC) load(userptr, "glProgramUniformMatrix3x2dv");
    glo_glProgramUniformMatrix3x2fv = (PFNGLPROGRAMUNIFORMMATRIX3X2FVPROC) load(userptr, "glProgramUniformMatrix3x2fv");
    glo_glProgramUniformMatrix3x4dv = (PFNGLPROGRAMUNIFORMMATRIX3X4DVPROC) load(userptr, "glProgramUniformMatrix3x4dv");
    glo_glProgramUniformMatrix3x4fv = (PFNGLPROGRAMUNIFORMMATRIX3X4FVPROC) load(userptr, "glProgramUniformMatrix3x4fv");
    glo_glProgramUniformMatrix4dv = (PFNGLPROGRAMUNIFORMMATRIX4DVPROC) load(userptr, "glProgramUniformMatrix4dv");
    glo_glProgramUniformMatrix4fv = (PFNGLPROGRAMUNIFORMMATRIX4FVPROC) load(userptr, "glProgramUniformMatrix4fv");
    glo_glProgramUniformMatrix4x2dv = (PFNGLPROGRAMUNIFORMMATRIX4X2DVPROC) load(userptr, "glProgramUniformMatrix4x2dv");
    glo_glProgramUniformMatrix4x2fv = (PFNGLPROGRAMUNIFORMMATRIX4X2FVPROC) load(userptr, "glProgramUniformMatrix4x2fv");
    glo_glProgramUniformMatrix4x3dv = (PFNGLPROGRAMUNIFORMMATRIX4X3DVPROC) load(userptr, "glProgramUniformMatrix4x3dv");
    glo_glProgramUniformMatrix4x3fv = (PFNGLPROGRAMUNIFORMMATRIX4X3FVPROC) load(userptr, "glProgramUniformMatrix4x3fv");
    glo_glUseProgramStages = (PFNGLUSEPROGRAMSTAGESPROC) load(userptr, "glUseProgramStages");
    glo_glValidateProgramPipeline = (PFNGLVALIDATEPROGRAMPIPELINEPROC) load(userptr, "glValidateProgramPipeline");
}
static void glo_gl_load_GL_ARB_shader_atomic_counters( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_shader_atomic_counters) return;
    glo_glGetActiveAtomicCounterBufferiv = (PFNGLGETACTIVEATOMICCOUNTERBUFFERIVPROC) load(userptr, "glGetActiveAtomicCounterBufferiv");
}
static void glo_gl_load_GL_ARB_shader_image_load_store( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_shader_image_load_store) return;
    glo_glBindImageTexture = (PFNGLBINDIMAGETEXTUREPROC) load(userptr, "glBindImageTexture");
    glo_glMemoryBarrier = (PFNGLMEMORYBARRIERPROC) load(userptr, "glMemoryBarrier");
}
static void glo_gl_load_GL_ARB_shader_objects( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_shader_objects) return;
    glo_glAttachObjectARB = (PFNGLATTACHOBJECTARBPROC) load(userptr, "glAttachObjectARB");
    glo_glCompileShaderARB = (PFNGLCOMPILESHADERARBPROC) load(userptr, "glCompileShaderARB");
    glo_glCreateProgramObjectARB = (PFNGLCREATEPROGRAMOBJECTARBPROC) load(userptr, "glCreateProgramObjectARB");
    glo_glCreateShaderObjectARB = (PFNGLCREATESHADEROBJECTARBPROC) load(userptr, "glCreateShaderObjectARB");
    glo_glDeleteObjectARB = (PFNGLDELETEOBJECTARBPROC) load(userptr, "glDeleteObjectARB");
    glo_glDetachObjectARB = (PFNGLDETACHOBJECTARBPROC) load(userptr, "glDetachObjectARB");
    glo_glGetActiveUniformARB = (PFNGLGETACTIVEUNIFORMARBPROC) load(userptr, "glGetActiveUniformARB");
    glo_glGetAttachedObjectsARB = (PFNGLGETATTACHEDOBJECTSARBPROC) load(userptr, "glGetAttachedObjectsARB");
    glo_glGetHandleARB = (PFNGLGETHANDLEARBPROC) load(userptr, "glGetHandleARB");
    glo_glGetInfoLogARB = (PFNGLGETINFOLOGARBPROC) load(userptr, "glGetInfoLogARB");
    glo_glGetObjectParameterfvARB = (PFNGLGETOBJECTPARAMETERFVARBPROC) load(userptr, "glGetObjectParameterfvARB");
    glo_glGetObjectParameterivARB = (PFNGLGETOBJECTPARAMETERIVARBPROC) load(userptr, "glGetObjectParameterivARB");
    glo_glGetShaderSourceARB = (PFNGLGETSHADERSOURCEARBPROC) load(userptr, "glGetShaderSourceARB");
    glo_glGetUniformLocationARB = (PFNGLGETUNIFORMLOCATIONARBPROC) load(userptr, "glGetUniformLocationARB");
    glo_glGetUniformfvARB = (PFNGLGETUNIFORMFVARBPROC) load(userptr, "glGetUniformfvARB");
    glo_glGetUniformivARB = (PFNGLGETUNIFORMIVARBPROC) load(userptr, "glGetUniformivARB");
    glo_glLinkProgramARB = (PFNGLLINKPROGRAMARBPROC) load(userptr, "glLinkProgramARB");
    glo_glShaderSourceARB = (PFNGLSHADERSOURCEARBPROC) load(userptr, "glShaderSourceARB");
    glo_glUniform1fARB = (PFNGLUNIFORM1FARBPROC) load(userptr, "glUniform1fARB");
    glo_glUniform1fvARB = (PFNGLUNIFORM1FVARBPROC) load(userptr, "glUniform1fvARB");
    glo_glUniform1iARB = (PFNGLUNIFORM1IARBPROC) load(userptr, "glUniform1iARB");
    glo_glUniform1ivARB = (PFNGLUNIFORM1IVARBPROC) load(userptr, "glUniform1ivARB");
    glo_glUniform2fARB = (PFNGLUNIFORM2FARBPROC) load(userptr, "glUniform2fARB");
    glo_glUniform2fvARB = (PFNGLUNIFORM2FVARBPROC) load(userptr, "glUniform2fvARB");
    glo_glUniform2iARB = (PFNGLUNIFORM2IARBPROC) load(userptr, "glUniform2iARB");
    glo_glUniform2ivARB = (PFNGLUNIFORM2IVARBPROC) load(userptr, "glUniform2ivARB");
    glo_glUniform3fARB = (PFNGLUNIFORM3FARBPROC) load(userptr, "glUniform3fARB");
    glo_glUniform3fvARB = (PFNGLUNIFORM3FVARBPROC) load(userptr, "glUniform3fvARB");
    glo_glUniform3iARB = (PFNGLUNIFORM3IARBPROC) load(userptr, "glUniform3iARB");
    glo_glUniform3ivARB = (PFNGLUNIFORM3IVARBPROC) load(userptr, "glUniform3ivARB");
    glo_glUniform4fARB = (PFNGLUNIFORM4FARBPROC) load(userptr, "glUniform4fARB");
    glo_glUniform4fvARB = (PFNGLUNIFORM4FVARBPROC) load(userptr, "glUniform4fvARB");
    glo_glUniform4iARB = (PFNGLUNIFORM4IARBPROC) load(userptr, "glUniform4iARB");
    glo_glUniform4ivARB = (PFNGLUNIFORM4IVARBPROC) load(userptr, "glUniform4ivARB");
    glo_glUniformMatrix2fvARB = (PFNGLUNIFORMMATRIX2FVARBPROC) load(userptr, "glUniformMatrix2fvARB");
    glo_glUniformMatrix3fvARB = (PFNGLUNIFORMMATRIX3FVARBPROC) load(userptr, "glUniformMatrix3fvARB");
    glo_glUniformMatrix4fvARB = (PFNGLUNIFORMMATRIX4FVARBPROC) load(userptr, "glUniformMatrix4fvARB");
    glo_glUseProgramObjectARB = (PFNGLUSEPROGRAMOBJECTARBPROC) load(userptr, "glUseProgramObjectARB");
    glo_glValidateProgramARB = (PFNGLVALIDATEPROGRAMARBPROC) load(userptr, "glValidateProgramARB");
}
static void glo_gl_load_GL_ARB_shader_storage_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_shader_storage_buffer_object) return;
    glo_glShaderStorageBlockBinding = (PFNGLSHADERSTORAGEBLOCKBINDINGPROC) load(userptr, "glShaderStorageBlockBinding");
}
static void glo_gl_load_GL_ARB_shader_subroutine( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_shader_subroutine) return;
    glo_glGetActiveSubroutineName = (PFNGLGETACTIVESUBROUTINENAMEPROC) load(userptr, "glGetActiveSubroutineName");
    glo_glGetActiveSubroutineUniformName = (PFNGLGETACTIVESUBROUTINEUNIFORMNAMEPROC) load(userptr, "glGetActiveSubroutineUniformName");
    glo_glGetActiveSubroutineUniformiv = (PFNGLGETACTIVESUBROUTINEUNIFORMIVPROC) load(userptr, "glGetActiveSubroutineUniformiv");
    glo_glGetProgramStageiv = (PFNGLGETPROGRAMSTAGEIVPROC) load(userptr, "glGetProgramStageiv");
    glo_glGetSubroutineIndex = (PFNGLGETSUBROUTINEINDEXPROC) load(userptr, "glGetSubroutineIndex");
    glo_glGetSubroutineUniformLocation = (PFNGLGETSUBROUTINEUNIFORMLOCATIONPROC) load(userptr, "glGetSubroutineUniformLocation");
    glo_glGetUniformSubroutineuiv = (PFNGLGETUNIFORMSUBROUTINEUIVPROC) load(userptr, "glGetUniformSubroutineuiv");
    glo_glUniformSubroutinesuiv = (PFNGLUNIFORMSUBROUTINESUIVPROC) load(userptr, "glUniformSubroutinesuiv");
}
static void glo_gl_load_GL_ARB_shading_language_include( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_shading_language_include) return;
    glo_glCompileShaderIncludeARB = (PFNGLCOMPILESHADERINCLUDEARBPROC) load(userptr, "glCompileShaderIncludeARB");
    glo_glDeleteNamedStringARB = (PFNGLDELETENAMEDSTRINGARBPROC) load(userptr, "glDeleteNamedStringARB");
    glo_glGetNamedStringARB = (PFNGLGETNAMEDSTRINGARBPROC) load(userptr, "glGetNamedStringARB");
    glo_glGetNamedStringivARB = (PFNGLGETNAMEDSTRINGIVARBPROC) load(userptr, "glGetNamedStringivARB");
    glo_glIsNamedStringARB = (PFNGLISNAMEDSTRINGARBPROC) load(userptr, "glIsNamedStringARB");
    glo_glNamedStringARB = (PFNGLNAMEDSTRINGARBPROC) load(userptr, "glNamedStringARB");
}
static void glo_gl_load_GL_ARB_sparse_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_sparse_buffer) return;
    glo_glBufferPageCommitmentARB = (PFNGLBUFFERPAGECOMMITMENTARBPROC) load(userptr, "glBufferPageCommitmentARB");
    glo_glNamedBufferPageCommitmentARB = (PFNGLNAMEDBUFFERPAGECOMMITMENTARBPROC) load(userptr, "glNamedBufferPageCommitmentARB");
    glo_glNamedBufferPageCommitmentEXT = (PFNGLNAMEDBUFFERPAGECOMMITMENTEXTPROC) load(userptr, "glNamedBufferPageCommitmentEXT");
}
static void glo_gl_load_GL_ARB_sparse_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_sparse_texture) return;
    glo_glTexPageCommitmentARB = (PFNGLTEXPAGECOMMITMENTARBPROC) load(userptr, "glTexPageCommitmentARB");
}
static void glo_gl_load_GL_ARB_sync( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_sync) return;
    glo_glClientWaitSync = (PFNGLCLIENTWAITSYNCPROC) load(userptr, "glClientWaitSync");
    glo_glDeleteSync = (PFNGLDELETESYNCPROC) load(userptr, "glDeleteSync");
    glo_glFenceSync = (PFNGLFENCESYNCPROC) load(userptr, "glFenceSync");
    glo_glGetInteger64v = (PFNGLGETINTEGER64VPROC) load(userptr, "glGetInteger64v");
    glo_glGetSynciv = (PFNGLGETSYNCIVPROC) load(userptr, "glGetSynciv");
    glo_glIsSync = (PFNGLISSYNCPROC) load(userptr, "glIsSync");
    glo_glWaitSync = (PFNGLWAITSYNCPROC) load(userptr, "glWaitSync");
}
static void glo_gl_load_GL_ARB_tessellation_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_tessellation_shader) return;
    glo_glPatchParameterfv = (PFNGLPATCHPARAMETERFVPROC) load(userptr, "glPatchParameterfv");
    glo_glPatchParameteri = (PFNGLPATCHPARAMETERIPROC) load(userptr, "glPatchParameteri");
}
static void glo_gl_load_GL_ARB_texture_barrier( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_barrier) return;
    glo_glTextureBarrier = (PFNGLTEXTUREBARRIERPROC) load(userptr, "glTextureBarrier");
}
static void glo_gl_load_GL_ARB_texture_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_buffer_object) return;
    glo_glTexBufferARB = (PFNGLTEXBUFFERARBPROC) load(userptr, "glTexBufferARB");
}
static void glo_gl_load_GL_ARB_texture_buffer_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_buffer_range) return;
    glo_glTexBufferRange = (PFNGLTEXBUFFERRANGEPROC) load(userptr, "glTexBufferRange");
}
static void glo_gl_load_GL_ARB_texture_compression( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_compression) return;
    glo_glCompressedTexImage1DARB = (PFNGLCOMPRESSEDTEXIMAGE1DARBPROC) load(userptr, "glCompressedTexImage1DARB");
    glo_glCompressedTexImage2DARB = (PFNGLCOMPRESSEDTEXIMAGE2DARBPROC) load(userptr, "glCompressedTexImage2DARB");
    glo_glCompressedTexImage3DARB = (PFNGLCOMPRESSEDTEXIMAGE3DARBPROC) load(userptr, "glCompressedTexImage3DARB");
    glo_glCompressedTexSubImage1DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE1DARBPROC) load(userptr, "glCompressedTexSubImage1DARB");
    glo_glCompressedTexSubImage2DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE2DARBPROC) load(userptr, "glCompressedTexSubImage2DARB");
    glo_glCompressedTexSubImage3DARB = (PFNGLCOMPRESSEDTEXSUBIMAGE3DARBPROC) load(userptr, "glCompressedTexSubImage3DARB");
    glo_glGetCompressedTexImageARB = (PFNGLGETCOMPRESSEDTEXIMAGEARBPROC) load(userptr, "glGetCompressedTexImageARB");
}
static void glo_gl_load_GL_ARB_texture_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_multisample) return;
    glo_glGetMultisamplefv = (PFNGLGETMULTISAMPLEFVPROC) load(userptr, "glGetMultisamplefv");
    glo_glSampleMaski = (PFNGLSAMPLEMASKIPROC) load(userptr, "glSampleMaski");
    glo_glTexImage2DMultisample = (PFNGLTEXIMAGE2DMULTISAMPLEPROC) load(userptr, "glTexImage2DMultisample");
    glo_glTexImage3DMultisample = (PFNGLTEXIMAGE3DMULTISAMPLEPROC) load(userptr, "glTexImage3DMultisample");
}
static void glo_gl_load_GL_ARB_texture_storage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_storage) return;
    glo_glTexStorage1D = (PFNGLTEXSTORAGE1DPROC) load(userptr, "glTexStorage1D");
    glo_glTexStorage2D = (PFNGLTEXSTORAGE2DPROC) load(userptr, "glTexStorage2D");
    glo_glTexStorage3D = (PFNGLTEXSTORAGE3DPROC) load(userptr, "glTexStorage3D");
}
static void glo_gl_load_GL_ARB_texture_storage_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_storage_multisample) return;
    glo_glTexStorage2DMultisample = (PFNGLTEXSTORAGE2DMULTISAMPLEPROC) load(userptr, "glTexStorage2DMultisample");
    glo_glTexStorage3DMultisample = (PFNGLTEXSTORAGE3DMULTISAMPLEPROC) load(userptr, "glTexStorage3DMultisample");
}
static void glo_gl_load_GL_ARB_texture_view( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_texture_view) return;
    glo_glTextureView = (PFNGLTEXTUREVIEWPROC) load(userptr, "glTextureView");
}
static void glo_gl_load_GL_ARB_timer_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_timer_query) return;
    glo_glGetQueryObjecti64v = (PFNGLGETQUERYOBJECTI64VPROC) load(userptr, "glGetQueryObjecti64v");
    glo_glGetQueryObjectui64v = (PFNGLGETQUERYOBJECTUI64VPROC) load(userptr, "glGetQueryObjectui64v");
    glo_glQueryCounter = (PFNGLQUERYCOUNTERPROC) load(userptr, "glQueryCounter");
}
static void glo_gl_load_GL_ARB_transform_feedback2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_transform_feedback2) return;
    glo_glBindTransformFeedback = (PFNGLBINDTRANSFORMFEEDBACKPROC) load(userptr, "glBindTransformFeedback");
    glo_glDeleteTransformFeedbacks = (PFNGLDELETETRANSFORMFEEDBACKSPROC) load(userptr, "glDeleteTransformFeedbacks");
    glo_glDrawTransformFeedback = (PFNGLDRAWTRANSFORMFEEDBACKPROC) load(userptr, "glDrawTransformFeedback");
    glo_glGenTransformFeedbacks = (PFNGLGENTRANSFORMFEEDBACKSPROC) load(userptr, "glGenTransformFeedbacks");
    glo_glIsTransformFeedback = (PFNGLISTRANSFORMFEEDBACKPROC) load(userptr, "glIsTransformFeedback");
    glo_glPauseTransformFeedback = (PFNGLPAUSETRANSFORMFEEDBACKPROC) load(userptr, "glPauseTransformFeedback");
    glo_glResumeTransformFeedback = (PFNGLRESUMETRANSFORMFEEDBACKPROC) load(userptr, "glResumeTransformFeedback");
}
static void glo_gl_load_GL_ARB_transform_feedback3( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_transform_feedback3) return;
    glo_glBeginQueryIndexed = (PFNGLBEGINQUERYINDEXEDPROC) load(userptr, "glBeginQueryIndexed");
    glo_glDrawTransformFeedbackStream = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMPROC) load(userptr, "glDrawTransformFeedbackStream");
    glo_glEndQueryIndexed = (PFNGLENDQUERYINDEXEDPROC) load(userptr, "glEndQueryIndexed");
    glo_glGetQueryIndexediv = (PFNGLGETQUERYINDEXEDIVPROC) load(userptr, "glGetQueryIndexediv");
}
static void glo_gl_load_GL_ARB_transform_feedback_instanced( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_transform_feedback_instanced) return;
    glo_glDrawTransformFeedbackInstanced = (PFNGLDRAWTRANSFORMFEEDBACKINSTANCEDPROC) load(userptr, "glDrawTransformFeedbackInstanced");
    glo_glDrawTransformFeedbackStreamInstanced = (PFNGLDRAWTRANSFORMFEEDBACKSTREAMINSTANCEDPROC) load(userptr, "glDrawTransformFeedbackStreamInstanced");
}
static void glo_gl_load_GL_ARB_transpose_matrix( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_transpose_matrix) return;
    glo_glLoadTransposeMatrixdARB = (PFNGLLOADTRANSPOSEMATRIXDARBPROC) load(userptr, "glLoadTransposeMatrixdARB");
    glo_glLoadTransposeMatrixfARB = (PFNGLLOADTRANSPOSEMATRIXFARBPROC) load(userptr, "glLoadTransposeMatrixfARB");
    glo_glMultTransposeMatrixdARB = (PFNGLMULTTRANSPOSEMATRIXDARBPROC) load(userptr, "glMultTransposeMatrixdARB");
    glo_glMultTransposeMatrixfARB = (PFNGLMULTTRANSPOSEMATRIXFARBPROC) load(userptr, "glMultTransposeMatrixfARB");
}
static void glo_gl_load_GL_ARB_uniform_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_uniform_buffer_object) return;
    glo_glBindBufferBase = (PFNGLBINDBUFFERBASEPROC) load(userptr, "glBindBufferBase");
    glo_glBindBufferRange = (PFNGLBINDBUFFERRANGEPROC) load(userptr, "glBindBufferRange");
    glo_glGetActiveUniformBlockName = (PFNGLGETACTIVEUNIFORMBLOCKNAMEPROC) load(userptr, "glGetActiveUniformBlockName");
    glo_glGetActiveUniformBlockiv = (PFNGLGETACTIVEUNIFORMBLOCKIVPROC) load(userptr, "glGetActiveUniformBlockiv");
    glo_glGetActiveUniformName = (PFNGLGETACTIVEUNIFORMNAMEPROC) load(userptr, "glGetActiveUniformName");
    glo_glGetActiveUniformsiv = (PFNGLGETACTIVEUNIFORMSIVPROC) load(userptr, "glGetActiveUniformsiv");
    glo_glGetIntegeri_v = (PFNGLGETINTEGERI_VPROC) load(userptr, "glGetIntegeri_v");
    glo_glGetUniformBlockIndex = (PFNGLGETUNIFORMBLOCKINDEXPROC) load(userptr, "glGetUniformBlockIndex");
    glo_glGetUniformIndices = (PFNGLGETUNIFORMINDICESPROC) load(userptr, "glGetUniformIndices");
    glo_glUniformBlockBinding = (PFNGLUNIFORMBLOCKBINDINGPROC) load(userptr, "glUniformBlockBinding");
}
static void glo_gl_load_GL_ARB_vertex_array_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_array_object) return;
    glo_glBindVertexArray = (PFNGLBINDVERTEXARRAYPROC) load(userptr, "glBindVertexArray");
    glo_glDeleteVertexArrays = (PFNGLDELETEVERTEXARRAYSPROC) load(userptr, "glDeleteVertexArrays");
    glo_glGenVertexArrays = (PFNGLGENVERTEXARRAYSPROC) load(userptr, "glGenVertexArrays");
    glo_glIsVertexArray = (PFNGLISVERTEXARRAYPROC) load(userptr, "glIsVertexArray");
}
static void glo_gl_load_GL_ARB_vertex_attrib_64bit( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_attrib_64bit) return;
    glo_glGetVertexAttribLdv = (PFNGLGETVERTEXATTRIBLDVPROC) load(userptr, "glGetVertexAttribLdv");
    glo_glVertexAttribL1d = (PFNGLVERTEXATTRIBL1DPROC) load(userptr, "glVertexAttribL1d");
    glo_glVertexAttribL1dv = (PFNGLVERTEXATTRIBL1DVPROC) load(userptr, "glVertexAttribL1dv");
    glo_glVertexAttribL2d = (PFNGLVERTEXATTRIBL2DPROC) load(userptr, "glVertexAttribL2d");
    glo_glVertexAttribL2dv = (PFNGLVERTEXATTRIBL2DVPROC) load(userptr, "glVertexAttribL2dv");
    glo_glVertexAttribL3d = (PFNGLVERTEXATTRIBL3DPROC) load(userptr, "glVertexAttribL3d");
    glo_glVertexAttribL3dv = (PFNGLVERTEXATTRIBL3DVPROC) load(userptr, "glVertexAttribL3dv");
    glo_glVertexAttribL4d = (PFNGLVERTEXATTRIBL4DPROC) load(userptr, "glVertexAttribL4d");
    glo_glVertexAttribL4dv = (PFNGLVERTEXATTRIBL4DVPROC) load(userptr, "glVertexAttribL4dv");
    glo_glVertexAttribLPointer = (PFNGLVERTEXATTRIBLPOINTERPROC) load(userptr, "glVertexAttribLPointer");
}
static void glo_gl_load_GL_ARB_vertex_attrib_binding( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_attrib_binding) return;
    glo_glBindVertexBuffer = (PFNGLBINDVERTEXBUFFERPROC) load(userptr, "glBindVertexBuffer");
    glo_glVertexAttribBinding = (PFNGLVERTEXATTRIBBINDINGPROC) load(userptr, "glVertexAttribBinding");
    glo_glVertexAttribFormat = (PFNGLVERTEXATTRIBFORMATPROC) load(userptr, "glVertexAttribFormat");
    glo_glVertexAttribIFormat = (PFNGLVERTEXATTRIBIFORMATPROC) load(userptr, "glVertexAttribIFormat");
    glo_glVertexAttribLFormat = (PFNGLVERTEXATTRIBLFORMATPROC) load(userptr, "glVertexAttribLFormat");
    glo_glVertexBindingDivisor = (PFNGLVERTEXBINDINGDIVISORPROC) load(userptr, "glVertexBindingDivisor");
}
static void glo_gl_load_GL_ARB_vertex_blend( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_blend) return;
    glo_glVertexBlendARB = (PFNGLVERTEXBLENDARBPROC) load(userptr, "glVertexBlendARB");
    glo_glWeightPointerARB = (PFNGLWEIGHTPOINTERARBPROC) load(userptr, "glWeightPointerARB");
    glo_glWeightbvARB = (PFNGLWEIGHTBVARBPROC) load(userptr, "glWeightbvARB");
    glo_glWeightdvARB = (PFNGLWEIGHTDVARBPROC) load(userptr, "glWeightdvARB");
    glo_glWeightfvARB = (PFNGLWEIGHTFVARBPROC) load(userptr, "glWeightfvARB");
    glo_glWeightivARB = (PFNGLWEIGHTIVARBPROC) load(userptr, "glWeightivARB");
    glo_glWeightsvARB = (PFNGLWEIGHTSVARBPROC) load(userptr, "glWeightsvARB");
    glo_glWeightubvARB = (PFNGLWEIGHTUBVARBPROC) load(userptr, "glWeightubvARB");
    glo_glWeightuivARB = (PFNGLWEIGHTUIVARBPROC) load(userptr, "glWeightuivARB");
    glo_glWeightusvARB = (PFNGLWEIGHTUSVARBPROC) load(userptr, "glWeightusvARB");
}
static void glo_gl_load_GL_ARB_vertex_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_buffer_object) return;
    glo_glBindBufferARB = (PFNGLBINDBUFFERARBPROC) load(userptr, "glBindBufferARB");
    glo_glBufferDataARB = (PFNGLBUFFERDATAARBPROC) load(userptr, "glBufferDataARB");
    glo_glBufferSubDataARB = (PFNGLBUFFERSUBDATAARBPROC) load(userptr, "glBufferSubDataARB");
    glo_glDeleteBuffersARB = (PFNGLDELETEBUFFERSARBPROC) load(userptr, "glDeleteBuffersARB");
    glo_glGenBuffersARB = (PFNGLGENBUFFERSARBPROC) load(userptr, "glGenBuffersARB");
    glo_glGetBufferParameterivARB = (PFNGLGETBUFFERPARAMETERIVARBPROC) load(userptr, "glGetBufferParameterivARB");
    glo_glGetBufferPointervARB = (PFNGLGETBUFFERPOINTERVARBPROC) load(userptr, "glGetBufferPointervARB");
    glo_glGetBufferSubDataARB = (PFNGLGETBUFFERSUBDATAARBPROC) load(userptr, "glGetBufferSubDataARB");
    glo_glIsBufferARB = (PFNGLISBUFFERARBPROC) load(userptr, "glIsBufferARB");
    glo_glMapBufferARB = (PFNGLMAPBUFFERARBPROC) load(userptr, "glMapBufferARB");
    glo_glUnmapBufferARB = (PFNGLUNMAPBUFFERARBPROC) load(userptr, "glUnmapBufferARB");
}
static void glo_gl_load_GL_ARB_vertex_program( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_program) return;
    glo_glBindProgramARB = (PFNGLBINDPROGRAMARBPROC) load(userptr, "glBindProgramARB");
    glo_glDeleteProgramsARB = (PFNGLDELETEPROGRAMSARBPROC) load(userptr, "glDeleteProgramsARB");
    glo_glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glDisableVertexAttribArrayARB");
    glo_glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glEnableVertexAttribArrayARB");
    glo_glGenProgramsARB = (PFNGLGENPROGRAMSARBPROC) load(userptr, "glGenProgramsARB");
    glo_glGetProgramEnvParameterdvARB = (PFNGLGETPROGRAMENVPARAMETERDVARBPROC) load(userptr, "glGetProgramEnvParameterdvARB");
    glo_glGetProgramEnvParameterfvARB = (PFNGLGETPROGRAMENVPARAMETERFVARBPROC) load(userptr, "glGetProgramEnvParameterfvARB");
    glo_glGetProgramLocalParameterdvARB = (PFNGLGETPROGRAMLOCALPARAMETERDVARBPROC) load(userptr, "glGetProgramLocalParameterdvARB");
    glo_glGetProgramLocalParameterfvARB = (PFNGLGETPROGRAMLOCALPARAMETERFVARBPROC) load(userptr, "glGetProgramLocalParameterfvARB");
    glo_glGetProgramStringARB = (PFNGLGETPROGRAMSTRINGARBPROC) load(userptr, "glGetProgramStringARB");
    glo_glGetProgramivARB = (PFNGLGETPROGRAMIVARBPROC) load(userptr, "glGetProgramivARB");
    glo_glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) load(userptr, "glGetVertexAttribPointervARB");
    glo_glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) load(userptr, "glGetVertexAttribdvARB");
    glo_glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) load(userptr, "glGetVertexAttribfvARB");
    glo_glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) load(userptr, "glGetVertexAttribivARB");
    glo_glIsProgramARB = (PFNGLISPROGRAMARBPROC) load(userptr, "glIsProgramARB");
    glo_glProgramEnvParameter4dARB = (PFNGLPROGRAMENVPARAMETER4DARBPROC) load(userptr, "glProgramEnvParameter4dARB");
    glo_glProgramEnvParameter4dvARB = (PFNGLPROGRAMENVPARAMETER4DVARBPROC) load(userptr, "glProgramEnvParameter4dvARB");
    glo_glProgramEnvParameter4fARB = (PFNGLPROGRAMENVPARAMETER4FARBPROC) load(userptr, "glProgramEnvParameter4fARB");
    glo_glProgramEnvParameter4fvARB = (PFNGLPROGRAMENVPARAMETER4FVARBPROC) load(userptr, "glProgramEnvParameter4fvARB");
    glo_glProgramLocalParameter4dARB = (PFNGLPROGRAMLOCALPARAMETER4DARBPROC) load(userptr, "glProgramLocalParameter4dARB");
    glo_glProgramLocalParameter4dvARB = (PFNGLPROGRAMLOCALPARAMETER4DVARBPROC) load(userptr, "glProgramLocalParameter4dvARB");
    glo_glProgramLocalParameter4fARB = (PFNGLPROGRAMLOCALPARAMETER4FARBPROC) load(userptr, "glProgramLocalParameter4fARB");
    glo_glProgramLocalParameter4fvARB = (PFNGLPROGRAMLOCALPARAMETER4FVARBPROC) load(userptr, "glProgramLocalParameter4fvARB");
    glo_glProgramStringARB = (PFNGLPROGRAMSTRINGARBPROC) load(userptr, "glProgramStringARB");
    glo_glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) load(userptr, "glVertexAttrib1dARB");
    glo_glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) load(userptr, "glVertexAttrib1dvARB");
    glo_glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) load(userptr, "glVertexAttrib1fARB");
    glo_glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) load(userptr, "glVertexAttrib1fvARB");
    glo_glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) load(userptr, "glVertexAttrib1sARB");
    glo_glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) load(userptr, "glVertexAttrib1svARB");
    glo_glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) load(userptr, "glVertexAttrib2dARB");
    glo_glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) load(userptr, "glVertexAttrib2dvARB");
    glo_glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) load(userptr, "glVertexAttrib2fARB");
    glo_glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) load(userptr, "glVertexAttrib2fvARB");
    glo_glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) load(userptr, "glVertexAttrib2sARB");
    glo_glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) load(userptr, "glVertexAttrib2svARB");
    glo_glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) load(userptr, "glVertexAttrib3dARB");
    glo_glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) load(userptr, "glVertexAttrib3dvARB");
    glo_glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) load(userptr, "glVertexAttrib3fARB");
    glo_glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) load(userptr, "glVertexAttrib3fvARB");
    glo_glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) load(userptr, "glVertexAttrib3sARB");
    glo_glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) load(userptr, "glVertexAttrib3svARB");
    glo_glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) load(userptr, "glVertexAttrib4NbvARB");
    glo_glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) load(userptr, "glVertexAttrib4NivARB");
    glo_glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) load(userptr, "glVertexAttrib4NsvARB");
    glo_glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) load(userptr, "glVertexAttrib4NubARB");
    glo_glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) load(userptr, "glVertexAttrib4NubvARB");
    glo_glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) load(userptr, "glVertexAttrib4NuivARB");
    glo_glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) load(userptr, "glVertexAttrib4NusvARB");
    glo_glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) load(userptr, "glVertexAttrib4bvARB");
    glo_glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) load(userptr, "glVertexAttrib4dARB");
    glo_glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) load(userptr, "glVertexAttrib4dvARB");
    glo_glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) load(userptr, "glVertexAttrib4fARB");
    glo_glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) load(userptr, "glVertexAttrib4fvARB");
    glo_glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) load(userptr, "glVertexAttrib4ivARB");
    glo_glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) load(userptr, "glVertexAttrib4sARB");
    glo_glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) load(userptr, "glVertexAttrib4svARB");
    glo_glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) load(userptr, "glVertexAttrib4ubvARB");
    glo_glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) load(userptr, "glVertexAttrib4uivARB");
    glo_glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) load(userptr, "glVertexAttrib4usvARB");
    glo_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) load(userptr, "glVertexAttribPointerARB");
}
static void glo_gl_load_GL_ARB_vertex_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_shader) return;
    glo_glBindAttribLocationARB = (PFNGLBINDATTRIBLOCATIONARBPROC) load(userptr, "glBindAttribLocationARB");
    glo_glDisableVertexAttribArrayARB = (PFNGLDISABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glDisableVertexAttribArrayARB");
    glo_glEnableVertexAttribArrayARB = (PFNGLENABLEVERTEXATTRIBARRAYARBPROC) load(userptr, "glEnableVertexAttribArrayARB");
    glo_glGetActiveAttribARB = (PFNGLGETACTIVEATTRIBARBPROC) load(userptr, "glGetActiveAttribARB");
    glo_glGetAttribLocationARB = (PFNGLGETATTRIBLOCATIONARBPROC) load(userptr, "glGetAttribLocationARB");
    glo_glGetVertexAttribPointervARB = (PFNGLGETVERTEXATTRIBPOINTERVARBPROC) load(userptr, "glGetVertexAttribPointervARB");
    glo_glGetVertexAttribdvARB = (PFNGLGETVERTEXATTRIBDVARBPROC) load(userptr, "glGetVertexAttribdvARB");
    glo_glGetVertexAttribfvARB = (PFNGLGETVERTEXATTRIBFVARBPROC) load(userptr, "glGetVertexAttribfvARB");
    glo_glGetVertexAttribivARB = (PFNGLGETVERTEXATTRIBIVARBPROC) load(userptr, "glGetVertexAttribivARB");
    glo_glVertexAttrib1dARB = (PFNGLVERTEXATTRIB1DARBPROC) load(userptr, "glVertexAttrib1dARB");
    glo_glVertexAttrib1dvARB = (PFNGLVERTEXATTRIB1DVARBPROC) load(userptr, "glVertexAttrib1dvARB");
    glo_glVertexAttrib1fARB = (PFNGLVERTEXATTRIB1FARBPROC) load(userptr, "glVertexAttrib1fARB");
    glo_glVertexAttrib1fvARB = (PFNGLVERTEXATTRIB1FVARBPROC) load(userptr, "glVertexAttrib1fvARB");
    glo_glVertexAttrib1sARB = (PFNGLVERTEXATTRIB1SARBPROC) load(userptr, "glVertexAttrib1sARB");
    glo_glVertexAttrib1svARB = (PFNGLVERTEXATTRIB1SVARBPROC) load(userptr, "glVertexAttrib1svARB");
    glo_glVertexAttrib2dARB = (PFNGLVERTEXATTRIB2DARBPROC) load(userptr, "glVertexAttrib2dARB");
    glo_glVertexAttrib2dvARB = (PFNGLVERTEXATTRIB2DVARBPROC) load(userptr, "glVertexAttrib2dvARB");
    glo_glVertexAttrib2fARB = (PFNGLVERTEXATTRIB2FARBPROC) load(userptr, "glVertexAttrib2fARB");
    glo_glVertexAttrib2fvARB = (PFNGLVERTEXATTRIB2FVARBPROC) load(userptr, "glVertexAttrib2fvARB");
    glo_glVertexAttrib2sARB = (PFNGLVERTEXATTRIB2SARBPROC) load(userptr, "glVertexAttrib2sARB");
    glo_glVertexAttrib2svARB = (PFNGLVERTEXATTRIB2SVARBPROC) load(userptr, "glVertexAttrib2svARB");
    glo_glVertexAttrib3dARB = (PFNGLVERTEXATTRIB3DARBPROC) load(userptr, "glVertexAttrib3dARB");
    glo_glVertexAttrib3dvARB = (PFNGLVERTEXATTRIB3DVARBPROC) load(userptr, "glVertexAttrib3dvARB");
    glo_glVertexAttrib3fARB = (PFNGLVERTEXATTRIB3FARBPROC) load(userptr, "glVertexAttrib3fARB");
    glo_glVertexAttrib3fvARB = (PFNGLVERTEXATTRIB3FVARBPROC) load(userptr, "glVertexAttrib3fvARB");
    glo_glVertexAttrib3sARB = (PFNGLVERTEXATTRIB3SARBPROC) load(userptr, "glVertexAttrib3sARB");
    glo_glVertexAttrib3svARB = (PFNGLVERTEXATTRIB3SVARBPROC) load(userptr, "glVertexAttrib3svARB");
    glo_glVertexAttrib4NbvARB = (PFNGLVERTEXATTRIB4NBVARBPROC) load(userptr, "glVertexAttrib4NbvARB");
    glo_glVertexAttrib4NivARB = (PFNGLVERTEXATTRIB4NIVARBPROC) load(userptr, "glVertexAttrib4NivARB");
    glo_glVertexAttrib4NsvARB = (PFNGLVERTEXATTRIB4NSVARBPROC) load(userptr, "glVertexAttrib4NsvARB");
    glo_glVertexAttrib4NubARB = (PFNGLVERTEXATTRIB4NUBARBPROC) load(userptr, "glVertexAttrib4NubARB");
    glo_glVertexAttrib4NubvARB = (PFNGLVERTEXATTRIB4NUBVARBPROC) load(userptr, "glVertexAttrib4NubvARB");
    glo_glVertexAttrib4NuivARB = (PFNGLVERTEXATTRIB4NUIVARBPROC) load(userptr, "glVertexAttrib4NuivARB");
    glo_glVertexAttrib4NusvARB = (PFNGLVERTEXATTRIB4NUSVARBPROC) load(userptr, "glVertexAttrib4NusvARB");
    glo_glVertexAttrib4bvARB = (PFNGLVERTEXATTRIB4BVARBPROC) load(userptr, "glVertexAttrib4bvARB");
    glo_glVertexAttrib4dARB = (PFNGLVERTEXATTRIB4DARBPROC) load(userptr, "glVertexAttrib4dARB");
    glo_glVertexAttrib4dvARB = (PFNGLVERTEXATTRIB4DVARBPROC) load(userptr, "glVertexAttrib4dvARB");
    glo_glVertexAttrib4fARB = (PFNGLVERTEXATTRIB4FARBPROC) load(userptr, "glVertexAttrib4fARB");
    glo_glVertexAttrib4fvARB = (PFNGLVERTEXATTRIB4FVARBPROC) load(userptr, "glVertexAttrib4fvARB");
    glo_glVertexAttrib4ivARB = (PFNGLVERTEXATTRIB4IVARBPROC) load(userptr, "glVertexAttrib4ivARB");
    glo_glVertexAttrib4sARB = (PFNGLVERTEXATTRIB4SARBPROC) load(userptr, "glVertexAttrib4sARB");
    glo_glVertexAttrib4svARB = (PFNGLVERTEXATTRIB4SVARBPROC) load(userptr, "glVertexAttrib4svARB");
    glo_glVertexAttrib4ubvARB = (PFNGLVERTEXATTRIB4UBVARBPROC) load(userptr, "glVertexAttrib4ubvARB");
    glo_glVertexAttrib4uivARB = (PFNGLVERTEXATTRIB4UIVARBPROC) load(userptr, "glVertexAttrib4uivARB");
    glo_glVertexAttrib4usvARB = (PFNGLVERTEXATTRIB4USVARBPROC) load(userptr, "glVertexAttrib4usvARB");
    glo_glVertexAttribPointerARB = (PFNGLVERTEXATTRIBPOINTERARBPROC) load(userptr, "glVertexAttribPointerARB");
}
static void glo_gl_load_GL_ARB_vertex_type_2_10_10_10_rev( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_vertex_type_2_10_10_10_rev) return;
    glo_glVertexAttribP1ui = (PFNGLVERTEXATTRIBP1UIPROC) load(userptr, "glVertexAttribP1ui");
    glo_glVertexAttribP1uiv = (PFNGLVERTEXATTRIBP1UIVPROC) load(userptr, "glVertexAttribP1uiv");
    glo_glVertexAttribP2ui = (PFNGLVERTEXATTRIBP2UIPROC) load(userptr, "glVertexAttribP2ui");
    glo_glVertexAttribP2uiv = (PFNGLVERTEXATTRIBP2UIVPROC) load(userptr, "glVertexAttribP2uiv");
    glo_glVertexAttribP3ui = (PFNGLVERTEXATTRIBP3UIPROC) load(userptr, "glVertexAttribP3ui");
    glo_glVertexAttribP3uiv = (PFNGLVERTEXATTRIBP3UIVPROC) load(userptr, "glVertexAttribP3uiv");
    glo_glVertexAttribP4ui = (PFNGLVERTEXATTRIBP4UIPROC) load(userptr, "glVertexAttribP4ui");
    glo_glVertexAttribP4uiv = (PFNGLVERTEXATTRIBP4UIVPROC) load(userptr, "glVertexAttribP4uiv");
}
static void glo_gl_load_GL_ARB_viewport_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_viewport_array) return;
    glo_glDepthRangeArraydvNV = (PFNGLDEPTHRANGEARRAYDVNVPROC) load(userptr, "glDepthRangeArraydvNV");
    glo_glDepthRangeArrayv = (PFNGLDEPTHRANGEARRAYVPROC) load(userptr, "glDepthRangeArrayv");
    glo_glDepthRangeIndexed = (PFNGLDEPTHRANGEINDEXEDPROC) load(userptr, "glDepthRangeIndexed");
    glo_glDepthRangeIndexeddNV = (PFNGLDEPTHRANGEINDEXEDDNVPROC) load(userptr, "glDepthRangeIndexeddNV");
    glo_glGetDoublei_v = (PFNGLGETDOUBLEI_VPROC) load(userptr, "glGetDoublei_v");
    glo_glGetFloati_v = (PFNGLGETFLOATI_VPROC) load(userptr, "glGetFloati_v");
    glo_glScissorArrayv = (PFNGLSCISSORARRAYVPROC) load(userptr, "glScissorArrayv");
    glo_glScissorIndexed = (PFNGLSCISSORINDEXEDPROC) load(userptr, "glScissorIndexed");
    glo_glScissorIndexedv = (PFNGLSCISSORINDEXEDVPROC) load(userptr, "glScissorIndexedv");
    glo_glViewportArrayv = (PFNGLVIEWPORTARRAYVPROC) load(userptr, "glViewportArrayv");
    glo_glViewportIndexedf = (PFNGLVIEWPORTINDEXEDFPROC) load(userptr, "glViewportIndexedf");
    glo_glViewportIndexedfv = (PFNGLVIEWPORTINDEXEDFVPROC) load(userptr, "glViewportIndexedfv");
}
static void glo_gl_load_GL_ARB_window_pos( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ARB_window_pos) return;
    glo_glWindowPos2dARB = (PFNGLWINDOWPOS2DARBPROC) load(userptr, "glWindowPos2dARB");
    glo_glWindowPos2dvARB = (PFNGLWINDOWPOS2DVARBPROC) load(userptr, "glWindowPos2dvARB");
    glo_glWindowPos2fARB = (PFNGLWINDOWPOS2FARBPROC) load(userptr, "glWindowPos2fARB");
    glo_glWindowPos2fvARB = (PFNGLWINDOWPOS2FVARBPROC) load(userptr, "glWindowPos2fvARB");
    glo_glWindowPos2iARB = (PFNGLWINDOWPOS2IARBPROC) load(userptr, "glWindowPos2iARB");
    glo_glWindowPos2ivARB = (PFNGLWINDOWPOS2IVARBPROC) load(userptr, "glWindowPos2ivARB");
    glo_glWindowPos2sARB = (PFNGLWINDOWPOS2SARBPROC) load(userptr, "glWindowPos2sARB");
    glo_glWindowPos2svARB = (PFNGLWINDOWPOS2SVARBPROC) load(userptr, "glWindowPos2svARB");
    glo_glWindowPos3dARB = (PFNGLWINDOWPOS3DARBPROC) load(userptr, "glWindowPos3dARB");
    glo_glWindowPos3dvARB = (PFNGLWINDOWPOS3DVARBPROC) load(userptr, "glWindowPos3dvARB");
    glo_glWindowPos3fARB = (PFNGLWINDOWPOS3FARBPROC) load(userptr, "glWindowPos3fARB");
    glo_glWindowPos3fvARB = (PFNGLWINDOWPOS3FVARBPROC) load(userptr, "glWindowPos3fvARB");
    glo_glWindowPos3iARB = (PFNGLWINDOWPOS3IARBPROC) load(userptr, "glWindowPos3iARB");
    glo_glWindowPos3ivARB = (PFNGLWINDOWPOS3IVARBPROC) load(userptr, "glWindowPos3ivARB");
    glo_glWindowPos3sARB = (PFNGLWINDOWPOS3SARBPROC) load(userptr, "glWindowPos3sARB");
    glo_glWindowPos3svARB = (PFNGLWINDOWPOS3SVARBPROC) load(userptr, "glWindowPos3svARB");
}
static void glo_gl_load_GL_ATI_draw_buffers( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_draw_buffers) return;
    glo_glDrawBuffersATI = (PFNGLDRAWBUFFERSATIPROC) load(userptr, "glDrawBuffersATI");
}
static void glo_gl_load_GL_ATI_element_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_element_array) return;
    glo_glDrawElementArrayATI = (PFNGLDRAWELEMENTARRAYATIPROC) load(userptr, "glDrawElementArrayATI");
    glo_glDrawRangeElementArrayATI = (PFNGLDRAWRANGEELEMENTARRAYATIPROC) load(userptr, "glDrawRangeElementArrayATI");
    glo_glElementPointerATI = (PFNGLELEMENTPOINTERATIPROC) load(userptr, "glElementPointerATI");
}
static void glo_gl_load_GL_ATI_envmap_bumpmap( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_envmap_bumpmap) return;
    glo_glGetTexBumpParameterfvATI = (PFNGLGETTEXBUMPPARAMETERFVATIPROC) load(userptr, "glGetTexBumpParameterfvATI");
    glo_glGetTexBumpParameterivATI = (PFNGLGETTEXBUMPPARAMETERIVATIPROC) load(userptr, "glGetTexBumpParameterivATI");
    glo_glTexBumpParameterfvATI = (PFNGLTEXBUMPPARAMETERFVATIPROC) load(userptr, "glTexBumpParameterfvATI");
    glo_glTexBumpParameterivATI = (PFNGLTEXBUMPPARAMETERIVATIPROC) load(userptr, "glTexBumpParameterivATI");
}
static void glo_gl_load_GL_ATI_fragment_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_fragment_shader) return;
    glo_glAlphaFragmentOp1ATI = (PFNGLALPHAFRAGMENTOP1ATIPROC) load(userptr, "glAlphaFragmentOp1ATI");
    glo_glAlphaFragmentOp2ATI = (PFNGLALPHAFRAGMENTOP2ATIPROC) load(userptr, "glAlphaFragmentOp2ATI");
    glo_glAlphaFragmentOp3ATI = (PFNGLALPHAFRAGMENTOP3ATIPROC) load(userptr, "glAlphaFragmentOp3ATI");
    glo_glBeginFragmentShaderATI = (PFNGLBEGINFRAGMENTSHADERATIPROC) load(userptr, "glBeginFragmentShaderATI");
    glo_glBindFragmentShaderATI = (PFNGLBINDFRAGMENTSHADERATIPROC) load(userptr, "glBindFragmentShaderATI");
    glo_glColorFragmentOp1ATI = (PFNGLCOLORFRAGMENTOP1ATIPROC) load(userptr, "glColorFragmentOp1ATI");
    glo_glColorFragmentOp2ATI = (PFNGLCOLORFRAGMENTOP2ATIPROC) load(userptr, "glColorFragmentOp2ATI");
    glo_glColorFragmentOp3ATI = (PFNGLCOLORFRAGMENTOP3ATIPROC) load(userptr, "glColorFragmentOp3ATI");
    glo_glDeleteFragmentShaderATI = (PFNGLDELETEFRAGMENTSHADERATIPROC) load(userptr, "glDeleteFragmentShaderATI");
    glo_glEndFragmentShaderATI = (PFNGLENDFRAGMENTSHADERATIPROC) load(userptr, "glEndFragmentShaderATI");
    glo_glGenFragmentShadersATI = (PFNGLGENFRAGMENTSHADERSATIPROC) load(userptr, "glGenFragmentShadersATI");
    glo_glPassTexCoordATI = (PFNGLPASSTEXCOORDATIPROC) load(userptr, "glPassTexCoordATI");
    glo_glSampleMapATI = (PFNGLSAMPLEMAPATIPROC) load(userptr, "glSampleMapATI");
    glo_glSetFragmentShaderConstantATI = (PFNGLSETFRAGMENTSHADERCONSTANTATIPROC) load(userptr, "glSetFragmentShaderConstantATI");
}
static void glo_gl_load_GL_ATI_map_object_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_map_object_buffer) return;
    glo_glMapObjectBufferATI = (PFNGLMAPOBJECTBUFFERATIPROC) load(userptr, "glMapObjectBufferATI");
    glo_glUnmapObjectBufferATI = (PFNGLUNMAPOBJECTBUFFERATIPROC) load(userptr, "glUnmapObjectBufferATI");
}
static void glo_gl_load_GL_ATI_pn_triangles( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_pn_triangles) return;
    glo_glPNTrianglesfATI = (PFNGLPNTRIANGLESFATIPROC) load(userptr, "glPNTrianglesfATI");
    glo_glPNTrianglesiATI = (PFNGLPNTRIANGLESIATIPROC) load(userptr, "glPNTrianglesiATI");
}
static void glo_gl_load_GL_ATI_separate_stencil( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_separate_stencil) return;
    glo_glStencilFuncSeparateATI = (PFNGLSTENCILFUNCSEPARATEATIPROC) load(userptr, "glStencilFuncSeparateATI");
    glo_glStencilOpSeparateATI = (PFNGLSTENCILOPSEPARATEATIPROC) load(userptr, "glStencilOpSeparateATI");
}
static void glo_gl_load_GL_ATI_vertex_array_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_vertex_array_object) return;
    glo_glArrayObjectATI = (PFNGLARRAYOBJECTATIPROC) load(userptr, "glArrayObjectATI");
    glo_glFreeObjectBufferATI = (PFNGLFREEOBJECTBUFFERATIPROC) load(userptr, "glFreeObjectBufferATI");
    glo_glGetArrayObjectfvATI = (PFNGLGETARRAYOBJECTFVATIPROC) load(userptr, "glGetArrayObjectfvATI");
    glo_glGetArrayObjectivATI = (PFNGLGETARRAYOBJECTIVATIPROC) load(userptr, "glGetArrayObjectivATI");
    glo_glGetObjectBufferfvATI = (PFNGLGETOBJECTBUFFERFVATIPROC) load(userptr, "glGetObjectBufferfvATI");
    glo_glGetObjectBufferivATI = (PFNGLGETOBJECTBUFFERIVATIPROC) load(userptr, "glGetObjectBufferivATI");
    glo_glGetVariantArrayObjectfvATI = (PFNGLGETVARIANTARRAYOBJECTFVATIPROC) load(userptr, "glGetVariantArrayObjectfvATI");
    glo_glGetVariantArrayObjectivATI = (PFNGLGETVARIANTARRAYOBJECTIVATIPROC) load(userptr, "glGetVariantArrayObjectivATI");
    glo_glIsObjectBufferATI = (PFNGLISOBJECTBUFFERATIPROC) load(userptr, "glIsObjectBufferATI");
    glo_glNewObjectBufferATI = (PFNGLNEWOBJECTBUFFERATIPROC) load(userptr, "glNewObjectBufferATI");
    glo_glUpdateObjectBufferATI = (PFNGLUPDATEOBJECTBUFFERATIPROC) load(userptr, "glUpdateObjectBufferATI");
    glo_glVariantArrayObjectATI = (PFNGLVARIANTARRAYOBJECTATIPROC) load(userptr, "glVariantArrayObjectATI");
}
static void glo_gl_load_GL_ATI_vertex_attrib_array_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_vertex_attrib_array_object) return;
    glo_glGetVertexAttribArrayObjectfvATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTFVATIPROC) load(userptr, "glGetVertexAttribArrayObjectfvATI");
    glo_glGetVertexAttribArrayObjectivATI = (PFNGLGETVERTEXATTRIBARRAYOBJECTIVATIPROC) load(userptr, "glGetVertexAttribArrayObjectivATI");
    glo_glVertexAttribArrayObjectATI = (PFNGLVERTEXATTRIBARRAYOBJECTATIPROC) load(userptr, "glVertexAttribArrayObjectATI");
}
static void glo_gl_load_GL_ATI_vertex_streams( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_ATI_vertex_streams) return;
    glo_glClientActiveVertexStreamATI = (PFNGLCLIENTACTIVEVERTEXSTREAMATIPROC) load(userptr, "glClientActiveVertexStreamATI");
    glo_glNormalStream3bATI = (PFNGLNORMALSTREAM3BATIPROC) load(userptr, "glNormalStream3bATI");
    glo_glNormalStream3bvATI = (PFNGLNORMALSTREAM3BVATIPROC) load(userptr, "glNormalStream3bvATI");
    glo_glNormalStream3dATI = (PFNGLNORMALSTREAM3DATIPROC) load(userptr, "glNormalStream3dATI");
    glo_glNormalStream3dvATI = (PFNGLNORMALSTREAM3DVATIPROC) load(userptr, "glNormalStream3dvATI");
    glo_glNormalStream3fATI = (PFNGLNORMALSTREAM3FATIPROC) load(userptr, "glNormalStream3fATI");
    glo_glNormalStream3fvATI = (PFNGLNORMALSTREAM3FVATIPROC) load(userptr, "glNormalStream3fvATI");
    glo_glNormalStream3iATI = (PFNGLNORMALSTREAM3IATIPROC) load(userptr, "glNormalStream3iATI");
    glo_glNormalStream3ivATI = (PFNGLNORMALSTREAM3IVATIPROC) load(userptr, "glNormalStream3ivATI");
    glo_glNormalStream3sATI = (PFNGLNORMALSTREAM3SATIPROC) load(userptr, "glNormalStream3sATI");
    glo_glNormalStream3svATI = (PFNGLNORMALSTREAM3SVATIPROC) load(userptr, "glNormalStream3svATI");
    glo_glVertexBlendEnvfATI = (PFNGLVERTEXBLENDENVFATIPROC) load(userptr, "glVertexBlendEnvfATI");
    glo_glVertexBlendEnviATI = (PFNGLVERTEXBLENDENVIATIPROC) load(userptr, "glVertexBlendEnviATI");
    glo_glVertexStream1dATI = (PFNGLVERTEXSTREAM1DATIPROC) load(userptr, "glVertexStream1dATI");
    glo_glVertexStream1dvATI = (PFNGLVERTEXSTREAM1DVATIPROC) load(userptr, "glVertexStream1dvATI");
    glo_glVertexStream1fATI = (PFNGLVERTEXSTREAM1FATIPROC) load(userptr, "glVertexStream1fATI");
    glo_glVertexStream1fvATI = (PFNGLVERTEXSTREAM1FVATIPROC) load(userptr, "glVertexStream1fvATI");
    glo_glVertexStream1iATI = (PFNGLVERTEXSTREAM1IATIPROC) load(userptr, "glVertexStream1iATI");
    glo_glVertexStream1ivATI = (PFNGLVERTEXSTREAM1IVATIPROC) load(userptr, "glVertexStream1ivATI");
    glo_glVertexStream1sATI = (PFNGLVERTEXSTREAM1SATIPROC) load(userptr, "glVertexStream1sATI");
    glo_glVertexStream1svATI = (PFNGLVERTEXSTREAM1SVATIPROC) load(userptr, "glVertexStream1svATI");
    glo_glVertexStream2dATI = (PFNGLVERTEXSTREAM2DATIPROC) load(userptr, "glVertexStream2dATI");
    glo_glVertexStream2dvATI = (PFNGLVERTEXSTREAM2DVATIPROC) load(userptr, "glVertexStream2dvATI");
    glo_glVertexStream2fATI = (PFNGLVERTEXSTREAM2FATIPROC) load(userptr, "glVertexStream2fATI");
    glo_glVertexStream2fvATI = (PFNGLVERTEXSTREAM2FVATIPROC) load(userptr, "glVertexStream2fvATI");
    glo_glVertexStream2iATI = (PFNGLVERTEXSTREAM2IATIPROC) load(userptr, "glVertexStream2iATI");
    glo_glVertexStream2ivATI = (PFNGLVERTEXSTREAM2IVATIPROC) load(userptr, "glVertexStream2ivATI");
    glo_glVertexStream2sATI = (PFNGLVERTEXSTREAM2SATIPROC) load(userptr, "glVertexStream2sATI");
    glo_glVertexStream2svATI = (PFNGLVERTEXSTREAM2SVATIPROC) load(userptr, "glVertexStream2svATI");
    glo_glVertexStream3dATI = (PFNGLVERTEXSTREAM3DATIPROC) load(userptr, "glVertexStream3dATI");
    glo_glVertexStream3dvATI = (PFNGLVERTEXSTREAM3DVATIPROC) load(userptr, "glVertexStream3dvATI");
    glo_glVertexStream3fATI = (PFNGLVERTEXSTREAM3FATIPROC) load(userptr, "glVertexStream3fATI");
    glo_glVertexStream3fvATI = (PFNGLVERTEXSTREAM3FVATIPROC) load(userptr, "glVertexStream3fvATI");
    glo_glVertexStream3iATI = (PFNGLVERTEXSTREAM3IATIPROC) load(userptr, "glVertexStream3iATI");
    glo_glVertexStream3ivATI = (PFNGLVERTEXSTREAM3IVATIPROC) load(userptr, "glVertexStream3ivATI");
    glo_glVertexStream3sATI = (PFNGLVERTEXSTREAM3SATIPROC) load(userptr, "glVertexStream3sATI");
    glo_glVertexStream3svATI = (PFNGLVERTEXSTREAM3SVATIPROC) load(userptr, "glVertexStream3svATI");
    glo_glVertexStream4dATI = (PFNGLVERTEXSTREAM4DATIPROC) load(userptr, "glVertexStream4dATI");
    glo_glVertexStream4dvATI = (PFNGLVERTEXSTREAM4DVATIPROC) load(userptr, "glVertexStream4dvATI");
    glo_glVertexStream4fATI = (PFNGLVERTEXSTREAM4FATIPROC) load(userptr, "glVertexStream4fATI");
    glo_glVertexStream4fvATI = (PFNGLVERTEXSTREAM4FVATIPROC) load(userptr, "glVertexStream4fvATI");
    glo_glVertexStream4iATI = (PFNGLVERTEXSTREAM4IATIPROC) load(userptr, "glVertexStream4iATI");
    glo_glVertexStream4ivATI = (PFNGLVERTEXSTREAM4IVATIPROC) load(userptr, "glVertexStream4ivATI");
    glo_glVertexStream4sATI = (PFNGLVERTEXSTREAM4SATIPROC) load(userptr, "glVertexStream4sATI");
    glo_glVertexStream4svATI = (PFNGLVERTEXSTREAM4SVATIPROC) load(userptr, "glVertexStream4svATI");
}
static void glo_gl_load_GL_EXT_EGL_image_storage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_EGL_image_storage) return;
    glo_glEGLImageTargetTexStorageEXT = (PFNGLEGLIMAGETARGETTEXSTORAGEEXTPROC) load(userptr, "glEGLImageTargetTexStorageEXT");
    glo_glEGLImageTargetTextureStorageEXT = (PFNGLEGLIMAGETARGETTEXTURESTORAGEEXTPROC) load(userptr, "glEGLImageTargetTextureStorageEXT");
}
static void glo_gl_load_GL_EXT_bindable_uniform( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_bindable_uniform) return;
    glo_glGetUniformBufferSizeEXT = (PFNGLGETUNIFORMBUFFERSIZEEXTPROC) load(userptr, "glGetUniformBufferSizeEXT");
    glo_glGetUniformOffsetEXT = (PFNGLGETUNIFORMOFFSETEXTPROC) load(userptr, "glGetUniformOffsetEXT");
    glo_glUniformBufferEXT = (PFNGLUNIFORMBUFFEREXTPROC) load(userptr, "glUniformBufferEXT");
}
static void glo_gl_load_GL_EXT_blend_color( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_blend_color) return;
    glo_glBlendColorEXT = (PFNGLBLENDCOLOREXTPROC) load(userptr, "glBlendColorEXT");
}
static void glo_gl_load_GL_EXT_blend_equation_separate( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_blend_equation_separate) return;
    glo_glBlendEquationSeparateEXT = (PFNGLBLENDEQUATIONSEPARATEEXTPROC) load(userptr, "glBlendEquationSeparateEXT");
}
static void glo_gl_load_GL_EXT_blend_func_separate( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_blend_func_separate) return;
    glo_glBlendFuncSeparateEXT = (PFNGLBLENDFUNCSEPARATEEXTPROC) load(userptr, "glBlendFuncSeparateEXT");
}
static void glo_gl_load_GL_EXT_blend_minmax( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_blend_minmax) return;
    glo_glBlendEquationEXT = (PFNGLBLENDEQUATIONEXTPROC) load(userptr, "glBlendEquationEXT");
}
static void glo_gl_load_GL_EXT_color_subtable( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_color_subtable) return;
    glo_glColorSubTableEXT = (PFNGLCOLORSUBTABLEEXTPROC) load(userptr, "glColorSubTableEXT");
    glo_glCopyColorSubTableEXT = (PFNGLCOPYCOLORSUBTABLEEXTPROC) load(userptr, "glCopyColorSubTableEXT");
}
static void glo_gl_load_GL_EXT_compiled_vertex_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_compiled_vertex_array) return;
    glo_glLockArraysEXT = (PFNGLLOCKARRAYSEXTPROC) load(userptr, "glLockArraysEXT");
    glo_glUnlockArraysEXT = (PFNGLUNLOCKARRAYSEXTPROC) load(userptr, "glUnlockArraysEXT");
}
static void glo_gl_load_GL_EXT_convolution( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_convolution) return;
    glo_glConvolutionFilter1DEXT = (PFNGLCONVOLUTIONFILTER1DEXTPROC) load(userptr, "glConvolutionFilter1DEXT");
    glo_glConvolutionFilter2DEXT = (PFNGLCONVOLUTIONFILTER2DEXTPROC) load(userptr, "glConvolutionFilter2DEXT");
    glo_glConvolutionParameterfEXT = (PFNGLCONVOLUTIONPARAMETERFEXTPROC) load(userptr, "glConvolutionParameterfEXT");
    glo_glConvolutionParameterfvEXT = (PFNGLCONVOLUTIONPARAMETERFVEXTPROC) load(userptr, "glConvolutionParameterfvEXT");
    glo_glConvolutionParameteriEXT = (PFNGLCONVOLUTIONPARAMETERIEXTPROC) load(userptr, "glConvolutionParameteriEXT");
    glo_glConvolutionParameterivEXT = (PFNGLCONVOLUTIONPARAMETERIVEXTPROC) load(userptr, "glConvolutionParameterivEXT");
    glo_glCopyConvolutionFilter1DEXT = (PFNGLCOPYCONVOLUTIONFILTER1DEXTPROC) load(userptr, "glCopyConvolutionFilter1DEXT");
    glo_glCopyConvolutionFilter2DEXT = (PFNGLCOPYCONVOLUTIONFILTER2DEXTPROC) load(userptr, "glCopyConvolutionFilter2DEXT");
    glo_glGetConvolutionFilterEXT = (PFNGLGETCONVOLUTIONFILTEREXTPROC) load(userptr, "glGetConvolutionFilterEXT");
    glo_glGetConvolutionParameterfvEXT = (PFNGLGETCONVOLUTIONPARAMETERFVEXTPROC) load(userptr, "glGetConvolutionParameterfvEXT");
    glo_glGetConvolutionParameterivEXT = (PFNGLGETCONVOLUTIONPARAMETERIVEXTPROC) load(userptr, "glGetConvolutionParameterivEXT");
    glo_glGetSeparableFilterEXT = (PFNGLGETSEPARABLEFILTEREXTPROC) load(userptr, "glGetSeparableFilterEXT");
    glo_glSeparableFilter2DEXT = (PFNGLSEPARABLEFILTER2DEXTPROC) load(userptr, "glSeparableFilter2DEXT");
}
static void glo_gl_load_GL_EXT_coordinate_frame( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_coordinate_frame) return;
    glo_glBinormal3bEXT = (PFNGLBINORMAL3BEXTPROC) load(userptr, "glBinormal3bEXT");
    glo_glBinormal3bvEXT = (PFNGLBINORMAL3BVEXTPROC) load(userptr, "glBinormal3bvEXT");
    glo_glBinormal3dEXT = (PFNGLBINORMAL3DEXTPROC) load(userptr, "glBinormal3dEXT");
    glo_glBinormal3dvEXT = (PFNGLBINORMAL3DVEXTPROC) load(userptr, "glBinormal3dvEXT");
    glo_glBinormal3fEXT = (PFNGLBINORMAL3FEXTPROC) load(userptr, "glBinormal3fEXT");
    glo_glBinormal3fvEXT = (PFNGLBINORMAL3FVEXTPROC) load(userptr, "glBinormal3fvEXT");
    glo_glBinormal3iEXT = (PFNGLBINORMAL3IEXTPROC) load(userptr, "glBinormal3iEXT");
    glo_glBinormal3ivEXT = (PFNGLBINORMAL3IVEXTPROC) load(userptr, "glBinormal3ivEXT");
    glo_glBinormal3sEXT = (PFNGLBINORMAL3SEXTPROC) load(userptr, "glBinormal3sEXT");
    glo_glBinormal3svEXT = (PFNGLBINORMAL3SVEXTPROC) load(userptr, "glBinormal3svEXT");
    glo_glBinormalPointerEXT = (PFNGLBINORMALPOINTEREXTPROC) load(userptr, "glBinormalPointerEXT");
    glo_glTangent3bEXT = (PFNGLTANGENT3BEXTPROC) load(userptr, "glTangent3bEXT");
    glo_glTangent3bvEXT = (PFNGLTANGENT3BVEXTPROC) load(userptr, "glTangent3bvEXT");
    glo_glTangent3dEXT = (PFNGLTANGENT3DEXTPROC) load(userptr, "glTangent3dEXT");
    glo_glTangent3dvEXT = (PFNGLTANGENT3DVEXTPROC) load(userptr, "glTangent3dvEXT");
    glo_glTangent3fEXT = (PFNGLTANGENT3FEXTPROC) load(userptr, "glTangent3fEXT");
    glo_glTangent3fvEXT = (PFNGLTANGENT3FVEXTPROC) load(userptr, "glTangent3fvEXT");
    glo_glTangent3iEXT = (PFNGLTANGENT3IEXTPROC) load(userptr, "glTangent3iEXT");
    glo_glTangent3ivEXT = (PFNGLTANGENT3IVEXTPROC) load(userptr, "glTangent3ivEXT");
    glo_glTangent3sEXT = (PFNGLTANGENT3SEXTPROC) load(userptr, "glTangent3sEXT");
    glo_glTangent3svEXT = (PFNGLTANGENT3SVEXTPROC) load(userptr, "glTangent3svEXT");
    glo_glTangentPointerEXT = (PFNGLTANGENTPOINTEREXTPROC) load(userptr, "glTangentPointerEXT");
}
static void glo_gl_load_GL_EXT_copy_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_copy_texture) return;
    glo_glCopyTexImage1DEXT = (PFNGLCOPYTEXIMAGE1DEXTPROC) load(userptr, "glCopyTexImage1DEXT");
    glo_glCopyTexImage2DEXT = (PFNGLCOPYTEXIMAGE2DEXTPROC) load(userptr, "glCopyTexImage2DEXT");
    glo_glCopyTexSubImage1DEXT = (PFNGLCOPYTEXSUBIMAGE1DEXTPROC) load(userptr, "glCopyTexSubImage1DEXT");
    glo_glCopyTexSubImage2DEXT = (PFNGLCOPYTEXSUBIMAGE2DEXTPROC) load(userptr, "glCopyTexSubImage2DEXT");
    glo_glCopyTexSubImage3DEXT = (PFNGLCOPYTEXSUBIMAGE3DEXTPROC) load(userptr, "glCopyTexSubImage3DEXT");
}
static void glo_gl_load_GL_EXT_cull_vertex( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_cull_vertex) return;
    glo_glCullParameterdvEXT = (PFNGLCULLPARAMETERDVEXTPROC) load(userptr, "glCullParameterdvEXT");
    glo_glCullParameterfvEXT = (PFNGLCULLPARAMETERFVEXTPROC) load(userptr, "glCullParameterfvEXT");
}
static void glo_gl_load_GL_EXT_debug_label( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_debug_label) return;
    glo_glGetObjectLabelEXT = (PFNGLGETOBJECTLABELEXTPROC) load(userptr, "glGetObjectLabelEXT");
    glo_glLabelObjectEXT = (PFNGLLABELOBJECTEXTPROC) load(userptr, "glLabelObjectEXT");
}
static void glo_gl_load_GL_EXT_debug_marker( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_debug_marker) return;
    glo_glInsertEventMarkerEXT = (PFNGLINSERTEVENTMARKEREXTPROC) load(userptr, "glInsertEventMarkerEXT");
    glo_glPopGroupMarkerEXT = (PFNGLPOPGROUPMARKEREXTPROC) load(userptr, "glPopGroupMarkerEXT");
    glo_glPushGroupMarkerEXT = (PFNGLPUSHGROUPMARKEREXTPROC) load(userptr, "glPushGroupMarkerEXT");
}
static void glo_gl_load_GL_EXT_depth_bounds_test( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_depth_bounds_test) return;
    glo_glDepthBoundsEXT = (PFNGLDEPTHBOUNDSEXTPROC) load(userptr, "glDepthBoundsEXT");
}
static void glo_gl_load_GL_EXT_direct_state_access( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_direct_state_access) return;
    glo_glBindMultiTextureEXT = (PFNGLBINDMULTITEXTUREEXTPROC) load(userptr, "glBindMultiTextureEXT");
    glo_glCheckNamedFramebufferStatusEXT = (PFNGLCHECKNAMEDFRAMEBUFFERSTATUSEXTPROC) load(userptr, "glCheckNamedFramebufferStatusEXT");
    glo_glClearNamedBufferDataEXT = (PFNGLCLEARNAMEDBUFFERDATAEXTPROC) load(userptr, "glClearNamedBufferDataEXT");
    glo_glClearNamedBufferSubDataEXT = (PFNGLCLEARNAMEDBUFFERSUBDATAEXTPROC) load(userptr, "glClearNamedBufferSubDataEXT");
    glo_glClientAttribDefaultEXT = (PFNGLCLIENTATTRIBDEFAULTEXTPROC) load(userptr, "glClientAttribDefaultEXT");
    glo_glCompressedMultiTexImage1DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE1DEXTPROC) load(userptr, "glCompressedMultiTexImage1DEXT");
    glo_glCompressedMultiTexImage2DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE2DEXTPROC) load(userptr, "glCompressedMultiTexImage2DEXT");
    glo_glCompressedMultiTexImage3DEXT = (PFNGLCOMPRESSEDMULTITEXIMAGE3DEXTPROC) load(userptr, "glCompressedMultiTexImage3DEXT");
    glo_glCompressedMultiTexSubImage1DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE1DEXTPROC) load(userptr, "glCompressedMultiTexSubImage1DEXT");
    glo_glCompressedMultiTexSubImage2DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE2DEXTPROC) load(userptr, "glCompressedMultiTexSubImage2DEXT");
    glo_glCompressedMultiTexSubImage3DEXT = (PFNGLCOMPRESSEDMULTITEXSUBIMAGE3DEXTPROC) load(userptr, "glCompressedMultiTexSubImage3DEXT");
    glo_glCompressedTextureImage1DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE1DEXTPROC) load(userptr, "glCompressedTextureImage1DEXT");
    glo_glCompressedTextureImage2DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE2DEXTPROC) load(userptr, "glCompressedTextureImage2DEXT");
    glo_glCompressedTextureImage3DEXT = (PFNGLCOMPRESSEDTEXTUREIMAGE3DEXTPROC) load(userptr, "glCompressedTextureImage3DEXT");
    glo_glCompressedTextureSubImage1DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE1DEXTPROC) load(userptr, "glCompressedTextureSubImage1DEXT");
    glo_glCompressedTextureSubImage2DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE2DEXTPROC) load(userptr, "glCompressedTextureSubImage2DEXT");
    glo_glCompressedTextureSubImage3DEXT = (PFNGLCOMPRESSEDTEXTURESUBIMAGE3DEXTPROC) load(userptr, "glCompressedTextureSubImage3DEXT");
    glo_glCopyMultiTexImage1DEXT = (PFNGLCOPYMULTITEXIMAGE1DEXTPROC) load(userptr, "glCopyMultiTexImage1DEXT");
    glo_glCopyMultiTexImage2DEXT = (PFNGLCOPYMULTITEXIMAGE2DEXTPROC) load(userptr, "glCopyMultiTexImage2DEXT");
    glo_glCopyMultiTexSubImage1DEXT = (PFNGLCOPYMULTITEXSUBIMAGE1DEXTPROC) load(userptr, "glCopyMultiTexSubImage1DEXT");
    glo_glCopyMultiTexSubImage2DEXT = (PFNGLCOPYMULTITEXSUBIMAGE2DEXTPROC) load(userptr, "glCopyMultiTexSubImage2DEXT");
    glo_glCopyMultiTexSubImage3DEXT = (PFNGLCOPYMULTITEXSUBIMAGE3DEXTPROC) load(userptr, "glCopyMultiTexSubImage3DEXT");
    glo_glCopyTextureImage1DEXT = (PFNGLCOPYTEXTUREIMAGE1DEXTPROC) load(userptr, "glCopyTextureImage1DEXT");
    glo_glCopyTextureImage2DEXT = (PFNGLCOPYTEXTUREIMAGE2DEXTPROC) load(userptr, "glCopyTextureImage2DEXT");
    glo_glCopyTextureSubImage1DEXT = (PFNGLCOPYTEXTURESUBIMAGE1DEXTPROC) load(userptr, "glCopyTextureSubImage1DEXT");
    glo_glCopyTextureSubImage2DEXT = (PFNGLCOPYTEXTURESUBIMAGE2DEXTPROC) load(userptr, "glCopyTextureSubImage2DEXT");
    glo_glCopyTextureSubImage3DEXT = (PFNGLCOPYTEXTURESUBIMAGE3DEXTPROC) load(userptr, "glCopyTextureSubImage3DEXT");
    glo_glDisableClientStateIndexedEXT = (PFNGLDISABLECLIENTSTATEINDEXEDEXTPROC) load(userptr, "glDisableClientStateIndexedEXT");
    glo_glDisableClientStateiEXT = (PFNGLDISABLECLIENTSTATEIEXTPROC) load(userptr, "glDisableClientStateiEXT");
    glo_glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) load(userptr, "glDisableIndexedEXT");
    glo_glDisableVertexArrayAttribEXT = (PFNGLDISABLEVERTEXARRAYATTRIBEXTPROC) load(userptr, "glDisableVertexArrayAttribEXT");
    glo_glDisableVertexArrayEXT = (PFNGLDISABLEVERTEXARRAYEXTPROC) load(userptr, "glDisableVertexArrayEXT");
    glo_glEnableClientStateIndexedEXT = (PFNGLENABLECLIENTSTATEINDEXEDEXTPROC) load(userptr, "glEnableClientStateIndexedEXT");
    glo_glEnableClientStateiEXT = (PFNGLENABLECLIENTSTATEIEXTPROC) load(userptr, "glEnableClientStateiEXT");
    glo_glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) load(userptr, "glEnableIndexedEXT");
    glo_glEnableVertexArrayAttribEXT = (PFNGLENABLEVERTEXARRAYATTRIBEXTPROC) load(userptr, "glEnableVertexArrayAttribEXT");
    glo_glEnableVertexArrayEXT = (PFNGLENABLEVERTEXARRAYEXTPROC) load(userptr, "glEnableVertexArrayEXT");
    glo_glFlushMappedNamedBufferRangeEXT = (PFNGLFLUSHMAPPEDNAMEDBUFFERRANGEEXTPROC) load(userptr, "glFlushMappedNamedBufferRangeEXT");
    glo_glFramebufferDrawBufferEXT = (PFNGLFRAMEBUFFERDRAWBUFFEREXTPROC) load(userptr, "glFramebufferDrawBufferEXT");
    glo_glFramebufferDrawBuffersEXT = (PFNGLFRAMEBUFFERDRAWBUFFERSEXTPROC) load(userptr, "glFramebufferDrawBuffersEXT");
    glo_glFramebufferReadBufferEXT = (PFNGLFRAMEBUFFERREADBUFFEREXTPROC) load(userptr, "glFramebufferReadBufferEXT");
    glo_glGenerateMultiTexMipmapEXT = (PFNGLGENERATEMULTITEXMIPMAPEXTPROC) load(userptr, "glGenerateMultiTexMipmapEXT");
    glo_glGenerateTextureMipmapEXT = (PFNGLGENERATETEXTUREMIPMAPEXTPROC) load(userptr, "glGenerateTextureMipmapEXT");
    glo_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) load(userptr, "glGetBooleanIndexedvEXT");
    glo_glGetCompressedMultiTexImageEXT = (PFNGLGETCOMPRESSEDMULTITEXIMAGEEXTPROC) load(userptr, "glGetCompressedMultiTexImageEXT");
    glo_glGetCompressedTextureImageEXT = (PFNGLGETCOMPRESSEDTEXTUREIMAGEEXTPROC) load(userptr, "glGetCompressedTextureImageEXT");
    glo_glGetDoubleIndexedvEXT = (PFNGLGETDOUBLEINDEXEDVEXTPROC) load(userptr, "glGetDoubleIndexedvEXT");
    glo_glGetDoublei_vEXT = (PFNGLGETDOUBLEI_VEXTPROC) load(userptr, "glGetDoublei_vEXT");
    glo_glGetFloatIndexedvEXT = (PFNGLGETFLOATINDEXEDVEXTPROC) load(userptr, "glGetFloatIndexedvEXT");
    glo_glGetFloati_vEXT = (PFNGLGETFLOATI_VEXTPROC) load(userptr, "glGetFloati_vEXT");
    glo_glGetFramebufferParameterivEXT = (PFNGLGETFRAMEBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetFramebufferParameterivEXT");
    glo_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) load(userptr, "glGetIntegerIndexedvEXT");
    glo_glGetMultiTexEnvfvEXT = (PFNGLGETMULTITEXENVFVEXTPROC) load(userptr, "glGetMultiTexEnvfvEXT");
    glo_glGetMultiTexEnvivEXT = (PFNGLGETMULTITEXENVIVEXTPROC) load(userptr, "glGetMultiTexEnvivEXT");
    glo_glGetMultiTexGendvEXT = (PFNGLGETMULTITEXGENDVEXTPROC) load(userptr, "glGetMultiTexGendvEXT");
    glo_glGetMultiTexGenfvEXT = (PFNGLGETMULTITEXGENFVEXTPROC) load(userptr, "glGetMultiTexGenfvEXT");
    glo_glGetMultiTexGenivEXT = (PFNGLGETMULTITEXGENIVEXTPROC) load(userptr, "glGetMultiTexGenivEXT");
    glo_glGetMultiTexImageEXT = (PFNGLGETMULTITEXIMAGEEXTPROC) load(userptr, "glGetMultiTexImageEXT");
    glo_glGetMultiTexLevelParameterfvEXT = (PFNGLGETMULTITEXLEVELPARAMETERFVEXTPROC) load(userptr, "glGetMultiTexLevelParameterfvEXT");
    glo_glGetMultiTexLevelParameterivEXT = (PFNGLGETMULTITEXLEVELPARAMETERIVEXTPROC) load(userptr, "glGetMultiTexLevelParameterivEXT");
    glo_glGetMultiTexParameterIivEXT = (PFNGLGETMULTITEXPARAMETERIIVEXTPROC) load(userptr, "glGetMultiTexParameterIivEXT");
    glo_glGetMultiTexParameterIuivEXT = (PFNGLGETMULTITEXPARAMETERIUIVEXTPROC) load(userptr, "glGetMultiTexParameterIuivEXT");
    glo_glGetMultiTexParameterfvEXT = (PFNGLGETMULTITEXPARAMETERFVEXTPROC) load(userptr, "glGetMultiTexParameterfvEXT");
    glo_glGetMultiTexParameterivEXT = (PFNGLGETMULTITEXPARAMETERIVEXTPROC) load(userptr, "glGetMultiTexParameterivEXT");
    glo_glGetNamedBufferParameterivEXT = (PFNGLGETNAMEDBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetNamedBufferParameterivEXT");
    glo_glGetNamedBufferPointervEXT = (PFNGLGETNAMEDBUFFERPOINTERVEXTPROC) load(userptr, "glGetNamedBufferPointervEXT");
    glo_glGetNamedBufferSubDataEXT = (PFNGLGETNAMEDBUFFERSUBDATAEXTPROC) load(userptr, "glGetNamedBufferSubDataEXT");
    glo_glGetNamedFramebufferAttachmentParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) load(userptr, "glGetNamedFramebufferAttachmentParameterivEXT");
    glo_glGetNamedFramebufferParameterivEXT = (PFNGLGETNAMEDFRAMEBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetNamedFramebufferParameterivEXT");
    glo_glGetNamedProgramLocalParameterIivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIIVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterIivEXT");
    glo_glGetNamedProgramLocalParameterIuivEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERIUIVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterIuivEXT");
    glo_glGetNamedProgramLocalParameterdvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERDVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterdvEXT");
    glo_glGetNamedProgramLocalParameterfvEXT = (PFNGLGETNAMEDPROGRAMLOCALPARAMETERFVEXTPROC) load(userptr, "glGetNamedProgramLocalParameterfvEXT");
    glo_glGetNamedProgramStringEXT = (PFNGLGETNAMEDPROGRAMSTRINGEXTPROC) load(userptr, "glGetNamedProgramStringEXT");
    glo_glGetNamedProgramivEXT = (PFNGLGETNAMEDPROGRAMIVEXTPROC) load(userptr, "glGetNamedProgramivEXT");
    glo_glGetNamedRenderbufferParameterivEXT = (PFNGLGETNAMEDRENDERBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetNamedRenderbufferParameterivEXT");
    glo_glGetPointerIndexedvEXT = (PFNGLGETPOINTERINDEXEDVEXTPROC) load(userptr, "glGetPointerIndexedvEXT");
    glo_glGetPointeri_vEXT = (PFNGLGETPOINTERI_VEXTPROC) load(userptr, "glGetPointeri_vEXT");
    glo_glGetTextureImageEXT = (PFNGLGETTEXTUREIMAGEEXTPROC) load(userptr, "glGetTextureImageEXT");
    glo_glGetTextureLevelParameterfvEXT = (PFNGLGETTEXTURELEVELPARAMETERFVEXTPROC) load(userptr, "glGetTextureLevelParameterfvEXT");
    glo_glGetTextureLevelParameterivEXT = (PFNGLGETTEXTURELEVELPARAMETERIVEXTPROC) load(userptr, "glGetTextureLevelParameterivEXT");
    glo_glGetTextureParameterIivEXT = (PFNGLGETTEXTUREPARAMETERIIVEXTPROC) load(userptr, "glGetTextureParameterIivEXT");
    glo_glGetTextureParameterIuivEXT = (PFNGLGETTEXTUREPARAMETERIUIVEXTPROC) load(userptr, "glGetTextureParameterIuivEXT");
    glo_glGetTextureParameterfvEXT = (PFNGLGETTEXTUREPARAMETERFVEXTPROC) load(userptr, "glGetTextureParameterfvEXT");
    glo_glGetTextureParameterivEXT = (PFNGLGETTEXTUREPARAMETERIVEXTPROC) load(userptr, "glGetTextureParameterivEXT");
    glo_glGetVertexArrayIntegeri_vEXT = (PFNGLGETVERTEXARRAYINTEGERI_VEXTPROC) load(userptr, "glGetVertexArrayIntegeri_vEXT");
    glo_glGetVertexArrayIntegervEXT = (PFNGLGETVERTEXARRAYINTEGERVEXTPROC) load(userptr, "glGetVertexArrayIntegervEXT");
    glo_glGetVertexArrayPointeri_vEXT = (PFNGLGETVERTEXARRAYPOINTERI_VEXTPROC) load(userptr, "glGetVertexArrayPointeri_vEXT");
    glo_glGetVertexArrayPointervEXT = (PFNGLGETVERTEXARRAYPOINTERVEXTPROC) load(userptr, "glGetVertexArrayPointervEXT");
    glo_glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) load(userptr, "glIsEnabledIndexedEXT");
    glo_glMapNamedBufferEXT = (PFNGLMAPNAMEDBUFFEREXTPROC) load(userptr, "glMapNamedBufferEXT");
    glo_glMapNamedBufferRangeEXT = (PFNGLMAPNAMEDBUFFERRANGEEXTPROC) load(userptr, "glMapNamedBufferRangeEXT");
    glo_glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) load(userptr, "glMatrixFrustumEXT");
    glo_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) load(userptr, "glMatrixLoadIdentityEXT");
    glo_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) load(userptr, "glMatrixLoadTransposedEXT");
    glo_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) load(userptr, "glMatrixLoadTransposefEXT");
    glo_glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) load(userptr, "glMatrixLoaddEXT");
    glo_glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) load(userptr, "glMatrixLoadfEXT");
    glo_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) load(userptr, "glMatrixMultTransposedEXT");
    glo_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) load(userptr, "glMatrixMultTransposefEXT");
    glo_glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) load(userptr, "glMatrixMultdEXT");
    glo_glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) load(userptr, "glMatrixMultfEXT");
    glo_glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) load(userptr, "glMatrixOrthoEXT");
    glo_glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) load(userptr, "glMatrixPopEXT");
    glo_glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) load(userptr, "glMatrixPushEXT");
    glo_glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) load(userptr, "glMatrixRotatedEXT");
    glo_glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) load(userptr, "glMatrixRotatefEXT");
    glo_glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) load(userptr, "glMatrixScaledEXT");
    glo_glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) load(userptr, "glMatrixScalefEXT");
    glo_glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) load(userptr, "glMatrixTranslatedEXT");
    glo_glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) load(userptr, "glMatrixTranslatefEXT");
    glo_glMultiTexBufferEXT = (PFNGLMULTITEXBUFFEREXTPROC) load(userptr, "glMultiTexBufferEXT");
    glo_glMultiTexCoordPointerEXT = (PFNGLMULTITEXCOORDPOINTEREXTPROC) load(userptr, "glMultiTexCoordPointerEXT");
    glo_glMultiTexEnvfEXT = (PFNGLMULTITEXENVFEXTPROC) load(userptr, "glMultiTexEnvfEXT");
    glo_glMultiTexEnvfvEXT = (PFNGLMULTITEXENVFVEXTPROC) load(userptr, "glMultiTexEnvfvEXT");
    glo_glMultiTexEnviEXT = (PFNGLMULTITEXENVIEXTPROC) load(userptr, "glMultiTexEnviEXT");
    glo_glMultiTexEnvivEXT = (PFNGLMULTITEXENVIVEXTPROC) load(userptr, "glMultiTexEnvivEXT");
    glo_glMultiTexGendEXT = (PFNGLMULTITEXGENDEXTPROC) load(userptr, "glMultiTexGendEXT");
    glo_glMultiTexGendvEXT = (PFNGLMULTITEXGENDVEXTPROC) load(userptr, "glMultiTexGendvEXT");
    glo_glMultiTexGenfEXT = (PFNGLMULTITEXGENFEXTPROC) load(userptr, "glMultiTexGenfEXT");
    glo_glMultiTexGenfvEXT = (PFNGLMULTITEXGENFVEXTPROC) load(userptr, "glMultiTexGenfvEXT");
    glo_glMultiTexGeniEXT = (PFNGLMULTITEXGENIEXTPROC) load(userptr, "glMultiTexGeniEXT");
    glo_glMultiTexGenivEXT = (PFNGLMULTITEXGENIVEXTPROC) load(userptr, "glMultiTexGenivEXT");
    glo_glMultiTexImage1DEXT = (PFNGLMULTITEXIMAGE1DEXTPROC) load(userptr, "glMultiTexImage1DEXT");
    glo_glMultiTexImage2DEXT = (PFNGLMULTITEXIMAGE2DEXTPROC) load(userptr, "glMultiTexImage2DEXT");
    glo_glMultiTexImage3DEXT = (PFNGLMULTITEXIMAGE3DEXTPROC) load(userptr, "glMultiTexImage3DEXT");
    glo_glMultiTexParameterIivEXT = (PFNGLMULTITEXPARAMETERIIVEXTPROC) load(userptr, "glMultiTexParameterIivEXT");
    glo_glMultiTexParameterIuivEXT = (PFNGLMULTITEXPARAMETERIUIVEXTPROC) load(userptr, "glMultiTexParameterIuivEXT");
    glo_glMultiTexParameterfEXT = (PFNGLMULTITEXPARAMETERFEXTPROC) load(userptr, "glMultiTexParameterfEXT");
    glo_glMultiTexParameterfvEXT = (PFNGLMULTITEXPARAMETERFVEXTPROC) load(userptr, "glMultiTexParameterfvEXT");
    glo_glMultiTexParameteriEXT = (PFNGLMULTITEXPARAMETERIEXTPROC) load(userptr, "glMultiTexParameteriEXT");
    glo_glMultiTexParameterivEXT = (PFNGLMULTITEXPARAMETERIVEXTPROC) load(userptr, "glMultiTexParameterivEXT");
    glo_glMultiTexRenderbufferEXT = (PFNGLMULTITEXRENDERBUFFEREXTPROC) load(userptr, "glMultiTexRenderbufferEXT");
    glo_glMultiTexSubImage1DEXT = (PFNGLMULTITEXSUBIMAGE1DEXTPROC) load(userptr, "glMultiTexSubImage1DEXT");
    glo_glMultiTexSubImage2DEXT = (PFNGLMULTITEXSUBIMAGE2DEXTPROC) load(userptr, "glMultiTexSubImage2DEXT");
    glo_glMultiTexSubImage3DEXT = (PFNGLMULTITEXSUBIMAGE3DEXTPROC) load(userptr, "glMultiTexSubImage3DEXT");
    glo_glNamedBufferDataEXT = (PFNGLNAMEDBUFFERDATAEXTPROC) load(userptr, "glNamedBufferDataEXT");
    glo_glNamedBufferStorageEXT = (PFNGLNAMEDBUFFERSTORAGEEXTPROC) load(userptr, "glNamedBufferStorageEXT");
    glo_glNamedBufferSubDataEXT = (PFNGLNAMEDBUFFERSUBDATAEXTPROC) load(userptr, "glNamedBufferSubDataEXT");
    glo_glNamedCopyBufferSubDataEXT = (PFNGLNAMEDCOPYBUFFERSUBDATAEXTPROC) load(userptr, "glNamedCopyBufferSubDataEXT");
    glo_glNamedFramebufferParameteriEXT = (PFNGLNAMEDFRAMEBUFFERPARAMETERIEXTPROC) load(userptr, "glNamedFramebufferParameteriEXT");
    glo_glNamedFramebufferRenderbufferEXT = (PFNGLNAMEDFRAMEBUFFERRENDERBUFFEREXTPROC) load(userptr, "glNamedFramebufferRenderbufferEXT");
    glo_glNamedFramebufferTexture1DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE1DEXTPROC) load(userptr, "glNamedFramebufferTexture1DEXT");
    glo_glNamedFramebufferTexture2DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE2DEXTPROC) load(userptr, "glNamedFramebufferTexture2DEXT");
    glo_glNamedFramebufferTexture3DEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURE3DEXTPROC) load(userptr, "glNamedFramebufferTexture3DEXT");
    glo_glNamedFramebufferTextureEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREEXTPROC) load(userptr, "glNamedFramebufferTextureEXT");
    glo_glNamedFramebufferTextureFaceEXT = (PFNGLNAMEDFRAMEBUFFERTEXTUREFACEEXTPROC) load(userptr, "glNamedFramebufferTextureFaceEXT");
    glo_glNamedFramebufferTextureLayerEXT = (PFNGLNAMEDFRAMEBUFFERTEXTURELAYEREXTPROC) load(userptr, "glNamedFramebufferTextureLayerEXT");
    glo_glNamedProgramLocalParameter4dEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DEXTPROC) load(userptr, "glNamedProgramLocalParameter4dEXT");
    glo_glNamedProgramLocalParameter4dvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4DVEXTPROC) load(userptr, "glNamedProgramLocalParameter4dvEXT");
    glo_glNamedProgramLocalParameter4fEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FEXTPROC) load(userptr, "glNamedProgramLocalParameter4fEXT");
    glo_glNamedProgramLocalParameter4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETER4FVEXTPROC) load(userptr, "glNamedProgramLocalParameter4fvEXT");
    glo_glNamedProgramLocalParameterI4iEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IEXTPROC) load(userptr, "glNamedProgramLocalParameterI4iEXT");
    glo_glNamedProgramLocalParameterI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4IVEXTPROC) load(userptr, "glNamedProgramLocalParameterI4ivEXT");
    glo_glNamedProgramLocalParameterI4uiEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIEXTPROC) load(userptr, "glNamedProgramLocalParameterI4uiEXT");
    glo_glNamedProgramLocalParameterI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERI4UIVEXTPROC) load(userptr, "glNamedProgramLocalParameterI4uivEXT");
    glo_glNamedProgramLocalParameters4fvEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERS4FVEXTPROC) load(userptr, "glNamedProgramLocalParameters4fvEXT");
    glo_glNamedProgramLocalParametersI4ivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4IVEXTPROC) load(userptr, "glNamedProgramLocalParametersI4ivEXT");
    glo_glNamedProgramLocalParametersI4uivEXT = (PFNGLNAMEDPROGRAMLOCALPARAMETERSI4UIVEXTPROC) load(userptr, "glNamedProgramLocalParametersI4uivEXT");
    glo_glNamedProgramStringEXT = (PFNGLNAMEDPROGRAMSTRINGEXTPROC) load(userptr, "glNamedProgramStringEXT");
    glo_glNamedRenderbufferStorageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEEXTPROC) load(userptr, "glNamedRenderbufferStorageEXT");
    glo_glNamedRenderbufferStorageMultisampleCoverageEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLECOVERAGEEXTPROC) load(userptr, "glNamedRenderbufferStorageMultisampleCoverageEXT");
    glo_glNamedRenderbufferStorageMultisampleEXT = (PFNGLNAMEDRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) load(userptr, "glNamedRenderbufferStorageMultisampleEXT");
    glo_glProgramUniform1dEXT = (PFNGLPROGRAMUNIFORM1DEXTPROC) load(userptr, "glProgramUniform1dEXT");
    glo_glProgramUniform1dvEXT = (PFNGLPROGRAMUNIFORM1DVEXTPROC) load(userptr, "glProgramUniform1dvEXT");
    glo_glProgramUniform1fEXT = (PFNGLPROGRAMUNIFORM1FEXTPROC) load(userptr, "glProgramUniform1fEXT");
    glo_glProgramUniform1fvEXT = (PFNGLPROGRAMUNIFORM1FVEXTPROC) load(userptr, "glProgramUniform1fvEXT");
    glo_glProgramUniform1iEXT = (PFNGLPROGRAMUNIFORM1IEXTPROC) load(userptr, "glProgramUniform1iEXT");
    glo_glProgramUniform1ivEXT = (PFNGLPROGRAMUNIFORM1IVEXTPROC) load(userptr, "glProgramUniform1ivEXT");
    glo_glProgramUniform1uiEXT = (PFNGLPROGRAMUNIFORM1UIEXTPROC) load(userptr, "glProgramUniform1uiEXT");
    glo_glProgramUniform1uivEXT = (PFNGLPROGRAMUNIFORM1UIVEXTPROC) load(userptr, "glProgramUniform1uivEXT");
    glo_glProgramUniform2dEXT = (PFNGLPROGRAMUNIFORM2DEXTPROC) load(userptr, "glProgramUniform2dEXT");
    glo_glProgramUniform2dvEXT = (PFNGLPROGRAMUNIFORM2DVEXTPROC) load(userptr, "glProgramUniform2dvEXT");
    glo_glProgramUniform2fEXT = (PFNGLPROGRAMUNIFORM2FEXTPROC) load(userptr, "glProgramUniform2fEXT");
    glo_glProgramUniform2fvEXT = (PFNGLPROGRAMUNIFORM2FVEXTPROC) load(userptr, "glProgramUniform2fvEXT");
    glo_glProgramUniform2iEXT = (PFNGLPROGRAMUNIFORM2IEXTPROC) load(userptr, "glProgramUniform2iEXT");
    glo_glProgramUniform2ivEXT = (PFNGLPROGRAMUNIFORM2IVEXTPROC) load(userptr, "glProgramUniform2ivEXT");
    glo_glProgramUniform2uiEXT = (PFNGLPROGRAMUNIFORM2UIEXTPROC) load(userptr, "glProgramUniform2uiEXT");
    glo_glProgramUniform2uivEXT = (PFNGLPROGRAMUNIFORM2UIVEXTPROC) load(userptr, "glProgramUniform2uivEXT");
    glo_glProgramUniform3dEXT = (PFNGLPROGRAMUNIFORM3DEXTPROC) load(userptr, "glProgramUniform3dEXT");
    glo_glProgramUniform3dvEXT = (PFNGLPROGRAMUNIFORM3DVEXTPROC) load(userptr, "glProgramUniform3dvEXT");
    glo_glProgramUniform3fEXT = (PFNGLPROGRAMUNIFORM3FEXTPROC) load(userptr, "glProgramUniform3fEXT");
    glo_glProgramUniform3fvEXT = (PFNGLPROGRAMUNIFORM3FVEXTPROC) load(userptr, "glProgramUniform3fvEXT");
    glo_glProgramUniform3iEXT = (PFNGLPROGRAMUNIFORM3IEXTPROC) load(userptr, "glProgramUniform3iEXT");
    glo_glProgramUniform3ivEXT = (PFNGLPROGRAMUNIFORM3IVEXTPROC) load(userptr, "glProgramUniform3ivEXT");
    glo_glProgramUniform3uiEXT = (PFNGLPROGRAMUNIFORM3UIEXTPROC) load(userptr, "glProgramUniform3uiEXT");
    glo_glProgramUniform3uivEXT = (PFNGLPROGRAMUNIFORM3UIVEXTPROC) load(userptr, "glProgramUniform3uivEXT");
    glo_glProgramUniform4dEXT = (PFNGLPROGRAMUNIFORM4DEXTPROC) load(userptr, "glProgramUniform4dEXT");
    glo_glProgramUniform4dvEXT = (PFNGLPROGRAMUNIFORM4DVEXTPROC) load(userptr, "glProgramUniform4dvEXT");
    glo_glProgramUniform4fEXT = (PFNGLPROGRAMUNIFORM4FEXTPROC) load(userptr, "glProgramUniform4fEXT");
    glo_glProgramUniform4fvEXT = (PFNGLPROGRAMUNIFORM4FVEXTPROC) load(userptr, "glProgramUniform4fvEXT");
    glo_glProgramUniform4iEXT = (PFNGLPROGRAMUNIFORM4IEXTPROC) load(userptr, "glProgramUniform4iEXT");
    glo_glProgramUniform4ivEXT = (PFNGLPROGRAMUNIFORM4IVEXTPROC) load(userptr, "glProgramUniform4ivEXT");
    glo_glProgramUniform4uiEXT = (PFNGLPROGRAMUNIFORM4UIEXTPROC) load(userptr, "glProgramUniform4uiEXT");
    glo_glProgramUniform4uivEXT = (PFNGLPROGRAMUNIFORM4UIVEXTPROC) load(userptr, "glProgramUniform4uivEXT");
    glo_glProgramUniformMatrix2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2DVEXTPROC) load(userptr, "glProgramUniformMatrix2dvEXT");
    glo_glProgramUniformMatrix2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2FVEXTPROC) load(userptr, "glProgramUniformMatrix2fvEXT");
    glo_glProgramUniformMatrix2x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3DVEXTPROC) load(userptr, "glProgramUniformMatrix2x3dvEXT");
    glo_glProgramUniformMatrix2x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) load(userptr, "glProgramUniformMatrix2x3fvEXT");
    glo_glProgramUniformMatrix2x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4DVEXTPROC) load(userptr, "glProgramUniformMatrix2x4dvEXT");
    glo_glProgramUniformMatrix2x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) load(userptr, "glProgramUniformMatrix2x4fvEXT");
    glo_glProgramUniformMatrix3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3DVEXTPROC) load(userptr, "glProgramUniformMatrix3dvEXT");
    glo_glProgramUniformMatrix3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3FVEXTPROC) load(userptr, "glProgramUniformMatrix3fvEXT");
    glo_glProgramUniformMatrix3x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2DVEXTPROC) load(userptr, "glProgramUniformMatrix3x2dvEXT");
    glo_glProgramUniformMatrix3x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) load(userptr, "glProgramUniformMatrix3x2fvEXT");
    glo_glProgramUniformMatrix3x4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4DVEXTPROC) load(userptr, "glProgramUniformMatrix3x4dvEXT");
    glo_glProgramUniformMatrix3x4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) load(userptr, "glProgramUniformMatrix3x4fvEXT");
    glo_glProgramUniformMatrix4dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4DVEXTPROC) load(userptr, "glProgramUniformMatrix4dvEXT");
    glo_glProgramUniformMatrix4fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4FVEXTPROC) load(userptr, "glProgramUniformMatrix4fvEXT");
    glo_glProgramUniformMatrix4x2dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2DVEXTPROC) load(userptr, "glProgramUniformMatrix4x2dvEXT");
    glo_glProgramUniformMatrix4x2fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) load(userptr, "glProgramUniformMatrix4x2fvEXT");
    glo_glProgramUniformMatrix4x3dvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3DVEXTPROC) load(userptr, "glProgramUniformMatrix4x3dvEXT");
    glo_glProgramUniformMatrix4x3fvEXT = (PFNGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) load(userptr, "glProgramUniformMatrix4x3fvEXT");
    glo_glPushClientAttribDefaultEXT = (PFNGLPUSHCLIENTATTRIBDEFAULTEXTPROC) load(userptr, "glPushClientAttribDefaultEXT");
    glo_glTextureBufferEXT = (PFNGLTEXTUREBUFFEREXTPROC) load(userptr, "glTextureBufferEXT");
    glo_glTextureBufferRangeEXT = (PFNGLTEXTUREBUFFERRANGEEXTPROC) load(userptr, "glTextureBufferRangeEXT");
    glo_glTextureImage1DEXT = (PFNGLTEXTUREIMAGE1DEXTPROC) load(userptr, "glTextureImage1DEXT");
    glo_glTextureImage2DEXT = (PFNGLTEXTUREIMAGE2DEXTPROC) load(userptr, "glTextureImage2DEXT");
    glo_glTextureImage3DEXT = (PFNGLTEXTUREIMAGE3DEXTPROC) load(userptr, "glTextureImage3DEXT");
    glo_glTexturePageCommitmentEXT = (PFNGLTEXTUREPAGECOMMITMENTEXTPROC) load(userptr, "glTexturePageCommitmentEXT");
    glo_glTextureParameterIivEXT = (PFNGLTEXTUREPARAMETERIIVEXTPROC) load(userptr, "glTextureParameterIivEXT");
    glo_glTextureParameterIuivEXT = (PFNGLTEXTUREPARAMETERIUIVEXTPROC) load(userptr, "glTextureParameterIuivEXT");
    glo_glTextureParameterfEXT = (PFNGLTEXTUREPARAMETERFEXTPROC) load(userptr, "glTextureParameterfEXT");
    glo_glTextureParameterfvEXT = (PFNGLTEXTUREPARAMETERFVEXTPROC) load(userptr, "glTextureParameterfvEXT");
    glo_glTextureParameteriEXT = (PFNGLTEXTUREPARAMETERIEXTPROC) load(userptr, "glTextureParameteriEXT");
    glo_glTextureParameterivEXT = (PFNGLTEXTUREPARAMETERIVEXTPROC) load(userptr, "glTextureParameterivEXT");
    glo_glTextureRenderbufferEXT = (PFNGLTEXTURERENDERBUFFEREXTPROC) load(userptr, "glTextureRenderbufferEXT");
    glo_glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) load(userptr, "glTextureStorage1DEXT");
    glo_glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) load(userptr, "glTextureStorage2DEXT");
    glo_glTextureStorage2DMultisampleEXT = (PFNGLTEXTURESTORAGE2DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorage2DMultisampleEXT");
    glo_glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) load(userptr, "glTextureStorage3DEXT");
    glo_glTextureStorage3DMultisampleEXT = (PFNGLTEXTURESTORAGE3DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorage3DMultisampleEXT");
    glo_glTextureSubImage1DEXT = (PFNGLTEXTURESUBIMAGE1DEXTPROC) load(userptr, "glTextureSubImage1DEXT");
    glo_glTextureSubImage2DEXT = (PFNGLTEXTURESUBIMAGE2DEXTPROC) load(userptr, "glTextureSubImage2DEXT");
    glo_glTextureSubImage3DEXT = (PFNGLTEXTURESUBIMAGE3DEXTPROC) load(userptr, "glTextureSubImage3DEXT");
    glo_glUnmapNamedBufferEXT = (PFNGLUNMAPNAMEDBUFFEREXTPROC) load(userptr, "glUnmapNamedBufferEXT");
    glo_glVertexArrayBindVertexBufferEXT = (PFNGLVERTEXARRAYBINDVERTEXBUFFEREXTPROC) load(userptr, "glVertexArrayBindVertexBufferEXT");
    glo_glVertexArrayColorOffsetEXT = (PFNGLVERTEXARRAYCOLOROFFSETEXTPROC) load(userptr, "glVertexArrayColorOffsetEXT");
    glo_glVertexArrayEdgeFlagOffsetEXT = (PFNGLVERTEXARRAYEDGEFLAGOFFSETEXTPROC) load(userptr, "glVertexArrayEdgeFlagOffsetEXT");
    glo_glVertexArrayFogCoordOffsetEXT = (PFNGLVERTEXARRAYFOGCOORDOFFSETEXTPROC) load(userptr, "glVertexArrayFogCoordOffsetEXT");
    glo_glVertexArrayIndexOffsetEXT = (PFNGLVERTEXARRAYINDEXOFFSETEXTPROC) load(userptr, "glVertexArrayIndexOffsetEXT");
    glo_glVertexArrayMultiTexCoordOffsetEXT = (PFNGLVERTEXARRAYMULTITEXCOORDOFFSETEXTPROC) load(userptr, "glVertexArrayMultiTexCoordOffsetEXT");
    glo_glVertexArrayNormalOffsetEXT = (PFNGLVERTEXARRAYNORMALOFFSETEXTPROC) load(userptr, "glVertexArrayNormalOffsetEXT");
    glo_glVertexArraySecondaryColorOffsetEXT = (PFNGLVERTEXARRAYSECONDARYCOLOROFFSETEXTPROC) load(userptr, "glVertexArraySecondaryColorOffsetEXT");
    glo_glVertexArrayTexCoordOffsetEXT = (PFNGLVERTEXARRAYTEXCOORDOFFSETEXTPROC) load(userptr, "glVertexArrayTexCoordOffsetEXT");
    glo_glVertexArrayVertexAttribBindingEXT = (PFNGLVERTEXARRAYVERTEXATTRIBBINDINGEXTPROC) load(userptr, "glVertexArrayVertexAttribBindingEXT");
    glo_glVertexArrayVertexAttribDivisorEXT = (PFNGLVERTEXARRAYVERTEXATTRIBDIVISOREXTPROC) load(userptr, "glVertexArrayVertexAttribDivisorEXT");
    glo_glVertexArrayVertexAttribFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBFORMATEXTPROC) load(userptr, "glVertexArrayVertexAttribFormatEXT");
    glo_glVertexArrayVertexAttribIFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIFORMATEXTPROC) load(userptr, "glVertexArrayVertexAttribIFormatEXT");
    glo_glVertexArrayVertexAttribIOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBIOFFSETEXTPROC) load(userptr, "glVertexArrayVertexAttribIOffsetEXT");
    glo_glVertexArrayVertexAttribLFormatEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLFORMATEXTPROC) load(userptr, "glVertexArrayVertexAttribLFormatEXT");
    glo_glVertexArrayVertexAttribLOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBLOFFSETEXTPROC) load(userptr, "glVertexArrayVertexAttribLOffsetEXT");
    glo_glVertexArrayVertexAttribOffsetEXT = (PFNGLVERTEXARRAYVERTEXATTRIBOFFSETEXTPROC) load(userptr, "glVertexArrayVertexAttribOffsetEXT");
    glo_glVertexArrayVertexBindingDivisorEXT = (PFNGLVERTEXARRAYVERTEXBINDINGDIVISOREXTPROC) load(userptr, "glVertexArrayVertexBindingDivisorEXT");
    glo_glVertexArrayVertexOffsetEXT = (PFNGLVERTEXARRAYVERTEXOFFSETEXTPROC) load(userptr, "glVertexArrayVertexOffsetEXT");
}
static void glo_gl_load_GL_EXT_draw_buffers2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_draw_buffers2) return;
    glo_glColorMaskIndexedEXT = (PFNGLCOLORMASKINDEXEDEXTPROC) load(userptr, "glColorMaskIndexedEXT");
    glo_glDisableIndexedEXT = (PFNGLDISABLEINDEXEDEXTPROC) load(userptr, "glDisableIndexedEXT");
    glo_glEnableIndexedEXT = (PFNGLENABLEINDEXEDEXTPROC) load(userptr, "glEnableIndexedEXT");
    glo_glGetBooleanIndexedvEXT = (PFNGLGETBOOLEANINDEXEDVEXTPROC) load(userptr, "glGetBooleanIndexedvEXT");
    glo_glGetIntegerIndexedvEXT = (PFNGLGETINTEGERINDEXEDVEXTPROC) load(userptr, "glGetIntegerIndexedvEXT");
    glo_glIsEnabledIndexedEXT = (PFNGLISENABLEDINDEXEDEXTPROC) load(userptr, "glIsEnabledIndexedEXT");
}
static void glo_gl_load_GL_EXT_draw_instanced( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_draw_instanced) return;
    glo_glDrawArraysInstancedEXT = (PFNGLDRAWARRAYSINSTANCEDEXTPROC) load(userptr, "glDrawArraysInstancedEXT");
    glo_glDrawElementsInstancedEXT = (PFNGLDRAWELEMENTSINSTANCEDEXTPROC) load(userptr, "glDrawElementsInstancedEXT");
}
static void glo_gl_load_GL_EXT_draw_range_elements( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_draw_range_elements) return;
    glo_glDrawRangeElementsEXT = (PFNGLDRAWRANGEELEMENTSEXTPROC) load(userptr, "glDrawRangeElementsEXT");
}
static void glo_gl_load_GL_EXT_external_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_external_buffer) return;
    glo_glBufferStorageExternalEXT = (PFNGLBUFFERSTORAGEEXTERNALEXTPROC) load(userptr, "glBufferStorageExternalEXT");
    glo_glNamedBufferStorageExternalEXT = (PFNGLNAMEDBUFFERSTORAGEEXTERNALEXTPROC) load(userptr, "glNamedBufferStorageExternalEXT");
}
static void glo_gl_load_GL_EXT_fog_coord( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_fog_coord) return;
    glo_glFogCoordPointerEXT = (PFNGLFOGCOORDPOINTEREXTPROC) load(userptr, "glFogCoordPointerEXT");
    glo_glFogCoorddEXT = (PFNGLFOGCOORDDEXTPROC) load(userptr, "glFogCoorddEXT");
    glo_glFogCoorddvEXT = (PFNGLFOGCOORDDVEXTPROC) load(userptr, "glFogCoorddvEXT");
    glo_glFogCoordfEXT = (PFNGLFOGCOORDFEXTPROC) load(userptr, "glFogCoordfEXT");
    glo_glFogCoordfvEXT = (PFNGLFOGCOORDFVEXTPROC) load(userptr, "glFogCoordfvEXT");
}
static void glo_gl_load_GL_EXT_fragment_shading_rate( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_fragment_shading_rate) return;
    glo_glFramebufferShadingRateEXT = (PFNGLFRAMEBUFFERSHADINGRATEEXTPROC) load(userptr, "glFramebufferShadingRateEXT");
    glo_glGetFragmentShadingRatesEXT = (PFNGLGETFRAGMENTSHADINGRATESEXTPROC) load(userptr, "glGetFragmentShadingRatesEXT");
    glo_glShadingRateCombinerOpsEXT = (PFNGLSHADINGRATECOMBINEROPSEXTPROC) load(userptr, "glShadingRateCombinerOpsEXT");
    glo_glShadingRateEXT = (PFNGLSHADINGRATEEXTPROC) load(userptr, "glShadingRateEXT");
}
static void glo_gl_load_GL_EXT_framebuffer_blit( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_framebuffer_blit) return;
    glo_glBlitFramebufferEXT = (PFNGLBLITFRAMEBUFFEREXTPROC) load(userptr, "glBlitFramebufferEXT");
}
static void glo_gl_load_GL_EXT_framebuffer_blit_layers( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_framebuffer_blit_layers) return;
    glo_glBlitFramebufferLayerEXT = (PFNGLBLITFRAMEBUFFERLAYEREXTPROC) load(userptr, "glBlitFramebufferLayerEXT");
    glo_glBlitFramebufferLayersEXT = (PFNGLBLITFRAMEBUFFERLAYERSEXTPROC) load(userptr, "glBlitFramebufferLayersEXT");
}
static void glo_gl_load_GL_EXT_framebuffer_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_framebuffer_multisample) return;
    glo_glRenderbufferStorageMultisampleEXT = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) load(userptr, "glRenderbufferStorageMultisampleEXT");
}
static void glo_gl_load_GL_EXT_framebuffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_framebuffer_object) return;
    glo_glBindFramebufferEXT = (PFNGLBINDFRAMEBUFFEREXTPROC) load(userptr, "glBindFramebufferEXT");
    glo_glBindRenderbufferEXT = (PFNGLBINDRENDERBUFFEREXTPROC) load(userptr, "glBindRenderbufferEXT");
    glo_glCheckFramebufferStatusEXT = (PFNGLCHECKFRAMEBUFFERSTATUSEXTPROC) load(userptr, "glCheckFramebufferStatusEXT");
    glo_glDeleteFramebuffersEXT = (PFNGLDELETEFRAMEBUFFERSEXTPROC) load(userptr, "glDeleteFramebuffersEXT");
    glo_glDeleteRenderbuffersEXT = (PFNGLDELETERENDERBUFFERSEXTPROC) load(userptr, "glDeleteRenderbuffersEXT");
    glo_glFramebufferRenderbufferEXT = (PFNGLFRAMEBUFFERRENDERBUFFEREXTPROC) load(userptr, "glFramebufferRenderbufferEXT");
    glo_glFramebufferTexture1DEXT = (PFNGLFRAMEBUFFERTEXTURE1DEXTPROC) load(userptr, "glFramebufferTexture1DEXT");
    glo_glFramebufferTexture2DEXT = (PFNGLFRAMEBUFFERTEXTURE2DEXTPROC) load(userptr, "glFramebufferTexture2DEXT");
    glo_glFramebufferTexture3DEXT = (PFNGLFRAMEBUFFERTEXTURE3DEXTPROC) load(userptr, "glFramebufferTexture3DEXT");
    glo_glGenFramebuffersEXT = (PFNGLGENFRAMEBUFFERSEXTPROC) load(userptr, "glGenFramebuffersEXT");
    glo_glGenRenderbuffersEXT = (PFNGLGENRENDERBUFFERSEXTPROC) load(userptr, "glGenRenderbuffersEXT");
    glo_glGenerateMipmapEXT = (PFNGLGENERATEMIPMAPEXTPROC) load(userptr, "glGenerateMipmapEXT");
    glo_glGetFramebufferAttachmentParameterivEXT = (PFNGLGETFRAMEBUFFERATTACHMENTPARAMETERIVEXTPROC) load(userptr, "glGetFramebufferAttachmentParameterivEXT");
    glo_glGetRenderbufferParameterivEXT = (PFNGLGETRENDERBUFFERPARAMETERIVEXTPROC) load(userptr, "glGetRenderbufferParameterivEXT");
    glo_glIsFramebufferEXT = (PFNGLISFRAMEBUFFEREXTPROC) load(userptr, "glIsFramebufferEXT");
    glo_glIsRenderbufferEXT = (PFNGLISRENDERBUFFEREXTPROC) load(userptr, "glIsRenderbufferEXT");
    glo_glRenderbufferStorageEXT = (PFNGLRENDERBUFFERSTORAGEEXTPROC) load(userptr, "glRenderbufferStorageEXT");
}
static void glo_gl_load_GL_EXT_geometry_shader4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_geometry_shader4) return;
    glo_glProgramParameteriEXT = (PFNGLPROGRAMPARAMETERIEXTPROC) load(userptr, "glProgramParameteriEXT");
}
static void glo_gl_load_GL_EXT_gpu_program_parameters( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_gpu_program_parameters) return;
    glo_glProgramEnvParameters4fvEXT = (PFNGLPROGRAMENVPARAMETERS4FVEXTPROC) load(userptr, "glProgramEnvParameters4fvEXT");
    glo_glProgramLocalParameters4fvEXT = (PFNGLPROGRAMLOCALPARAMETERS4FVEXTPROC) load(userptr, "glProgramLocalParameters4fvEXT");
}
static void glo_gl_load_GL_EXT_gpu_shader4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_gpu_shader4) return;
    glo_glBindFragDataLocationEXT = (PFNGLBINDFRAGDATALOCATIONEXTPROC) load(userptr, "glBindFragDataLocationEXT");
    glo_glGetFragDataLocationEXT = (PFNGLGETFRAGDATALOCATIONEXTPROC) load(userptr, "glGetFragDataLocationEXT");
    glo_glGetUniformuivEXT = (PFNGLGETUNIFORMUIVEXTPROC) load(userptr, "glGetUniformuivEXT");
    glo_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC) load(userptr, "glGetVertexAttribIivEXT");
    glo_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC) load(userptr, "glGetVertexAttribIuivEXT");
    glo_glUniform1uiEXT = (PFNGLUNIFORM1UIEXTPROC) load(userptr, "glUniform1uiEXT");
    glo_glUniform1uivEXT = (PFNGLUNIFORM1UIVEXTPROC) load(userptr, "glUniform1uivEXT");
    glo_glUniform2uiEXT = (PFNGLUNIFORM2UIEXTPROC) load(userptr, "glUniform2uiEXT");
    glo_glUniform2uivEXT = (PFNGLUNIFORM2UIVEXTPROC) load(userptr, "glUniform2uivEXT");
    glo_glUniform3uiEXT = (PFNGLUNIFORM3UIEXTPROC) load(userptr, "glUniform3uiEXT");
    glo_glUniform3uivEXT = (PFNGLUNIFORM3UIVEXTPROC) load(userptr, "glUniform3uivEXT");
    glo_glUniform4uiEXT = (PFNGLUNIFORM4UIEXTPROC) load(userptr, "glUniform4uiEXT");
    glo_glUniform4uivEXT = (PFNGLUNIFORM4UIVEXTPROC) load(userptr, "glUniform4uivEXT");
    glo_glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC) load(userptr, "glVertexAttribI1iEXT");
    glo_glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC) load(userptr, "glVertexAttribI1ivEXT");
    glo_glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC) load(userptr, "glVertexAttribI1uiEXT");
    glo_glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC) load(userptr, "glVertexAttribI1uivEXT");
    glo_glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC) load(userptr, "glVertexAttribI2iEXT");
    glo_glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC) load(userptr, "glVertexAttribI2ivEXT");
    glo_glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC) load(userptr, "glVertexAttribI2uiEXT");
    glo_glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC) load(userptr, "glVertexAttribI2uivEXT");
    glo_glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC) load(userptr, "glVertexAttribI3iEXT");
    glo_glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC) load(userptr, "glVertexAttribI3ivEXT");
    glo_glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC) load(userptr, "glVertexAttribI3uiEXT");
    glo_glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC) load(userptr, "glVertexAttribI3uivEXT");
    glo_glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC) load(userptr, "glVertexAttribI4bvEXT");
    glo_glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC) load(userptr, "glVertexAttribI4iEXT");
    glo_glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC) load(userptr, "glVertexAttribI4ivEXT");
    glo_glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC) load(userptr, "glVertexAttribI4svEXT");
    glo_glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC) load(userptr, "glVertexAttribI4ubvEXT");
    glo_glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC) load(userptr, "glVertexAttribI4uiEXT");
    glo_glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC) load(userptr, "glVertexAttribI4uivEXT");
    glo_glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC) load(userptr, "glVertexAttribI4usvEXT");
    glo_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC) load(userptr, "glVertexAttribIPointerEXT");
}
static void glo_gl_load_GL_EXT_histogram( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_histogram) return;
    glo_glGetHistogramEXT = (PFNGLGETHISTOGRAMEXTPROC) load(userptr, "glGetHistogramEXT");
    glo_glGetHistogramParameterfvEXT = (PFNGLGETHISTOGRAMPARAMETERFVEXTPROC) load(userptr, "glGetHistogramParameterfvEXT");
    glo_glGetHistogramParameterivEXT = (PFNGLGETHISTOGRAMPARAMETERIVEXTPROC) load(userptr, "glGetHistogramParameterivEXT");
    glo_glGetMinmaxEXT = (PFNGLGETMINMAXEXTPROC) load(userptr, "glGetMinmaxEXT");
    glo_glGetMinmaxParameterfvEXT = (PFNGLGETMINMAXPARAMETERFVEXTPROC) load(userptr, "glGetMinmaxParameterfvEXT");
    glo_glGetMinmaxParameterivEXT = (PFNGLGETMINMAXPARAMETERIVEXTPROC) load(userptr, "glGetMinmaxParameterivEXT");
    glo_glHistogramEXT = (PFNGLHISTOGRAMEXTPROC) load(userptr, "glHistogramEXT");
    glo_glMinmaxEXT = (PFNGLMINMAXEXTPROC) load(userptr, "glMinmaxEXT");
    glo_glResetHistogramEXT = (PFNGLRESETHISTOGRAMEXTPROC) load(userptr, "glResetHistogramEXT");
    glo_glResetMinmaxEXT = (PFNGLRESETMINMAXEXTPROC) load(userptr, "glResetMinmaxEXT");
}
static void glo_gl_load_GL_EXT_index_func( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_index_func) return;
    glo_glIndexFuncEXT = (PFNGLINDEXFUNCEXTPROC) load(userptr, "glIndexFuncEXT");
}
static void glo_gl_load_GL_EXT_index_material( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_index_material) return;
    glo_glIndexMaterialEXT = (PFNGLINDEXMATERIALEXTPROC) load(userptr, "glIndexMaterialEXT");
}
static void glo_gl_load_GL_EXT_light_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_light_texture) return;
    glo_glApplyTextureEXT = (PFNGLAPPLYTEXTUREEXTPROC) load(userptr, "glApplyTextureEXT");
    glo_glTextureLightEXT = (PFNGLTEXTURELIGHTEXTPROC) load(userptr, "glTextureLightEXT");
    glo_glTextureMaterialEXT = (PFNGLTEXTUREMATERIALEXTPROC) load(userptr, "glTextureMaterialEXT");
}
static void glo_gl_load_GL_EXT_memory_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_memory_object) return;
    glo_glBufferStorageMemEXT = (PFNGLBUFFERSTORAGEMEMEXTPROC) load(userptr, "glBufferStorageMemEXT");
    glo_glCreateMemoryObjectsEXT = (PFNGLCREATEMEMORYOBJECTSEXTPROC) load(userptr, "glCreateMemoryObjectsEXT");
    glo_glDeleteMemoryObjectsEXT = (PFNGLDELETEMEMORYOBJECTSEXTPROC) load(userptr, "glDeleteMemoryObjectsEXT");
    glo_glGetMemoryObjectParameterivEXT = (PFNGLGETMEMORYOBJECTPARAMETERIVEXTPROC) load(userptr, "glGetMemoryObjectParameterivEXT");
    glo_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) load(userptr, "glGetUnsignedBytei_vEXT");
    glo_glGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) load(userptr, "glGetUnsignedBytevEXT");
    glo_glIsMemoryObjectEXT = (PFNGLISMEMORYOBJECTEXTPROC) load(userptr, "glIsMemoryObjectEXT");
    glo_glMemoryObjectParameterivEXT = (PFNGLMEMORYOBJECTPARAMETERIVEXTPROC) load(userptr, "glMemoryObjectParameterivEXT");
    glo_glNamedBufferStorageMemEXT = (PFNGLNAMEDBUFFERSTORAGEMEMEXTPROC) load(userptr, "glNamedBufferStorageMemEXT");
    glo_glTexStorageMem1DEXT = (PFNGLTEXSTORAGEMEM1DEXTPROC) load(userptr, "glTexStorageMem1DEXT");
    glo_glTexStorageMem2DEXT = (PFNGLTEXSTORAGEMEM2DEXTPROC) load(userptr, "glTexStorageMem2DEXT");
    glo_glTexStorageMem2DMultisampleEXT = (PFNGLTEXSTORAGEMEM2DMULTISAMPLEEXTPROC) load(userptr, "glTexStorageMem2DMultisampleEXT");
    glo_glTexStorageMem3DEXT = (PFNGLTEXSTORAGEMEM3DEXTPROC) load(userptr, "glTexStorageMem3DEXT");
    glo_glTexStorageMem3DMultisampleEXT = (PFNGLTEXSTORAGEMEM3DMULTISAMPLEEXTPROC) load(userptr, "glTexStorageMem3DMultisampleEXT");
    glo_glTextureStorageMem1DEXT = (PFNGLTEXTURESTORAGEMEM1DEXTPROC) load(userptr, "glTextureStorageMem1DEXT");
    glo_glTextureStorageMem2DEXT = (PFNGLTEXTURESTORAGEMEM2DEXTPROC) load(userptr, "glTextureStorageMem2DEXT");
    glo_glTextureStorageMem2DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM2DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorageMem2DMultisampleEXT");
    glo_glTextureStorageMem3DEXT = (PFNGLTEXTURESTORAGEMEM3DEXTPROC) load(userptr, "glTextureStorageMem3DEXT");
    glo_glTextureStorageMem3DMultisampleEXT = (PFNGLTEXTURESTORAGEMEM3DMULTISAMPLEEXTPROC) load(userptr, "glTextureStorageMem3DMultisampleEXT");
}
static void glo_gl_load_GL_EXT_memory_object_fd( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_memory_object_fd) return;
    glo_glImportMemoryFdEXT = (PFNGLIMPORTMEMORYFDEXTPROC) load(userptr, "glImportMemoryFdEXT");
}
static void glo_gl_load_GL_EXT_memory_object_win32( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_memory_object_win32) return;
    glo_glImportMemoryWin32HandleEXT = (PFNGLIMPORTMEMORYWIN32HANDLEEXTPROC) load(userptr, "glImportMemoryWin32HandleEXT");
    glo_glImportMemoryWin32NameEXT = (PFNGLIMPORTMEMORYWIN32NAMEEXTPROC) load(userptr, "glImportMemoryWin32NameEXT");
}
static void glo_gl_load_GL_EXT_mesh_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_mesh_shader) return;
    glo_glDrawMeshTasksEXT = (PFNGLDRAWMESHTASKSEXTPROC) load(userptr, "glDrawMeshTasksEXT");
    glo_glDrawMeshTasksIndirectEXT = (PFNGLDRAWMESHTASKSINDIRECTEXTPROC) load(userptr, "glDrawMeshTasksIndirectEXT");
    glo_glMultiDrawMeshTasksIndirectCountEXT = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTEXTPROC) load(userptr, "glMultiDrawMeshTasksIndirectCountEXT");
    glo_glMultiDrawMeshTasksIndirectEXT = (PFNGLMULTIDRAWMESHTASKSINDIRECTEXTPROC) load(userptr, "glMultiDrawMeshTasksIndirectEXT");
}
static void glo_gl_load_GL_EXT_multi_draw_arrays( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_multi_draw_arrays) return;
    glo_glMultiDrawArraysEXT = (PFNGLMULTIDRAWARRAYSEXTPROC) load(userptr, "glMultiDrawArraysEXT");
    glo_glMultiDrawElementsEXT = (PFNGLMULTIDRAWELEMENTSEXTPROC) load(userptr, "glMultiDrawElementsEXT");
}
static void glo_gl_load_GL_EXT_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_multisample) return;
    glo_glSampleMaskEXT = (PFNGLSAMPLEMASKEXTPROC) load(userptr, "glSampleMaskEXT");
    glo_glSamplePatternEXT = (PFNGLSAMPLEPATTERNEXTPROC) load(userptr, "glSamplePatternEXT");
}
static void glo_gl_load_GL_EXT_paletted_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_paletted_texture) return;
    glo_glColorTableEXT = (PFNGLCOLORTABLEEXTPROC) load(userptr, "glColorTableEXT");
    glo_glGetColorTableEXT = (PFNGLGETCOLORTABLEEXTPROC) load(userptr, "glGetColorTableEXT");
    glo_glGetColorTableParameterfvEXT = (PFNGLGETCOLORTABLEPARAMETERFVEXTPROC) load(userptr, "glGetColorTableParameterfvEXT");
    glo_glGetColorTableParameterivEXT = (PFNGLGETCOLORTABLEPARAMETERIVEXTPROC) load(userptr, "glGetColorTableParameterivEXT");
}
static void glo_gl_load_GL_EXT_pixel_transform( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_pixel_transform) return;
    glo_glGetPixelTransformParameterfvEXT = (PFNGLGETPIXELTRANSFORMPARAMETERFVEXTPROC) load(userptr, "glGetPixelTransformParameterfvEXT");
    glo_glGetPixelTransformParameterivEXT = (PFNGLGETPIXELTRANSFORMPARAMETERIVEXTPROC) load(userptr, "glGetPixelTransformParameterivEXT");
    glo_glPixelTransformParameterfEXT = (PFNGLPIXELTRANSFORMPARAMETERFEXTPROC) load(userptr, "glPixelTransformParameterfEXT");
    glo_glPixelTransformParameterfvEXT = (PFNGLPIXELTRANSFORMPARAMETERFVEXTPROC) load(userptr, "glPixelTransformParameterfvEXT");
    glo_glPixelTransformParameteriEXT = (PFNGLPIXELTRANSFORMPARAMETERIEXTPROC) load(userptr, "glPixelTransformParameteriEXT");
    glo_glPixelTransformParameterivEXT = (PFNGLPIXELTRANSFORMPARAMETERIVEXTPROC) load(userptr, "glPixelTransformParameterivEXT");
}
static void glo_gl_load_GL_EXT_point_parameters( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_point_parameters) return;
    glo_glPointParameterfEXT = (PFNGLPOINTPARAMETERFEXTPROC) load(userptr, "glPointParameterfEXT");
    glo_glPointParameterfvEXT = (PFNGLPOINTPARAMETERFVEXTPROC) load(userptr, "glPointParameterfvEXT");
}
static void glo_gl_load_GL_EXT_polygon_offset( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_polygon_offset) return;
    glo_glPolygonOffsetEXT = (PFNGLPOLYGONOFFSETEXTPROC) load(userptr, "glPolygonOffsetEXT");
}
static void glo_gl_load_GL_EXT_polygon_offset_clamp( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_polygon_offset_clamp) return;
    glo_glPolygonOffsetClampEXT = (PFNGLPOLYGONOFFSETCLAMPEXTPROC) load(userptr, "glPolygonOffsetClampEXT");
}
static void glo_gl_load_GL_EXT_provoking_vertex( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_provoking_vertex) return;
    glo_glProvokingVertexEXT = (PFNGLPROVOKINGVERTEXEXTPROC) load(userptr, "glProvokingVertexEXT");
}
static void glo_gl_load_GL_EXT_raster_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_raster_multisample) return;
    glo_glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) load(userptr, "glRasterSamplesEXT");
}
static void glo_gl_load_GL_EXT_secondary_color( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_secondary_color) return;
    glo_glSecondaryColor3bEXT = (PFNGLSECONDARYCOLOR3BEXTPROC) load(userptr, "glSecondaryColor3bEXT");
    glo_glSecondaryColor3bvEXT = (PFNGLSECONDARYCOLOR3BVEXTPROC) load(userptr, "glSecondaryColor3bvEXT");
    glo_glSecondaryColor3dEXT = (PFNGLSECONDARYCOLOR3DEXTPROC) load(userptr, "glSecondaryColor3dEXT");
    glo_glSecondaryColor3dvEXT = (PFNGLSECONDARYCOLOR3DVEXTPROC) load(userptr, "glSecondaryColor3dvEXT");
    glo_glSecondaryColor3fEXT = (PFNGLSECONDARYCOLOR3FEXTPROC) load(userptr, "glSecondaryColor3fEXT");
    glo_glSecondaryColor3fvEXT = (PFNGLSECONDARYCOLOR3FVEXTPROC) load(userptr, "glSecondaryColor3fvEXT");
    glo_glSecondaryColor3iEXT = (PFNGLSECONDARYCOLOR3IEXTPROC) load(userptr, "glSecondaryColor3iEXT");
    glo_glSecondaryColor3ivEXT = (PFNGLSECONDARYCOLOR3IVEXTPROC) load(userptr, "glSecondaryColor3ivEXT");
    glo_glSecondaryColor3sEXT = (PFNGLSECONDARYCOLOR3SEXTPROC) load(userptr, "glSecondaryColor3sEXT");
    glo_glSecondaryColor3svEXT = (PFNGLSECONDARYCOLOR3SVEXTPROC) load(userptr, "glSecondaryColor3svEXT");
    glo_glSecondaryColor3ubEXT = (PFNGLSECONDARYCOLOR3UBEXTPROC) load(userptr, "glSecondaryColor3ubEXT");
    glo_glSecondaryColor3ubvEXT = (PFNGLSECONDARYCOLOR3UBVEXTPROC) load(userptr, "glSecondaryColor3ubvEXT");
    glo_glSecondaryColor3uiEXT = (PFNGLSECONDARYCOLOR3UIEXTPROC) load(userptr, "glSecondaryColor3uiEXT");
    glo_glSecondaryColor3uivEXT = (PFNGLSECONDARYCOLOR3UIVEXTPROC) load(userptr, "glSecondaryColor3uivEXT");
    glo_glSecondaryColor3usEXT = (PFNGLSECONDARYCOLOR3USEXTPROC) load(userptr, "glSecondaryColor3usEXT");
    glo_glSecondaryColor3usvEXT = (PFNGLSECONDARYCOLOR3USVEXTPROC) load(userptr, "glSecondaryColor3usvEXT");
    glo_glSecondaryColorPointerEXT = (PFNGLSECONDARYCOLORPOINTEREXTPROC) load(userptr, "glSecondaryColorPointerEXT");
}
static void glo_gl_load_GL_EXT_semaphore( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_semaphore) return;
    glo_glDeleteSemaphoresEXT = (PFNGLDELETESEMAPHORESEXTPROC) load(userptr, "glDeleteSemaphoresEXT");
    glo_glGenSemaphoresEXT = (PFNGLGENSEMAPHORESEXTPROC) load(userptr, "glGenSemaphoresEXT");
    glo_glGetSemaphoreParameterui64vEXT = (PFNGLGETSEMAPHOREPARAMETERUI64VEXTPROC) load(userptr, "glGetSemaphoreParameterui64vEXT");
    glo_glGetUnsignedBytei_vEXT = (PFNGLGETUNSIGNEDBYTEI_VEXTPROC) load(userptr, "glGetUnsignedBytei_vEXT");
    glo_glGetUnsignedBytevEXT = (PFNGLGETUNSIGNEDBYTEVEXTPROC) load(userptr, "glGetUnsignedBytevEXT");
    glo_glIsSemaphoreEXT = (PFNGLISSEMAPHOREEXTPROC) load(userptr, "glIsSemaphoreEXT");
    glo_glSemaphoreParameterui64vEXT = (PFNGLSEMAPHOREPARAMETERUI64VEXTPROC) load(userptr, "glSemaphoreParameterui64vEXT");
    glo_glSignalSemaphoreEXT = (PFNGLSIGNALSEMAPHOREEXTPROC) load(userptr, "glSignalSemaphoreEXT");
    glo_glWaitSemaphoreEXT = (PFNGLWAITSEMAPHOREEXTPROC) load(userptr, "glWaitSemaphoreEXT");
}
static void glo_gl_load_GL_EXT_semaphore_fd( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_semaphore_fd) return;
    glo_glImportSemaphoreFdEXT = (PFNGLIMPORTSEMAPHOREFDEXTPROC) load(userptr, "glImportSemaphoreFdEXT");
}
static void glo_gl_load_GL_EXT_semaphore_win32( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_semaphore_win32) return;
    glo_glImportSemaphoreWin32HandleEXT = (PFNGLIMPORTSEMAPHOREWIN32HANDLEEXTPROC) load(userptr, "glImportSemaphoreWin32HandleEXT");
    glo_glImportSemaphoreWin32NameEXT = (PFNGLIMPORTSEMAPHOREWIN32NAMEEXTPROC) load(userptr, "glImportSemaphoreWin32NameEXT");
}
static void glo_gl_load_GL_EXT_separate_shader_objects( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_separate_shader_objects) return;
    glo_glActiveProgramEXT = (PFNGLACTIVEPROGRAMEXTPROC) load(userptr, "glActiveProgramEXT");
    glo_glCreateShaderProgramEXT = (PFNGLCREATESHADERPROGRAMEXTPROC) load(userptr, "glCreateShaderProgramEXT");
    glo_glUseShaderProgramEXT = (PFNGLUSESHADERPROGRAMEXTPROC) load(userptr, "glUseShaderProgramEXT");
}
static void glo_gl_load_GL_EXT_shader_framebuffer_fetch_non_coherent( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_shader_framebuffer_fetch_non_coherent) return;
    glo_glFramebufferFetchBarrierEXT = (PFNGLFRAMEBUFFERFETCHBARRIEREXTPROC) load(userptr, "glFramebufferFetchBarrierEXT");
}
static void glo_gl_load_GL_EXT_shader_image_load_store( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_shader_image_load_store) return;
    glo_glBindImageTextureEXT = (PFNGLBINDIMAGETEXTUREEXTPROC) load(userptr, "glBindImageTextureEXT");
    glo_glMemoryBarrierEXT = (PFNGLMEMORYBARRIEREXTPROC) load(userptr, "glMemoryBarrierEXT");
}
static void glo_gl_load_GL_EXT_stencil_clear_tag( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_stencil_clear_tag) return;
    glo_glStencilClearTagEXT = (PFNGLSTENCILCLEARTAGEXTPROC) load(userptr, "glStencilClearTagEXT");
}
static void glo_gl_load_GL_EXT_stencil_two_side( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_stencil_two_side) return;
    glo_glActiveStencilFaceEXT = (PFNGLACTIVESTENCILFACEEXTPROC) load(userptr, "glActiveStencilFaceEXT");
}
static void glo_gl_load_GL_EXT_subtexture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_subtexture) return;
    glo_glTexSubImage1DEXT = (PFNGLTEXSUBIMAGE1DEXTPROC) load(userptr, "glTexSubImage1DEXT");
    glo_glTexSubImage2DEXT = (PFNGLTEXSUBIMAGE2DEXTPROC) load(userptr, "glTexSubImage2DEXT");
}
static void glo_gl_load_GL_EXT_texture3D( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture3D) return;
    glo_glTexImage3DEXT = (PFNGLTEXIMAGE3DEXTPROC) load(userptr, "glTexImage3DEXT");
    glo_glTexSubImage3DEXT = (PFNGLTEXSUBIMAGE3DEXTPROC) load(userptr, "glTexSubImage3DEXT");
}
static void glo_gl_load_GL_EXT_texture_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture_array) return;
    glo_glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) load(userptr, "glFramebufferTextureLayerEXT");
}
static void glo_gl_load_GL_EXT_texture_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture_buffer_object) return;
    glo_glTexBufferEXT = (PFNGLTEXBUFFEREXTPROC) load(userptr, "glTexBufferEXT");
}
static void glo_gl_load_GL_EXT_texture_integer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture_integer) return;
    glo_glClearColorIiEXT = (PFNGLCLEARCOLORIIEXTPROC) load(userptr, "glClearColorIiEXT");
    glo_glClearColorIuiEXT = (PFNGLCLEARCOLORIUIEXTPROC) load(userptr, "glClearColorIuiEXT");
    glo_glGetTexParameterIivEXT = (PFNGLGETTEXPARAMETERIIVEXTPROC) load(userptr, "glGetTexParameterIivEXT");
    glo_glGetTexParameterIuivEXT = (PFNGLGETTEXPARAMETERIUIVEXTPROC) load(userptr, "glGetTexParameterIuivEXT");
    glo_glTexParameterIivEXT = (PFNGLTEXPARAMETERIIVEXTPROC) load(userptr, "glTexParameterIivEXT");
    glo_glTexParameterIuivEXT = (PFNGLTEXPARAMETERIUIVEXTPROC) load(userptr, "glTexParameterIuivEXT");
}
static void glo_gl_load_GL_EXT_texture_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture_object) return;
    glo_glAreTexturesResidentEXT = (PFNGLARETEXTURESRESIDENTEXTPROC) load(userptr, "glAreTexturesResidentEXT");
    glo_glBindTextureEXT = (PFNGLBINDTEXTUREEXTPROC) load(userptr, "glBindTextureEXT");
    glo_glDeleteTexturesEXT = (PFNGLDELETETEXTURESEXTPROC) load(userptr, "glDeleteTexturesEXT");
    glo_glGenTexturesEXT = (PFNGLGENTEXTURESEXTPROC) load(userptr, "glGenTexturesEXT");
    glo_glIsTextureEXT = (PFNGLISTEXTUREEXTPROC) load(userptr, "glIsTextureEXT");
    glo_glPrioritizeTexturesEXT = (PFNGLPRIORITIZETEXTURESEXTPROC) load(userptr, "glPrioritizeTexturesEXT");
}
static void glo_gl_load_GL_EXT_texture_perturb_normal( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture_perturb_normal) return;
    glo_glTextureNormalEXT = (PFNGLTEXTURENORMALEXTPROC) load(userptr, "glTextureNormalEXT");
}
static void glo_gl_load_GL_EXT_texture_storage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_texture_storage) return;
    glo_glTexStorage1DEXT = (PFNGLTEXSTORAGE1DEXTPROC) load(userptr, "glTexStorage1DEXT");
    glo_glTexStorage2DEXT = (PFNGLTEXSTORAGE2DEXTPROC) load(userptr, "glTexStorage2DEXT");
    glo_glTexStorage3DEXT = (PFNGLTEXSTORAGE3DEXTPROC) load(userptr, "glTexStorage3DEXT");
    glo_glTextureStorage1DEXT = (PFNGLTEXTURESTORAGE1DEXTPROC) load(userptr, "glTextureStorage1DEXT");
    glo_glTextureStorage2DEXT = (PFNGLTEXTURESTORAGE2DEXTPROC) load(userptr, "glTextureStorage2DEXT");
    glo_glTextureStorage3DEXT = (PFNGLTEXTURESTORAGE3DEXTPROC) load(userptr, "glTextureStorage3DEXT");
}
static void glo_gl_load_GL_EXT_timer_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_timer_query) return;
    glo_glGetQueryObjecti64vEXT = (PFNGLGETQUERYOBJECTI64VEXTPROC) load(userptr, "glGetQueryObjecti64vEXT");
    glo_glGetQueryObjectui64vEXT = (PFNGLGETQUERYOBJECTUI64VEXTPROC) load(userptr, "glGetQueryObjectui64vEXT");
}
static void glo_gl_load_GL_EXT_transform_feedback( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_transform_feedback) return;
    glo_glBeginTransformFeedbackEXT = (PFNGLBEGINTRANSFORMFEEDBACKEXTPROC) load(userptr, "glBeginTransformFeedbackEXT");
    glo_glBindBufferBaseEXT = (PFNGLBINDBUFFERBASEEXTPROC) load(userptr, "glBindBufferBaseEXT");
    glo_glBindBufferOffsetEXT = (PFNGLBINDBUFFEROFFSETEXTPROC) load(userptr, "glBindBufferOffsetEXT");
    glo_glBindBufferRangeEXT = (PFNGLBINDBUFFERRANGEEXTPROC) load(userptr, "glBindBufferRangeEXT");
    glo_glEndTransformFeedbackEXT = (PFNGLENDTRANSFORMFEEDBACKEXTPROC) load(userptr, "glEndTransformFeedbackEXT");
    glo_glGetTransformFeedbackVaryingEXT = (PFNGLGETTRANSFORMFEEDBACKVARYINGEXTPROC) load(userptr, "glGetTransformFeedbackVaryingEXT");
    glo_glTransformFeedbackVaryingsEXT = (PFNGLTRANSFORMFEEDBACKVARYINGSEXTPROC) load(userptr, "glTransformFeedbackVaryingsEXT");
}
static void glo_gl_load_GL_EXT_vertex_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_vertex_array) return;
    glo_glArrayElementEXT = (PFNGLARRAYELEMENTEXTPROC) load(userptr, "glArrayElementEXT");
    glo_glColorPointerEXT = (PFNGLCOLORPOINTEREXTPROC) load(userptr, "glColorPointerEXT");
    glo_glDrawArraysEXT = (PFNGLDRAWARRAYSEXTPROC) load(userptr, "glDrawArraysEXT");
    glo_glEdgeFlagPointerEXT = (PFNGLEDGEFLAGPOINTEREXTPROC) load(userptr, "glEdgeFlagPointerEXT");
    glo_glGetPointervEXT = (PFNGLGETPOINTERVEXTPROC) load(userptr, "glGetPointervEXT");
    glo_glIndexPointerEXT = (PFNGLINDEXPOINTEREXTPROC) load(userptr, "glIndexPointerEXT");
    glo_glNormalPointerEXT = (PFNGLNORMALPOINTEREXTPROC) load(userptr, "glNormalPointerEXT");
    glo_glTexCoordPointerEXT = (PFNGLTEXCOORDPOINTEREXTPROC) load(userptr, "glTexCoordPointerEXT");
    glo_glVertexPointerEXT = (PFNGLVERTEXPOINTEREXTPROC) load(userptr, "glVertexPointerEXT");
}
static void glo_gl_load_GL_EXT_vertex_attrib_64bit( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_vertex_attrib_64bit) return;
    glo_glGetVertexAttribLdvEXT = (PFNGLGETVERTEXATTRIBLDVEXTPROC) load(userptr, "glGetVertexAttribLdvEXT");
    glo_glVertexAttribL1dEXT = (PFNGLVERTEXATTRIBL1DEXTPROC) load(userptr, "glVertexAttribL1dEXT");
    glo_glVertexAttribL1dvEXT = (PFNGLVERTEXATTRIBL1DVEXTPROC) load(userptr, "glVertexAttribL1dvEXT");
    glo_glVertexAttribL2dEXT = (PFNGLVERTEXATTRIBL2DEXTPROC) load(userptr, "glVertexAttribL2dEXT");
    glo_glVertexAttribL2dvEXT = (PFNGLVERTEXATTRIBL2DVEXTPROC) load(userptr, "glVertexAttribL2dvEXT");
    glo_glVertexAttribL3dEXT = (PFNGLVERTEXATTRIBL3DEXTPROC) load(userptr, "glVertexAttribL3dEXT");
    glo_glVertexAttribL3dvEXT = (PFNGLVERTEXATTRIBL3DVEXTPROC) load(userptr, "glVertexAttribL3dvEXT");
    glo_glVertexAttribL4dEXT = (PFNGLVERTEXATTRIBL4DEXTPROC) load(userptr, "glVertexAttribL4dEXT");
    glo_glVertexAttribL4dvEXT = (PFNGLVERTEXATTRIBL4DVEXTPROC) load(userptr, "glVertexAttribL4dvEXT");
    glo_glVertexAttribLPointerEXT = (PFNGLVERTEXATTRIBLPOINTEREXTPROC) load(userptr, "glVertexAttribLPointerEXT");
}
static void glo_gl_load_GL_EXT_vertex_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_vertex_shader) return;
    glo_glBeginVertexShaderEXT = (PFNGLBEGINVERTEXSHADEREXTPROC) load(userptr, "glBeginVertexShaderEXT");
    glo_glBindLightParameterEXT = (PFNGLBINDLIGHTPARAMETEREXTPROC) load(userptr, "glBindLightParameterEXT");
    glo_glBindMaterialParameterEXT = (PFNGLBINDMATERIALPARAMETEREXTPROC) load(userptr, "glBindMaterialParameterEXT");
    glo_glBindParameterEXT = (PFNGLBINDPARAMETEREXTPROC) load(userptr, "glBindParameterEXT");
    glo_glBindTexGenParameterEXT = (PFNGLBINDTEXGENPARAMETEREXTPROC) load(userptr, "glBindTexGenParameterEXT");
    glo_glBindTextureUnitParameterEXT = (PFNGLBINDTEXTUREUNITPARAMETEREXTPROC) load(userptr, "glBindTextureUnitParameterEXT");
    glo_glBindVertexShaderEXT = (PFNGLBINDVERTEXSHADEREXTPROC) load(userptr, "glBindVertexShaderEXT");
    glo_glDeleteVertexShaderEXT = (PFNGLDELETEVERTEXSHADEREXTPROC) load(userptr, "glDeleteVertexShaderEXT");
    glo_glDisableVariantClientStateEXT = (PFNGLDISABLEVARIANTCLIENTSTATEEXTPROC) load(userptr, "glDisableVariantClientStateEXT");
    glo_glEnableVariantClientStateEXT = (PFNGLENABLEVARIANTCLIENTSTATEEXTPROC) load(userptr, "glEnableVariantClientStateEXT");
    glo_glEndVertexShaderEXT = (PFNGLENDVERTEXSHADEREXTPROC) load(userptr, "glEndVertexShaderEXT");
    glo_glExtractComponentEXT = (PFNGLEXTRACTCOMPONENTEXTPROC) load(userptr, "glExtractComponentEXT");
    glo_glGenSymbolsEXT = (PFNGLGENSYMBOLSEXTPROC) load(userptr, "glGenSymbolsEXT");
    glo_glGenVertexShadersEXT = (PFNGLGENVERTEXSHADERSEXTPROC) load(userptr, "glGenVertexShadersEXT");
    glo_glGetInvariantBooleanvEXT = (PFNGLGETINVARIANTBOOLEANVEXTPROC) load(userptr, "glGetInvariantBooleanvEXT");
    glo_glGetInvariantFloatvEXT = (PFNGLGETINVARIANTFLOATVEXTPROC) load(userptr, "glGetInvariantFloatvEXT");
    glo_glGetInvariantIntegervEXT = (PFNGLGETINVARIANTINTEGERVEXTPROC) load(userptr, "glGetInvariantIntegervEXT");
    glo_glGetLocalConstantBooleanvEXT = (PFNGLGETLOCALCONSTANTBOOLEANVEXTPROC) load(userptr, "glGetLocalConstantBooleanvEXT");
    glo_glGetLocalConstantFloatvEXT = (PFNGLGETLOCALCONSTANTFLOATVEXTPROC) load(userptr, "glGetLocalConstantFloatvEXT");
    glo_glGetLocalConstantIntegervEXT = (PFNGLGETLOCALCONSTANTINTEGERVEXTPROC) load(userptr, "glGetLocalConstantIntegervEXT");
    glo_glGetVariantBooleanvEXT = (PFNGLGETVARIANTBOOLEANVEXTPROC) load(userptr, "glGetVariantBooleanvEXT");
    glo_glGetVariantFloatvEXT = (PFNGLGETVARIANTFLOATVEXTPROC) load(userptr, "glGetVariantFloatvEXT");
    glo_glGetVariantIntegervEXT = (PFNGLGETVARIANTINTEGERVEXTPROC) load(userptr, "glGetVariantIntegervEXT");
    glo_glGetVariantPointervEXT = (PFNGLGETVARIANTPOINTERVEXTPROC) load(userptr, "glGetVariantPointervEXT");
    glo_glInsertComponentEXT = (PFNGLINSERTCOMPONENTEXTPROC) load(userptr, "glInsertComponentEXT");
    glo_glIsVariantEnabledEXT = (PFNGLISVARIANTENABLEDEXTPROC) load(userptr, "glIsVariantEnabledEXT");
    glo_glSetInvariantEXT = (PFNGLSETINVARIANTEXTPROC) load(userptr, "glSetInvariantEXT");
    glo_glSetLocalConstantEXT = (PFNGLSETLOCALCONSTANTEXTPROC) load(userptr, "glSetLocalConstantEXT");
    glo_glShaderOp1EXT = (PFNGLSHADEROP1EXTPROC) load(userptr, "glShaderOp1EXT");
    glo_glShaderOp2EXT = (PFNGLSHADEROP2EXTPROC) load(userptr, "glShaderOp2EXT");
    glo_glShaderOp3EXT = (PFNGLSHADEROP3EXTPROC) load(userptr, "glShaderOp3EXT");
    glo_glSwizzleEXT = (PFNGLSWIZZLEEXTPROC) load(userptr, "glSwizzleEXT");
    glo_glVariantPointerEXT = (PFNGLVARIANTPOINTEREXTPROC) load(userptr, "glVariantPointerEXT");
    glo_glVariantbvEXT = (PFNGLVARIANTBVEXTPROC) load(userptr, "glVariantbvEXT");
    glo_glVariantdvEXT = (PFNGLVARIANTDVEXTPROC) load(userptr, "glVariantdvEXT");
    glo_glVariantfvEXT = (PFNGLVARIANTFVEXTPROC) load(userptr, "glVariantfvEXT");
    glo_glVariantivEXT = (PFNGLVARIANTIVEXTPROC) load(userptr, "glVariantivEXT");
    glo_glVariantsvEXT = (PFNGLVARIANTSVEXTPROC) load(userptr, "glVariantsvEXT");
    glo_glVariantubvEXT = (PFNGLVARIANTUBVEXTPROC) load(userptr, "glVariantubvEXT");
    glo_glVariantuivEXT = (PFNGLVARIANTUIVEXTPROC) load(userptr, "glVariantuivEXT");
    glo_glVariantusvEXT = (PFNGLVARIANTUSVEXTPROC) load(userptr, "glVariantusvEXT");
    glo_glWriteMaskEXT = (PFNGLWRITEMASKEXTPROC) load(userptr, "glWriteMaskEXT");
}
static void glo_gl_load_GL_EXT_vertex_weighting( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_vertex_weighting) return;
    glo_glVertexWeightPointerEXT = (PFNGLVERTEXWEIGHTPOINTEREXTPROC) load(userptr, "glVertexWeightPointerEXT");
    glo_glVertexWeightfEXT = (PFNGLVERTEXWEIGHTFEXTPROC) load(userptr, "glVertexWeightfEXT");
    glo_glVertexWeightfvEXT = (PFNGLVERTEXWEIGHTFVEXTPROC) load(userptr, "glVertexWeightfvEXT");
}
static void glo_gl_load_GL_EXT_win32_keyed_mutex( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_win32_keyed_mutex) return;
    glo_glAcquireKeyedMutexWin32EXT = (PFNGLACQUIREKEYEDMUTEXWIN32EXTPROC) load(userptr, "glAcquireKeyedMutexWin32EXT");
    glo_glReleaseKeyedMutexWin32EXT = (PFNGLRELEASEKEYEDMUTEXWIN32EXTPROC) load(userptr, "glReleaseKeyedMutexWin32EXT");
}
static void glo_gl_load_GL_EXT_window_rectangles( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_window_rectangles) return;
    glo_glWindowRectanglesEXT = (PFNGLWINDOWRECTANGLESEXTPROC) load(userptr, "glWindowRectanglesEXT");
}
static void glo_gl_load_GL_EXT_x11_sync_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_EXT_x11_sync_object) return;
    glo_glImportSyncEXT = (PFNGLIMPORTSYNCEXTPROC) load(userptr, "glImportSyncEXT");
}
static void glo_gl_load_GL_GREMEDY_frame_terminator( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_GREMEDY_frame_terminator) return;
    glo_glFrameTerminatorGREMEDY = (PFNGLFRAMETERMINATORGREMEDYPROC) load(userptr, "glFrameTerminatorGREMEDY");
}
static void glo_gl_load_GL_GREMEDY_string_marker( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_GREMEDY_string_marker) return;
    glo_glStringMarkerGREMEDY = (PFNGLSTRINGMARKERGREMEDYPROC) load(userptr, "glStringMarkerGREMEDY");
}
static void glo_gl_load_GL_HP_image_transform( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_HP_image_transform) return;
    glo_glGetImageTransformParameterfvHP = (PFNGLGETIMAGETRANSFORMPARAMETERFVHPPROC) load(userptr, "glGetImageTransformParameterfvHP");
    glo_glGetImageTransformParameterivHP = (PFNGLGETIMAGETRANSFORMPARAMETERIVHPPROC) load(userptr, "glGetImageTransformParameterivHP");
    glo_glImageTransformParameterfHP = (PFNGLIMAGETRANSFORMPARAMETERFHPPROC) load(userptr, "glImageTransformParameterfHP");
    glo_glImageTransformParameterfvHP = (PFNGLIMAGETRANSFORMPARAMETERFVHPPROC) load(userptr, "glImageTransformParameterfvHP");
    glo_glImageTransformParameteriHP = (PFNGLIMAGETRANSFORMPARAMETERIHPPROC) load(userptr, "glImageTransformParameteriHP");
    glo_glImageTransformParameterivHP = (PFNGLIMAGETRANSFORMPARAMETERIVHPPROC) load(userptr, "glImageTransformParameterivHP");
}
static void glo_gl_load_GL_IBM_multimode_draw_arrays( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_IBM_multimode_draw_arrays) return;
    glo_glMultiModeDrawArraysIBM = (PFNGLMULTIMODEDRAWARRAYSIBMPROC) load(userptr, "glMultiModeDrawArraysIBM");
    glo_glMultiModeDrawElementsIBM = (PFNGLMULTIMODEDRAWELEMENTSIBMPROC) load(userptr, "glMultiModeDrawElementsIBM");
}
static void glo_gl_load_GL_IBM_static_data( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_IBM_static_data) return;
    glo_glFlushStaticDataIBM = (PFNGLFLUSHSTATICDATAIBMPROC) load(userptr, "glFlushStaticDataIBM");
}
static void glo_gl_load_GL_IBM_vertex_array_lists( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_IBM_vertex_array_lists) return;
    glo_glColorPointerListIBM = (PFNGLCOLORPOINTERLISTIBMPROC) load(userptr, "glColorPointerListIBM");
    glo_glEdgeFlagPointerListIBM = (PFNGLEDGEFLAGPOINTERLISTIBMPROC) load(userptr, "glEdgeFlagPointerListIBM");
    glo_glFogCoordPointerListIBM = (PFNGLFOGCOORDPOINTERLISTIBMPROC) load(userptr, "glFogCoordPointerListIBM");
    glo_glIndexPointerListIBM = (PFNGLINDEXPOINTERLISTIBMPROC) load(userptr, "glIndexPointerListIBM");
    glo_glNormalPointerListIBM = (PFNGLNORMALPOINTERLISTIBMPROC) load(userptr, "glNormalPointerListIBM");
    glo_glSecondaryColorPointerListIBM = (PFNGLSECONDARYCOLORPOINTERLISTIBMPROC) load(userptr, "glSecondaryColorPointerListIBM");
    glo_glTexCoordPointerListIBM = (PFNGLTEXCOORDPOINTERLISTIBMPROC) load(userptr, "glTexCoordPointerListIBM");
    glo_glVertexPointerListIBM = (PFNGLVERTEXPOINTERLISTIBMPROC) load(userptr, "glVertexPointerListIBM");
}
static void glo_gl_load_GL_INGR_blend_func_separate( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_INGR_blend_func_separate) return;
    glo_glBlendFuncSeparateINGR = (PFNGLBLENDFUNCSEPARATEINGRPROC) load(userptr, "glBlendFuncSeparateINGR");
}
static void glo_gl_load_GL_INTEL_framebuffer_CMAA( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_INTEL_framebuffer_CMAA) return;
    glo_glApplyFramebufferAttachmentCMAAINTEL = (PFNGLAPPLYFRAMEBUFFERATTACHMENTCMAAINTELPROC) load(userptr, "glApplyFramebufferAttachmentCMAAINTEL");
}
static void glo_gl_load_GL_INTEL_map_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_INTEL_map_texture) return;
    glo_glMapTexture2DINTEL = (PFNGLMAPTEXTURE2DINTELPROC) load(userptr, "glMapTexture2DINTEL");
    glo_glSyncTextureINTEL = (PFNGLSYNCTEXTUREINTELPROC) load(userptr, "glSyncTextureINTEL");
    glo_glUnmapTexture2DINTEL = (PFNGLUNMAPTEXTURE2DINTELPROC) load(userptr, "glUnmapTexture2DINTEL");
}
static void glo_gl_load_GL_INTEL_parallel_arrays( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_INTEL_parallel_arrays) return;
    glo_glColorPointervINTEL = (PFNGLCOLORPOINTERVINTELPROC) load(userptr, "glColorPointervINTEL");
    glo_glNormalPointervINTEL = (PFNGLNORMALPOINTERVINTELPROC) load(userptr, "glNormalPointervINTEL");
    glo_glTexCoordPointervINTEL = (PFNGLTEXCOORDPOINTERVINTELPROC) load(userptr, "glTexCoordPointervINTEL");
    glo_glVertexPointervINTEL = (PFNGLVERTEXPOINTERVINTELPROC) load(userptr, "glVertexPointervINTEL");
}
static void glo_gl_load_GL_INTEL_performance_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_INTEL_performance_query) return;
    glo_glBeginPerfQueryINTEL = (PFNGLBEGINPERFQUERYINTELPROC) load(userptr, "glBeginPerfQueryINTEL");
    glo_glCreatePerfQueryINTEL = (PFNGLCREATEPERFQUERYINTELPROC) load(userptr, "glCreatePerfQueryINTEL");
    glo_glDeletePerfQueryINTEL = (PFNGLDELETEPERFQUERYINTELPROC) load(userptr, "glDeletePerfQueryINTEL");
    glo_glEndPerfQueryINTEL = (PFNGLENDPERFQUERYINTELPROC) load(userptr, "glEndPerfQueryINTEL");
    glo_glGetFirstPerfQueryIdINTEL = (PFNGLGETFIRSTPERFQUERYIDINTELPROC) load(userptr, "glGetFirstPerfQueryIdINTEL");
    glo_glGetNextPerfQueryIdINTEL = (PFNGLGETNEXTPERFQUERYIDINTELPROC) load(userptr, "glGetNextPerfQueryIdINTEL");
    glo_glGetPerfCounterInfoINTEL = (PFNGLGETPERFCOUNTERINFOINTELPROC) load(userptr, "glGetPerfCounterInfoINTEL");
    glo_glGetPerfQueryDataINTEL = (PFNGLGETPERFQUERYDATAINTELPROC) load(userptr, "glGetPerfQueryDataINTEL");
    glo_glGetPerfQueryIdByNameINTEL = (PFNGLGETPERFQUERYIDBYNAMEINTELPROC) load(userptr, "glGetPerfQueryIdByNameINTEL");
    glo_glGetPerfQueryInfoINTEL = (PFNGLGETPERFQUERYINFOINTELPROC) load(userptr, "glGetPerfQueryInfoINTEL");
}
static void glo_gl_load_GL_KHR_blend_equation_advanced( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_KHR_blend_equation_advanced) return;
    glo_glBlendBarrierKHR = (PFNGLBLENDBARRIERKHRPROC) load(userptr, "glBlendBarrierKHR");
}
static void glo_gl_load_GL_KHR_debug( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_KHR_debug) return;
    glo_glDebugMessageCallback = (PFNGLDEBUGMESSAGECALLBACKPROC) load(userptr, "glDebugMessageCallback");
    glo_glDebugMessageControl = (PFNGLDEBUGMESSAGECONTROLPROC) load(userptr, "glDebugMessageControl");
    glo_glDebugMessageInsert = (PFNGLDEBUGMESSAGEINSERTPROC) load(userptr, "glDebugMessageInsert");
    glo_glGetDebugMessageLog = (PFNGLGETDEBUGMESSAGELOGPROC) load(userptr, "glGetDebugMessageLog");
    glo_glGetObjectLabel = (PFNGLGETOBJECTLABELPROC) load(userptr, "glGetObjectLabel");
    glo_glGetObjectPtrLabel = (PFNGLGETOBJECTPTRLABELPROC) load(userptr, "glGetObjectPtrLabel");
    glo_glGetPointerv = (PFNGLGETPOINTERVPROC) load(userptr, "glGetPointerv");
    glo_glObjectLabel = (PFNGLOBJECTLABELPROC) load(userptr, "glObjectLabel");
    glo_glObjectPtrLabel = (PFNGLOBJECTPTRLABELPROC) load(userptr, "glObjectPtrLabel");
    glo_glPopDebugGroup = (PFNGLPOPDEBUGGROUPPROC) load(userptr, "glPopDebugGroup");
    glo_glPushDebugGroup = (PFNGLPUSHDEBUGGROUPPROC) load(userptr, "glPushDebugGroup");
}
static void glo_gl_load_GL_KHR_parallel_shader_compile( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_KHR_parallel_shader_compile) return;
    glo_glMaxShaderCompilerThreadsKHR = (PFNGLMAXSHADERCOMPILERTHREADSKHRPROC) load(userptr, "glMaxShaderCompilerThreadsKHR");
}
static void glo_gl_load_GL_KHR_robustness( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_KHR_robustness) return;
    glo_glGetGraphicsResetStatus = (PFNGLGETGRAPHICSRESETSTATUSPROC) load(userptr, "glGetGraphicsResetStatus");
    glo_glGetnUniformfv = (PFNGLGETNUNIFORMFVPROC) load(userptr, "glGetnUniformfv");
    glo_glGetnUniformiv = (PFNGLGETNUNIFORMIVPROC) load(userptr, "glGetnUniformiv");
    glo_glGetnUniformuiv = (PFNGLGETNUNIFORMUIVPROC) load(userptr, "glGetnUniformuiv");
    glo_glReadnPixels = (PFNGLREADNPIXELSPROC) load(userptr, "glReadnPixels");
}
static void glo_gl_load_GL_MESA_framebuffer_flip_y( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_MESA_framebuffer_flip_y) return;
    glo_glFramebufferParameteriMESA = (PFNGLFRAMEBUFFERPARAMETERIMESAPROC) load(userptr, "glFramebufferParameteriMESA");
    glo_glGetFramebufferParameterivMESA = (PFNGLGETFRAMEBUFFERPARAMETERIVMESAPROC) load(userptr, "glGetFramebufferParameterivMESA");
}
static void glo_gl_load_GL_MESA_resize_buffers( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_MESA_resize_buffers) return;
    glo_glResizeBuffersMESA = (PFNGLRESIZEBUFFERSMESAPROC) load(userptr, "glResizeBuffersMESA");
}
static void glo_gl_load_GL_MESA_window_pos( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_MESA_window_pos) return;
    glo_glWindowPos2dMESA = (PFNGLWINDOWPOS2DMESAPROC) load(userptr, "glWindowPos2dMESA");
    glo_glWindowPos2dvMESA = (PFNGLWINDOWPOS2DVMESAPROC) load(userptr, "glWindowPos2dvMESA");
    glo_glWindowPos2fMESA = (PFNGLWINDOWPOS2FMESAPROC) load(userptr, "glWindowPos2fMESA");
    glo_glWindowPos2fvMESA = (PFNGLWINDOWPOS2FVMESAPROC) load(userptr, "glWindowPos2fvMESA");
    glo_glWindowPos2iMESA = (PFNGLWINDOWPOS2IMESAPROC) load(userptr, "glWindowPos2iMESA");
    glo_glWindowPos2ivMESA = (PFNGLWINDOWPOS2IVMESAPROC) load(userptr, "glWindowPos2ivMESA");
    glo_glWindowPos2sMESA = (PFNGLWINDOWPOS2SMESAPROC) load(userptr, "glWindowPos2sMESA");
    glo_glWindowPos2svMESA = (PFNGLWINDOWPOS2SVMESAPROC) load(userptr, "glWindowPos2svMESA");
    glo_glWindowPos3dMESA = (PFNGLWINDOWPOS3DMESAPROC) load(userptr, "glWindowPos3dMESA");
    glo_glWindowPos3dvMESA = (PFNGLWINDOWPOS3DVMESAPROC) load(userptr, "glWindowPos3dvMESA");
    glo_glWindowPos3fMESA = (PFNGLWINDOWPOS3FMESAPROC) load(userptr, "glWindowPos3fMESA");
    glo_glWindowPos3fvMESA = (PFNGLWINDOWPOS3FVMESAPROC) load(userptr, "glWindowPos3fvMESA");
    glo_glWindowPos3iMESA = (PFNGLWINDOWPOS3IMESAPROC) load(userptr, "glWindowPos3iMESA");
    glo_glWindowPos3ivMESA = (PFNGLWINDOWPOS3IVMESAPROC) load(userptr, "glWindowPos3ivMESA");
    glo_glWindowPos3sMESA = (PFNGLWINDOWPOS3SMESAPROC) load(userptr, "glWindowPos3sMESA");
    glo_glWindowPos3svMESA = (PFNGLWINDOWPOS3SVMESAPROC) load(userptr, "glWindowPos3svMESA");
    glo_glWindowPos4dMESA = (PFNGLWINDOWPOS4DMESAPROC) load(userptr, "glWindowPos4dMESA");
    glo_glWindowPos4dvMESA = (PFNGLWINDOWPOS4DVMESAPROC) load(userptr, "glWindowPos4dvMESA");
    glo_glWindowPos4fMESA = (PFNGLWINDOWPOS4FMESAPROC) load(userptr, "glWindowPos4fMESA");
    glo_glWindowPos4fvMESA = (PFNGLWINDOWPOS4FVMESAPROC) load(userptr, "glWindowPos4fvMESA");
    glo_glWindowPos4iMESA = (PFNGLWINDOWPOS4IMESAPROC) load(userptr, "glWindowPos4iMESA");
    glo_glWindowPos4ivMESA = (PFNGLWINDOWPOS4IVMESAPROC) load(userptr, "glWindowPos4ivMESA");
    glo_glWindowPos4sMESA = (PFNGLWINDOWPOS4SMESAPROC) load(userptr, "glWindowPos4sMESA");
    glo_glWindowPos4svMESA = (PFNGLWINDOWPOS4SVMESAPROC) load(userptr, "glWindowPos4svMESA");
}
static void glo_gl_load_GL_NVX_conditional_render( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NVX_conditional_render) return;
    glo_glBeginConditionalRenderNVX = (PFNGLBEGINCONDITIONALRENDERNVXPROC) load(userptr, "glBeginConditionalRenderNVX");
    glo_glEndConditionalRenderNVX = (PFNGLENDCONDITIONALRENDERNVXPROC) load(userptr, "glEndConditionalRenderNVX");
}
static void glo_gl_load_GL_NVX_gpu_multicast2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NVX_gpu_multicast2) return;
    glo_glAsyncCopyBufferSubDataNVX = (PFNGLASYNCCOPYBUFFERSUBDATANVXPROC) load(userptr, "glAsyncCopyBufferSubDataNVX");
    glo_glAsyncCopyImageSubDataNVX = (PFNGLASYNCCOPYIMAGESUBDATANVXPROC) load(userptr, "glAsyncCopyImageSubDataNVX");
    glo_glMulticastScissorArrayvNVX = (PFNGLMULTICASTSCISSORARRAYVNVXPROC) load(userptr, "glMulticastScissorArrayvNVX");
    glo_glMulticastViewportArrayvNVX = (PFNGLMULTICASTVIEWPORTARRAYVNVXPROC) load(userptr, "glMulticastViewportArrayvNVX");
    glo_glMulticastViewportPositionWScaleNVX = (PFNGLMULTICASTVIEWPORTPOSITIONWSCALENVXPROC) load(userptr, "glMulticastViewportPositionWScaleNVX");
    glo_glUploadGpuMaskNVX = (PFNGLUPLOADGPUMASKNVXPROC) load(userptr, "glUploadGpuMaskNVX");
}
static void glo_gl_load_GL_NVX_linked_gpu_multicast( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NVX_linked_gpu_multicast) return;
    glo_glLGPUCopyImageSubDataNVX = (PFNGLLGPUCOPYIMAGESUBDATANVXPROC) load(userptr, "glLGPUCopyImageSubDataNVX");
    glo_glLGPUInterlockNVX = (PFNGLLGPUINTERLOCKNVXPROC) load(userptr, "glLGPUInterlockNVX");
    glo_glLGPUNamedBufferSubDataNVX = (PFNGLLGPUNAMEDBUFFERSUBDATANVXPROC) load(userptr, "glLGPUNamedBufferSubDataNVX");
}
static void glo_gl_load_GL_NVX_progress_fence( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NVX_progress_fence) return;
    glo_glClientWaitSemaphoreui64NVX = (PFNGLCLIENTWAITSEMAPHOREUI64NVXPROC) load(userptr, "glClientWaitSemaphoreui64NVX");
    glo_glCreateProgressFenceNVX = (PFNGLCREATEPROGRESSFENCENVXPROC) load(userptr, "glCreateProgressFenceNVX");
    glo_glSignalSemaphoreui64NVX = (PFNGLSIGNALSEMAPHOREUI64NVXPROC) load(userptr, "glSignalSemaphoreui64NVX");
    glo_glWaitSemaphoreui64NVX = (PFNGLWAITSEMAPHOREUI64NVXPROC) load(userptr, "glWaitSemaphoreui64NVX");
}
static void glo_gl_load_GL_NV_alpha_to_coverage_dither_control( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_alpha_to_coverage_dither_control) return;
    glo_glAlphaToCoverageDitherControlNV = (PFNGLALPHATOCOVERAGEDITHERCONTROLNVPROC) load(userptr, "glAlphaToCoverageDitherControlNV");
}
static void glo_gl_load_GL_NV_bindless_multi_draw_indirect( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_bindless_multi_draw_indirect) return;
    glo_glMultiDrawArraysIndirectBindlessNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSNVPROC) load(userptr, "glMultiDrawArraysIndirectBindlessNV");
    glo_glMultiDrawElementsIndirectBindlessNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSNVPROC) load(userptr, "glMultiDrawElementsIndirectBindlessNV");
}
static void glo_gl_load_GL_NV_bindless_multi_draw_indirect_count( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_bindless_multi_draw_indirect_count) return;
    glo_glMultiDrawArraysIndirectBindlessCountNV = (PFNGLMULTIDRAWARRAYSINDIRECTBINDLESSCOUNTNVPROC) load(userptr, "glMultiDrawArraysIndirectBindlessCountNV");
    glo_glMultiDrawElementsIndirectBindlessCountNV = (PFNGLMULTIDRAWELEMENTSINDIRECTBINDLESSCOUNTNVPROC) load(userptr, "glMultiDrawElementsIndirectBindlessCountNV");
}
static void glo_gl_load_GL_NV_bindless_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_bindless_texture) return;
    glo_glGetImageHandleNV = (PFNGLGETIMAGEHANDLENVPROC) load(userptr, "glGetImageHandleNV");
    glo_glGetTextureHandleNV = (PFNGLGETTEXTUREHANDLENVPROC) load(userptr, "glGetTextureHandleNV");
    glo_glGetTextureSamplerHandleNV = (PFNGLGETTEXTURESAMPLERHANDLENVPROC) load(userptr, "glGetTextureSamplerHandleNV");
    glo_glIsImageHandleResidentNV = (PFNGLISIMAGEHANDLERESIDENTNVPROC) load(userptr, "glIsImageHandleResidentNV");
    glo_glIsTextureHandleResidentNV = (PFNGLISTEXTUREHANDLERESIDENTNVPROC) load(userptr, "glIsTextureHandleResidentNV");
    glo_glMakeImageHandleNonResidentNV = (PFNGLMAKEIMAGEHANDLENONRESIDENTNVPROC) load(userptr, "glMakeImageHandleNonResidentNV");
    glo_glMakeImageHandleResidentNV = (PFNGLMAKEIMAGEHANDLERESIDENTNVPROC) load(userptr, "glMakeImageHandleResidentNV");
    glo_glMakeTextureHandleNonResidentNV = (PFNGLMAKETEXTUREHANDLENONRESIDENTNVPROC) load(userptr, "glMakeTextureHandleNonResidentNV");
    glo_glMakeTextureHandleResidentNV = (PFNGLMAKETEXTUREHANDLERESIDENTNVPROC) load(userptr, "glMakeTextureHandleResidentNV");
    glo_glProgramUniformHandleui64NV = (PFNGLPROGRAMUNIFORMHANDLEUI64NVPROC) load(userptr, "glProgramUniformHandleui64NV");
    glo_glProgramUniformHandleui64vNV = (PFNGLPROGRAMUNIFORMHANDLEUI64VNVPROC) load(userptr, "glProgramUniformHandleui64vNV");
    glo_glUniformHandleui64NV = (PFNGLUNIFORMHANDLEUI64NVPROC) load(userptr, "glUniformHandleui64NV");
    glo_glUniformHandleui64vNV = (PFNGLUNIFORMHANDLEUI64VNVPROC) load(userptr, "glUniformHandleui64vNV");
}
static void glo_gl_load_GL_NV_blend_equation_advanced( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_blend_equation_advanced) return;
    glo_glBlendBarrierNV = (PFNGLBLENDBARRIERNVPROC) load(userptr, "glBlendBarrierNV");
    glo_glBlendParameteriNV = (PFNGLBLENDPARAMETERINVPROC) load(userptr, "glBlendParameteriNV");
}
static void glo_gl_load_GL_NV_clip_space_w_scaling( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_clip_space_w_scaling) return;
    glo_glViewportPositionWScaleNV = (PFNGLVIEWPORTPOSITIONWSCALENVPROC) load(userptr, "glViewportPositionWScaleNV");
}
static void glo_gl_load_GL_NV_command_list( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_command_list) return;
    glo_glCallCommandListNV = (PFNGLCALLCOMMANDLISTNVPROC) load(userptr, "glCallCommandListNV");
    glo_glCommandListSegmentsNV = (PFNGLCOMMANDLISTSEGMENTSNVPROC) load(userptr, "glCommandListSegmentsNV");
    glo_glCompileCommandListNV = (PFNGLCOMPILECOMMANDLISTNVPROC) load(userptr, "glCompileCommandListNV");
    glo_glCreateCommandListsNV = (PFNGLCREATECOMMANDLISTSNVPROC) load(userptr, "glCreateCommandListsNV");
    glo_glCreateStatesNV = (PFNGLCREATESTATESNVPROC) load(userptr, "glCreateStatesNV");
    glo_glDeleteCommandListsNV = (PFNGLDELETECOMMANDLISTSNVPROC) load(userptr, "glDeleteCommandListsNV");
    glo_glDeleteStatesNV = (PFNGLDELETESTATESNVPROC) load(userptr, "glDeleteStatesNV");
    glo_glDrawCommandsAddressNV = (PFNGLDRAWCOMMANDSADDRESSNVPROC) load(userptr, "glDrawCommandsAddressNV");
    glo_glDrawCommandsNV = (PFNGLDRAWCOMMANDSNVPROC) load(userptr, "glDrawCommandsNV");
    glo_glDrawCommandsStatesAddressNV = (PFNGLDRAWCOMMANDSSTATESADDRESSNVPROC) load(userptr, "glDrawCommandsStatesAddressNV");
    glo_glDrawCommandsStatesNV = (PFNGLDRAWCOMMANDSSTATESNVPROC) load(userptr, "glDrawCommandsStatesNV");
    glo_glGetCommandHeaderNV = (PFNGLGETCOMMANDHEADERNVPROC) load(userptr, "glGetCommandHeaderNV");
    glo_glGetStageIndexNV = (PFNGLGETSTAGEINDEXNVPROC) load(userptr, "glGetStageIndexNV");
    glo_glIsCommandListNV = (PFNGLISCOMMANDLISTNVPROC) load(userptr, "glIsCommandListNV");
    glo_glIsStateNV = (PFNGLISSTATENVPROC) load(userptr, "glIsStateNV");
    glo_glListDrawCommandsStatesClientNV = (PFNGLLISTDRAWCOMMANDSSTATESCLIENTNVPROC) load(userptr, "glListDrawCommandsStatesClientNV");
    glo_glStateCaptureNV = (PFNGLSTATECAPTURENVPROC) load(userptr, "glStateCaptureNV");
}
static void glo_gl_load_GL_NV_conditional_render( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_conditional_render) return;
    glo_glBeginConditionalRenderNV = (PFNGLBEGINCONDITIONALRENDERNVPROC) load(userptr, "glBeginConditionalRenderNV");
    glo_glEndConditionalRenderNV = (PFNGLENDCONDITIONALRENDERNVPROC) load(userptr, "glEndConditionalRenderNV");
}
static void glo_gl_load_GL_NV_conservative_raster( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_conservative_raster) return;
    glo_glSubpixelPrecisionBiasNV = (PFNGLSUBPIXELPRECISIONBIASNVPROC) load(userptr, "glSubpixelPrecisionBiasNV");
}
static void glo_gl_load_GL_NV_conservative_raster_dilate( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_conservative_raster_dilate) return;
    glo_glConservativeRasterParameterfNV = (PFNGLCONSERVATIVERASTERPARAMETERFNVPROC) load(userptr, "glConservativeRasterParameterfNV");
}
static void glo_gl_load_GL_NV_conservative_raster_pre_snap_triangles( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_conservative_raster_pre_snap_triangles) return;
    glo_glConservativeRasterParameteriNV = (PFNGLCONSERVATIVERASTERPARAMETERINVPROC) load(userptr, "glConservativeRasterParameteriNV");
}
static void glo_gl_load_GL_NV_copy_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_copy_image) return;
    glo_glCopyImageSubDataNV = (PFNGLCOPYIMAGESUBDATANVPROC) load(userptr, "glCopyImageSubDataNV");
}
static void glo_gl_load_GL_NV_depth_buffer_float( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_depth_buffer_float) return;
    glo_glClearDepthdNV = (PFNGLCLEARDEPTHDNVPROC) load(userptr, "glClearDepthdNV");
    glo_glDepthBoundsdNV = (PFNGLDEPTHBOUNDSDNVPROC) load(userptr, "glDepthBoundsdNV");
    glo_glDepthRangedNV = (PFNGLDEPTHRANGEDNVPROC) load(userptr, "glDepthRangedNV");
}
static void glo_gl_load_GL_NV_draw_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_draw_texture) return;
    glo_glDrawTextureNV = (PFNGLDRAWTEXTURENVPROC) load(userptr, "glDrawTextureNV");
}
static void glo_gl_load_GL_NV_draw_vulkan_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_draw_vulkan_image) return;
    glo_glDrawVkImageNV = (PFNGLDRAWVKIMAGENVPROC) load(userptr, "glDrawVkImageNV");
    glo_glGetVkProcAddrNV = (PFNGLGETVKPROCADDRNVPROC) load(userptr, "glGetVkProcAddrNV");
    glo_glSignalVkFenceNV = (PFNGLSIGNALVKFENCENVPROC) load(userptr, "glSignalVkFenceNV");
    glo_glSignalVkSemaphoreNV = (PFNGLSIGNALVKSEMAPHORENVPROC) load(userptr, "glSignalVkSemaphoreNV");
    glo_glWaitVkSemaphoreNV = (PFNGLWAITVKSEMAPHORENVPROC) load(userptr, "glWaitVkSemaphoreNV");
}
static void glo_gl_load_GL_NV_evaluators( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_evaluators) return;
    glo_glEvalMapsNV = (PFNGLEVALMAPSNVPROC) load(userptr, "glEvalMapsNV");
    glo_glGetMapAttribParameterfvNV = (PFNGLGETMAPATTRIBPARAMETERFVNVPROC) load(userptr, "glGetMapAttribParameterfvNV");
    glo_glGetMapAttribParameterivNV = (PFNGLGETMAPATTRIBPARAMETERIVNVPROC) load(userptr, "glGetMapAttribParameterivNV");
    glo_glGetMapControlPointsNV = (PFNGLGETMAPCONTROLPOINTSNVPROC) load(userptr, "glGetMapControlPointsNV");
    glo_glGetMapParameterfvNV = (PFNGLGETMAPPARAMETERFVNVPROC) load(userptr, "glGetMapParameterfvNV");
    glo_glGetMapParameterivNV = (PFNGLGETMAPPARAMETERIVNVPROC) load(userptr, "glGetMapParameterivNV");
    glo_glMapControlPointsNV = (PFNGLMAPCONTROLPOINTSNVPROC) load(userptr, "glMapControlPointsNV");
    glo_glMapParameterfvNV = (PFNGLMAPPARAMETERFVNVPROC) load(userptr, "glMapParameterfvNV");
    glo_glMapParameterivNV = (PFNGLMAPPARAMETERIVNVPROC) load(userptr, "glMapParameterivNV");
}
static void glo_gl_load_GL_NV_explicit_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_explicit_multisample) return;
    glo_glGetMultisamplefvNV = (PFNGLGETMULTISAMPLEFVNVPROC) load(userptr, "glGetMultisamplefvNV");
    glo_glSampleMaskIndexedNV = (PFNGLSAMPLEMASKINDEXEDNVPROC) load(userptr, "glSampleMaskIndexedNV");
    glo_glTexRenderbufferNV = (PFNGLTEXRENDERBUFFERNVPROC) load(userptr, "glTexRenderbufferNV");
}
static void glo_gl_load_GL_NV_fence( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_fence) return;
    glo_glDeleteFencesNV = (PFNGLDELETEFENCESNVPROC) load(userptr, "glDeleteFencesNV");
    glo_glFinishFenceNV = (PFNGLFINISHFENCENVPROC) load(userptr, "glFinishFenceNV");
    glo_glGenFencesNV = (PFNGLGENFENCESNVPROC) load(userptr, "glGenFencesNV");
    glo_glGetFenceivNV = (PFNGLGETFENCEIVNVPROC) load(userptr, "glGetFenceivNV");
    glo_glIsFenceNV = (PFNGLISFENCENVPROC) load(userptr, "glIsFenceNV");
    glo_glSetFenceNV = (PFNGLSETFENCENVPROC) load(userptr, "glSetFenceNV");
    glo_glTestFenceNV = (PFNGLTESTFENCENVPROC) load(userptr, "glTestFenceNV");
}
static void glo_gl_load_GL_NV_fragment_coverage_to_color( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_fragment_coverage_to_color) return;
    glo_glFragmentCoverageColorNV = (PFNGLFRAGMENTCOVERAGECOLORNVPROC) load(userptr, "glFragmentCoverageColorNV");
}
static void glo_gl_load_GL_NV_fragment_program( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_fragment_program) return;
    glo_glGetProgramNamedParameterdvNV = (PFNGLGETPROGRAMNAMEDPARAMETERDVNVPROC) load(userptr, "glGetProgramNamedParameterdvNV");
    glo_glGetProgramNamedParameterfvNV = (PFNGLGETPROGRAMNAMEDPARAMETERFVNVPROC) load(userptr, "glGetProgramNamedParameterfvNV");
    glo_glProgramNamedParameter4dNV = (PFNGLPROGRAMNAMEDPARAMETER4DNVPROC) load(userptr, "glProgramNamedParameter4dNV");
    glo_glProgramNamedParameter4dvNV = (PFNGLPROGRAMNAMEDPARAMETER4DVNVPROC) load(userptr, "glProgramNamedParameter4dvNV");
    glo_glProgramNamedParameter4fNV = (PFNGLPROGRAMNAMEDPARAMETER4FNVPROC) load(userptr, "glProgramNamedParameter4fNV");
    glo_glProgramNamedParameter4fvNV = (PFNGLPROGRAMNAMEDPARAMETER4FVNVPROC) load(userptr, "glProgramNamedParameter4fvNV");
}
static void glo_gl_load_GL_NV_framebuffer_mixed_samples( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_framebuffer_mixed_samples) return;
    glo_glCoverageModulationNV = (PFNGLCOVERAGEMODULATIONNVPROC) load(userptr, "glCoverageModulationNV");
    glo_glCoverageModulationTableNV = (PFNGLCOVERAGEMODULATIONTABLENVPROC) load(userptr, "glCoverageModulationTableNV");
    glo_glGetCoverageModulationTableNV = (PFNGLGETCOVERAGEMODULATIONTABLENVPROC) load(userptr, "glGetCoverageModulationTableNV");
    glo_glRasterSamplesEXT = (PFNGLRASTERSAMPLESEXTPROC) load(userptr, "glRasterSamplesEXT");
}
static void glo_gl_load_GL_NV_framebuffer_multisample_coverage( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_framebuffer_multisample_coverage) return;
    glo_glRenderbufferStorageMultisampleCoverageNV = (PFNGLRENDERBUFFERSTORAGEMULTISAMPLECOVERAGENVPROC) load(userptr, "glRenderbufferStorageMultisampleCoverageNV");
}
static void glo_gl_load_GL_NV_geometry_program4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_geometry_program4) return;
    glo_glFramebufferTextureEXT = (PFNGLFRAMEBUFFERTEXTUREEXTPROC) load(userptr, "glFramebufferTextureEXT");
    glo_glFramebufferTextureFaceEXT = (PFNGLFRAMEBUFFERTEXTUREFACEEXTPROC) load(userptr, "glFramebufferTextureFaceEXT");
    glo_glFramebufferTextureLayerEXT = (PFNGLFRAMEBUFFERTEXTURELAYEREXTPROC) load(userptr, "glFramebufferTextureLayerEXT");
    glo_glProgramVertexLimitNV = (PFNGLPROGRAMVERTEXLIMITNVPROC) load(userptr, "glProgramVertexLimitNV");
}
static void glo_gl_load_GL_NV_gpu_multicast( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_gpu_multicast) return;
    glo_glMulticastBarrierNV = (PFNGLMULTICASTBARRIERNVPROC) load(userptr, "glMulticastBarrierNV");
    glo_glMulticastBlitFramebufferNV = (PFNGLMULTICASTBLITFRAMEBUFFERNVPROC) load(userptr, "glMulticastBlitFramebufferNV");
    glo_glMulticastBufferSubDataNV = (PFNGLMULTICASTBUFFERSUBDATANVPROC) load(userptr, "glMulticastBufferSubDataNV");
    glo_glMulticastCopyBufferSubDataNV = (PFNGLMULTICASTCOPYBUFFERSUBDATANVPROC) load(userptr, "glMulticastCopyBufferSubDataNV");
    glo_glMulticastCopyImageSubDataNV = (PFNGLMULTICASTCOPYIMAGESUBDATANVPROC) load(userptr, "glMulticastCopyImageSubDataNV");
    glo_glMulticastFramebufferSampleLocationsfvNV = (PFNGLMULTICASTFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) load(userptr, "glMulticastFramebufferSampleLocationsfvNV");
    glo_glMulticastGetQueryObjecti64vNV = (PFNGLMULTICASTGETQUERYOBJECTI64VNVPROC) load(userptr, "glMulticastGetQueryObjecti64vNV");
    glo_glMulticastGetQueryObjectivNV = (PFNGLMULTICASTGETQUERYOBJECTIVNVPROC) load(userptr, "glMulticastGetQueryObjectivNV");
    glo_glMulticastGetQueryObjectui64vNV = (PFNGLMULTICASTGETQUERYOBJECTUI64VNVPROC) load(userptr, "glMulticastGetQueryObjectui64vNV");
    glo_glMulticastGetQueryObjectuivNV = (PFNGLMULTICASTGETQUERYOBJECTUIVNVPROC) load(userptr, "glMulticastGetQueryObjectuivNV");
    glo_glMulticastWaitSyncNV = (PFNGLMULTICASTWAITSYNCNVPROC) load(userptr, "glMulticastWaitSyncNV");
    glo_glRenderGpuMaskNV = (PFNGLRENDERGPUMASKNVPROC) load(userptr, "glRenderGpuMaskNV");
}
static void glo_gl_load_GL_NV_gpu_program4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_gpu_program4) return;
    glo_glGetProgramEnvParameterIivNV = (PFNGLGETPROGRAMENVPARAMETERIIVNVPROC) load(userptr, "glGetProgramEnvParameterIivNV");
    glo_glGetProgramEnvParameterIuivNV = (PFNGLGETPROGRAMENVPARAMETERIUIVNVPROC) load(userptr, "glGetProgramEnvParameterIuivNV");
    glo_glGetProgramLocalParameterIivNV = (PFNGLGETPROGRAMLOCALPARAMETERIIVNVPROC) load(userptr, "glGetProgramLocalParameterIivNV");
    glo_glGetProgramLocalParameterIuivNV = (PFNGLGETPROGRAMLOCALPARAMETERIUIVNVPROC) load(userptr, "glGetProgramLocalParameterIuivNV");
    glo_glProgramEnvParameterI4iNV = (PFNGLPROGRAMENVPARAMETERI4INVPROC) load(userptr, "glProgramEnvParameterI4iNV");
    glo_glProgramEnvParameterI4ivNV = (PFNGLPROGRAMENVPARAMETERI4IVNVPROC) load(userptr, "glProgramEnvParameterI4ivNV");
    glo_glProgramEnvParameterI4uiNV = (PFNGLPROGRAMENVPARAMETERI4UINVPROC) load(userptr, "glProgramEnvParameterI4uiNV");
    glo_glProgramEnvParameterI4uivNV = (PFNGLPROGRAMENVPARAMETERI4UIVNVPROC) load(userptr, "glProgramEnvParameterI4uivNV");
    glo_glProgramEnvParametersI4ivNV = (PFNGLPROGRAMENVPARAMETERSI4IVNVPROC) load(userptr, "glProgramEnvParametersI4ivNV");
    glo_glProgramEnvParametersI4uivNV = (PFNGLPROGRAMENVPARAMETERSI4UIVNVPROC) load(userptr, "glProgramEnvParametersI4uivNV");
    glo_glProgramLocalParameterI4iNV = (PFNGLPROGRAMLOCALPARAMETERI4INVPROC) load(userptr, "glProgramLocalParameterI4iNV");
    glo_glProgramLocalParameterI4ivNV = (PFNGLPROGRAMLOCALPARAMETERI4IVNVPROC) load(userptr, "glProgramLocalParameterI4ivNV");
    glo_glProgramLocalParameterI4uiNV = (PFNGLPROGRAMLOCALPARAMETERI4UINVPROC) load(userptr, "glProgramLocalParameterI4uiNV");
    glo_glProgramLocalParameterI4uivNV = (PFNGLPROGRAMLOCALPARAMETERI4UIVNVPROC) load(userptr, "glProgramLocalParameterI4uivNV");
    glo_glProgramLocalParametersI4ivNV = (PFNGLPROGRAMLOCALPARAMETERSI4IVNVPROC) load(userptr, "glProgramLocalParametersI4ivNV");
    glo_glProgramLocalParametersI4uivNV = (PFNGLPROGRAMLOCALPARAMETERSI4UIVNVPROC) load(userptr, "glProgramLocalParametersI4uivNV");
}
static void glo_gl_load_GL_NV_gpu_program5( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_gpu_program5) return;
    glo_glGetProgramSubroutineParameteruivNV = (PFNGLGETPROGRAMSUBROUTINEPARAMETERUIVNVPROC) load(userptr, "glGetProgramSubroutineParameteruivNV");
    glo_glProgramSubroutineParametersuivNV = (PFNGLPROGRAMSUBROUTINEPARAMETERSUIVNVPROC) load(userptr, "glProgramSubroutineParametersuivNV");
}
static void glo_gl_load_GL_NV_gpu_shader5( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_gpu_shader5) return;
    glo_glGetUniformi64vNV = (PFNGLGETUNIFORMI64VNVPROC) load(userptr, "glGetUniformi64vNV");
    glo_glProgramUniform1i64NV = (PFNGLPROGRAMUNIFORM1I64NVPROC) load(userptr, "glProgramUniform1i64NV");
    glo_glProgramUniform1i64vNV = (PFNGLPROGRAMUNIFORM1I64VNVPROC) load(userptr, "glProgramUniform1i64vNV");
    glo_glProgramUniform1ui64NV = (PFNGLPROGRAMUNIFORM1UI64NVPROC) load(userptr, "glProgramUniform1ui64NV");
    glo_glProgramUniform1ui64vNV = (PFNGLPROGRAMUNIFORM1UI64VNVPROC) load(userptr, "glProgramUniform1ui64vNV");
    glo_glProgramUniform2i64NV = (PFNGLPROGRAMUNIFORM2I64NVPROC) load(userptr, "glProgramUniform2i64NV");
    glo_glProgramUniform2i64vNV = (PFNGLPROGRAMUNIFORM2I64VNVPROC) load(userptr, "glProgramUniform2i64vNV");
    glo_glProgramUniform2ui64NV = (PFNGLPROGRAMUNIFORM2UI64NVPROC) load(userptr, "glProgramUniform2ui64NV");
    glo_glProgramUniform2ui64vNV = (PFNGLPROGRAMUNIFORM2UI64VNVPROC) load(userptr, "glProgramUniform2ui64vNV");
    glo_glProgramUniform3i64NV = (PFNGLPROGRAMUNIFORM3I64NVPROC) load(userptr, "glProgramUniform3i64NV");
    glo_glProgramUniform3i64vNV = (PFNGLPROGRAMUNIFORM3I64VNVPROC) load(userptr, "glProgramUniform3i64vNV");
    glo_glProgramUniform3ui64NV = (PFNGLPROGRAMUNIFORM3UI64NVPROC) load(userptr, "glProgramUniform3ui64NV");
    glo_glProgramUniform3ui64vNV = (PFNGLPROGRAMUNIFORM3UI64VNVPROC) load(userptr, "glProgramUniform3ui64vNV");
    glo_glProgramUniform4i64NV = (PFNGLPROGRAMUNIFORM4I64NVPROC) load(userptr, "glProgramUniform4i64NV");
    glo_glProgramUniform4i64vNV = (PFNGLPROGRAMUNIFORM4I64VNVPROC) load(userptr, "glProgramUniform4i64vNV");
    glo_glProgramUniform4ui64NV = (PFNGLPROGRAMUNIFORM4UI64NVPROC) load(userptr, "glProgramUniform4ui64NV");
    glo_glProgramUniform4ui64vNV = (PFNGLPROGRAMUNIFORM4UI64VNVPROC) load(userptr, "glProgramUniform4ui64vNV");
    glo_glUniform1i64NV = (PFNGLUNIFORM1I64NVPROC) load(userptr, "glUniform1i64NV");
    glo_glUniform1i64vNV = (PFNGLUNIFORM1I64VNVPROC) load(userptr, "glUniform1i64vNV");
    glo_glUniform1ui64NV = (PFNGLUNIFORM1UI64NVPROC) load(userptr, "glUniform1ui64NV");
    glo_glUniform1ui64vNV = (PFNGLUNIFORM1UI64VNVPROC) load(userptr, "glUniform1ui64vNV");
    glo_glUniform2i64NV = (PFNGLUNIFORM2I64NVPROC) load(userptr, "glUniform2i64NV");
    glo_glUniform2i64vNV = (PFNGLUNIFORM2I64VNVPROC) load(userptr, "glUniform2i64vNV");
    glo_glUniform2ui64NV = (PFNGLUNIFORM2UI64NVPROC) load(userptr, "glUniform2ui64NV");
    glo_glUniform2ui64vNV = (PFNGLUNIFORM2UI64VNVPROC) load(userptr, "glUniform2ui64vNV");
    glo_glUniform3i64NV = (PFNGLUNIFORM3I64NVPROC) load(userptr, "glUniform3i64NV");
    glo_glUniform3i64vNV = (PFNGLUNIFORM3I64VNVPROC) load(userptr, "glUniform3i64vNV");
    glo_glUniform3ui64NV = (PFNGLUNIFORM3UI64NVPROC) load(userptr, "glUniform3ui64NV");
    glo_glUniform3ui64vNV = (PFNGLUNIFORM3UI64VNVPROC) load(userptr, "glUniform3ui64vNV");
    glo_glUniform4i64NV = (PFNGLUNIFORM4I64NVPROC) load(userptr, "glUniform4i64NV");
    glo_glUniform4i64vNV = (PFNGLUNIFORM4I64VNVPROC) load(userptr, "glUniform4i64vNV");
    glo_glUniform4ui64NV = (PFNGLUNIFORM4UI64NVPROC) load(userptr, "glUniform4ui64NV");
    glo_glUniform4ui64vNV = (PFNGLUNIFORM4UI64VNVPROC) load(userptr, "glUniform4ui64vNV");
}
static void glo_gl_load_GL_NV_half_float( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_half_float) return;
    glo_glColor3hNV = (PFNGLCOLOR3HNVPROC) load(userptr, "glColor3hNV");
    glo_glColor3hvNV = (PFNGLCOLOR3HVNVPROC) load(userptr, "glColor3hvNV");
    glo_glColor4hNV = (PFNGLCOLOR4HNVPROC) load(userptr, "glColor4hNV");
    glo_glColor4hvNV = (PFNGLCOLOR4HVNVPROC) load(userptr, "glColor4hvNV");
    glo_glFogCoordhNV = (PFNGLFOGCOORDHNVPROC) load(userptr, "glFogCoordhNV");
    glo_glFogCoordhvNV = (PFNGLFOGCOORDHVNVPROC) load(userptr, "glFogCoordhvNV");
    glo_glMultiTexCoord1hNV = (PFNGLMULTITEXCOORD1HNVPROC) load(userptr, "glMultiTexCoord1hNV");
    glo_glMultiTexCoord1hvNV = (PFNGLMULTITEXCOORD1HVNVPROC) load(userptr, "glMultiTexCoord1hvNV");
    glo_glMultiTexCoord2hNV = (PFNGLMULTITEXCOORD2HNVPROC) load(userptr, "glMultiTexCoord2hNV");
    glo_glMultiTexCoord2hvNV = (PFNGLMULTITEXCOORD2HVNVPROC) load(userptr, "glMultiTexCoord2hvNV");
    glo_glMultiTexCoord3hNV = (PFNGLMULTITEXCOORD3HNVPROC) load(userptr, "glMultiTexCoord3hNV");
    glo_glMultiTexCoord3hvNV = (PFNGLMULTITEXCOORD3HVNVPROC) load(userptr, "glMultiTexCoord3hvNV");
    glo_glMultiTexCoord4hNV = (PFNGLMULTITEXCOORD4HNVPROC) load(userptr, "glMultiTexCoord4hNV");
    glo_glMultiTexCoord4hvNV = (PFNGLMULTITEXCOORD4HVNVPROC) load(userptr, "glMultiTexCoord4hvNV");
    glo_glNormal3hNV = (PFNGLNORMAL3HNVPROC) load(userptr, "glNormal3hNV");
    glo_glNormal3hvNV = (PFNGLNORMAL3HVNVPROC) load(userptr, "glNormal3hvNV");
    glo_glSecondaryColor3hNV = (PFNGLSECONDARYCOLOR3HNVPROC) load(userptr, "glSecondaryColor3hNV");
    glo_glSecondaryColor3hvNV = (PFNGLSECONDARYCOLOR3HVNVPROC) load(userptr, "glSecondaryColor3hvNV");
    glo_glTexCoord1hNV = (PFNGLTEXCOORD1HNVPROC) load(userptr, "glTexCoord1hNV");
    glo_glTexCoord1hvNV = (PFNGLTEXCOORD1HVNVPROC) load(userptr, "glTexCoord1hvNV");
    glo_glTexCoord2hNV = (PFNGLTEXCOORD2HNVPROC) load(userptr, "glTexCoord2hNV");
    glo_glTexCoord2hvNV = (PFNGLTEXCOORD2HVNVPROC) load(userptr, "glTexCoord2hvNV");
    glo_glTexCoord3hNV = (PFNGLTEXCOORD3HNVPROC) load(userptr, "glTexCoord3hNV");
    glo_glTexCoord3hvNV = (PFNGLTEXCOORD3HVNVPROC) load(userptr, "glTexCoord3hvNV");
    glo_glTexCoord4hNV = (PFNGLTEXCOORD4HNVPROC) load(userptr, "glTexCoord4hNV");
    glo_glTexCoord4hvNV = (PFNGLTEXCOORD4HVNVPROC) load(userptr, "glTexCoord4hvNV");
    glo_glVertex2hNV = (PFNGLVERTEX2HNVPROC) load(userptr, "glVertex2hNV");
    glo_glVertex2hvNV = (PFNGLVERTEX2HVNVPROC) load(userptr, "glVertex2hvNV");
    glo_glVertex3hNV = (PFNGLVERTEX3HNVPROC) load(userptr, "glVertex3hNV");
    glo_glVertex3hvNV = (PFNGLVERTEX3HVNVPROC) load(userptr, "glVertex3hvNV");
    glo_glVertex4hNV = (PFNGLVERTEX4HNVPROC) load(userptr, "glVertex4hNV");
    glo_glVertex4hvNV = (PFNGLVERTEX4HVNVPROC) load(userptr, "glVertex4hvNV");
    glo_glVertexAttrib1hNV = (PFNGLVERTEXATTRIB1HNVPROC) load(userptr, "glVertexAttrib1hNV");
    glo_glVertexAttrib1hvNV = (PFNGLVERTEXATTRIB1HVNVPROC) load(userptr, "glVertexAttrib1hvNV");
    glo_glVertexAttrib2hNV = (PFNGLVERTEXATTRIB2HNVPROC) load(userptr, "glVertexAttrib2hNV");
    glo_glVertexAttrib2hvNV = (PFNGLVERTEXATTRIB2HVNVPROC) load(userptr, "glVertexAttrib2hvNV");
    glo_glVertexAttrib3hNV = (PFNGLVERTEXATTRIB3HNVPROC) load(userptr, "glVertexAttrib3hNV");
    glo_glVertexAttrib3hvNV = (PFNGLVERTEXATTRIB3HVNVPROC) load(userptr, "glVertexAttrib3hvNV");
    glo_glVertexAttrib4hNV = (PFNGLVERTEXATTRIB4HNVPROC) load(userptr, "glVertexAttrib4hNV");
    glo_glVertexAttrib4hvNV = (PFNGLVERTEXATTRIB4HVNVPROC) load(userptr, "glVertexAttrib4hvNV");
    glo_glVertexAttribs1hvNV = (PFNGLVERTEXATTRIBS1HVNVPROC) load(userptr, "glVertexAttribs1hvNV");
    glo_glVertexAttribs2hvNV = (PFNGLVERTEXATTRIBS2HVNVPROC) load(userptr, "glVertexAttribs2hvNV");
    glo_glVertexAttribs3hvNV = (PFNGLVERTEXATTRIBS3HVNVPROC) load(userptr, "glVertexAttribs3hvNV");
    glo_glVertexAttribs4hvNV = (PFNGLVERTEXATTRIBS4HVNVPROC) load(userptr, "glVertexAttribs4hvNV");
    glo_glVertexWeighthNV = (PFNGLVERTEXWEIGHTHNVPROC) load(userptr, "glVertexWeighthNV");
    glo_glVertexWeighthvNV = (PFNGLVERTEXWEIGHTHVNVPROC) load(userptr, "glVertexWeighthvNV");
}
static void glo_gl_load_GL_NV_internalformat_sample_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_internalformat_sample_query) return;
    glo_glGetInternalformatSampleivNV = (PFNGLGETINTERNALFORMATSAMPLEIVNVPROC) load(userptr, "glGetInternalformatSampleivNV");
}
static void glo_gl_load_GL_NV_memory_attachment( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_memory_attachment) return;
    glo_glBufferAttachMemoryNV = (PFNGLBUFFERATTACHMEMORYNVPROC) load(userptr, "glBufferAttachMemoryNV");
    glo_glGetMemoryObjectDetachedResourcesuivNV = (PFNGLGETMEMORYOBJECTDETACHEDRESOURCESUIVNVPROC) load(userptr, "glGetMemoryObjectDetachedResourcesuivNV");
    glo_glNamedBufferAttachMemoryNV = (PFNGLNAMEDBUFFERATTACHMEMORYNVPROC) load(userptr, "glNamedBufferAttachMemoryNV");
    glo_glResetMemoryObjectParameterNV = (PFNGLRESETMEMORYOBJECTPARAMETERNVPROC) load(userptr, "glResetMemoryObjectParameterNV");
    glo_glTexAttachMemoryNV = (PFNGLTEXATTACHMEMORYNVPROC) load(userptr, "glTexAttachMemoryNV");
    glo_glTextureAttachMemoryNV = (PFNGLTEXTUREATTACHMEMORYNVPROC) load(userptr, "glTextureAttachMemoryNV");
}
static void glo_gl_load_GL_NV_memory_object_sparse( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_memory_object_sparse) return;
    glo_glBufferPageCommitmentMemNV = (PFNGLBUFFERPAGECOMMITMENTMEMNVPROC) load(userptr, "glBufferPageCommitmentMemNV");
    glo_glNamedBufferPageCommitmentMemNV = (PFNGLNAMEDBUFFERPAGECOMMITMENTMEMNVPROC) load(userptr, "glNamedBufferPageCommitmentMemNV");
    glo_glTexPageCommitmentMemNV = (PFNGLTEXPAGECOMMITMENTMEMNVPROC) load(userptr, "glTexPageCommitmentMemNV");
    glo_glTexturePageCommitmentMemNV = (PFNGLTEXTUREPAGECOMMITMENTMEMNVPROC) load(userptr, "glTexturePageCommitmentMemNV");
}
static void glo_gl_load_GL_NV_mesh_shader( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_mesh_shader) return;
    glo_glDrawMeshTasksIndirectNV = (PFNGLDRAWMESHTASKSINDIRECTNVPROC) load(userptr, "glDrawMeshTasksIndirectNV");
    glo_glDrawMeshTasksNV = (PFNGLDRAWMESHTASKSNVPROC) load(userptr, "glDrawMeshTasksNV");
    glo_glMultiDrawMeshTasksIndirectCountNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTCOUNTNVPROC) load(userptr, "glMultiDrawMeshTasksIndirectCountNV");
    glo_glMultiDrawMeshTasksIndirectNV = (PFNGLMULTIDRAWMESHTASKSINDIRECTNVPROC) load(userptr, "glMultiDrawMeshTasksIndirectNV");
}
static void glo_gl_load_GL_NV_occlusion_query( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_occlusion_query) return;
    glo_glBeginOcclusionQueryNV = (PFNGLBEGINOCCLUSIONQUERYNVPROC) load(userptr, "glBeginOcclusionQueryNV");
    glo_glDeleteOcclusionQueriesNV = (PFNGLDELETEOCCLUSIONQUERIESNVPROC) load(userptr, "glDeleteOcclusionQueriesNV");
    glo_glEndOcclusionQueryNV = (PFNGLENDOCCLUSIONQUERYNVPROC) load(userptr, "glEndOcclusionQueryNV");
    glo_glGenOcclusionQueriesNV = (PFNGLGENOCCLUSIONQUERIESNVPROC) load(userptr, "glGenOcclusionQueriesNV");
    glo_glGetOcclusionQueryivNV = (PFNGLGETOCCLUSIONQUERYIVNVPROC) load(userptr, "glGetOcclusionQueryivNV");
    glo_glGetOcclusionQueryuivNV = (PFNGLGETOCCLUSIONQUERYUIVNVPROC) load(userptr, "glGetOcclusionQueryuivNV");
    glo_glIsOcclusionQueryNV = (PFNGLISOCCLUSIONQUERYNVPROC) load(userptr, "glIsOcclusionQueryNV");
}
static void glo_gl_load_GL_NV_parameter_buffer_object( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_parameter_buffer_object) return;
    glo_glProgramBufferParametersIivNV = (PFNGLPROGRAMBUFFERPARAMETERSIIVNVPROC) load(userptr, "glProgramBufferParametersIivNV");
    glo_glProgramBufferParametersIuivNV = (PFNGLPROGRAMBUFFERPARAMETERSIUIVNVPROC) load(userptr, "glProgramBufferParametersIuivNV");
    glo_glProgramBufferParametersfvNV = (PFNGLPROGRAMBUFFERPARAMETERSFVNVPROC) load(userptr, "glProgramBufferParametersfvNV");
}
static void glo_gl_load_GL_NV_path_rendering( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_path_rendering) return;
    glo_glCopyPathNV = (PFNGLCOPYPATHNVPROC) load(userptr, "glCopyPathNV");
    glo_glCoverFillPathInstancedNV = (PFNGLCOVERFILLPATHINSTANCEDNVPROC) load(userptr, "glCoverFillPathInstancedNV");
    glo_glCoverFillPathNV = (PFNGLCOVERFILLPATHNVPROC) load(userptr, "glCoverFillPathNV");
    glo_glCoverStrokePathInstancedNV = (PFNGLCOVERSTROKEPATHINSTANCEDNVPROC) load(userptr, "glCoverStrokePathInstancedNV");
    glo_glCoverStrokePathNV = (PFNGLCOVERSTROKEPATHNVPROC) load(userptr, "glCoverStrokePathNV");
    glo_glDeletePathsNV = (PFNGLDELETEPATHSNVPROC) load(userptr, "glDeletePathsNV");
    glo_glGenPathsNV = (PFNGLGENPATHSNVPROC) load(userptr, "glGenPathsNV");
    glo_glGetPathCommandsNV = (PFNGLGETPATHCOMMANDSNVPROC) load(userptr, "glGetPathCommandsNV");
    glo_glGetPathCoordsNV = (PFNGLGETPATHCOORDSNVPROC) load(userptr, "glGetPathCoordsNV");
    glo_glGetPathDashArrayNV = (PFNGLGETPATHDASHARRAYNVPROC) load(userptr, "glGetPathDashArrayNV");
    glo_glGetPathLengthNV = (PFNGLGETPATHLENGTHNVPROC) load(userptr, "glGetPathLengthNV");
    glo_glGetPathMetricRangeNV = (PFNGLGETPATHMETRICRANGENVPROC) load(userptr, "glGetPathMetricRangeNV");
    glo_glGetPathMetricsNV = (PFNGLGETPATHMETRICSNVPROC) load(userptr, "glGetPathMetricsNV");
    glo_glGetPathParameterfvNV = (PFNGLGETPATHPARAMETERFVNVPROC) load(userptr, "glGetPathParameterfvNV");
    glo_glGetPathParameterivNV = (PFNGLGETPATHPARAMETERIVNVPROC) load(userptr, "glGetPathParameterivNV");
    glo_glGetPathSpacingNV = (PFNGLGETPATHSPACINGNVPROC) load(userptr, "glGetPathSpacingNV");
    glo_glGetProgramResourcefvNV = (PFNGLGETPROGRAMRESOURCEFVNVPROC) load(userptr, "glGetProgramResourcefvNV");
    glo_glInterpolatePathsNV = (PFNGLINTERPOLATEPATHSNVPROC) load(userptr, "glInterpolatePathsNV");
    glo_glIsPathNV = (PFNGLISPATHNVPROC) load(userptr, "glIsPathNV");
    glo_glIsPointInFillPathNV = (PFNGLISPOINTINFILLPATHNVPROC) load(userptr, "glIsPointInFillPathNV");
    glo_glIsPointInStrokePathNV = (PFNGLISPOINTINSTROKEPATHNVPROC) load(userptr, "glIsPointInStrokePathNV");
    glo_glMatrixFrustumEXT = (PFNGLMATRIXFRUSTUMEXTPROC) load(userptr, "glMatrixFrustumEXT");
    glo_glMatrixLoad3x2fNV = (PFNGLMATRIXLOAD3X2FNVPROC) load(userptr, "glMatrixLoad3x2fNV");
    glo_glMatrixLoad3x3fNV = (PFNGLMATRIXLOAD3X3FNVPROC) load(userptr, "glMatrixLoad3x3fNV");
    glo_glMatrixLoadIdentityEXT = (PFNGLMATRIXLOADIDENTITYEXTPROC) load(userptr, "glMatrixLoadIdentityEXT");
    glo_glMatrixLoadTranspose3x3fNV = (PFNGLMATRIXLOADTRANSPOSE3X3FNVPROC) load(userptr, "glMatrixLoadTranspose3x3fNV");
    glo_glMatrixLoadTransposedEXT = (PFNGLMATRIXLOADTRANSPOSEDEXTPROC) load(userptr, "glMatrixLoadTransposedEXT");
    glo_glMatrixLoadTransposefEXT = (PFNGLMATRIXLOADTRANSPOSEFEXTPROC) load(userptr, "glMatrixLoadTransposefEXT");
    glo_glMatrixLoaddEXT = (PFNGLMATRIXLOADDEXTPROC) load(userptr, "glMatrixLoaddEXT");
    glo_glMatrixLoadfEXT = (PFNGLMATRIXLOADFEXTPROC) load(userptr, "glMatrixLoadfEXT");
    glo_glMatrixMult3x2fNV = (PFNGLMATRIXMULT3X2FNVPROC) load(userptr, "glMatrixMult3x2fNV");
    glo_glMatrixMult3x3fNV = (PFNGLMATRIXMULT3X3FNVPROC) load(userptr, "glMatrixMult3x3fNV");
    glo_glMatrixMultTranspose3x3fNV = (PFNGLMATRIXMULTTRANSPOSE3X3FNVPROC) load(userptr, "glMatrixMultTranspose3x3fNV");
    glo_glMatrixMultTransposedEXT = (PFNGLMATRIXMULTTRANSPOSEDEXTPROC) load(userptr, "glMatrixMultTransposedEXT");
    glo_glMatrixMultTransposefEXT = (PFNGLMATRIXMULTTRANSPOSEFEXTPROC) load(userptr, "glMatrixMultTransposefEXT");
    glo_glMatrixMultdEXT = (PFNGLMATRIXMULTDEXTPROC) load(userptr, "glMatrixMultdEXT");
    glo_glMatrixMultfEXT = (PFNGLMATRIXMULTFEXTPROC) load(userptr, "glMatrixMultfEXT");
    glo_glMatrixOrthoEXT = (PFNGLMATRIXORTHOEXTPROC) load(userptr, "glMatrixOrthoEXT");
    glo_glMatrixPopEXT = (PFNGLMATRIXPOPEXTPROC) load(userptr, "glMatrixPopEXT");
    glo_glMatrixPushEXT = (PFNGLMATRIXPUSHEXTPROC) load(userptr, "glMatrixPushEXT");
    glo_glMatrixRotatedEXT = (PFNGLMATRIXROTATEDEXTPROC) load(userptr, "glMatrixRotatedEXT");
    glo_glMatrixRotatefEXT = (PFNGLMATRIXROTATEFEXTPROC) load(userptr, "glMatrixRotatefEXT");
    glo_glMatrixScaledEXT = (PFNGLMATRIXSCALEDEXTPROC) load(userptr, "glMatrixScaledEXT");
    glo_glMatrixScalefEXT = (PFNGLMATRIXSCALEFEXTPROC) load(userptr, "glMatrixScalefEXT");
    glo_glMatrixTranslatedEXT = (PFNGLMATRIXTRANSLATEDEXTPROC) load(userptr, "glMatrixTranslatedEXT");
    glo_glMatrixTranslatefEXT = (PFNGLMATRIXTRANSLATEFEXTPROC) load(userptr, "glMatrixTranslatefEXT");
    glo_glPathCommandsNV = (PFNGLPATHCOMMANDSNVPROC) load(userptr, "glPathCommandsNV");
    glo_glPathCoordsNV = (PFNGLPATHCOORDSNVPROC) load(userptr, "glPathCoordsNV");
    glo_glPathCoverDepthFuncNV = (PFNGLPATHCOVERDEPTHFUNCNVPROC) load(userptr, "glPathCoverDepthFuncNV");
    glo_glPathDashArrayNV = (PFNGLPATHDASHARRAYNVPROC) load(userptr, "glPathDashArrayNV");
    glo_glPathGlyphIndexArrayNV = (PFNGLPATHGLYPHINDEXARRAYNVPROC) load(userptr, "glPathGlyphIndexArrayNV");
    glo_glPathGlyphIndexRangeNV = (PFNGLPATHGLYPHINDEXRANGENVPROC) load(userptr, "glPathGlyphIndexRangeNV");
    glo_glPathGlyphRangeNV = (PFNGLPATHGLYPHRANGENVPROC) load(userptr, "glPathGlyphRangeNV");
    glo_glPathGlyphsNV = (PFNGLPATHGLYPHSNVPROC) load(userptr, "glPathGlyphsNV");
    glo_glPathMemoryGlyphIndexArrayNV = (PFNGLPATHMEMORYGLYPHINDEXARRAYNVPROC) load(userptr, "glPathMemoryGlyphIndexArrayNV");
    glo_glPathParameterfNV = (PFNGLPATHPARAMETERFNVPROC) load(userptr, "glPathParameterfNV");
    glo_glPathParameterfvNV = (PFNGLPATHPARAMETERFVNVPROC) load(userptr, "glPathParameterfvNV");
    glo_glPathParameteriNV = (PFNGLPATHPARAMETERINVPROC) load(userptr, "glPathParameteriNV");
    glo_glPathParameterivNV = (PFNGLPATHPARAMETERIVNVPROC) load(userptr, "glPathParameterivNV");
    glo_glPathStencilDepthOffsetNV = (PFNGLPATHSTENCILDEPTHOFFSETNVPROC) load(userptr, "glPathStencilDepthOffsetNV");
    glo_glPathStencilFuncNV = (PFNGLPATHSTENCILFUNCNVPROC) load(userptr, "glPathStencilFuncNV");
    glo_glPathStringNV = (PFNGLPATHSTRINGNVPROC) load(userptr, "glPathStringNV");
    glo_glPathSubCommandsNV = (PFNGLPATHSUBCOMMANDSNVPROC) load(userptr, "glPathSubCommandsNV");
    glo_glPathSubCoordsNV = (PFNGLPATHSUBCOORDSNVPROC) load(userptr, "glPathSubCoordsNV");
    glo_glPointAlongPathNV = (PFNGLPOINTALONGPATHNVPROC) load(userptr, "glPointAlongPathNV");
    glo_glProgramPathFragmentInputGenNV = (PFNGLPROGRAMPATHFRAGMENTINPUTGENNVPROC) load(userptr, "glProgramPathFragmentInputGenNV");
    glo_glStencilFillPathInstancedNV = (PFNGLSTENCILFILLPATHINSTANCEDNVPROC) load(userptr, "glStencilFillPathInstancedNV");
    glo_glStencilFillPathNV = (PFNGLSTENCILFILLPATHNVPROC) load(userptr, "glStencilFillPathNV");
    glo_glStencilStrokePathInstancedNV = (PFNGLSTENCILSTROKEPATHINSTANCEDNVPROC) load(userptr, "glStencilStrokePathInstancedNV");
    glo_glStencilStrokePathNV = (PFNGLSTENCILSTROKEPATHNVPROC) load(userptr, "glStencilStrokePathNV");
    glo_glStencilThenCoverFillPathInstancedNV = (PFNGLSTENCILTHENCOVERFILLPATHINSTANCEDNVPROC) load(userptr, "glStencilThenCoverFillPathInstancedNV");
    glo_glStencilThenCoverFillPathNV = (PFNGLSTENCILTHENCOVERFILLPATHNVPROC) load(userptr, "glStencilThenCoverFillPathNV");
    glo_glStencilThenCoverStrokePathInstancedNV = (PFNGLSTENCILTHENCOVERSTROKEPATHINSTANCEDNVPROC) load(userptr, "glStencilThenCoverStrokePathInstancedNV");
    glo_glStencilThenCoverStrokePathNV = (PFNGLSTENCILTHENCOVERSTROKEPATHNVPROC) load(userptr, "glStencilThenCoverStrokePathNV");
    glo_glTransformPathNV = (PFNGLTRANSFORMPATHNVPROC) load(userptr, "glTransformPathNV");
    glo_glWeightPathsNV = (PFNGLWEIGHTPATHSNVPROC) load(userptr, "glWeightPathsNV");
}
static void glo_gl_load_GL_NV_pixel_data_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_pixel_data_range) return;
    glo_glFlushPixelDataRangeNV = (PFNGLFLUSHPIXELDATARANGENVPROC) load(userptr, "glFlushPixelDataRangeNV");
    glo_glPixelDataRangeNV = (PFNGLPIXELDATARANGENVPROC) load(userptr, "glPixelDataRangeNV");
}
static void glo_gl_load_GL_NV_point_sprite( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_point_sprite) return;
    glo_glPointParameteriNV = (PFNGLPOINTPARAMETERINVPROC) load(userptr, "glPointParameteriNV");
    glo_glPointParameterivNV = (PFNGLPOINTPARAMETERIVNVPROC) load(userptr, "glPointParameterivNV");
}
static void glo_gl_load_GL_NV_present_video( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_present_video) return;
    glo_glGetVideoi64vNV = (PFNGLGETVIDEOI64VNVPROC) load(userptr, "glGetVideoi64vNV");
    glo_glGetVideoivNV = (PFNGLGETVIDEOIVNVPROC) load(userptr, "glGetVideoivNV");
    glo_glGetVideoui64vNV = (PFNGLGETVIDEOUI64VNVPROC) load(userptr, "glGetVideoui64vNV");
    glo_glGetVideouivNV = (PFNGLGETVIDEOUIVNVPROC) load(userptr, "glGetVideouivNV");
    glo_glPresentFrameDualFillNV = (PFNGLPRESENTFRAMEDUALFILLNVPROC) load(userptr, "glPresentFrameDualFillNV");
    glo_glPresentFrameKeyedNV = (PFNGLPRESENTFRAMEKEYEDNVPROC) load(userptr, "glPresentFrameKeyedNV");
}
static void glo_gl_load_GL_NV_primitive_restart( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_primitive_restart) return;
    glo_glPrimitiveRestartIndexNV = (PFNGLPRIMITIVERESTARTINDEXNVPROC) load(userptr, "glPrimitiveRestartIndexNV");
    glo_glPrimitiveRestartNV = (PFNGLPRIMITIVERESTARTNVPROC) load(userptr, "glPrimitiveRestartNV");
}
static void glo_gl_load_GL_NV_query_resource( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_query_resource) return;
    glo_glQueryResourceNV = (PFNGLQUERYRESOURCENVPROC) load(userptr, "glQueryResourceNV");
}
static void glo_gl_load_GL_NV_query_resource_tag( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_query_resource_tag) return;
    glo_glDeleteQueryResourceTagNV = (PFNGLDELETEQUERYRESOURCETAGNVPROC) load(userptr, "glDeleteQueryResourceTagNV");
    glo_glGenQueryResourceTagNV = (PFNGLGENQUERYRESOURCETAGNVPROC) load(userptr, "glGenQueryResourceTagNV");
    glo_glQueryResourceTagNV = (PFNGLQUERYRESOURCETAGNVPROC) load(userptr, "glQueryResourceTagNV");
}
static void glo_gl_load_GL_NV_register_combiners( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_register_combiners) return;
    glo_glCombinerInputNV = (PFNGLCOMBINERINPUTNVPROC) load(userptr, "glCombinerInputNV");
    glo_glCombinerOutputNV = (PFNGLCOMBINEROUTPUTNVPROC) load(userptr, "glCombinerOutputNV");
    glo_glCombinerParameterfNV = (PFNGLCOMBINERPARAMETERFNVPROC) load(userptr, "glCombinerParameterfNV");
    glo_glCombinerParameterfvNV = (PFNGLCOMBINERPARAMETERFVNVPROC) load(userptr, "glCombinerParameterfvNV");
    glo_glCombinerParameteriNV = (PFNGLCOMBINERPARAMETERINVPROC) load(userptr, "glCombinerParameteriNV");
    glo_glCombinerParameterivNV = (PFNGLCOMBINERPARAMETERIVNVPROC) load(userptr, "glCombinerParameterivNV");
    glo_glFinalCombinerInputNV = (PFNGLFINALCOMBINERINPUTNVPROC) load(userptr, "glFinalCombinerInputNV");
    glo_glGetCombinerInputParameterfvNV = (PFNGLGETCOMBINERINPUTPARAMETERFVNVPROC) load(userptr, "glGetCombinerInputParameterfvNV");
    glo_glGetCombinerInputParameterivNV = (PFNGLGETCOMBINERINPUTPARAMETERIVNVPROC) load(userptr, "glGetCombinerInputParameterivNV");
    glo_glGetCombinerOutputParameterfvNV = (PFNGLGETCOMBINEROUTPUTPARAMETERFVNVPROC) load(userptr, "glGetCombinerOutputParameterfvNV");
    glo_glGetCombinerOutputParameterivNV = (PFNGLGETCOMBINEROUTPUTPARAMETERIVNVPROC) load(userptr, "glGetCombinerOutputParameterivNV");
    glo_glGetFinalCombinerInputParameterfvNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERFVNVPROC) load(userptr, "glGetFinalCombinerInputParameterfvNV");
    glo_glGetFinalCombinerInputParameterivNV = (PFNGLGETFINALCOMBINERINPUTPARAMETERIVNVPROC) load(userptr, "glGetFinalCombinerInputParameterivNV");
}
static void glo_gl_load_GL_NV_register_combiners2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_register_combiners2) return;
    glo_glCombinerStageParameterfvNV = (PFNGLCOMBINERSTAGEPARAMETERFVNVPROC) load(userptr, "glCombinerStageParameterfvNV");
    glo_glGetCombinerStageParameterfvNV = (PFNGLGETCOMBINERSTAGEPARAMETERFVNVPROC) load(userptr, "glGetCombinerStageParameterfvNV");
}
static void glo_gl_load_GL_NV_sample_locations( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_sample_locations) return;
    glo_glFramebufferSampleLocationsfvNV = (PFNGLFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) load(userptr, "glFramebufferSampleLocationsfvNV");
    glo_glNamedFramebufferSampleLocationsfvNV = (PFNGLNAMEDFRAMEBUFFERSAMPLELOCATIONSFVNVPROC) load(userptr, "glNamedFramebufferSampleLocationsfvNV");
    glo_glResolveDepthValuesNV = (PFNGLRESOLVEDEPTHVALUESNVPROC) load(userptr, "glResolveDepthValuesNV");
}
static void glo_gl_load_GL_NV_scissor_exclusive( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_scissor_exclusive) return;
    glo_glScissorExclusiveArrayvNV = (PFNGLSCISSOREXCLUSIVEARRAYVNVPROC) load(userptr, "glScissorExclusiveArrayvNV");
    glo_glScissorExclusiveNV = (PFNGLSCISSOREXCLUSIVENVPROC) load(userptr, "glScissorExclusiveNV");
}
static void glo_gl_load_GL_NV_shader_buffer_load( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_shader_buffer_load) return;
    glo_glGetBufferParameterui64vNV = (PFNGLGETBUFFERPARAMETERUI64VNVPROC) load(userptr, "glGetBufferParameterui64vNV");
    glo_glGetIntegerui64vNV = (PFNGLGETINTEGERUI64VNVPROC) load(userptr, "glGetIntegerui64vNV");
    glo_glGetNamedBufferParameterui64vNV = (PFNGLGETNAMEDBUFFERPARAMETERUI64VNVPROC) load(userptr, "glGetNamedBufferParameterui64vNV");
    glo_glGetUniformui64vNV = (PFNGLGETUNIFORMUI64VNVPROC) load(userptr, "glGetUniformui64vNV");
    glo_glIsBufferResidentNV = (PFNGLISBUFFERRESIDENTNVPROC) load(userptr, "glIsBufferResidentNV");
    glo_glIsNamedBufferResidentNV = (PFNGLISNAMEDBUFFERRESIDENTNVPROC) load(userptr, "glIsNamedBufferResidentNV");
    glo_glMakeBufferNonResidentNV = (PFNGLMAKEBUFFERNONRESIDENTNVPROC) load(userptr, "glMakeBufferNonResidentNV");
    glo_glMakeBufferResidentNV = (PFNGLMAKEBUFFERRESIDENTNVPROC) load(userptr, "glMakeBufferResidentNV");
    glo_glMakeNamedBufferNonResidentNV = (PFNGLMAKENAMEDBUFFERNONRESIDENTNVPROC) load(userptr, "glMakeNamedBufferNonResidentNV");
    glo_glMakeNamedBufferResidentNV = (PFNGLMAKENAMEDBUFFERRESIDENTNVPROC) load(userptr, "glMakeNamedBufferResidentNV");
    glo_glProgramUniformui64NV = (PFNGLPROGRAMUNIFORMUI64NVPROC) load(userptr, "glProgramUniformui64NV");
    glo_glProgramUniformui64vNV = (PFNGLPROGRAMUNIFORMUI64VNVPROC) load(userptr, "glProgramUniformui64vNV");
    glo_glUniformui64NV = (PFNGLUNIFORMUI64NVPROC) load(userptr, "glUniformui64NV");
    glo_glUniformui64vNV = (PFNGLUNIFORMUI64VNVPROC) load(userptr, "glUniformui64vNV");
}
static void glo_gl_load_GL_NV_shading_rate_image( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_shading_rate_image) return;
    glo_glBindShadingRateImageNV = (PFNGLBINDSHADINGRATEIMAGENVPROC) load(userptr, "glBindShadingRateImageNV");
    glo_glGetShadingRateImagePaletteNV = (PFNGLGETSHADINGRATEIMAGEPALETTENVPROC) load(userptr, "glGetShadingRateImagePaletteNV");
    glo_glGetShadingRateSampleLocationivNV = (PFNGLGETSHADINGRATESAMPLELOCATIONIVNVPROC) load(userptr, "glGetShadingRateSampleLocationivNV");
    glo_glShadingRateImageBarrierNV = (PFNGLSHADINGRATEIMAGEBARRIERNVPROC) load(userptr, "glShadingRateImageBarrierNV");
    glo_glShadingRateImagePaletteNV = (PFNGLSHADINGRATEIMAGEPALETTENVPROC) load(userptr, "glShadingRateImagePaletteNV");
    glo_glShadingRateSampleOrderCustomNV = (PFNGLSHADINGRATESAMPLEORDERCUSTOMNVPROC) load(userptr, "glShadingRateSampleOrderCustomNV");
    glo_glShadingRateSampleOrderNV = (PFNGLSHADINGRATESAMPLEORDERNVPROC) load(userptr, "glShadingRateSampleOrderNV");
}
static void glo_gl_load_GL_NV_texture_barrier( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_texture_barrier) return;
    glo_glTextureBarrierNV = (PFNGLTEXTUREBARRIERNVPROC) load(userptr, "glTextureBarrierNV");
}
static void glo_gl_load_GL_NV_texture_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_texture_multisample) return;
    glo_glTexImage2DMultisampleCoverageNV = (PFNGLTEXIMAGE2DMULTISAMPLECOVERAGENVPROC) load(userptr, "glTexImage2DMultisampleCoverageNV");
    glo_glTexImage3DMultisampleCoverageNV = (PFNGLTEXIMAGE3DMULTISAMPLECOVERAGENVPROC) load(userptr, "glTexImage3DMultisampleCoverageNV");
    glo_glTextureImage2DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLECOVERAGENVPROC) load(userptr, "glTextureImage2DMultisampleCoverageNV");
    glo_glTextureImage2DMultisampleNV = (PFNGLTEXTUREIMAGE2DMULTISAMPLENVPROC) load(userptr, "glTextureImage2DMultisampleNV");
    glo_glTextureImage3DMultisampleCoverageNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLECOVERAGENVPROC) load(userptr, "glTextureImage3DMultisampleCoverageNV");
    glo_glTextureImage3DMultisampleNV = (PFNGLTEXTUREIMAGE3DMULTISAMPLENVPROC) load(userptr, "glTextureImage3DMultisampleNV");
}
static void glo_gl_load_GL_NV_timeline_semaphore( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_timeline_semaphore) return;
    glo_glCreateSemaphoresNV = (PFNGLCREATESEMAPHORESNVPROC) load(userptr, "glCreateSemaphoresNV");
    glo_glGetSemaphoreParameterivNV = (PFNGLGETSEMAPHOREPARAMETERIVNVPROC) load(userptr, "glGetSemaphoreParameterivNV");
    glo_glSemaphoreParameterivNV = (PFNGLSEMAPHOREPARAMETERIVNVPROC) load(userptr, "glSemaphoreParameterivNV");
}
static void glo_gl_load_GL_NV_transform_feedback( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_transform_feedback) return;
    glo_glActiveVaryingNV = (PFNGLACTIVEVARYINGNVPROC) load(userptr, "glActiveVaryingNV");
    glo_glBeginTransformFeedbackNV = (PFNGLBEGINTRANSFORMFEEDBACKNVPROC) load(userptr, "glBeginTransformFeedbackNV");
    glo_glBindBufferBaseNV = (PFNGLBINDBUFFERBASENVPROC) load(userptr, "glBindBufferBaseNV");
    glo_glBindBufferOffsetNV = (PFNGLBINDBUFFEROFFSETNVPROC) load(userptr, "glBindBufferOffsetNV");
    glo_glBindBufferRangeNV = (PFNGLBINDBUFFERRANGENVPROC) load(userptr, "glBindBufferRangeNV");
    glo_glEndTransformFeedbackNV = (PFNGLENDTRANSFORMFEEDBACKNVPROC) load(userptr, "glEndTransformFeedbackNV");
    glo_glGetActiveVaryingNV = (PFNGLGETACTIVEVARYINGNVPROC) load(userptr, "glGetActiveVaryingNV");
    glo_glGetTransformFeedbackVaryingNV = (PFNGLGETTRANSFORMFEEDBACKVARYINGNVPROC) load(userptr, "glGetTransformFeedbackVaryingNV");
    glo_glGetVaryingLocationNV = (PFNGLGETVARYINGLOCATIONNVPROC) load(userptr, "glGetVaryingLocationNV");
    glo_glTransformFeedbackAttribsNV = (PFNGLTRANSFORMFEEDBACKATTRIBSNVPROC) load(userptr, "glTransformFeedbackAttribsNV");
    glo_glTransformFeedbackStreamAttribsNV = (PFNGLTRANSFORMFEEDBACKSTREAMATTRIBSNVPROC) load(userptr, "glTransformFeedbackStreamAttribsNV");
    glo_glTransformFeedbackVaryingsNV = (PFNGLTRANSFORMFEEDBACKVARYINGSNVPROC) load(userptr, "glTransformFeedbackVaryingsNV");
}
static void glo_gl_load_GL_NV_transform_feedback2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_transform_feedback2) return;
    glo_glBindTransformFeedbackNV = (PFNGLBINDTRANSFORMFEEDBACKNVPROC) load(userptr, "glBindTransformFeedbackNV");
    glo_glDeleteTransformFeedbacksNV = (PFNGLDELETETRANSFORMFEEDBACKSNVPROC) load(userptr, "glDeleteTransformFeedbacksNV");
    glo_glDrawTransformFeedbackNV = (PFNGLDRAWTRANSFORMFEEDBACKNVPROC) load(userptr, "glDrawTransformFeedbackNV");
    glo_glGenTransformFeedbacksNV = (PFNGLGENTRANSFORMFEEDBACKSNVPROC) load(userptr, "glGenTransformFeedbacksNV");
    glo_glIsTransformFeedbackNV = (PFNGLISTRANSFORMFEEDBACKNVPROC) load(userptr, "glIsTransformFeedbackNV");
    glo_glPauseTransformFeedbackNV = (PFNGLPAUSETRANSFORMFEEDBACKNVPROC) load(userptr, "glPauseTransformFeedbackNV");
    glo_glResumeTransformFeedbackNV = (PFNGLRESUMETRANSFORMFEEDBACKNVPROC) load(userptr, "glResumeTransformFeedbackNV");
}
static void glo_gl_load_GL_NV_vdpau_interop( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vdpau_interop) return;
    glo_glVDPAUFiniNV = (PFNGLVDPAUFININVPROC) load(userptr, "glVDPAUFiniNV");
    glo_glVDPAUGetSurfaceivNV = (PFNGLVDPAUGETSURFACEIVNVPROC) load(userptr, "glVDPAUGetSurfaceivNV");
    glo_glVDPAUInitNV = (PFNGLVDPAUINITNVPROC) load(userptr, "glVDPAUInitNV");
    glo_glVDPAUIsSurfaceNV = (PFNGLVDPAUISSURFACENVPROC) load(userptr, "glVDPAUIsSurfaceNV");
    glo_glVDPAUMapSurfacesNV = (PFNGLVDPAUMAPSURFACESNVPROC) load(userptr, "glVDPAUMapSurfacesNV");
    glo_glVDPAURegisterOutputSurfaceNV = (PFNGLVDPAUREGISTEROUTPUTSURFACENVPROC) load(userptr, "glVDPAURegisterOutputSurfaceNV");
    glo_glVDPAURegisterVideoSurfaceNV = (PFNGLVDPAUREGISTERVIDEOSURFACENVPROC) load(userptr, "glVDPAURegisterVideoSurfaceNV");
    glo_glVDPAUSurfaceAccessNV = (PFNGLVDPAUSURFACEACCESSNVPROC) load(userptr, "glVDPAUSurfaceAccessNV");
    glo_glVDPAUUnmapSurfacesNV = (PFNGLVDPAUUNMAPSURFACESNVPROC) load(userptr, "glVDPAUUnmapSurfacesNV");
    glo_glVDPAUUnregisterSurfaceNV = (PFNGLVDPAUUNREGISTERSURFACENVPROC) load(userptr, "glVDPAUUnregisterSurfaceNV");
}
static void glo_gl_load_GL_NV_vdpau_interop2( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vdpau_interop2) return;
    glo_glVDPAURegisterVideoSurfaceWithPictureStructureNV = (PFNGLVDPAUREGISTERVIDEOSURFACEWITHPICTURESTRUCTURENVPROC) load(userptr, "glVDPAURegisterVideoSurfaceWithPictureStructureNV");
}
static void glo_gl_load_GL_NV_vertex_array_range( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vertex_array_range) return;
    glo_glFlushVertexArrayRangeNV = (PFNGLFLUSHVERTEXARRAYRANGENVPROC) load(userptr, "glFlushVertexArrayRangeNV");
    glo_glVertexArrayRangeNV = (PFNGLVERTEXARRAYRANGENVPROC) load(userptr, "glVertexArrayRangeNV");
}
static void glo_gl_load_GL_NV_vertex_attrib_integer_64bit( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vertex_attrib_integer_64bit) return;
    glo_glGetVertexAttribLi64vNV = (PFNGLGETVERTEXATTRIBLI64VNVPROC) load(userptr, "glGetVertexAttribLi64vNV");
    glo_glGetVertexAttribLui64vNV = (PFNGLGETVERTEXATTRIBLUI64VNVPROC) load(userptr, "glGetVertexAttribLui64vNV");
    glo_glVertexAttribL1i64NV = (PFNGLVERTEXATTRIBL1I64NVPROC) load(userptr, "glVertexAttribL1i64NV");
    glo_glVertexAttribL1i64vNV = (PFNGLVERTEXATTRIBL1I64VNVPROC) load(userptr, "glVertexAttribL1i64vNV");
    glo_glVertexAttribL1ui64NV = (PFNGLVERTEXATTRIBL1UI64NVPROC) load(userptr, "glVertexAttribL1ui64NV");
    glo_glVertexAttribL1ui64vNV = (PFNGLVERTEXATTRIBL1UI64VNVPROC) load(userptr, "glVertexAttribL1ui64vNV");
    glo_glVertexAttribL2i64NV = (PFNGLVERTEXATTRIBL2I64NVPROC) load(userptr, "glVertexAttribL2i64NV");
    glo_glVertexAttribL2i64vNV = (PFNGLVERTEXATTRIBL2I64VNVPROC) load(userptr, "glVertexAttribL2i64vNV");
    glo_glVertexAttribL2ui64NV = (PFNGLVERTEXATTRIBL2UI64NVPROC) load(userptr, "glVertexAttribL2ui64NV");
    glo_glVertexAttribL2ui64vNV = (PFNGLVERTEXATTRIBL2UI64VNVPROC) load(userptr, "glVertexAttribL2ui64vNV");
    glo_glVertexAttribL3i64NV = (PFNGLVERTEXATTRIBL3I64NVPROC) load(userptr, "glVertexAttribL3i64NV");
    glo_glVertexAttribL3i64vNV = (PFNGLVERTEXATTRIBL3I64VNVPROC) load(userptr, "glVertexAttribL3i64vNV");
    glo_glVertexAttribL3ui64NV = (PFNGLVERTEXATTRIBL3UI64NVPROC) load(userptr, "glVertexAttribL3ui64NV");
    glo_glVertexAttribL3ui64vNV = (PFNGLVERTEXATTRIBL3UI64VNVPROC) load(userptr, "glVertexAttribL3ui64vNV");
    glo_glVertexAttribL4i64NV = (PFNGLVERTEXATTRIBL4I64NVPROC) load(userptr, "glVertexAttribL4i64NV");
    glo_glVertexAttribL4i64vNV = (PFNGLVERTEXATTRIBL4I64VNVPROC) load(userptr, "glVertexAttribL4i64vNV");
    glo_glVertexAttribL4ui64NV = (PFNGLVERTEXATTRIBL4UI64NVPROC) load(userptr, "glVertexAttribL4ui64NV");
    glo_glVertexAttribL4ui64vNV = (PFNGLVERTEXATTRIBL4UI64VNVPROC) load(userptr, "glVertexAttribL4ui64vNV");
    glo_glVertexAttribLFormatNV = (PFNGLVERTEXATTRIBLFORMATNVPROC) load(userptr, "glVertexAttribLFormatNV");
}
static void glo_gl_load_GL_NV_vertex_buffer_unified_memory( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vertex_buffer_unified_memory) return;
    glo_glBufferAddressRangeNV = (PFNGLBUFFERADDRESSRANGENVPROC) load(userptr, "glBufferAddressRangeNV");
    glo_glColorFormatNV = (PFNGLCOLORFORMATNVPROC) load(userptr, "glColorFormatNV");
    glo_glEdgeFlagFormatNV = (PFNGLEDGEFLAGFORMATNVPROC) load(userptr, "glEdgeFlagFormatNV");
    glo_glFogCoordFormatNV = (PFNGLFOGCOORDFORMATNVPROC) load(userptr, "glFogCoordFormatNV");
    glo_glGetIntegerui64i_vNV = (PFNGLGETINTEGERUI64I_VNVPROC) load(userptr, "glGetIntegerui64i_vNV");
    glo_glIndexFormatNV = (PFNGLINDEXFORMATNVPROC) load(userptr, "glIndexFormatNV");
    glo_glNormalFormatNV = (PFNGLNORMALFORMATNVPROC) load(userptr, "glNormalFormatNV");
    glo_glSecondaryColorFormatNV = (PFNGLSECONDARYCOLORFORMATNVPROC) load(userptr, "glSecondaryColorFormatNV");
    glo_glTexCoordFormatNV = (PFNGLTEXCOORDFORMATNVPROC) load(userptr, "glTexCoordFormatNV");
    glo_glVertexAttribFormatNV = (PFNGLVERTEXATTRIBFORMATNVPROC) load(userptr, "glVertexAttribFormatNV");
    glo_glVertexAttribIFormatNV = (PFNGLVERTEXATTRIBIFORMATNVPROC) load(userptr, "glVertexAttribIFormatNV");
    glo_glVertexFormatNV = (PFNGLVERTEXFORMATNVPROC) load(userptr, "glVertexFormatNV");
}
static void glo_gl_load_GL_NV_vertex_program( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vertex_program) return;
    glo_glAreProgramsResidentNV = (PFNGLAREPROGRAMSRESIDENTNVPROC) load(userptr, "glAreProgramsResidentNV");
    glo_glBindProgramNV = (PFNGLBINDPROGRAMNVPROC) load(userptr, "glBindProgramNV");
    glo_glDeleteProgramsNV = (PFNGLDELETEPROGRAMSNVPROC) load(userptr, "glDeleteProgramsNV");
    glo_glExecuteProgramNV = (PFNGLEXECUTEPROGRAMNVPROC) load(userptr, "glExecuteProgramNV");
    glo_glGenProgramsNV = (PFNGLGENPROGRAMSNVPROC) load(userptr, "glGenProgramsNV");
    glo_glGetProgramParameterdvNV = (PFNGLGETPROGRAMPARAMETERDVNVPROC) load(userptr, "glGetProgramParameterdvNV");
    glo_glGetProgramParameterfvNV = (PFNGLGETPROGRAMPARAMETERFVNVPROC) load(userptr, "glGetProgramParameterfvNV");
    glo_glGetProgramStringNV = (PFNGLGETPROGRAMSTRINGNVPROC) load(userptr, "glGetProgramStringNV");
    glo_glGetProgramivNV = (PFNGLGETPROGRAMIVNVPROC) load(userptr, "glGetProgramivNV");
    glo_glGetTrackMatrixivNV = (PFNGLGETTRACKMATRIXIVNVPROC) load(userptr, "glGetTrackMatrixivNV");
    glo_glGetVertexAttribPointervNV = (PFNGLGETVERTEXATTRIBPOINTERVNVPROC) load(userptr, "glGetVertexAttribPointervNV");
    glo_glGetVertexAttribdvNV = (PFNGLGETVERTEXATTRIBDVNVPROC) load(userptr, "glGetVertexAttribdvNV");
    glo_glGetVertexAttribfvNV = (PFNGLGETVERTEXATTRIBFVNVPROC) load(userptr, "glGetVertexAttribfvNV");
    glo_glGetVertexAttribivNV = (PFNGLGETVERTEXATTRIBIVNVPROC) load(userptr, "glGetVertexAttribivNV");
    glo_glIsProgramNV = (PFNGLISPROGRAMNVPROC) load(userptr, "glIsProgramNV");
    glo_glLoadProgramNV = (PFNGLLOADPROGRAMNVPROC) load(userptr, "glLoadProgramNV");
    glo_glProgramParameter4dNV = (PFNGLPROGRAMPARAMETER4DNVPROC) load(userptr, "glProgramParameter4dNV");
    glo_glProgramParameter4dvNV = (PFNGLPROGRAMPARAMETER4DVNVPROC) load(userptr, "glProgramParameter4dvNV");
    glo_glProgramParameter4fNV = (PFNGLPROGRAMPARAMETER4FNVPROC) load(userptr, "glProgramParameter4fNV");
    glo_glProgramParameter4fvNV = (PFNGLPROGRAMPARAMETER4FVNVPROC) load(userptr, "glProgramParameter4fvNV");
    glo_glProgramParameters4dvNV = (PFNGLPROGRAMPARAMETERS4DVNVPROC) load(userptr, "glProgramParameters4dvNV");
    glo_glProgramParameters4fvNV = (PFNGLPROGRAMPARAMETERS4FVNVPROC) load(userptr, "glProgramParameters4fvNV");
    glo_glRequestResidentProgramsNV = (PFNGLREQUESTRESIDENTPROGRAMSNVPROC) load(userptr, "glRequestResidentProgramsNV");
    glo_glTrackMatrixNV = (PFNGLTRACKMATRIXNVPROC) load(userptr, "glTrackMatrixNV");
    glo_glVertexAttrib1dNV = (PFNGLVERTEXATTRIB1DNVPROC) load(userptr, "glVertexAttrib1dNV");
    glo_glVertexAttrib1dvNV = (PFNGLVERTEXATTRIB1DVNVPROC) load(userptr, "glVertexAttrib1dvNV");
    glo_glVertexAttrib1fNV = (PFNGLVERTEXATTRIB1FNVPROC) load(userptr, "glVertexAttrib1fNV");
    glo_glVertexAttrib1fvNV = (PFNGLVERTEXATTRIB1FVNVPROC) load(userptr, "glVertexAttrib1fvNV");
    glo_glVertexAttrib1sNV = (PFNGLVERTEXATTRIB1SNVPROC) load(userptr, "glVertexAttrib1sNV");
    glo_glVertexAttrib1svNV = (PFNGLVERTEXATTRIB1SVNVPROC) load(userptr, "glVertexAttrib1svNV");
    glo_glVertexAttrib2dNV = (PFNGLVERTEXATTRIB2DNVPROC) load(userptr, "glVertexAttrib2dNV");
    glo_glVertexAttrib2dvNV = (PFNGLVERTEXATTRIB2DVNVPROC) load(userptr, "glVertexAttrib2dvNV");
    glo_glVertexAttrib2fNV = (PFNGLVERTEXATTRIB2FNVPROC) load(userptr, "glVertexAttrib2fNV");
    glo_glVertexAttrib2fvNV = (PFNGLVERTEXATTRIB2FVNVPROC) load(userptr, "glVertexAttrib2fvNV");
    glo_glVertexAttrib2sNV = (PFNGLVERTEXATTRIB2SNVPROC) load(userptr, "glVertexAttrib2sNV");
    glo_glVertexAttrib2svNV = (PFNGLVERTEXATTRIB2SVNVPROC) load(userptr, "glVertexAttrib2svNV");
    glo_glVertexAttrib3dNV = (PFNGLVERTEXATTRIB3DNVPROC) load(userptr, "glVertexAttrib3dNV");
    glo_glVertexAttrib3dvNV = (PFNGLVERTEXATTRIB3DVNVPROC) load(userptr, "glVertexAttrib3dvNV");
    glo_glVertexAttrib3fNV = (PFNGLVERTEXATTRIB3FNVPROC) load(userptr, "glVertexAttrib3fNV");
    glo_glVertexAttrib3fvNV = (PFNGLVERTEXATTRIB3FVNVPROC) load(userptr, "glVertexAttrib3fvNV");
    glo_glVertexAttrib3sNV = (PFNGLVERTEXATTRIB3SNVPROC) load(userptr, "glVertexAttrib3sNV");
    glo_glVertexAttrib3svNV = (PFNGLVERTEXATTRIB3SVNVPROC) load(userptr, "glVertexAttrib3svNV");
    glo_glVertexAttrib4dNV = (PFNGLVERTEXATTRIB4DNVPROC) load(userptr, "glVertexAttrib4dNV");
    glo_glVertexAttrib4dvNV = (PFNGLVERTEXATTRIB4DVNVPROC) load(userptr, "glVertexAttrib4dvNV");
    glo_glVertexAttrib4fNV = (PFNGLVERTEXATTRIB4FNVPROC) load(userptr, "glVertexAttrib4fNV");
    glo_glVertexAttrib4fvNV = (PFNGLVERTEXATTRIB4FVNVPROC) load(userptr, "glVertexAttrib4fvNV");
    glo_glVertexAttrib4sNV = (PFNGLVERTEXATTRIB4SNVPROC) load(userptr, "glVertexAttrib4sNV");
    glo_glVertexAttrib4svNV = (PFNGLVERTEXATTRIB4SVNVPROC) load(userptr, "glVertexAttrib4svNV");
    glo_glVertexAttrib4ubNV = (PFNGLVERTEXATTRIB4UBNVPROC) load(userptr, "glVertexAttrib4ubNV");
    glo_glVertexAttrib4ubvNV = (PFNGLVERTEXATTRIB4UBVNVPROC) load(userptr, "glVertexAttrib4ubvNV");
    glo_glVertexAttribPointerNV = (PFNGLVERTEXATTRIBPOINTERNVPROC) load(userptr, "glVertexAttribPointerNV");
    glo_glVertexAttribs1dvNV = (PFNGLVERTEXATTRIBS1DVNVPROC) load(userptr, "glVertexAttribs1dvNV");
    glo_glVertexAttribs1fvNV = (PFNGLVERTEXATTRIBS1FVNVPROC) load(userptr, "glVertexAttribs1fvNV");
    glo_glVertexAttribs1svNV = (PFNGLVERTEXATTRIBS1SVNVPROC) load(userptr, "glVertexAttribs1svNV");
    glo_glVertexAttribs2dvNV = (PFNGLVERTEXATTRIBS2DVNVPROC) load(userptr, "glVertexAttribs2dvNV");
    glo_glVertexAttribs2fvNV = (PFNGLVERTEXATTRIBS2FVNVPROC) load(userptr, "glVertexAttribs2fvNV");
    glo_glVertexAttribs2svNV = (PFNGLVERTEXATTRIBS2SVNVPROC) load(userptr, "glVertexAttribs2svNV");
    glo_glVertexAttribs3dvNV = (PFNGLVERTEXATTRIBS3DVNVPROC) load(userptr, "glVertexAttribs3dvNV");
    glo_glVertexAttribs3fvNV = (PFNGLVERTEXATTRIBS3FVNVPROC) load(userptr, "glVertexAttribs3fvNV");
    glo_glVertexAttribs3svNV = (PFNGLVERTEXATTRIBS3SVNVPROC) load(userptr, "glVertexAttribs3svNV");
    glo_glVertexAttribs4dvNV = (PFNGLVERTEXATTRIBS4DVNVPROC) load(userptr, "glVertexAttribs4dvNV");
    glo_glVertexAttribs4fvNV = (PFNGLVERTEXATTRIBS4FVNVPROC) load(userptr, "glVertexAttribs4fvNV");
    glo_glVertexAttribs4svNV = (PFNGLVERTEXATTRIBS4SVNVPROC) load(userptr, "glVertexAttribs4svNV");
    glo_glVertexAttribs4ubvNV = (PFNGLVERTEXATTRIBS4UBVNVPROC) load(userptr, "glVertexAttribs4ubvNV");
}
static void glo_gl_load_GL_NV_vertex_program4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_vertex_program4) return;
    glo_glGetVertexAttribIivEXT = (PFNGLGETVERTEXATTRIBIIVEXTPROC) load(userptr, "glGetVertexAttribIivEXT");
    glo_glGetVertexAttribIuivEXT = (PFNGLGETVERTEXATTRIBIUIVEXTPROC) load(userptr, "glGetVertexAttribIuivEXT");
    glo_glVertexAttribI1iEXT = (PFNGLVERTEXATTRIBI1IEXTPROC) load(userptr, "glVertexAttribI1iEXT");
    glo_glVertexAttribI1ivEXT = (PFNGLVERTEXATTRIBI1IVEXTPROC) load(userptr, "glVertexAttribI1ivEXT");
    glo_glVertexAttribI1uiEXT = (PFNGLVERTEXATTRIBI1UIEXTPROC) load(userptr, "glVertexAttribI1uiEXT");
    glo_glVertexAttribI1uivEXT = (PFNGLVERTEXATTRIBI1UIVEXTPROC) load(userptr, "glVertexAttribI1uivEXT");
    glo_glVertexAttribI2iEXT = (PFNGLVERTEXATTRIBI2IEXTPROC) load(userptr, "glVertexAttribI2iEXT");
    glo_glVertexAttribI2ivEXT = (PFNGLVERTEXATTRIBI2IVEXTPROC) load(userptr, "glVertexAttribI2ivEXT");
    glo_glVertexAttribI2uiEXT = (PFNGLVERTEXATTRIBI2UIEXTPROC) load(userptr, "glVertexAttribI2uiEXT");
    glo_glVertexAttribI2uivEXT = (PFNGLVERTEXATTRIBI2UIVEXTPROC) load(userptr, "glVertexAttribI2uivEXT");
    glo_glVertexAttribI3iEXT = (PFNGLVERTEXATTRIBI3IEXTPROC) load(userptr, "glVertexAttribI3iEXT");
    glo_glVertexAttribI3ivEXT = (PFNGLVERTEXATTRIBI3IVEXTPROC) load(userptr, "glVertexAttribI3ivEXT");
    glo_glVertexAttribI3uiEXT = (PFNGLVERTEXATTRIBI3UIEXTPROC) load(userptr, "glVertexAttribI3uiEXT");
    glo_glVertexAttribI3uivEXT = (PFNGLVERTEXATTRIBI3UIVEXTPROC) load(userptr, "glVertexAttribI3uivEXT");
    glo_glVertexAttribI4bvEXT = (PFNGLVERTEXATTRIBI4BVEXTPROC) load(userptr, "glVertexAttribI4bvEXT");
    glo_glVertexAttribI4iEXT = (PFNGLVERTEXATTRIBI4IEXTPROC) load(userptr, "glVertexAttribI4iEXT");
    glo_glVertexAttribI4ivEXT = (PFNGLVERTEXATTRIBI4IVEXTPROC) load(userptr, "glVertexAttribI4ivEXT");
    glo_glVertexAttribI4svEXT = (PFNGLVERTEXATTRIBI4SVEXTPROC) load(userptr, "glVertexAttribI4svEXT");
    glo_glVertexAttribI4ubvEXT = (PFNGLVERTEXATTRIBI4UBVEXTPROC) load(userptr, "glVertexAttribI4ubvEXT");
    glo_glVertexAttribI4uiEXT = (PFNGLVERTEXATTRIBI4UIEXTPROC) load(userptr, "glVertexAttribI4uiEXT");
    glo_glVertexAttribI4uivEXT = (PFNGLVERTEXATTRIBI4UIVEXTPROC) load(userptr, "glVertexAttribI4uivEXT");
    glo_glVertexAttribI4usvEXT = (PFNGLVERTEXATTRIBI4USVEXTPROC) load(userptr, "glVertexAttribI4usvEXT");
    glo_glVertexAttribIPointerEXT = (PFNGLVERTEXATTRIBIPOINTEREXTPROC) load(userptr, "glVertexAttribIPointerEXT");
}
static void glo_gl_load_GL_NV_video_capture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_video_capture) return;
    glo_glBeginVideoCaptureNV = (PFNGLBEGINVIDEOCAPTURENVPROC) load(userptr, "glBeginVideoCaptureNV");
    glo_glBindVideoCaptureStreamBufferNV = (PFNGLBINDVIDEOCAPTURESTREAMBUFFERNVPROC) load(userptr, "glBindVideoCaptureStreamBufferNV");
    glo_glBindVideoCaptureStreamTextureNV = (PFNGLBINDVIDEOCAPTURESTREAMTEXTURENVPROC) load(userptr, "glBindVideoCaptureStreamTextureNV");
    glo_glEndVideoCaptureNV = (PFNGLENDVIDEOCAPTURENVPROC) load(userptr, "glEndVideoCaptureNV");
    glo_glGetVideoCaptureStreamdvNV = (PFNGLGETVIDEOCAPTURESTREAMDVNVPROC) load(userptr, "glGetVideoCaptureStreamdvNV");
    glo_glGetVideoCaptureStreamfvNV = (PFNGLGETVIDEOCAPTURESTREAMFVNVPROC) load(userptr, "glGetVideoCaptureStreamfvNV");
    glo_glGetVideoCaptureStreamivNV = (PFNGLGETVIDEOCAPTURESTREAMIVNVPROC) load(userptr, "glGetVideoCaptureStreamivNV");
    glo_glGetVideoCaptureivNV = (PFNGLGETVIDEOCAPTUREIVNVPROC) load(userptr, "glGetVideoCaptureivNV");
    glo_glVideoCaptureNV = (PFNGLVIDEOCAPTURENVPROC) load(userptr, "glVideoCaptureNV");
    glo_glVideoCaptureStreamParameterdvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERDVNVPROC) load(userptr, "glVideoCaptureStreamParameterdvNV");
    glo_glVideoCaptureStreamParameterfvNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERFVNVPROC) load(userptr, "glVideoCaptureStreamParameterfvNV");
    glo_glVideoCaptureStreamParameterivNV = (PFNGLVIDEOCAPTURESTREAMPARAMETERIVNVPROC) load(userptr, "glVideoCaptureStreamParameterivNV");
}
static void glo_gl_load_GL_NV_viewport_swizzle( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_NV_viewport_swizzle) return;
    glo_glViewportSwizzleNV = (PFNGLVIEWPORTSWIZZLENVPROC) load(userptr, "glViewportSwizzleNV");
}
static void glo_gl_load_GL_OES_byte_coordinates( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_OES_byte_coordinates) return;
    glo_glMultiTexCoord1bOES = (PFNGLMULTITEXCOORD1BOESPROC) load(userptr, "glMultiTexCoord1bOES");
    glo_glMultiTexCoord1bvOES = (PFNGLMULTITEXCOORD1BVOESPROC) load(userptr, "glMultiTexCoord1bvOES");
    glo_glMultiTexCoord2bOES = (PFNGLMULTITEXCOORD2BOESPROC) load(userptr, "glMultiTexCoord2bOES");
    glo_glMultiTexCoord2bvOES = (PFNGLMULTITEXCOORD2BVOESPROC) load(userptr, "glMultiTexCoord2bvOES");
    glo_glMultiTexCoord3bOES = (PFNGLMULTITEXCOORD3BOESPROC) load(userptr, "glMultiTexCoord3bOES");
    glo_glMultiTexCoord3bvOES = (PFNGLMULTITEXCOORD3BVOESPROC) load(userptr, "glMultiTexCoord3bvOES");
    glo_glMultiTexCoord4bOES = (PFNGLMULTITEXCOORD4BOESPROC) load(userptr, "glMultiTexCoord4bOES");
    glo_glMultiTexCoord4bvOES = (PFNGLMULTITEXCOORD4BVOESPROC) load(userptr, "glMultiTexCoord4bvOES");
    glo_glTexCoord1bOES = (PFNGLTEXCOORD1BOESPROC) load(userptr, "glTexCoord1bOES");
    glo_glTexCoord1bvOES = (PFNGLTEXCOORD1BVOESPROC) load(userptr, "glTexCoord1bvOES");
    glo_glTexCoord2bOES = (PFNGLTEXCOORD2BOESPROC) load(userptr, "glTexCoord2bOES");
    glo_glTexCoord2bvOES = (PFNGLTEXCOORD2BVOESPROC) load(userptr, "glTexCoord2bvOES");
    glo_glTexCoord3bOES = (PFNGLTEXCOORD3BOESPROC) load(userptr, "glTexCoord3bOES");
    glo_glTexCoord3bvOES = (PFNGLTEXCOORD3BVOESPROC) load(userptr, "glTexCoord3bvOES");
    glo_glTexCoord4bOES = (PFNGLTEXCOORD4BOESPROC) load(userptr, "glTexCoord4bOES");
    glo_glTexCoord4bvOES = (PFNGLTEXCOORD4BVOESPROC) load(userptr, "glTexCoord4bvOES");
    glo_glVertex2bOES = (PFNGLVERTEX2BOESPROC) load(userptr, "glVertex2bOES");
    glo_glVertex2bvOES = (PFNGLVERTEX2BVOESPROC) load(userptr, "glVertex2bvOES");
    glo_glVertex3bOES = (PFNGLVERTEX3BOESPROC) load(userptr, "glVertex3bOES");
    glo_glVertex3bvOES = (PFNGLVERTEX3BVOESPROC) load(userptr, "glVertex3bvOES");
    glo_glVertex4bOES = (PFNGLVERTEX4BOESPROC) load(userptr, "glVertex4bOES");
    glo_glVertex4bvOES = (PFNGLVERTEX4BVOESPROC) load(userptr, "glVertex4bvOES");
}
static void glo_gl_load_GL_OES_fixed_point( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_OES_fixed_point) return;
    glo_glAccumxOES = (PFNGLACCUMXOESPROC) load(userptr, "glAccumxOES");
    glo_glAlphaFuncxOES = (PFNGLALPHAFUNCXOESPROC) load(userptr, "glAlphaFuncxOES");
    glo_glBitmapxOES = (PFNGLBITMAPXOESPROC) load(userptr, "glBitmapxOES");
    glo_glBlendColorxOES = (PFNGLBLENDCOLORXOESPROC) load(userptr, "glBlendColorxOES");
    glo_glClearAccumxOES = (PFNGLCLEARACCUMXOESPROC) load(userptr, "glClearAccumxOES");
    glo_glClearColorxOES = (PFNGLCLEARCOLORXOESPROC) load(userptr, "glClearColorxOES");
    glo_glClearDepthxOES = (PFNGLCLEARDEPTHXOESPROC) load(userptr, "glClearDepthxOES");
    glo_glClipPlanexOES = (PFNGLCLIPPLANEXOESPROC) load(userptr, "glClipPlanexOES");
    glo_glColor3xOES = (PFNGLCOLOR3XOESPROC) load(userptr, "glColor3xOES");
    glo_glColor3xvOES = (PFNGLCOLOR3XVOESPROC) load(userptr, "glColor3xvOES");
    glo_glColor4xOES = (PFNGLCOLOR4XOESPROC) load(userptr, "glColor4xOES");
    glo_glColor4xvOES = (PFNGLCOLOR4XVOESPROC) load(userptr, "glColor4xvOES");
    glo_glConvolutionParameterxOES = (PFNGLCONVOLUTIONPARAMETERXOESPROC) load(userptr, "glConvolutionParameterxOES");
    glo_glConvolutionParameterxvOES = (PFNGLCONVOLUTIONPARAMETERXVOESPROC) load(userptr, "glConvolutionParameterxvOES");
    glo_glDepthRangexOES = (PFNGLDEPTHRANGEXOESPROC) load(userptr, "glDepthRangexOES");
    glo_glEvalCoord1xOES = (PFNGLEVALCOORD1XOESPROC) load(userptr, "glEvalCoord1xOES");
    glo_glEvalCoord1xvOES = (PFNGLEVALCOORD1XVOESPROC) load(userptr, "glEvalCoord1xvOES");
    glo_glEvalCoord2xOES = (PFNGLEVALCOORD2XOESPROC) load(userptr, "glEvalCoord2xOES");
    glo_glEvalCoord2xvOES = (PFNGLEVALCOORD2XVOESPROC) load(userptr, "glEvalCoord2xvOES");
    glo_glFeedbackBufferxOES = (PFNGLFEEDBACKBUFFERXOESPROC) load(userptr, "glFeedbackBufferxOES");
    glo_glFogxOES = (PFNGLFOGXOESPROC) load(userptr, "glFogxOES");
    glo_glFogxvOES = (PFNGLFOGXVOESPROC) load(userptr, "glFogxvOES");
    glo_glFrustumxOES = (PFNGLFRUSTUMXOESPROC) load(userptr, "glFrustumxOES");
    glo_glGetClipPlanexOES = (PFNGLGETCLIPPLANEXOESPROC) load(userptr, "glGetClipPlanexOES");
    glo_glGetConvolutionParameterxvOES = (PFNGLGETCONVOLUTIONPARAMETERXVOESPROC) load(userptr, "glGetConvolutionParameterxvOES");
    glo_glGetFixedvOES = (PFNGLGETFIXEDVOESPROC) load(userptr, "glGetFixedvOES");
    glo_glGetHistogramParameterxvOES = (PFNGLGETHISTOGRAMPARAMETERXVOESPROC) load(userptr, "glGetHistogramParameterxvOES");
    glo_glGetLightxOES = (PFNGLGETLIGHTXOESPROC) load(userptr, "glGetLightxOES");
    glo_glGetMapxvOES = (PFNGLGETMAPXVOESPROC) load(userptr, "glGetMapxvOES");
    glo_glGetMaterialxOES = (PFNGLGETMATERIALXOESPROC) load(userptr, "glGetMaterialxOES");
    glo_glGetPixelMapxv = (PFNGLGETPIXELMAPXVPROC) load(userptr, "glGetPixelMapxv");
    glo_glGetTexEnvxvOES = (PFNGLGETTEXENVXVOESPROC) load(userptr, "glGetTexEnvxvOES");
    glo_glGetTexGenxvOES = (PFNGLGETTEXGENXVOESPROC) load(userptr, "glGetTexGenxvOES");
    glo_glGetTexLevelParameterxvOES = (PFNGLGETTEXLEVELPARAMETERXVOESPROC) load(userptr, "glGetTexLevelParameterxvOES");
    glo_glGetTexParameterxvOES = (PFNGLGETTEXPARAMETERXVOESPROC) load(userptr, "glGetTexParameterxvOES");
    glo_glIndexxOES = (PFNGLINDEXXOESPROC) load(userptr, "glIndexxOES");
    glo_glIndexxvOES = (PFNGLINDEXXVOESPROC) load(userptr, "glIndexxvOES");
    glo_glLightModelxOES = (PFNGLLIGHTMODELXOESPROC) load(userptr, "glLightModelxOES");
    glo_glLightModelxvOES = (PFNGLLIGHTMODELXVOESPROC) load(userptr, "glLightModelxvOES");
    glo_glLightxOES = (PFNGLLIGHTXOESPROC) load(userptr, "glLightxOES");
    glo_glLightxvOES = (PFNGLLIGHTXVOESPROC) load(userptr, "glLightxvOES");
    glo_glLineWidthxOES = (PFNGLLINEWIDTHXOESPROC) load(userptr, "glLineWidthxOES");
    glo_glLoadMatrixxOES = (PFNGLLOADMATRIXXOESPROC) load(userptr, "glLoadMatrixxOES");
    glo_glLoadTransposeMatrixxOES = (PFNGLLOADTRANSPOSEMATRIXXOESPROC) load(userptr, "glLoadTransposeMatrixxOES");
    glo_glMap1xOES = (PFNGLMAP1XOESPROC) load(userptr, "glMap1xOES");
    glo_glMap2xOES = (PFNGLMAP2XOESPROC) load(userptr, "glMap2xOES");
    glo_glMapGrid1xOES = (PFNGLMAPGRID1XOESPROC) load(userptr, "glMapGrid1xOES");
    glo_glMapGrid2xOES = (PFNGLMAPGRID2XOESPROC) load(userptr, "glMapGrid2xOES");
    glo_glMaterialxOES = (PFNGLMATERIALXOESPROC) load(userptr, "glMaterialxOES");
    glo_glMaterialxvOES = (PFNGLMATERIALXVOESPROC) load(userptr, "glMaterialxvOES");
    glo_glMultMatrixxOES = (PFNGLMULTMATRIXXOESPROC) load(userptr, "glMultMatrixxOES");
    glo_glMultTransposeMatrixxOES = (PFNGLMULTTRANSPOSEMATRIXXOESPROC) load(userptr, "glMultTransposeMatrixxOES");
    glo_glMultiTexCoord1xOES = (PFNGLMULTITEXCOORD1XOESPROC) load(userptr, "glMultiTexCoord1xOES");
    glo_glMultiTexCoord1xvOES = (PFNGLMULTITEXCOORD1XVOESPROC) load(userptr, "glMultiTexCoord1xvOES");
    glo_glMultiTexCoord2xOES = (PFNGLMULTITEXCOORD2XOESPROC) load(userptr, "glMultiTexCoord2xOES");
    glo_glMultiTexCoord2xvOES = (PFNGLMULTITEXCOORD2XVOESPROC) load(userptr, "glMultiTexCoord2xvOES");
    glo_glMultiTexCoord3xOES = (PFNGLMULTITEXCOORD3XOESPROC) load(userptr, "glMultiTexCoord3xOES");
    glo_glMultiTexCoord3xvOES = (PFNGLMULTITEXCOORD3XVOESPROC) load(userptr, "glMultiTexCoord3xvOES");
    glo_glMultiTexCoord4xOES = (PFNGLMULTITEXCOORD4XOESPROC) load(userptr, "glMultiTexCoord4xOES");
    glo_glMultiTexCoord4xvOES = (PFNGLMULTITEXCOORD4XVOESPROC) load(userptr, "glMultiTexCoord4xvOES");
    glo_glNormal3xOES = (PFNGLNORMAL3XOESPROC) load(userptr, "glNormal3xOES");
    glo_glNormal3xvOES = (PFNGLNORMAL3XVOESPROC) load(userptr, "glNormal3xvOES");
    glo_glOrthoxOES = (PFNGLORTHOXOESPROC) load(userptr, "glOrthoxOES");
    glo_glPassThroughxOES = (PFNGLPASSTHROUGHXOESPROC) load(userptr, "glPassThroughxOES");
    glo_glPixelMapx = (PFNGLPIXELMAPXPROC) load(userptr, "glPixelMapx");
    glo_glPixelStorex = (PFNGLPIXELSTOREXPROC) load(userptr, "glPixelStorex");
    glo_glPixelTransferxOES = (PFNGLPIXELTRANSFERXOESPROC) load(userptr, "glPixelTransferxOES");
    glo_glPixelZoomxOES = (PFNGLPIXELZOOMXOESPROC) load(userptr, "glPixelZoomxOES");
    glo_glPointParameterxvOES = (PFNGLPOINTPARAMETERXVOESPROC) load(userptr, "glPointParameterxvOES");
    glo_glPointSizexOES = (PFNGLPOINTSIZEXOESPROC) load(userptr, "glPointSizexOES");
    glo_glPolygonOffsetxOES = (PFNGLPOLYGONOFFSETXOESPROC) load(userptr, "glPolygonOffsetxOES");
    glo_glPrioritizeTexturesxOES = (PFNGLPRIORITIZETEXTURESXOESPROC) load(userptr, "glPrioritizeTexturesxOES");
    glo_glRasterPos2xOES = (PFNGLRASTERPOS2XOESPROC) load(userptr, "glRasterPos2xOES");
    glo_glRasterPos2xvOES = (PFNGLRASTERPOS2XVOESPROC) load(userptr, "glRasterPos2xvOES");
    glo_glRasterPos3xOES = (PFNGLRASTERPOS3XOESPROC) load(userptr, "glRasterPos3xOES");
    glo_glRasterPos3xvOES = (PFNGLRASTERPOS3XVOESPROC) load(userptr, "glRasterPos3xvOES");
    glo_glRasterPos4xOES = (PFNGLRASTERPOS4XOESPROC) load(userptr, "glRasterPos4xOES");
    glo_glRasterPos4xvOES = (PFNGLRASTERPOS4XVOESPROC) load(userptr, "glRasterPos4xvOES");
    glo_glRectxOES = (PFNGLRECTXOESPROC) load(userptr, "glRectxOES");
    glo_glRectxvOES = (PFNGLRECTXVOESPROC) load(userptr, "glRectxvOES");
    glo_glRotatexOES = (PFNGLROTATEXOESPROC) load(userptr, "glRotatexOES");
    glo_glScalexOES = (PFNGLSCALEXOESPROC) load(userptr, "glScalexOES");
    glo_glTexCoord1xOES = (PFNGLTEXCOORD1XOESPROC) load(userptr, "glTexCoord1xOES");
    glo_glTexCoord1xvOES = (PFNGLTEXCOORD1XVOESPROC) load(userptr, "glTexCoord1xvOES");
    glo_glTexCoord2xOES = (PFNGLTEXCOORD2XOESPROC) load(userptr, "glTexCoord2xOES");
    glo_glTexCoord2xvOES = (PFNGLTEXCOORD2XVOESPROC) load(userptr, "glTexCoord2xvOES");
    glo_glTexCoord3xOES = (PFNGLTEXCOORD3XOESPROC) load(userptr, "glTexCoord3xOES");
    glo_glTexCoord3xvOES = (PFNGLTEXCOORD3XVOESPROC) load(userptr, "glTexCoord3xvOES");
    glo_glTexCoord4xOES = (PFNGLTEXCOORD4XOESPROC) load(userptr, "glTexCoord4xOES");
    glo_glTexCoord4xvOES = (PFNGLTEXCOORD4XVOESPROC) load(userptr, "glTexCoord4xvOES");
    glo_glTexEnvxOES = (PFNGLTEXENVXOESPROC) load(userptr, "glTexEnvxOES");
    glo_glTexEnvxvOES = (PFNGLTEXENVXVOESPROC) load(userptr, "glTexEnvxvOES");
    glo_glTexGenxOES = (PFNGLTEXGENXOESPROC) load(userptr, "glTexGenxOES");
    glo_glTexGenxvOES = (PFNGLTEXGENXVOESPROC) load(userptr, "glTexGenxvOES");
    glo_glTexParameterxOES = (PFNGLTEXPARAMETERXOESPROC) load(userptr, "glTexParameterxOES");
    glo_glTexParameterxvOES = (PFNGLTEXPARAMETERXVOESPROC) load(userptr, "glTexParameterxvOES");
    glo_glTranslatexOES = (PFNGLTRANSLATEXOESPROC) load(userptr, "glTranslatexOES");
    glo_glVertex2xOES = (PFNGLVERTEX2XOESPROC) load(userptr, "glVertex2xOES");
    glo_glVertex2xvOES = (PFNGLVERTEX2XVOESPROC) load(userptr, "glVertex2xvOES");
    glo_glVertex3xOES = (PFNGLVERTEX3XOESPROC) load(userptr, "glVertex3xOES");
    glo_glVertex3xvOES = (PFNGLVERTEX3XVOESPROC) load(userptr, "glVertex3xvOES");
    glo_glVertex4xOES = (PFNGLVERTEX4XOESPROC) load(userptr, "glVertex4xOES");
    glo_glVertex4xvOES = (PFNGLVERTEX4XVOESPROC) load(userptr, "glVertex4xvOES");
}
static void glo_gl_load_GL_OES_query_matrix( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_OES_query_matrix) return;
    glo_glQueryMatrixxOES = (PFNGLQUERYMATRIXXOESPROC) load(userptr, "glQueryMatrixxOES");
}
static void glo_gl_load_GL_OES_single_precision( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_OES_single_precision) return;
    glo_glClearDepthfOES = (PFNGLCLEARDEPTHFOESPROC) load(userptr, "glClearDepthfOES");
    glo_glClipPlanefOES = (PFNGLCLIPPLANEFOESPROC) load(userptr, "glClipPlanefOES");
    glo_glDepthRangefOES = (PFNGLDEPTHRANGEFOESPROC) load(userptr, "glDepthRangefOES");
    glo_glFrustumfOES = (PFNGLFRUSTUMFOESPROC) load(userptr, "glFrustumfOES");
    glo_glGetClipPlanefOES = (PFNGLGETCLIPPLANEFOESPROC) load(userptr, "glGetClipPlanefOES");
    glo_glOrthofOES = (PFNGLORTHOFOESPROC) load(userptr, "glOrthofOES");
}
static void glo_gl_load_GL_OVR_multiview( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_OVR_multiview) return;
    glo_glFramebufferTextureMultiviewOVR = (PFNGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) load(userptr, "glFramebufferTextureMultiviewOVR");
    glo_glNamedFramebufferTextureMultiviewOVR = (PFNGLNAMEDFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) load(userptr, "glNamedFramebufferTextureMultiviewOVR");
}
static void glo_gl_load_GL_PGI_misc_hints( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_PGI_misc_hints) return;
    glo_glHintPGI = (PFNGLHINTPGIPROC) load(userptr, "glHintPGI");
}
static void glo_gl_load_GL_SGIS_detail_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_detail_texture) return;
    glo_glDetailTexFuncSGIS = (PFNGLDETAILTEXFUNCSGISPROC) load(userptr, "glDetailTexFuncSGIS");
    glo_glGetDetailTexFuncSGIS = (PFNGLGETDETAILTEXFUNCSGISPROC) load(userptr, "glGetDetailTexFuncSGIS");
}
static void glo_gl_load_GL_SGIS_fog_function( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_fog_function) return;
    glo_glFogFuncSGIS = (PFNGLFOGFUNCSGISPROC) load(userptr, "glFogFuncSGIS");
    glo_glGetFogFuncSGIS = (PFNGLGETFOGFUNCSGISPROC) load(userptr, "glGetFogFuncSGIS");
}
static void glo_gl_load_GL_SGIS_multisample( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_multisample) return;
    glo_glSampleMaskSGIS = (PFNGLSAMPLEMASKSGISPROC) load(userptr, "glSampleMaskSGIS");
    glo_glSamplePatternSGIS = (PFNGLSAMPLEPATTERNSGISPROC) load(userptr, "glSamplePatternSGIS");
}
static void glo_gl_load_GL_SGIS_pixel_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_pixel_texture) return;
    glo_glGetPixelTexGenParameterfvSGIS = (PFNGLGETPIXELTEXGENPARAMETERFVSGISPROC) load(userptr, "glGetPixelTexGenParameterfvSGIS");
    glo_glGetPixelTexGenParameterivSGIS = (PFNGLGETPIXELTEXGENPARAMETERIVSGISPROC) load(userptr, "glGetPixelTexGenParameterivSGIS");
    glo_glPixelTexGenParameterfSGIS = (PFNGLPIXELTEXGENPARAMETERFSGISPROC) load(userptr, "glPixelTexGenParameterfSGIS");
    glo_glPixelTexGenParameterfvSGIS = (PFNGLPIXELTEXGENPARAMETERFVSGISPROC) load(userptr, "glPixelTexGenParameterfvSGIS");
    glo_glPixelTexGenParameteriSGIS = (PFNGLPIXELTEXGENPARAMETERISGISPROC) load(userptr, "glPixelTexGenParameteriSGIS");
    glo_glPixelTexGenParameterivSGIS = (PFNGLPIXELTEXGENPARAMETERIVSGISPROC) load(userptr, "glPixelTexGenParameterivSGIS");
}
static void glo_gl_load_GL_SGIS_point_parameters( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_point_parameters) return;
    glo_glPointParameterfSGIS = (PFNGLPOINTPARAMETERFSGISPROC) load(userptr, "glPointParameterfSGIS");
    glo_glPointParameterfvSGIS = (PFNGLPOINTPARAMETERFVSGISPROC) load(userptr, "glPointParameterfvSGIS");
}
static void glo_gl_load_GL_SGIS_sharpen_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_sharpen_texture) return;
    glo_glGetSharpenTexFuncSGIS = (PFNGLGETSHARPENTEXFUNCSGISPROC) load(userptr, "glGetSharpenTexFuncSGIS");
    glo_glSharpenTexFuncSGIS = (PFNGLSHARPENTEXFUNCSGISPROC) load(userptr, "glSharpenTexFuncSGIS");
}
static void glo_gl_load_GL_SGIS_texture4D( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_texture4D) return;
    glo_glTexImage4DSGIS = (PFNGLTEXIMAGE4DSGISPROC) load(userptr, "glTexImage4DSGIS");
    glo_glTexSubImage4DSGIS = (PFNGLTEXSUBIMAGE4DSGISPROC) load(userptr, "glTexSubImage4DSGIS");
}
static void glo_gl_load_GL_SGIS_texture_color_mask( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_texture_color_mask) return;
    glo_glTextureColorMaskSGIS = (PFNGLTEXTURECOLORMASKSGISPROC) load(userptr, "glTextureColorMaskSGIS");
}
static void glo_gl_load_GL_SGIS_texture_filter4( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIS_texture_filter4) return;
    glo_glGetTexFilterFuncSGIS = (PFNGLGETTEXFILTERFUNCSGISPROC) load(userptr, "glGetTexFilterFuncSGIS");
    glo_glTexFilterFuncSGIS = (PFNGLTEXFILTERFUNCSGISPROC) load(userptr, "glTexFilterFuncSGIS");
}
static void glo_gl_load_GL_SGIX_async( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_async) return;
    glo_glAsyncMarkerSGIX = (PFNGLASYNCMARKERSGIXPROC) load(userptr, "glAsyncMarkerSGIX");
    glo_glDeleteAsyncMarkersSGIX = (PFNGLDELETEASYNCMARKERSSGIXPROC) load(userptr, "glDeleteAsyncMarkersSGIX");
    glo_glFinishAsyncSGIX = (PFNGLFINISHASYNCSGIXPROC) load(userptr, "glFinishAsyncSGIX");
    glo_glGenAsyncMarkersSGIX = (PFNGLGENASYNCMARKERSSGIXPROC) load(userptr, "glGenAsyncMarkersSGIX");
    glo_glIsAsyncMarkerSGIX = (PFNGLISASYNCMARKERSGIXPROC) load(userptr, "glIsAsyncMarkerSGIX");
    glo_glPollAsyncSGIX = (PFNGLPOLLASYNCSGIXPROC) load(userptr, "glPollAsyncSGIX");
}
static void glo_gl_load_GL_SGIX_flush_raster( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_flush_raster) return;
    glo_glFlushRasterSGIX = (PFNGLFLUSHRASTERSGIXPROC) load(userptr, "glFlushRasterSGIX");
}
static void glo_gl_load_GL_SGIX_fragment_lighting( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_fragment_lighting) return;
    glo_glFragmentColorMaterialSGIX = (PFNGLFRAGMENTCOLORMATERIALSGIXPROC) load(userptr, "glFragmentColorMaterialSGIX");
    glo_glFragmentLightModelfSGIX = (PFNGLFRAGMENTLIGHTMODELFSGIXPROC) load(userptr, "glFragmentLightModelfSGIX");
    glo_glFragmentLightModelfvSGIX = (PFNGLFRAGMENTLIGHTMODELFVSGIXPROC) load(userptr, "glFragmentLightModelfvSGIX");
    glo_glFragmentLightModeliSGIX = (PFNGLFRAGMENTLIGHTMODELISGIXPROC) load(userptr, "glFragmentLightModeliSGIX");
    glo_glFragmentLightModelivSGIX = (PFNGLFRAGMENTLIGHTMODELIVSGIXPROC) load(userptr, "glFragmentLightModelivSGIX");
    glo_glFragmentLightfSGIX = (PFNGLFRAGMENTLIGHTFSGIXPROC) load(userptr, "glFragmentLightfSGIX");
    glo_glFragmentLightfvSGIX = (PFNGLFRAGMENTLIGHTFVSGIXPROC) load(userptr, "glFragmentLightfvSGIX");
    glo_glFragmentLightiSGIX = (PFNGLFRAGMENTLIGHTISGIXPROC) load(userptr, "glFragmentLightiSGIX");
    glo_glFragmentLightivSGIX = (PFNGLFRAGMENTLIGHTIVSGIXPROC) load(userptr, "glFragmentLightivSGIX");
    glo_glFragmentMaterialfSGIX = (PFNGLFRAGMENTMATERIALFSGIXPROC) load(userptr, "glFragmentMaterialfSGIX");
    glo_glFragmentMaterialfvSGIX = (PFNGLFRAGMENTMATERIALFVSGIXPROC) load(userptr, "glFragmentMaterialfvSGIX");
    glo_glFragmentMaterialiSGIX = (PFNGLFRAGMENTMATERIALISGIXPROC) load(userptr, "glFragmentMaterialiSGIX");
    glo_glFragmentMaterialivSGIX = (PFNGLFRAGMENTMATERIALIVSGIXPROC) load(userptr, "glFragmentMaterialivSGIX");
    glo_glGetFragmentLightfvSGIX = (PFNGLGETFRAGMENTLIGHTFVSGIXPROC) load(userptr, "glGetFragmentLightfvSGIX");
    glo_glGetFragmentLightivSGIX = (PFNGLGETFRAGMENTLIGHTIVSGIXPROC) load(userptr, "glGetFragmentLightivSGIX");
    glo_glGetFragmentMaterialfvSGIX = (PFNGLGETFRAGMENTMATERIALFVSGIXPROC) load(userptr, "glGetFragmentMaterialfvSGIX");
    glo_glGetFragmentMaterialivSGIX = (PFNGLGETFRAGMENTMATERIALIVSGIXPROC) load(userptr, "glGetFragmentMaterialivSGIX");
    glo_glLightEnviSGIX = (PFNGLLIGHTENVISGIXPROC) load(userptr, "glLightEnviSGIX");
}
static void glo_gl_load_GL_SGIX_framezoom( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_framezoom) return;
    glo_glFrameZoomSGIX = (PFNGLFRAMEZOOMSGIXPROC) load(userptr, "glFrameZoomSGIX");
}
static void glo_gl_load_GL_SGIX_igloo_interface( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_igloo_interface) return;
    glo_glIglooInterfaceSGIX = (PFNGLIGLOOINTERFACESGIXPROC) load(userptr, "glIglooInterfaceSGIX");
}
static void glo_gl_load_GL_SGIX_instruments( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_instruments) return;
    glo_glGetInstrumentsSGIX = (PFNGLGETINSTRUMENTSSGIXPROC) load(userptr, "glGetInstrumentsSGIX");
    glo_glInstrumentsBufferSGIX = (PFNGLINSTRUMENTSBUFFERSGIXPROC) load(userptr, "glInstrumentsBufferSGIX");
    glo_glPollInstrumentsSGIX = (PFNGLPOLLINSTRUMENTSSGIXPROC) load(userptr, "glPollInstrumentsSGIX");
    glo_glReadInstrumentsSGIX = (PFNGLREADINSTRUMENTSSGIXPROC) load(userptr, "glReadInstrumentsSGIX");
    glo_glStartInstrumentsSGIX = (PFNGLSTARTINSTRUMENTSSGIXPROC) load(userptr, "glStartInstrumentsSGIX");
    glo_glStopInstrumentsSGIX = (PFNGLSTOPINSTRUMENTSSGIXPROC) load(userptr, "glStopInstrumentsSGIX");
}
static void glo_gl_load_GL_SGIX_list_priority( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_list_priority) return;
    glo_glGetListParameterfvSGIX = (PFNGLGETLISTPARAMETERFVSGIXPROC) load(userptr, "glGetListParameterfvSGIX");
    glo_glGetListParameterivSGIX = (PFNGLGETLISTPARAMETERIVSGIXPROC) load(userptr, "glGetListParameterivSGIX");
    glo_glListParameterfSGIX = (PFNGLLISTPARAMETERFSGIXPROC) load(userptr, "glListParameterfSGIX");
    glo_glListParameterfvSGIX = (PFNGLLISTPARAMETERFVSGIXPROC) load(userptr, "glListParameterfvSGIX");
    glo_glListParameteriSGIX = (PFNGLLISTPARAMETERISGIXPROC) load(userptr, "glListParameteriSGIX");
    glo_glListParameterivSGIX = (PFNGLLISTPARAMETERIVSGIXPROC) load(userptr, "glListParameterivSGIX");
}
static void glo_gl_load_GL_SGIX_pixel_texture( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_pixel_texture) return;
    glo_glPixelTexGenSGIX = (PFNGLPIXELTEXGENSGIXPROC) load(userptr, "glPixelTexGenSGIX");
}
static void glo_gl_load_GL_SGIX_polynomial_ffd( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_polynomial_ffd) return;
    glo_glDeformSGIX = (PFNGLDEFORMSGIXPROC) load(userptr, "glDeformSGIX");
    glo_glDeformationMap3dSGIX = (PFNGLDEFORMATIONMAP3DSGIXPROC) load(userptr, "glDeformationMap3dSGIX");
    glo_glDeformationMap3fSGIX = (PFNGLDEFORMATIONMAP3FSGIXPROC) load(userptr, "glDeformationMap3fSGIX");
    glo_glLoadIdentityDeformationMapSGIX = (PFNGLLOADIDENTITYDEFORMATIONMAPSGIXPROC) load(userptr, "glLoadIdentityDeformationMapSGIX");
}
static void glo_gl_load_GL_SGIX_reference_plane( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_reference_plane) return;
    glo_glReferencePlaneSGIX = (PFNGLREFERENCEPLANESGIXPROC) load(userptr, "glReferencePlaneSGIX");
}
static void glo_gl_load_GL_SGIX_sprite( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_sprite) return;
    glo_glSpriteParameterfSGIX = (PFNGLSPRITEPARAMETERFSGIXPROC) load(userptr, "glSpriteParameterfSGIX");
    glo_glSpriteParameterfvSGIX = (PFNGLSPRITEPARAMETERFVSGIXPROC) load(userptr, "glSpriteParameterfvSGIX");
    glo_glSpriteParameteriSGIX = (PFNGLSPRITEPARAMETERISGIXPROC) load(userptr, "glSpriteParameteriSGIX");
    glo_glSpriteParameterivSGIX = (PFNGLSPRITEPARAMETERIVSGIXPROC) load(userptr, "glSpriteParameterivSGIX");
}
static void glo_gl_load_GL_SGIX_tag_sample_buffer( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGIX_tag_sample_buffer) return;
    glo_glTagSampleBufferSGIX = (PFNGLTAGSAMPLEBUFFERSGIXPROC) load(userptr, "glTagSampleBufferSGIX");
}
static void glo_gl_load_GL_SGI_color_table( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SGI_color_table) return;
    glo_glColorTableParameterfvSGI = (PFNGLCOLORTABLEPARAMETERFVSGIPROC) load(userptr, "glColorTableParameterfvSGI");
    glo_glColorTableParameterivSGI = (PFNGLCOLORTABLEPARAMETERIVSGIPROC) load(userptr, "glColorTableParameterivSGI");
    glo_glColorTableSGI = (PFNGLCOLORTABLESGIPROC) load(userptr, "glColorTableSGI");
    glo_glCopyColorTableSGI = (PFNGLCOPYCOLORTABLESGIPROC) load(userptr, "glCopyColorTableSGI");
    glo_glGetColorTableParameterfvSGI = (PFNGLGETCOLORTABLEPARAMETERFVSGIPROC) load(userptr, "glGetColorTableParameterfvSGI");
    glo_glGetColorTableParameterivSGI = (PFNGLGETCOLORTABLEPARAMETERIVSGIPROC) load(userptr, "glGetColorTableParameterivSGI");
    glo_glGetColorTableSGI = (PFNGLGETCOLORTABLESGIPROC) load(userptr, "glGetColorTableSGI");
}
static void glo_gl_load_GL_SUNX_constant_data( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SUNX_constant_data) return;
    glo_glFinishTextureSUNX = (PFNGLFINISHTEXTURESUNXPROC) load(userptr, "glFinishTextureSUNX");
}
static void glo_gl_load_GL_SUN_global_alpha( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SUN_global_alpha) return;
    glo_glGlobalAlphaFactorbSUN = (PFNGLGLOBALALPHAFACTORBSUNPROC) load(userptr, "glGlobalAlphaFactorbSUN");
    glo_glGlobalAlphaFactordSUN = (PFNGLGLOBALALPHAFACTORDSUNPROC) load(userptr, "glGlobalAlphaFactordSUN");
    glo_glGlobalAlphaFactorfSUN = (PFNGLGLOBALALPHAFACTORFSUNPROC) load(userptr, "glGlobalAlphaFactorfSUN");
    glo_glGlobalAlphaFactoriSUN = (PFNGLGLOBALALPHAFACTORISUNPROC) load(userptr, "glGlobalAlphaFactoriSUN");
    glo_glGlobalAlphaFactorsSUN = (PFNGLGLOBALALPHAFACTORSSUNPROC) load(userptr, "glGlobalAlphaFactorsSUN");
    glo_glGlobalAlphaFactorubSUN = (PFNGLGLOBALALPHAFACTORUBSUNPROC) load(userptr, "glGlobalAlphaFactorubSUN");
    glo_glGlobalAlphaFactoruiSUN = (PFNGLGLOBALALPHAFACTORUISUNPROC) load(userptr, "glGlobalAlphaFactoruiSUN");
    glo_glGlobalAlphaFactorusSUN = (PFNGLGLOBALALPHAFACTORUSSUNPROC) load(userptr, "glGlobalAlphaFactorusSUN");
}
static void glo_gl_load_GL_SUN_mesh_array( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SUN_mesh_array) return;
    glo_glDrawMeshArraysSUN = (PFNGLDRAWMESHARRAYSSUNPROC) load(userptr, "glDrawMeshArraysSUN");
}
static void glo_gl_load_GL_SUN_triangle_list( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SUN_triangle_list) return;
    glo_glReplacementCodePointerSUN = (PFNGLREPLACEMENTCODEPOINTERSUNPROC) load(userptr, "glReplacementCodePointerSUN");
    glo_glReplacementCodeubSUN = (PFNGLREPLACEMENTCODEUBSUNPROC) load(userptr, "glReplacementCodeubSUN");
    glo_glReplacementCodeubvSUN = (PFNGLREPLACEMENTCODEUBVSUNPROC) load(userptr, "glReplacementCodeubvSUN");
    glo_glReplacementCodeuiSUN = (PFNGLREPLACEMENTCODEUISUNPROC) load(userptr, "glReplacementCodeuiSUN");
    glo_glReplacementCodeuivSUN = (PFNGLREPLACEMENTCODEUIVSUNPROC) load(userptr, "glReplacementCodeuivSUN");
    glo_glReplacementCodeusSUN = (PFNGLREPLACEMENTCODEUSSUNPROC) load(userptr, "glReplacementCodeusSUN");
    glo_glReplacementCodeusvSUN = (PFNGLREPLACEMENTCODEUSVSUNPROC) load(userptr, "glReplacementCodeusvSUN");
}
static void glo_gl_load_GL_SUN_vertex( GLOuserptrloadfunc load, void* userptr) {
    if(!GLO_GL_SUN_vertex) return;
    glo_glColor3fVertex3fSUN = (PFNGLCOLOR3FVERTEX3FSUNPROC) load(userptr, "glColor3fVertex3fSUN");
    glo_glColor3fVertex3fvSUN = (PFNGLCOLOR3FVERTEX3FVSUNPROC) load(userptr, "glColor3fVertex3fvSUN");
    glo_glColor4fNormal3fVertex3fSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FSUNPROC) load(userptr, "glColor4fNormal3fVertex3fSUN");
    glo_glColor4fNormal3fVertex3fvSUN = (PFNGLCOLOR4FNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glColor4fNormal3fVertex3fvSUN");
    glo_glColor4ubVertex2fSUN = (PFNGLCOLOR4UBVERTEX2FSUNPROC) load(userptr, "glColor4ubVertex2fSUN");
    glo_glColor4ubVertex2fvSUN = (PFNGLCOLOR4UBVERTEX2FVSUNPROC) load(userptr, "glColor4ubVertex2fvSUN");
    glo_glColor4ubVertex3fSUN = (PFNGLCOLOR4UBVERTEX3FSUNPROC) load(userptr, "glColor4ubVertex3fSUN");
    glo_glColor4ubVertex3fvSUN = (PFNGLCOLOR4UBVERTEX3FVSUNPROC) load(userptr, "glColor4ubVertex3fvSUN");
    glo_glNormal3fVertex3fSUN = (PFNGLNORMAL3FVERTEX3FSUNPROC) load(userptr, "glNormal3fVertex3fSUN");
    glo_glNormal3fVertex3fvSUN = (PFNGLNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glNormal3fVertex3fvSUN");
    glo_glReplacementCodeuiColor3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiColor3fVertex3fSUN");
    glo_glReplacementCodeuiColor3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR3FVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiColor3fVertex3fvSUN");
    glo_glReplacementCodeuiColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiColor4fNormal3fVertex3fSUN");
    glo_glReplacementCodeuiColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4FNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiColor4fNormal3fVertex3fvSUN");
    glo_glReplacementCodeuiColor4ubVertex3fSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiColor4ubVertex3fSUN");
    glo_glReplacementCodeuiColor4ubVertex3fvSUN = (PFNGLREPLACEMENTCODEUICOLOR4UBVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiColor4ubVertex3fvSUN");
    glo_glReplacementCodeuiNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiNormal3fVertex3fSUN");
    glo_glReplacementCodeuiNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUINORMAL3FVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiNormal3fVertex3fvSUN");
    glo_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fSUN");
    glo_glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiTexCoord2fColor4fNormal3fVertex3fvSUN");
    glo_glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiTexCoord2fNormal3fVertex3fSUN");
    glo_glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiTexCoord2fNormal3fVertex3fvSUN");
    glo_glReplacementCodeuiTexCoord2fVertex3fSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiTexCoord2fVertex3fSUN");
    glo_glReplacementCodeuiTexCoord2fVertex3fvSUN = (PFNGLREPLACEMENTCODEUITEXCOORD2FVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiTexCoord2fVertex3fvSUN");
    glo_glReplacementCodeuiVertex3fSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FSUNPROC) load(userptr, "glReplacementCodeuiVertex3fSUN");
    glo_glReplacementCodeuiVertex3fvSUN = (PFNGLREPLACEMENTCODEUIVERTEX3FVSUNPROC) load(userptr, "glReplacementCodeuiVertex3fvSUN");
    glo_glTexCoord2fColor3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FSUNPROC) load(userptr, "glTexCoord2fColor3fVertex3fSUN");
    glo_glTexCoord2fColor3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR3FVERTEX3FVSUNPROC) load(userptr, "glTexCoord2fColor3fVertex3fvSUN");
    glo_glTexCoord2fColor4fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FSUNPROC) load(userptr, "glTexCoord2fColor4fNormal3fVertex3fSUN");
    glo_glTexCoord2fColor4fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4FNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glTexCoord2fColor4fNormal3fVertex3fvSUN");
    glo_glTexCoord2fColor4ubVertex3fSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FSUNPROC) load(userptr, "glTexCoord2fColor4ubVertex3fSUN");
    glo_glTexCoord2fColor4ubVertex3fvSUN = (PFNGLTEXCOORD2FCOLOR4UBVERTEX3FVSUNPROC) load(userptr, "glTexCoord2fColor4ubVertex3fvSUN");
    glo_glTexCoord2fNormal3fVertex3fSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FSUNPROC) load(userptr, "glTexCoord2fNormal3fVertex3fSUN");
    glo_glTexCoord2fNormal3fVertex3fvSUN = (PFNGLTEXCOORD2FNORMAL3FVERTEX3FVSUNPROC) load(userptr, "glTexCoord2fNormal3fVertex3fvSUN");
    glo_glTexCoord2fVertex3fSUN = (PFNGLTEXCOORD2FVERTEX3FSUNPROC) load(userptr, "glTexCoord2fVertex3fSUN");
    glo_glTexCoord2fVertex3fvSUN = (PFNGLTEXCOORD2FVERTEX3FVSUNPROC) load(userptr, "glTexCoord2fVertex3fvSUN");
    glo_glTexCoord4fColor4fNormal3fVertex4fSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FSUNPROC) load(userptr, "glTexCoord4fColor4fNormal3fVertex4fSUN");
    glo_glTexCoord4fColor4fNormal3fVertex4fvSUN = (PFNGLTEXCOORD4FCOLOR4FNORMAL3FVERTEX4FVSUNPROC) load(userptr, "glTexCoord4fColor4fNormal3fVertex4fvSUN");
    glo_glTexCoord4fVertex4fSUN = (PFNGLTEXCOORD4FVERTEX4FSUNPROC) load(userptr, "glTexCoord4fVertex4fSUN");
    glo_glTexCoord4fVertex4fvSUN = (PFNGLTEXCOORD4FVERTEX4FVSUNPROC) load(userptr, "glTexCoord4fVertex4fvSUN");
}



static void glo_gl_free_extensions(char **exts_i) {
    if (exts_i != NULL) {
        unsigned int index;
        for(index = 0; exts_i[index]; index++) {
            free((void *) (exts_i[index]));
        }
        free((void *)exts_i);
        exts_i = NULL;
    }
}
static int glo_gl_get_extensions( const char **out_exts, char ***out_exts_i) {
#if defined(GL_ES_VERSION_3_0) || defined(GL_VERSION_3_0)
    if (glo_glGetStringi != NULL && glo_glGetIntegerv != NULL) {
        unsigned int index = 0;
        unsigned int num_exts_i = 0;
        char **exts_i = NULL;
        glo_glGetIntegerv(GL_NUM_EXTENSIONS, (int*) &num_exts_i);
        exts_i = (char **) malloc((num_exts_i + 1) * (sizeof *exts_i));
        if (exts_i == NULL) {
            return 0;
        }
        for(index = 0; index < num_exts_i; index++) {
            const char *gl_str_tmp = (const char*) glo_glGetStringi(GL_EXTENSIONS, index);
            size_t len = strlen(gl_str_tmp) + 1;

            char *local_str = (char*) malloc(len * sizeof(char));
            if(local_str == NULL) {
                exts_i[index] = NULL;
                glo_gl_free_extensions(exts_i);
                return 0;
            }

            memcpy(local_str, gl_str_tmp, len * sizeof(char));
            exts_i[index] = local_str;
        }
        exts_i[index] = NULL;

        *out_exts_i = exts_i;

        return 1;
    }
#else
    GLO_UNUSED(out_exts_i);
#endif
    if (glo_glGetString == NULL) {
        return 0;
    }
    *out_exts = (const char *)glo_glGetString(GL_EXTENSIONS);
    return 1;
}
static int glo_gl_has_extension(const char *exts, char **exts_i, const char *ext) {
    if(exts_i) {
        unsigned int index;
        for(index = 0; exts_i[index]; index++) {
            const char *e = exts_i[index];
            if(strcmp(e, ext) == 0) {
                return 1;
            }
        }
    } else {
        const char *extensions;
        const char *loc;
        const char *terminator;
        extensions = exts;
        if(extensions == NULL || ext == NULL) {
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
    return 0;
}

static GLOapiproc glo_gl_get_proc_from_userptr(void *userptr, const char* name) {
    return (GLO_GNUC_EXTENSION (GLOapiproc (*)(const char *name)) userptr)(name);
}

static int glo_gl_find_extensions_gl(void) {
    const char *exts = NULL;
    char **exts_i = NULL;
    if (!glo_gl_get_extensions(&exts, &exts_i)) return 0;

    GLO_GL_3DFX_multisample = glo_gl_has_extension(exts, exts_i, "GL_3DFX_multisample");
    GLO_GL_3DFX_tbuffer = glo_gl_has_extension(exts, exts_i, "GL_3DFX_tbuffer");
    GLO_GL_3DFX_texture_compression_FXT1 = glo_gl_has_extension(exts, exts_i, "GL_3DFX_texture_compression_FXT1");
    GLO_GL_AMD_blend_minmax_factor = glo_gl_has_extension(exts, exts_i, "GL_AMD_blend_minmax_factor");
    GLO_GL_AMD_conservative_depth = glo_gl_has_extension(exts, exts_i, "GL_AMD_conservative_depth");
    GLO_GL_AMD_debug_output = glo_gl_has_extension(exts, exts_i, "GL_AMD_debug_output");
    GLO_GL_AMD_depth_clamp_separate = glo_gl_has_extension(exts, exts_i, "GL_AMD_depth_clamp_separate");
    GLO_GL_AMD_draw_buffers_blend = glo_gl_has_extension(exts, exts_i, "GL_AMD_draw_buffers_blend");
    GLO_GL_AMD_framebuffer_multisample_advanced = glo_gl_has_extension(exts, exts_i, "GL_AMD_framebuffer_multisample_advanced");
    GLO_GL_AMD_framebuffer_sample_positions = glo_gl_has_extension(exts, exts_i, "GL_AMD_framebuffer_sample_positions");
    GLO_GL_AMD_gcn_shader = glo_gl_has_extension(exts, exts_i, "GL_AMD_gcn_shader");
    GLO_GL_AMD_gpu_shader_half_float = glo_gl_has_extension(exts, exts_i, "GL_AMD_gpu_shader_half_float");
    GLO_GL_AMD_gpu_shader_int16 = glo_gl_has_extension(exts, exts_i, "GL_AMD_gpu_shader_int16");
    GLO_GL_AMD_gpu_shader_int64 = glo_gl_has_extension(exts, exts_i, "GL_AMD_gpu_shader_int64");
    GLO_GL_AMD_interleaved_elements = glo_gl_has_extension(exts, exts_i, "GL_AMD_interleaved_elements");
    GLO_GL_AMD_multi_draw_indirect = glo_gl_has_extension(exts, exts_i, "GL_AMD_multi_draw_indirect");
    GLO_GL_AMD_name_gen_delete = glo_gl_has_extension(exts, exts_i, "GL_AMD_name_gen_delete");
    GLO_GL_AMD_occlusion_query_event = glo_gl_has_extension(exts, exts_i, "GL_AMD_occlusion_query_event");
    GLO_GL_AMD_performance_monitor = glo_gl_has_extension(exts, exts_i, "GL_AMD_performance_monitor");
    GLO_GL_AMD_pinned_memory = glo_gl_has_extension(exts, exts_i, "GL_AMD_pinned_memory");
    GLO_GL_AMD_query_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_AMD_query_buffer_object");
    GLO_GL_AMD_sample_positions = glo_gl_has_extension(exts, exts_i, "GL_AMD_sample_positions");
    GLO_GL_AMD_seamless_cubemap_per_texture = glo_gl_has_extension(exts, exts_i, "GL_AMD_seamless_cubemap_per_texture");
    GLO_GL_AMD_shader_atomic_counter_ops = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_atomic_counter_ops");
    GLO_GL_AMD_shader_ballot = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_ballot");
    GLO_GL_AMD_shader_explicit_vertex_parameter = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_explicit_vertex_parameter");
    GLO_GL_AMD_shader_gpu_shader_half_float_fetch = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_gpu_shader_half_float_fetch");
    GLO_GL_AMD_shader_image_load_store_lod = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_image_load_store_lod");
    GLO_GL_AMD_shader_stencil_export = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_stencil_export");
    GLO_GL_AMD_shader_trinary_minmax = glo_gl_has_extension(exts, exts_i, "GL_AMD_shader_trinary_minmax");
    GLO_GL_AMD_sparse_texture = glo_gl_has_extension(exts, exts_i, "GL_AMD_sparse_texture");
    GLO_GL_AMD_stencil_operation_extended = glo_gl_has_extension(exts, exts_i, "GL_AMD_stencil_operation_extended");
    GLO_GL_AMD_texture_gather_bias_lod = glo_gl_has_extension(exts, exts_i, "GL_AMD_texture_gather_bias_lod");
    GLO_GL_AMD_texture_texture4 = glo_gl_has_extension(exts, exts_i, "GL_AMD_texture_texture4");
    GLO_GL_AMD_transform_feedback3_lines_triangles = glo_gl_has_extension(exts, exts_i, "GL_AMD_transform_feedback3_lines_triangles");
    GLO_GL_AMD_transform_feedback4 = glo_gl_has_extension(exts, exts_i, "GL_AMD_transform_feedback4");
    GLO_GL_AMD_vertex_shader_layer = glo_gl_has_extension(exts, exts_i, "GL_AMD_vertex_shader_layer");
    GLO_GL_AMD_vertex_shader_tessellator = glo_gl_has_extension(exts, exts_i, "GL_AMD_vertex_shader_tessellator");
    GLO_GL_AMD_vertex_shader_viewport_index = glo_gl_has_extension(exts, exts_i, "GL_AMD_vertex_shader_viewport_index");
    GLO_GL_APPLE_aux_depth_stencil = glo_gl_has_extension(exts, exts_i, "GL_APPLE_aux_depth_stencil");
    GLO_GL_APPLE_client_storage = glo_gl_has_extension(exts, exts_i, "GL_APPLE_client_storage");
    GLO_GL_APPLE_element_array = glo_gl_has_extension(exts, exts_i, "GL_APPLE_element_array");
    GLO_GL_APPLE_fence = glo_gl_has_extension(exts, exts_i, "GL_APPLE_fence");
    GLO_GL_APPLE_float_pixels = glo_gl_has_extension(exts, exts_i, "GL_APPLE_float_pixels");
    GLO_GL_APPLE_flush_buffer_range = glo_gl_has_extension(exts, exts_i, "GL_APPLE_flush_buffer_range");
    GLO_GL_APPLE_object_purgeable = glo_gl_has_extension(exts, exts_i, "GL_APPLE_object_purgeable");
    GLO_GL_APPLE_rgb_422 = glo_gl_has_extension(exts, exts_i, "GL_APPLE_rgb_422");
    GLO_GL_APPLE_row_bytes = glo_gl_has_extension(exts, exts_i, "GL_APPLE_row_bytes");
    GLO_GL_APPLE_specular_vector = glo_gl_has_extension(exts, exts_i, "GL_APPLE_specular_vector");
    GLO_GL_APPLE_texture_range = glo_gl_has_extension(exts, exts_i, "GL_APPLE_texture_range");
    GLO_GL_APPLE_transform_hint = glo_gl_has_extension(exts, exts_i, "GL_APPLE_transform_hint");
    GLO_GL_APPLE_vertex_array_object = glo_gl_has_extension(exts, exts_i, "GL_APPLE_vertex_array_object");
    GLO_GL_APPLE_vertex_array_range = glo_gl_has_extension(exts, exts_i, "GL_APPLE_vertex_array_range");
    GLO_GL_APPLE_vertex_program_evaluators = glo_gl_has_extension(exts, exts_i, "GL_APPLE_vertex_program_evaluators");
    GLO_GL_APPLE_ycbcr_422 = glo_gl_has_extension(exts, exts_i, "GL_APPLE_ycbcr_422");
    GLO_GL_ARB_ES2_compatibility = glo_gl_has_extension(exts, exts_i, "GL_ARB_ES2_compatibility");
    GLO_GL_ARB_ES3_1_compatibility = glo_gl_has_extension(exts, exts_i, "GL_ARB_ES3_1_compatibility");
    GLO_GL_ARB_ES3_2_compatibility = glo_gl_has_extension(exts, exts_i, "GL_ARB_ES3_2_compatibility");
    GLO_GL_ARB_ES3_compatibility = glo_gl_has_extension(exts, exts_i, "GL_ARB_ES3_compatibility");
    GLO_GL_ARB_arrays_of_arrays = glo_gl_has_extension(exts, exts_i, "GL_ARB_arrays_of_arrays");
    GLO_GL_ARB_base_instance = glo_gl_has_extension(exts, exts_i, "GL_ARB_base_instance");
    GLO_GL_ARB_bindless_texture = glo_gl_has_extension(exts, exts_i, "GL_ARB_bindless_texture");
    GLO_GL_ARB_blend_func_extended = glo_gl_has_extension(exts, exts_i, "GL_ARB_blend_func_extended");
    GLO_GL_ARB_buffer_storage = glo_gl_has_extension(exts, exts_i, "GL_ARB_buffer_storage");
    GLO_GL_ARB_cl_event = glo_gl_has_extension(exts, exts_i, "GL_ARB_cl_event");
    GLO_GL_ARB_clear_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_clear_buffer_object");
    GLO_GL_ARB_clear_texture = glo_gl_has_extension(exts, exts_i, "GL_ARB_clear_texture");
    GLO_GL_ARB_clip_control = glo_gl_has_extension(exts, exts_i, "GL_ARB_clip_control");
    GLO_GL_ARB_color_buffer_float = glo_gl_has_extension(exts, exts_i, "GL_ARB_color_buffer_float");
    GLO_GL_ARB_compatibility = glo_gl_has_extension(exts, exts_i, "GL_ARB_compatibility");
    GLO_GL_ARB_compressed_texture_pixel_storage = glo_gl_has_extension(exts, exts_i, "GL_ARB_compressed_texture_pixel_storage");
    GLO_GL_ARB_compute_shader = glo_gl_has_extension(exts, exts_i, "GL_ARB_compute_shader");
    GLO_GL_ARB_compute_variable_group_size = glo_gl_has_extension(exts, exts_i, "GL_ARB_compute_variable_group_size");
    GLO_GL_ARB_conditional_render_inverted = glo_gl_has_extension(exts, exts_i, "GL_ARB_conditional_render_inverted");
    GLO_GL_ARB_conservative_depth = glo_gl_has_extension(exts, exts_i, "GL_ARB_conservative_depth");
    GLO_GL_ARB_copy_buffer = glo_gl_has_extension(exts, exts_i, "GL_ARB_copy_buffer");
    GLO_GL_ARB_copy_image = glo_gl_has_extension(exts, exts_i, "GL_ARB_copy_image");
    GLO_GL_ARB_cull_distance = glo_gl_has_extension(exts, exts_i, "GL_ARB_cull_distance");
    GLO_GL_ARB_debug_output = glo_gl_has_extension(exts, exts_i, "GL_ARB_debug_output");
    GLO_GL_ARB_depth_buffer_float = glo_gl_has_extension(exts, exts_i, "GL_ARB_depth_buffer_float");
    GLO_GL_ARB_depth_clamp = glo_gl_has_extension(exts, exts_i, "GL_ARB_depth_clamp");
    GLO_GL_ARB_depth_texture = glo_gl_has_extension(exts, exts_i, "GL_ARB_depth_texture");
    GLO_GL_ARB_derivative_control = glo_gl_has_extension(exts, exts_i, "GL_ARB_derivative_control");
    GLO_GL_ARB_direct_state_access = glo_gl_has_extension(exts, exts_i, "GL_ARB_direct_state_access");
    GLO_GL_ARB_draw_buffers = glo_gl_has_extension(exts, exts_i, "GL_ARB_draw_buffers");
    GLO_GL_ARB_draw_buffers_blend = glo_gl_has_extension(exts, exts_i, "GL_ARB_draw_buffers_blend");
    GLO_GL_ARB_draw_elements_base_vertex = glo_gl_has_extension(exts, exts_i, "GL_ARB_draw_elements_base_vertex");
    GLO_GL_ARB_draw_indirect = glo_gl_has_extension(exts, exts_i, "GL_ARB_draw_indirect");
    GLO_GL_ARB_draw_instanced = glo_gl_has_extension(exts, exts_i, "GL_ARB_draw_instanced");
    GLO_GL_ARB_enhanced_layouts = glo_gl_has_extension(exts, exts_i, "GL_ARB_enhanced_layouts");
    GLO_GL_ARB_explicit_attrib_location = glo_gl_has_extension(exts, exts_i, "GL_ARB_explicit_attrib_location");
    GLO_GL_ARB_explicit_uniform_location = glo_gl_has_extension(exts, exts_i, "GL_ARB_explicit_uniform_location");
    GLO_GL_ARB_fragment_coord_conventions = glo_gl_has_extension(exts, exts_i, "GL_ARB_fragment_coord_conventions");
    GLO_GL_ARB_fragment_layer_viewport = glo_gl_has_extension(exts, exts_i, "GL_ARB_fragment_layer_viewport");
    GLO_GL_ARB_fragment_program = glo_gl_has_extension(exts, exts_i, "GL_ARB_fragment_program");
    GLO_GL_ARB_fragment_program_shadow = glo_gl_has_extension(exts, exts_i, "GL_ARB_fragment_program_shadow");
    GLO_GL_ARB_fragment_shader = glo_gl_has_extension(exts, exts_i, "GL_ARB_fragment_shader");
    GLO_GL_ARB_fragment_shader_interlock = glo_gl_has_extension(exts, exts_i, "GL_ARB_fragment_shader_interlock");
    GLO_GL_ARB_framebuffer_no_attachments = glo_gl_has_extension(exts, exts_i, "GL_ARB_framebuffer_no_attachments");
    GLO_GL_ARB_framebuffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_framebuffer_object");
    GLO_GL_ARB_framebuffer_sRGB = glo_gl_has_extension(exts, exts_i, "GL_ARB_framebuffer_sRGB");
    GLO_GL_ARB_geometry_shader4 = glo_gl_has_extension(exts, exts_i, "GL_ARB_geometry_shader4");
    GLO_GL_ARB_get_program_binary = glo_gl_has_extension(exts, exts_i, "GL_ARB_get_program_binary");
    GLO_GL_ARB_get_texture_sub_image = glo_gl_has_extension(exts, exts_i, "GL_ARB_get_texture_sub_image");
    GLO_GL_ARB_gl_spirv = glo_gl_has_extension(exts, exts_i, "GL_ARB_gl_spirv");
    GLO_GL_ARB_gpu_shader5 = glo_gl_has_extension(exts, exts_i, "GL_ARB_gpu_shader5");
    GLO_GL_ARB_gpu_shader_fp64 = glo_gl_has_extension(exts, exts_i, "GL_ARB_gpu_shader_fp64");
    GLO_GL_ARB_gpu_shader_int64 = glo_gl_has_extension(exts, exts_i, "GL_ARB_gpu_shader_int64");
    GLO_GL_ARB_half_float_pixel = glo_gl_has_extension(exts, exts_i, "GL_ARB_half_float_pixel");
    GLO_GL_ARB_half_float_vertex = glo_gl_has_extension(exts, exts_i, "GL_ARB_half_float_vertex");
    GLO_GL_ARB_imaging = glo_gl_has_extension(exts, exts_i, "GL_ARB_imaging");
    GLO_GL_ARB_indirect_parameters = glo_gl_has_extension(exts, exts_i, "GL_ARB_indirect_parameters");
    GLO_GL_ARB_instanced_arrays = glo_gl_has_extension(exts, exts_i, "GL_ARB_instanced_arrays");
    GLO_GL_ARB_internalformat_query = glo_gl_has_extension(exts, exts_i, "GL_ARB_internalformat_query");
    GLO_GL_ARB_internalformat_query2 = glo_gl_has_extension(exts, exts_i, "GL_ARB_internalformat_query2");
    GLO_GL_ARB_invalidate_subdata = glo_gl_has_extension(exts, exts_i, "GL_ARB_invalidate_subdata");
    GLO_GL_ARB_map_buffer_alignment = glo_gl_has_extension(exts, exts_i, "GL_ARB_map_buffer_alignment");
    GLO_GL_ARB_map_buffer_range = glo_gl_has_extension(exts, exts_i, "GL_ARB_map_buffer_range");
    GLO_GL_ARB_matrix_palette = glo_gl_has_extension(exts, exts_i, "GL_ARB_matrix_palette");
    GLO_GL_ARB_multi_bind = glo_gl_has_extension(exts, exts_i, "GL_ARB_multi_bind");
    GLO_GL_ARB_multi_draw_indirect = glo_gl_has_extension(exts, exts_i, "GL_ARB_multi_draw_indirect");
    GLO_GL_ARB_multisample = glo_gl_has_extension(exts, exts_i, "GL_ARB_multisample");
    GLO_GL_ARB_multitexture = glo_gl_has_extension(exts, exts_i, "GL_ARB_multitexture");
    GLO_GL_ARB_occlusion_query = glo_gl_has_extension(exts, exts_i, "GL_ARB_occlusion_query");
    GLO_GL_ARB_occlusion_query2 = glo_gl_has_extension(exts, exts_i, "GL_ARB_occlusion_query2");
    GLO_GL_ARB_parallel_shader_compile = glo_gl_has_extension(exts, exts_i, "GL_ARB_parallel_shader_compile");
    GLO_GL_ARB_pipeline_statistics_query = glo_gl_has_extension(exts, exts_i, "GL_ARB_pipeline_statistics_query");
    GLO_GL_ARB_pixel_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_pixel_buffer_object");
    GLO_GL_ARB_point_parameters = glo_gl_has_extension(exts, exts_i, "GL_ARB_point_parameters");
    GLO_GL_ARB_point_sprite = glo_gl_has_extension(exts, exts_i, "GL_ARB_point_sprite");
    GLO_GL_ARB_polygon_offset_clamp = glo_gl_has_extension(exts, exts_i, "GL_ARB_polygon_offset_clamp");
    GLO_GL_ARB_post_depth_coverage = glo_gl_has_extension(exts, exts_i, "GL_ARB_post_depth_coverage");
    GLO_GL_ARB_program_interface_query = glo_gl_has_extension(exts, exts_i, "GL_ARB_program_interface_query");
    GLO_GL_ARB_provoking_vertex = glo_gl_has_extension(exts, exts_i, "GL_ARB_provoking_vertex");
    GLO_GL_ARB_query_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_query_buffer_object");
    GLO_GL_ARB_robust_buffer_access_behavior = glo_gl_has_extension(exts, exts_i, "GL_ARB_robust_buffer_access_behavior");
    GLO_GL_ARB_robustness = glo_gl_has_extension(exts, exts_i, "GL_ARB_robustness");
    GLO_GL_ARB_robustness_isolation = glo_gl_has_extension(exts, exts_i, "GL_ARB_robustness_isolation");
    GLO_GL_ARB_sample_locations = glo_gl_has_extension(exts, exts_i, "GL_ARB_sample_locations");
    GLO_GL_ARB_sample_shading = glo_gl_has_extension(exts, exts_i, "GL_ARB_sample_shading");
    GLO_GL_ARB_sampler_objects = glo_gl_has_extension(exts, exts_i, "GL_ARB_sampler_objects");
    GLO_GL_ARB_seamless_cube_map = glo_gl_has_extension(exts, exts_i, "GL_ARB_seamless_cube_map");
    GLO_GL_ARB_seamless_cubemap_per_texture = glo_gl_has_extension(exts, exts_i, "GL_ARB_seamless_cubemap_per_texture");
    GLO_GL_ARB_separate_shader_objects = glo_gl_has_extension(exts, exts_i, "GL_ARB_separate_shader_objects");
    GLO_GL_ARB_shader_atomic_counter_ops = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_atomic_counter_ops");
    GLO_GL_ARB_shader_atomic_counters = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_atomic_counters");
    GLO_GL_ARB_shader_ballot = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_ballot");
    GLO_GL_ARB_shader_bit_encoding = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_bit_encoding");
    GLO_GL_ARB_shader_clock = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_clock");
    GLO_GL_ARB_shader_draw_parameters = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_draw_parameters");
    GLO_GL_ARB_shader_group_vote = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_group_vote");
    GLO_GL_ARB_shader_image_load_store = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_image_load_store");
    GLO_GL_ARB_shader_image_size = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_image_size");
    GLO_GL_ARB_shader_objects = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_objects");
    GLO_GL_ARB_shader_precision = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_precision");
    GLO_GL_ARB_shader_stencil_export = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_stencil_export");
    GLO_GL_ARB_shader_storage_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_storage_buffer_object");
    GLO_GL_ARB_shader_subroutine = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_subroutine");
    GLO_GL_ARB_shader_texture_image_samples = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_texture_image_samples");
    GLO_GL_ARB_shader_texture_lod = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_texture_lod");
    GLO_GL_ARB_shader_viewport_layer_array = glo_gl_has_extension(exts, exts_i, "GL_ARB_shader_viewport_layer_array");
    GLO_GL_ARB_shading_language_100 = glo_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_100");
    GLO_GL_ARB_shading_language_420pack = glo_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_420pack");
    GLO_GL_ARB_shading_language_include = glo_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_include");
    GLO_GL_ARB_shading_language_packing = glo_gl_has_extension(exts, exts_i, "GL_ARB_shading_language_packing");
    GLO_GL_ARB_shadow = glo_gl_has_extension(exts, exts_i, "GL_ARB_shadow");
    GLO_GL_ARB_shadow_ambient = glo_gl_has_extension(exts, exts_i, "GL_ARB_shadow_ambient");
    GLO_GL_ARB_sparse_buffer = glo_gl_has_extension(exts, exts_i, "GL_ARB_sparse_buffer");
    GLO_GL_ARB_sparse_texture = glo_gl_has_extension(exts, exts_i, "GL_ARB_sparse_texture");
    GLO_GL_ARB_sparse_texture2 = glo_gl_has_extension(exts, exts_i, "GL_ARB_sparse_texture2");
    GLO_GL_ARB_sparse_texture_clamp = glo_gl_has_extension(exts, exts_i, "GL_ARB_sparse_texture_clamp");
    GLO_GL_ARB_spirv_extensions = glo_gl_has_extension(exts, exts_i, "GL_ARB_spirv_extensions");
    GLO_GL_ARB_stencil_texturing = glo_gl_has_extension(exts, exts_i, "GL_ARB_stencil_texturing");
    GLO_GL_ARB_sync = glo_gl_has_extension(exts, exts_i, "GL_ARB_sync");
    GLO_GL_ARB_tessellation_shader = glo_gl_has_extension(exts, exts_i, "GL_ARB_tessellation_shader");
    GLO_GL_ARB_texture_barrier = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_barrier");
    GLO_GL_ARB_texture_border_clamp = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_border_clamp");
    GLO_GL_ARB_texture_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_buffer_object");
    GLO_GL_ARB_texture_buffer_object_rgb32 = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_buffer_object_rgb32");
    GLO_GL_ARB_texture_buffer_range = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_buffer_range");
    GLO_GL_ARB_texture_compression = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_compression");
    GLO_GL_ARB_texture_compression_bptc = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_compression_bptc");
    GLO_GL_ARB_texture_compression_rgtc = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_compression_rgtc");
    GLO_GL_ARB_texture_cube_map = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_cube_map");
    GLO_GL_ARB_texture_cube_map_array = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_cube_map_array");
    GLO_GL_ARB_texture_env_add = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_add");
    GLO_GL_ARB_texture_env_combine = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_combine");
    GLO_GL_ARB_texture_env_crossbar = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_crossbar");
    GLO_GL_ARB_texture_env_dot3 = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_env_dot3");
    GLO_GL_ARB_texture_filter_anisotropic = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_filter_anisotropic");
    GLO_GL_ARB_texture_filter_minmax = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_filter_minmax");
    GLO_GL_ARB_texture_float = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_float");
    GLO_GL_ARB_texture_gather = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_gather");
    GLO_GL_ARB_texture_mirror_clamp_to_edge = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_mirror_clamp_to_edge");
    GLO_GL_ARB_texture_mirrored_repeat = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_mirrored_repeat");
    GLO_GL_ARB_texture_multisample = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_multisample");
    GLO_GL_ARB_texture_non_power_of_two = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_non_power_of_two");
    GLO_GL_ARB_texture_query_levels = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_query_levels");
    GLO_GL_ARB_texture_query_lod = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_query_lod");
    GLO_GL_ARB_texture_rectangle = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_rectangle");
    GLO_GL_ARB_texture_rg = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_rg");
    GLO_GL_ARB_texture_rgb10_a2ui = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_rgb10_a2ui");
    GLO_GL_ARB_texture_stencil8 = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_stencil8");
    GLO_GL_ARB_texture_storage = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_storage");
    GLO_GL_ARB_texture_storage_multisample = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_storage_multisample");
    GLO_GL_ARB_texture_swizzle = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_swizzle");
    GLO_GL_ARB_texture_view = glo_gl_has_extension(exts, exts_i, "GL_ARB_texture_view");
    GLO_GL_ARB_timer_query = glo_gl_has_extension(exts, exts_i, "GL_ARB_timer_query");
    GLO_GL_ARB_transform_feedback2 = glo_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback2");
    GLO_GL_ARB_transform_feedback3 = glo_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback3");
    GLO_GL_ARB_transform_feedback_instanced = glo_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback_instanced");
    GLO_GL_ARB_transform_feedback_overflow_query = glo_gl_has_extension(exts, exts_i, "GL_ARB_transform_feedback_overflow_query");
    GLO_GL_ARB_transpose_matrix = glo_gl_has_extension(exts, exts_i, "GL_ARB_transpose_matrix");
    GLO_GL_ARB_uniform_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_uniform_buffer_object");
    GLO_GL_ARB_vertex_array_bgra = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_array_bgra");
    GLO_GL_ARB_vertex_array_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_array_object");
    GLO_GL_ARB_vertex_attrib_64bit = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_attrib_64bit");
    GLO_GL_ARB_vertex_attrib_binding = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_attrib_binding");
    GLO_GL_ARB_vertex_blend = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_blend");
    GLO_GL_ARB_vertex_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_buffer_object");
    GLO_GL_ARB_vertex_program = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_program");
    GLO_GL_ARB_vertex_shader = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_shader");
    GLO_GL_ARB_vertex_type_10f_11f_11f_rev = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_type_10f_11f_11f_rev");
    GLO_GL_ARB_vertex_type_2_10_10_10_rev = glo_gl_has_extension(exts, exts_i, "GL_ARB_vertex_type_2_10_10_10_rev");
    GLO_GL_ARB_viewport_array = glo_gl_has_extension(exts, exts_i, "GL_ARB_viewport_array");
    GLO_GL_ARB_window_pos = glo_gl_has_extension(exts, exts_i, "GL_ARB_window_pos");
    GLO_GL_ATI_draw_buffers = glo_gl_has_extension(exts, exts_i, "GL_ATI_draw_buffers");
    GLO_GL_ATI_element_array = glo_gl_has_extension(exts, exts_i, "GL_ATI_element_array");
    GLO_GL_ATI_envmap_bumpmap = glo_gl_has_extension(exts, exts_i, "GL_ATI_envmap_bumpmap");
    GLO_GL_ATI_fragment_shader = glo_gl_has_extension(exts, exts_i, "GL_ATI_fragment_shader");
    GLO_GL_ATI_map_object_buffer = glo_gl_has_extension(exts, exts_i, "GL_ATI_map_object_buffer");
    GLO_GL_ATI_meminfo = glo_gl_has_extension(exts, exts_i, "GL_ATI_meminfo");
    GLO_GL_ATI_pixel_format_float = glo_gl_has_extension(exts, exts_i, "GL_ATI_pixel_format_float");
    GLO_GL_ATI_pn_triangles = glo_gl_has_extension(exts, exts_i, "GL_ATI_pn_triangles");
    GLO_GL_ATI_separate_stencil = glo_gl_has_extension(exts, exts_i, "GL_ATI_separate_stencil");
    GLO_GL_ATI_text_fragment_shader = glo_gl_has_extension(exts, exts_i, "GL_ATI_text_fragment_shader");
    GLO_GL_ATI_texture_env_combine3 = glo_gl_has_extension(exts, exts_i, "GL_ATI_texture_env_combine3");
    GLO_GL_ATI_texture_float = glo_gl_has_extension(exts, exts_i, "GL_ATI_texture_float");
    GLO_GL_ATI_texture_mirror_once = glo_gl_has_extension(exts, exts_i, "GL_ATI_texture_mirror_once");
    GLO_GL_ATI_vertex_array_object = glo_gl_has_extension(exts, exts_i, "GL_ATI_vertex_array_object");
    GLO_GL_ATI_vertex_attrib_array_object = glo_gl_has_extension(exts, exts_i, "GL_ATI_vertex_attrib_array_object");
    GLO_GL_ATI_vertex_streams = glo_gl_has_extension(exts, exts_i, "GL_ATI_vertex_streams");
    GLO_GL_EXT_422_pixels = glo_gl_has_extension(exts, exts_i, "GL_EXT_422_pixels");
    GLO_GL_EXT_EGL_image_storage = glo_gl_has_extension(exts, exts_i, "GL_EXT_EGL_image_storage");
    GLO_GL_EXT_EGL_sync = glo_gl_has_extension(exts, exts_i, "GL_EXT_EGL_sync");
    GLO_GL_EXT_abgr = glo_gl_has_extension(exts, exts_i, "GL_EXT_abgr");
    GLO_GL_EXT_bgra = glo_gl_has_extension(exts, exts_i, "GL_EXT_bgra");
    GLO_GL_EXT_bindable_uniform = glo_gl_has_extension(exts, exts_i, "GL_EXT_bindable_uniform");
    GLO_GL_EXT_blend_color = glo_gl_has_extension(exts, exts_i, "GL_EXT_blend_color");
    GLO_GL_EXT_blend_equation_separate = glo_gl_has_extension(exts, exts_i, "GL_EXT_blend_equation_separate");
    GLO_GL_EXT_blend_func_separate = glo_gl_has_extension(exts, exts_i, "GL_EXT_blend_func_separate");
    GLO_GL_EXT_blend_logic_op = glo_gl_has_extension(exts, exts_i, "GL_EXT_blend_logic_op");
    GLO_GL_EXT_blend_minmax = glo_gl_has_extension(exts, exts_i, "GL_EXT_blend_minmax");
    GLO_GL_EXT_blend_subtract = glo_gl_has_extension(exts, exts_i, "GL_EXT_blend_subtract");
    GLO_GL_EXT_clip_volume_hint = glo_gl_has_extension(exts, exts_i, "GL_EXT_clip_volume_hint");
    GLO_GL_EXT_cmyka = glo_gl_has_extension(exts, exts_i, "GL_EXT_cmyka");
    GLO_GL_EXT_color_subtable = glo_gl_has_extension(exts, exts_i, "GL_EXT_color_subtable");
    GLO_GL_EXT_compiled_vertex_array = glo_gl_has_extension(exts, exts_i, "GL_EXT_compiled_vertex_array");
    GLO_GL_EXT_convolution = glo_gl_has_extension(exts, exts_i, "GL_EXT_convolution");
    GLO_GL_EXT_coordinate_frame = glo_gl_has_extension(exts, exts_i, "GL_EXT_coordinate_frame");
    GLO_GL_EXT_copy_texture = glo_gl_has_extension(exts, exts_i, "GL_EXT_copy_texture");
    GLO_GL_EXT_cull_vertex = glo_gl_has_extension(exts, exts_i, "GL_EXT_cull_vertex");
    GLO_GL_EXT_debug_label = glo_gl_has_extension(exts, exts_i, "GL_EXT_debug_label");
    GLO_GL_EXT_debug_marker = glo_gl_has_extension(exts, exts_i, "GL_EXT_debug_marker");
    GLO_GL_EXT_depth_bounds_test = glo_gl_has_extension(exts, exts_i, "GL_EXT_depth_bounds_test");
    GLO_GL_EXT_direct_state_access = glo_gl_has_extension(exts, exts_i, "GL_EXT_direct_state_access");
    GLO_GL_EXT_draw_buffers2 = glo_gl_has_extension(exts, exts_i, "GL_EXT_draw_buffers2");
    GLO_GL_EXT_draw_instanced = glo_gl_has_extension(exts, exts_i, "GL_EXT_draw_instanced");
    GLO_GL_EXT_draw_range_elements = glo_gl_has_extension(exts, exts_i, "GL_EXT_draw_range_elements");
    GLO_GL_EXT_external_buffer = glo_gl_has_extension(exts, exts_i, "GL_EXT_external_buffer");
    GLO_GL_EXT_fog_coord = glo_gl_has_extension(exts, exts_i, "GL_EXT_fog_coord");
    GLO_GL_EXT_fragment_shading_rate = glo_gl_has_extension(exts, exts_i, "GL_EXT_fragment_shading_rate");
    GLO_GL_EXT_framebuffer_blit = glo_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_blit");
    GLO_GL_EXT_framebuffer_blit_layers = glo_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_blit_layers");
    GLO_GL_EXT_framebuffer_multisample = glo_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_multisample");
    GLO_GL_EXT_framebuffer_multisample_blit_scaled = glo_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_multisample_blit_scaled");
    GLO_GL_EXT_framebuffer_object = glo_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_object");
    GLO_GL_EXT_framebuffer_sRGB = glo_gl_has_extension(exts, exts_i, "GL_EXT_framebuffer_sRGB");
    GLO_GL_EXT_geometry_shader4 = glo_gl_has_extension(exts, exts_i, "GL_EXT_geometry_shader4");
    GLO_GL_EXT_gpu_program_parameters = glo_gl_has_extension(exts, exts_i, "GL_EXT_gpu_program_parameters");
    GLO_GL_EXT_gpu_shader4 = glo_gl_has_extension(exts, exts_i, "GL_EXT_gpu_shader4");
    GLO_GL_EXT_histogram = glo_gl_has_extension(exts, exts_i, "GL_EXT_histogram");
    GLO_GL_EXT_index_array_formats = glo_gl_has_extension(exts, exts_i, "GL_EXT_index_array_formats");
    GLO_GL_EXT_index_func = glo_gl_has_extension(exts, exts_i, "GL_EXT_index_func");
    GLO_GL_EXT_index_material = glo_gl_has_extension(exts, exts_i, "GL_EXT_index_material");
    GLO_GL_EXT_index_texture = glo_gl_has_extension(exts, exts_i, "GL_EXT_index_texture");
    GLO_GL_EXT_light_texture = glo_gl_has_extension(exts, exts_i, "GL_EXT_light_texture");
    GLO_GL_EXT_memory_object = glo_gl_has_extension(exts, exts_i, "GL_EXT_memory_object");
    GLO_GL_EXT_memory_object_fd = glo_gl_has_extension(exts, exts_i, "GL_EXT_memory_object_fd");
    GLO_GL_EXT_memory_object_win32 = glo_gl_has_extension(exts, exts_i, "GL_EXT_memory_object_win32");
    GLO_GL_EXT_mesh_shader = glo_gl_has_extension(exts, exts_i, "GL_EXT_mesh_shader");
    GLO_GL_EXT_misc_attribute = glo_gl_has_extension(exts, exts_i, "GL_EXT_misc_attribute");
    GLO_GL_EXT_multi_draw_arrays = glo_gl_has_extension(exts, exts_i, "GL_EXT_multi_draw_arrays");
    GLO_GL_EXT_multisample = glo_gl_has_extension(exts, exts_i, "GL_EXT_multisample");
    GLO_GL_EXT_multiview_tessellation_geometry_shader = glo_gl_has_extension(exts, exts_i, "GL_EXT_multiview_tessellation_geometry_shader");
    GLO_GL_EXT_multiview_texture_multisample = glo_gl_has_extension(exts, exts_i, "GL_EXT_multiview_texture_multisample");
    GLO_GL_EXT_multiview_timer_query = glo_gl_has_extension(exts, exts_i, "GL_EXT_multiview_timer_query");
    GLO_GL_EXT_packed_depth_stencil = glo_gl_has_extension(exts, exts_i, "GL_EXT_packed_depth_stencil");
    GLO_GL_EXT_packed_float = glo_gl_has_extension(exts, exts_i, "GL_EXT_packed_float");
    GLO_GL_EXT_packed_pixels = glo_gl_has_extension(exts, exts_i, "GL_EXT_packed_pixels");
    GLO_GL_EXT_paletted_texture = glo_gl_has_extension(exts, exts_i, "GL_EXT_paletted_texture");
    GLO_GL_EXT_pixel_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_EXT_pixel_buffer_object");
    GLO_GL_EXT_pixel_transform = glo_gl_has_extension(exts, exts_i, "GL_EXT_pixel_transform");
    GLO_GL_EXT_pixel_transform_color_table = glo_gl_has_extension(exts, exts_i, "GL_EXT_pixel_transform_color_table");
    GLO_GL_EXT_point_parameters = glo_gl_has_extension(exts, exts_i, "GL_EXT_point_parameters");
    GLO_GL_EXT_polygon_offset = glo_gl_has_extension(exts, exts_i, "GL_EXT_polygon_offset");
    GLO_GL_EXT_polygon_offset_clamp = glo_gl_has_extension(exts, exts_i, "GL_EXT_polygon_offset_clamp");
    GLO_GL_EXT_post_depth_coverage = glo_gl_has_extension(exts, exts_i, "GL_EXT_post_depth_coverage");
    GLO_GL_EXT_provoking_vertex = glo_gl_has_extension(exts, exts_i, "GL_EXT_provoking_vertex");
    GLO_GL_EXT_raster_multisample = glo_gl_has_extension(exts, exts_i, "GL_EXT_raster_multisample");
    GLO_GL_EXT_rescale_normal = glo_gl_has_extension(exts, exts_i, "GL_EXT_rescale_normal");
    GLO_GL_EXT_secondary_color = glo_gl_has_extension(exts, exts_i, "GL_EXT_secondary_color");
    GLO_GL_EXT_semaphore = glo_gl_has_extension(exts, exts_i, "GL_EXT_semaphore");
    GLO_GL_EXT_semaphore_fd = glo_gl_has_extension(exts, exts_i, "GL_EXT_semaphore_fd");
    GLO_GL_EXT_semaphore_win32 = glo_gl_has_extension(exts, exts_i, "GL_EXT_semaphore_win32");
    GLO_GL_EXT_separate_shader_objects = glo_gl_has_extension(exts, exts_i, "GL_EXT_separate_shader_objects");
    GLO_GL_EXT_separate_specular_color = glo_gl_has_extension(exts, exts_i, "GL_EXT_separate_specular_color");
    GLO_GL_EXT_shader_framebuffer_fetch = glo_gl_has_extension(exts, exts_i, "GL_EXT_shader_framebuffer_fetch");
    GLO_GL_EXT_shader_framebuffer_fetch_non_coherent = glo_gl_has_extension(exts, exts_i, "GL_EXT_shader_framebuffer_fetch_non_coherent");
    GLO_GL_EXT_shader_image_load_formatted = glo_gl_has_extension(exts, exts_i, "GL_EXT_shader_image_load_formatted");
    GLO_GL_EXT_shader_image_load_store = glo_gl_has_extension(exts, exts_i, "GL_EXT_shader_image_load_store");
    GLO_GL_EXT_shader_integer_mix = glo_gl_has_extension(exts, exts_i, "GL_EXT_shader_integer_mix");
    GLO_GL_EXT_shader_samples_identical = glo_gl_has_extension(exts, exts_i, "GL_EXT_shader_samples_identical");
    GLO_GL_EXT_shadow_funcs = glo_gl_has_extension(exts, exts_i, "GL_EXT_shadow_funcs");
    GLO_GL_EXT_shared_texture_palette = glo_gl_has_extension(exts, exts_i, "GL_EXT_shared_texture_palette");
    GLO_GL_EXT_sparse_texture2 = glo_gl_has_extension(exts, exts_i, "GL_EXT_sparse_texture2");
    GLO_GL_EXT_stencil_clear_tag = glo_gl_has_extension(exts, exts_i, "GL_EXT_stencil_clear_tag");
    GLO_GL_EXT_stencil_two_side = glo_gl_has_extension(exts, exts_i, "GL_EXT_stencil_two_side");
    GLO_GL_EXT_stencil_wrap = glo_gl_has_extension(exts, exts_i, "GL_EXT_stencil_wrap");
    GLO_GL_EXT_subtexture = glo_gl_has_extension(exts, exts_i, "GL_EXT_subtexture");
    GLO_GL_EXT_texture = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture");
    GLO_GL_EXT_texture3D = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture3D");
    GLO_GL_EXT_texture_array = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_array");
    GLO_GL_EXT_texture_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_buffer_object");
    GLO_GL_EXT_texture_compression_latc = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_compression_latc");
    GLO_GL_EXT_texture_compression_rgtc = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_compression_rgtc");
    GLO_GL_EXT_texture_compression_s3tc = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_compression_s3tc");
    GLO_GL_EXT_texture_cube_map = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_cube_map");
    GLO_GL_EXT_texture_env_add = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_env_add");
    GLO_GL_EXT_texture_env_combine = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_env_combine");
    GLO_GL_EXT_texture_env_dot3 = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_env_dot3");
    GLO_GL_EXT_texture_filter_anisotropic = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_filter_anisotropic");
    GLO_GL_EXT_texture_filter_minmax = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_filter_minmax");
    GLO_GL_EXT_texture_integer = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_integer");
    GLO_GL_EXT_texture_lod_bias = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_lod_bias");
    GLO_GL_EXT_texture_mirror_clamp = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_mirror_clamp");
    GLO_GL_EXT_texture_object = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_object");
    GLO_GL_EXT_texture_perturb_normal = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_perturb_normal");
    GLO_GL_EXT_texture_sRGB = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB");
    GLO_GL_EXT_texture_sRGB_R8 = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB_R8");
    GLO_GL_EXT_texture_sRGB_RG8 = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB_RG8");
    GLO_GL_EXT_texture_sRGB_decode = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_sRGB_decode");
    GLO_GL_EXT_texture_shadow_lod = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_shadow_lod");
    GLO_GL_EXT_texture_shared_exponent = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_shared_exponent");
    GLO_GL_EXT_texture_snorm = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_snorm");
    GLO_GL_EXT_texture_storage = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_storage");
    GLO_GL_EXT_texture_swizzle = glo_gl_has_extension(exts, exts_i, "GL_EXT_texture_swizzle");
    GLO_GL_EXT_timer_query = glo_gl_has_extension(exts, exts_i, "GL_EXT_timer_query");
    GLO_GL_EXT_transform_feedback = glo_gl_has_extension(exts, exts_i, "GL_EXT_transform_feedback");
    GLO_GL_EXT_vertex_array = glo_gl_has_extension(exts, exts_i, "GL_EXT_vertex_array");
    GLO_GL_EXT_vertex_array_bgra = glo_gl_has_extension(exts, exts_i, "GL_EXT_vertex_array_bgra");
    GLO_GL_EXT_vertex_attrib_64bit = glo_gl_has_extension(exts, exts_i, "GL_EXT_vertex_attrib_64bit");
    GLO_GL_EXT_vertex_shader = glo_gl_has_extension(exts, exts_i, "GL_EXT_vertex_shader");
    GLO_GL_EXT_vertex_weighting = glo_gl_has_extension(exts, exts_i, "GL_EXT_vertex_weighting");
    GLO_GL_EXT_win32_keyed_mutex = glo_gl_has_extension(exts, exts_i, "GL_EXT_win32_keyed_mutex");
    GLO_GL_EXT_window_rectangles = glo_gl_has_extension(exts, exts_i, "GL_EXT_window_rectangles");
    GLO_GL_EXT_x11_sync_object = glo_gl_has_extension(exts, exts_i, "GL_EXT_x11_sync_object");
    GLO_GL_GREMEDY_frame_terminator = glo_gl_has_extension(exts, exts_i, "GL_GREMEDY_frame_terminator");
    GLO_GL_GREMEDY_string_marker = glo_gl_has_extension(exts, exts_i, "GL_GREMEDY_string_marker");
    GLO_GL_HP_convolution_border_modes = glo_gl_has_extension(exts, exts_i, "GL_HP_convolution_border_modes");
    GLO_GL_HP_image_transform = glo_gl_has_extension(exts, exts_i, "GL_HP_image_transform");
    GLO_GL_HP_occlusion_test = glo_gl_has_extension(exts, exts_i, "GL_HP_occlusion_test");
    GLO_GL_HP_texture_lighting = glo_gl_has_extension(exts, exts_i, "GL_HP_texture_lighting");
    GLO_GL_IBM_cull_vertex = glo_gl_has_extension(exts, exts_i, "GL_IBM_cull_vertex");
    GLO_GL_IBM_multimode_draw_arrays = glo_gl_has_extension(exts, exts_i, "GL_IBM_multimode_draw_arrays");
    GLO_GL_IBM_rasterpos_clip = glo_gl_has_extension(exts, exts_i, "GL_IBM_rasterpos_clip");
    GLO_GL_IBM_static_data = glo_gl_has_extension(exts, exts_i, "GL_IBM_static_data");
    GLO_GL_IBM_texture_mirrored_repeat = glo_gl_has_extension(exts, exts_i, "GL_IBM_texture_mirrored_repeat");
    GLO_GL_IBM_vertex_array_lists = glo_gl_has_extension(exts, exts_i, "GL_IBM_vertex_array_lists");
    GLO_GL_INGR_blend_func_separate = glo_gl_has_extension(exts, exts_i, "GL_INGR_blend_func_separate");
    GLO_GL_INGR_color_clamp = glo_gl_has_extension(exts, exts_i, "GL_INGR_color_clamp");
    GLO_GL_INGR_interlace_read = glo_gl_has_extension(exts, exts_i, "GL_INGR_interlace_read");
    GLO_GL_INTEL_blackhole_render = glo_gl_has_extension(exts, exts_i, "GL_INTEL_blackhole_render");
    GLO_GL_INTEL_conservative_rasterization = glo_gl_has_extension(exts, exts_i, "GL_INTEL_conservative_rasterization");
    GLO_GL_INTEL_fragment_shader_ordering = glo_gl_has_extension(exts, exts_i, "GL_INTEL_fragment_shader_ordering");
    GLO_GL_INTEL_framebuffer_CMAA = glo_gl_has_extension(exts, exts_i, "GL_INTEL_framebuffer_CMAA");
    GLO_GL_INTEL_map_texture = glo_gl_has_extension(exts, exts_i, "GL_INTEL_map_texture");
    GLO_GL_INTEL_parallel_arrays = glo_gl_has_extension(exts, exts_i, "GL_INTEL_parallel_arrays");
    GLO_GL_INTEL_performance_query = glo_gl_has_extension(exts, exts_i, "GL_INTEL_performance_query");
    GLO_GL_KHR_blend_equation_advanced = glo_gl_has_extension(exts, exts_i, "GL_KHR_blend_equation_advanced");
    GLO_GL_KHR_blend_equation_advanced_coherent = glo_gl_has_extension(exts, exts_i, "GL_KHR_blend_equation_advanced_coherent");
    GLO_GL_KHR_context_flush_control = glo_gl_has_extension(exts, exts_i, "GL_KHR_context_flush_control");
    GLO_GL_KHR_debug = glo_gl_has_extension(exts, exts_i, "GL_KHR_debug");
    GLO_GL_KHR_no_error = glo_gl_has_extension(exts, exts_i, "GL_KHR_no_error");
    GLO_GL_KHR_parallel_shader_compile = glo_gl_has_extension(exts, exts_i, "GL_KHR_parallel_shader_compile");
    GLO_GL_KHR_robust_buffer_access_behavior = glo_gl_has_extension(exts, exts_i, "GL_KHR_robust_buffer_access_behavior");
    GLO_GL_KHR_robustness = glo_gl_has_extension(exts, exts_i, "GL_KHR_robustness");
    GLO_GL_KHR_shader_subgroup = glo_gl_has_extension(exts, exts_i, "GL_KHR_shader_subgroup");
    GLO_GL_KHR_texture_compression_astc_hdr = glo_gl_has_extension(exts, exts_i, "GL_KHR_texture_compression_astc_hdr");
    GLO_GL_KHR_texture_compression_astc_ldr = glo_gl_has_extension(exts, exts_i, "GL_KHR_texture_compression_astc_ldr");
    GLO_GL_KHR_texture_compression_astc_sliced_3d = glo_gl_has_extension(exts, exts_i, "GL_KHR_texture_compression_astc_sliced_3d");
    GLO_GL_MESAX_texture_stack = glo_gl_has_extension(exts, exts_i, "GL_MESAX_texture_stack");
    GLO_GL_MESA_framebuffer_flip_x = glo_gl_has_extension(exts, exts_i, "GL_MESA_framebuffer_flip_x");
    GLO_GL_MESA_framebuffer_flip_y = glo_gl_has_extension(exts, exts_i, "GL_MESA_framebuffer_flip_y");
    GLO_GL_MESA_framebuffer_swap_xy = glo_gl_has_extension(exts, exts_i, "GL_MESA_framebuffer_swap_xy");
    GLO_GL_MESA_pack_invert = glo_gl_has_extension(exts, exts_i, "GL_MESA_pack_invert");
    GLO_GL_MESA_program_binary_formats = glo_gl_has_extension(exts, exts_i, "GL_MESA_program_binary_formats");
    GLO_GL_MESA_resize_buffers = glo_gl_has_extension(exts, exts_i, "GL_MESA_resize_buffers");
    GLO_GL_MESA_shader_integer_functions = glo_gl_has_extension(exts, exts_i, "GL_MESA_shader_integer_functions");
    GLO_GL_MESA_texture_const_bandwidth = glo_gl_has_extension(exts, exts_i, "GL_MESA_texture_const_bandwidth");
    GLO_GL_MESA_tile_raster_order = glo_gl_has_extension(exts, exts_i, "GL_MESA_tile_raster_order");
    GLO_GL_MESA_window_pos = glo_gl_has_extension(exts, exts_i, "GL_MESA_window_pos");
    GLO_GL_MESA_ycbcr_texture = glo_gl_has_extension(exts, exts_i, "GL_MESA_ycbcr_texture");
    GLO_GL_NVX_blend_equation_advanced_multi_draw_buffers = glo_gl_has_extension(exts, exts_i, "GL_NVX_blend_equation_advanced_multi_draw_buffers");
    GLO_GL_NVX_conditional_render = glo_gl_has_extension(exts, exts_i, "GL_NVX_conditional_render");
    GLO_GL_NVX_gpu_memory_info = glo_gl_has_extension(exts, exts_i, "GL_NVX_gpu_memory_info");
    GLO_GL_NVX_gpu_multicast2 = glo_gl_has_extension(exts, exts_i, "GL_NVX_gpu_multicast2");
    GLO_GL_NVX_linked_gpu_multicast = glo_gl_has_extension(exts, exts_i, "GL_NVX_linked_gpu_multicast");
    GLO_GL_NVX_progress_fence = glo_gl_has_extension(exts, exts_i, "GL_NVX_progress_fence");
    GLO_GL_NV_alpha_to_coverage_dither_control = glo_gl_has_extension(exts, exts_i, "GL_NV_alpha_to_coverage_dither_control");
    GLO_GL_NV_bindless_multi_draw_indirect = glo_gl_has_extension(exts, exts_i, "GL_NV_bindless_multi_draw_indirect");
    GLO_GL_NV_bindless_multi_draw_indirect_count = glo_gl_has_extension(exts, exts_i, "GL_NV_bindless_multi_draw_indirect_count");
    GLO_GL_NV_bindless_texture = glo_gl_has_extension(exts, exts_i, "GL_NV_bindless_texture");
    GLO_GL_NV_blend_equation_advanced = glo_gl_has_extension(exts, exts_i, "GL_NV_blend_equation_advanced");
    GLO_GL_NV_blend_equation_advanced_coherent = glo_gl_has_extension(exts, exts_i, "GL_NV_blend_equation_advanced_coherent");
    GLO_GL_NV_blend_minmax_factor = glo_gl_has_extension(exts, exts_i, "GL_NV_blend_minmax_factor");
    GLO_GL_NV_blend_square = glo_gl_has_extension(exts, exts_i, "GL_NV_blend_square");
    GLO_GL_NV_clip_space_w_scaling = glo_gl_has_extension(exts, exts_i, "GL_NV_clip_space_w_scaling");
    GLO_GL_NV_command_list = glo_gl_has_extension(exts, exts_i, "GL_NV_command_list");
    GLO_GL_NV_compute_program5 = glo_gl_has_extension(exts, exts_i, "GL_NV_compute_program5");
    GLO_GL_NV_compute_shader_derivatives = glo_gl_has_extension(exts, exts_i, "GL_NV_compute_shader_derivatives");
    GLO_GL_NV_conditional_render = glo_gl_has_extension(exts, exts_i, "GL_NV_conditional_render");
    GLO_GL_NV_conservative_raster = glo_gl_has_extension(exts, exts_i, "GL_NV_conservative_raster");
    GLO_GL_NV_conservative_raster_dilate = glo_gl_has_extension(exts, exts_i, "GL_NV_conservative_raster_dilate");
    GLO_GL_NV_conservative_raster_pre_snap = glo_gl_has_extension(exts, exts_i, "GL_NV_conservative_raster_pre_snap");
    GLO_GL_NV_conservative_raster_pre_snap_triangles = glo_gl_has_extension(exts, exts_i, "GL_NV_conservative_raster_pre_snap_triangles");
    GLO_GL_NV_conservative_raster_underestimation = glo_gl_has_extension(exts, exts_i, "GL_NV_conservative_raster_underestimation");
    GLO_GL_NV_copy_depth_to_color = glo_gl_has_extension(exts, exts_i, "GL_NV_copy_depth_to_color");
    GLO_GL_NV_copy_image = glo_gl_has_extension(exts, exts_i, "GL_NV_copy_image");
    GLO_GL_NV_deep_texture3D = glo_gl_has_extension(exts, exts_i, "GL_NV_deep_texture3D");
    GLO_GL_NV_depth_buffer_float = glo_gl_has_extension(exts, exts_i, "GL_NV_depth_buffer_float");
    GLO_GL_NV_depth_clamp = glo_gl_has_extension(exts, exts_i, "GL_NV_depth_clamp");
    GLO_GL_NV_draw_texture = glo_gl_has_extension(exts, exts_i, "GL_NV_draw_texture");
    GLO_GL_NV_draw_vulkan_image = glo_gl_has_extension(exts, exts_i, "GL_NV_draw_vulkan_image");
    GLO_GL_NV_evaluators = glo_gl_has_extension(exts, exts_i, "GL_NV_evaluators");
    GLO_GL_NV_explicit_multisample = glo_gl_has_extension(exts, exts_i, "GL_NV_explicit_multisample");
    GLO_GL_NV_fence = glo_gl_has_extension(exts, exts_i, "GL_NV_fence");
    GLO_GL_NV_fill_rectangle = glo_gl_has_extension(exts, exts_i, "GL_NV_fill_rectangle");
    GLO_GL_NV_float_buffer = glo_gl_has_extension(exts, exts_i, "GL_NV_float_buffer");
    GLO_GL_NV_fog_distance = glo_gl_has_extension(exts, exts_i, "GL_NV_fog_distance");
    GLO_GL_NV_fragment_coverage_to_color = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_coverage_to_color");
    GLO_GL_NV_fragment_program = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_program");
    GLO_GL_NV_fragment_program2 = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_program2");
    GLO_GL_NV_fragment_program4 = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_program4");
    GLO_GL_NV_fragment_program_option = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_program_option");
    GLO_GL_NV_fragment_shader_barycentric = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_shader_barycentric");
    GLO_GL_NV_fragment_shader_interlock = glo_gl_has_extension(exts, exts_i, "GL_NV_fragment_shader_interlock");
    GLO_GL_NV_framebuffer_mixed_samples = glo_gl_has_extension(exts, exts_i, "GL_NV_framebuffer_mixed_samples");
    GLO_GL_NV_framebuffer_multisample_coverage = glo_gl_has_extension(exts, exts_i, "GL_NV_framebuffer_multisample_coverage");
    GLO_GL_NV_geometry_program4 = glo_gl_has_extension(exts, exts_i, "GL_NV_geometry_program4");
    GLO_GL_NV_geometry_shader4 = glo_gl_has_extension(exts, exts_i, "GL_NV_geometry_shader4");
    GLO_GL_NV_geometry_shader_passthrough = glo_gl_has_extension(exts, exts_i, "GL_NV_geometry_shader_passthrough");
    GLO_GL_NV_gpu_multicast = glo_gl_has_extension(exts, exts_i, "GL_NV_gpu_multicast");
    GLO_GL_NV_gpu_program4 = glo_gl_has_extension(exts, exts_i, "GL_NV_gpu_program4");
    GLO_GL_NV_gpu_program5 = glo_gl_has_extension(exts, exts_i, "GL_NV_gpu_program5");
    GLO_GL_NV_gpu_program5_mem_extended = glo_gl_has_extension(exts, exts_i, "GL_NV_gpu_program5_mem_extended");
    GLO_GL_NV_gpu_shader5 = glo_gl_has_extension(exts, exts_i, "GL_NV_gpu_shader5");
    GLO_GL_NV_half_float = glo_gl_has_extension(exts, exts_i, "GL_NV_half_float");
    GLO_GL_NV_internalformat_sample_query = glo_gl_has_extension(exts, exts_i, "GL_NV_internalformat_sample_query");
    GLO_GL_NV_light_max_exponent = glo_gl_has_extension(exts, exts_i, "GL_NV_light_max_exponent");
    GLO_GL_NV_memory_attachment = glo_gl_has_extension(exts, exts_i, "GL_NV_memory_attachment");
    GLO_GL_NV_memory_object_sparse = glo_gl_has_extension(exts, exts_i, "GL_NV_memory_object_sparse");
    GLO_GL_NV_mesh_shader = glo_gl_has_extension(exts, exts_i, "GL_NV_mesh_shader");
    GLO_GL_NV_multisample_coverage = glo_gl_has_extension(exts, exts_i, "GL_NV_multisample_coverage");
    GLO_GL_NV_multisample_filter_hint = glo_gl_has_extension(exts, exts_i, "GL_NV_multisample_filter_hint");
    GLO_GL_NV_occlusion_query = glo_gl_has_extension(exts, exts_i, "GL_NV_occlusion_query");
    GLO_GL_NV_packed_depth_stencil = glo_gl_has_extension(exts, exts_i, "GL_NV_packed_depth_stencil");
    GLO_GL_NV_parameter_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_NV_parameter_buffer_object");
    GLO_GL_NV_parameter_buffer_object2 = glo_gl_has_extension(exts, exts_i, "GL_NV_parameter_buffer_object2");
    GLO_GL_NV_path_rendering = glo_gl_has_extension(exts, exts_i, "GL_NV_path_rendering");
    GLO_GL_NV_path_rendering_shared_edge = glo_gl_has_extension(exts, exts_i, "GL_NV_path_rendering_shared_edge");
    GLO_GL_NV_pixel_data_range = glo_gl_has_extension(exts, exts_i, "GL_NV_pixel_data_range");
    GLO_GL_NV_point_sprite = glo_gl_has_extension(exts, exts_i, "GL_NV_point_sprite");
    GLO_GL_NV_present_video = glo_gl_has_extension(exts, exts_i, "GL_NV_present_video");
    GLO_GL_NV_primitive_restart = glo_gl_has_extension(exts, exts_i, "GL_NV_primitive_restart");
    GLO_GL_NV_primitive_shading_rate = glo_gl_has_extension(exts, exts_i, "GL_NV_primitive_shading_rate");
    GLO_GL_NV_query_resource = glo_gl_has_extension(exts, exts_i, "GL_NV_query_resource");
    GLO_GL_NV_query_resource_tag = glo_gl_has_extension(exts, exts_i, "GL_NV_query_resource_tag");
    GLO_GL_NV_register_combiners = glo_gl_has_extension(exts, exts_i, "GL_NV_register_combiners");
    GLO_GL_NV_register_combiners2 = glo_gl_has_extension(exts, exts_i, "GL_NV_register_combiners2");
    GLO_GL_NV_representative_fragment_test = glo_gl_has_extension(exts, exts_i, "GL_NV_representative_fragment_test");
    GLO_GL_NV_robustness_video_memory_purge = glo_gl_has_extension(exts, exts_i, "GL_NV_robustness_video_memory_purge");
    GLO_GL_NV_sample_locations = glo_gl_has_extension(exts, exts_i, "GL_NV_sample_locations");
    GLO_GL_NV_sample_mask_override_coverage = glo_gl_has_extension(exts, exts_i, "GL_NV_sample_mask_override_coverage");
    GLO_GL_NV_scissor_exclusive = glo_gl_has_extension(exts, exts_i, "GL_NV_scissor_exclusive");
    GLO_GL_NV_shader_atomic_counters = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_atomic_counters");
    GLO_GL_NV_shader_atomic_float = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_atomic_float");
    GLO_GL_NV_shader_atomic_float64 = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_atomic_float64");
    GLO_GL_NV_shader_atomic_fp16_vector = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_atomic_fp16_vector");
    GLO_GL_NV_shader_atomic_int64 = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_atomic_int64");
    GLO_GL_NV_shader_buffer_load = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_buffer_load");
    GLO_GL_NV_shader_buffer_store = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_buffer_store");
    GLO_GL_NV_shader_storage_buffer_object = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_storage_buffer_object");
    GLO_GL_NV_shader_subgroup_partitioned = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_subgroup_partitioned");
    GLO_GL_NV_shader_texture_footprint = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_texture_footprint");
    GLO_GL_NV_shader_thread_group = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_thread_group");
    GLO_GL_NV_shader_thread_shuffle = glo_gl_has_extension(exts, exts_i, "GL_NV_shader_thread_shuffle");
    GLO_GL_NV_shading_rate_image = glo_gl_has_extension(exts, exts_i, "GL_NV_shading_rate_image");
    GLO_GL_NV_stereo_view_rendering = glo_gl_has_extension(exts, exts_i, "GL_NV_stereo_view_rendering");
    GLO_GL_NV_tessellation_program5 = glo_gl_has_extension(exts, exts_i, "GL_NV_tessellation_program5");
    GLO_GL_NV_texgen_emboss = glo_gl_has_extension(exts, exts_i, "GL_NV_texgen_emboss");
    GLO_GL_NV_texgen_reflection = glo_gl_has_extension(exts, exts_i, "GL_NV_texgen_reflection");
    GLO_GL_NV_texture_barrier = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_barrier");
    GLO_GL_NV_texture_compression_vtc = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_compression_vtc");
    GLO_GL_NV_texture_env_combine4 = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_env_combine4");
    GLO_GL_NV_texture_expand_normal = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_expand_normal");
    GLO_GL_NV_texture_multisample = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_multisample");
    GLO_GL_NV_texture_rectangle = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_rectangle");
    GLO_GL_NV_texture_rectangle_compressed = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_rectangle_compressed");
    GLO_GL_NV_texture_shader = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_shader");
    GLO_GL_NV_texture_shader2 = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_shader2");
    GLO_GL_NV_texture_shader3 = glo_gl_has_extension(exts, exts_i, "GL_NV_texture_shader3");
    GLO_GL_NV_timeline_semaphore = glo_gl_has_extension(exts, exts_i, "GL_NV_timeline_semaphore");
    GLO_GL_NV_transform_feedback = glo_gl_has_extension(exts, exts_i, "GL_NV_transform_feedback");
    GLO_GL_NV_transform_feedback2 = glo_gl_has_extension(exts, exts_i, "GL_NV_transform_feedback2");
    GLO_GL_NV_uniform_buffer_std430_layout = glo_gl_has_extension(exts, exts_i, "GL_NV_uniform_buffer_std430_layout");
    GLO_GL_NV_uniform_buffer_unified_memory = glo_gl_has_extension(exts, exts_i, "GL_NV_uniform_buffer_unified_memory");
    GLO_GL_NV_vdpau_interop = glo_gl_has_extension(exts, exts_i, "GL_NV_vdpau_interop");
    GLO_GL_NV_vdpau_interop2 = glo_gl_has_extension(exts, exts_i, "GL_NV_vdpau_interop2");
    GLO_GL_NV_vertex_array_range = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_array_range");
    GLO_GL_NV_vertex_array_range2 = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_array_range2");
    GLO_GL_NV_vertex_attrib_integer_64bit = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_attrib_integer_64bit");
    GLO_GL_NV_vertex_buffer_unified_memory = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_buffer_unified_memory");
    GLO_GL_NV_vertex_program = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_program");
    GLO_GL_NV_vertex_program1_1 = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_program1_1");
    GLO_GL_NV_vertex_program2 = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_program2");
    GLO_GL_NV_vertex_program2_option = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_program2_option");
    GLO_GL_NV_vertex_program3 = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_program3");
    GLO_GL_NV_vertex_program4 = glo_gl_has_extension(exts, exts_i, "GL_NV_vertex_program4");
    GLO_GL_NV_video_capture = glo_gl_has_extension(exts, exts_i, "GL_NV_video_capture");
    GLO_GL_NV_viewport_array2 = glo_gl_has_extension(exts, exts_i, "GL_NV_viewport_array2");
    GLO_GL_NV_viewport_swizzle = glo_gl_has_extension(exts, exts_i, "GL_NV_viewport_swizzle");
    GLO_GL_OES_byte_coordinates = glo_gl_has_extension(exts, exts_i, "GL_OES_byte_coordinates");
    GLO_GL_OES_compressed_paletted_texture = glo_gl_has_extension(exts, exts_i, "GL_OES_compressed_paletted_texture");
    GLO_GL_OES_fixed_point = glo_gl_has_extension(exts, exts_i, "GL_OES_fixed_point");
    GLO_GL_OES_query_matrix = glo_gl_has_extension(exts, exts_i, "GL_OES_query_matrix");
    GLO_GL_OES_read_format = glo_gl_has_extension(exts, exts_i, "GL_OES_read_format");
    GLO_GL_OES_single_precision = glo_gl_has_extension(exts, exts_i, "GL_OES_single_precision");
    GLO_GL_OML_interlace = glo_gl_has_extension(exts, exts_i, "GL_OML_interlace");
    GLO_GL_OML_resample = glo_gl_has_extension(exts, exts_i, "GL_OML_resample");
    GLO_GL_OML_subsample = glo_gl_has_extension(exts, exts_i, "GL_OML_subsample");
    GLO_GL_OVR_multiview = glo_gl_has_extension(exts, exts_i, "GL_OVR_multiview");
    GLO_GL_OVR_multiview2 = glo_gl_has_extension(exts, exts_i, "GL_OVR_multiview2");
    GLO_GL_PGI_misc_hints = glo_gl_has_extension(exts, exts_i, "GL_PGI_misc_hints");
    GLO_GL_PGI_vertex_hints = glo_gl_has_extension(exts, exts_i, "GL_PGI_vertex_hints");
    GLO_GL_REND_screen_coordinates = glo_gl_has_extension(exts, exts_i, "GL_REND_screen_coordinates");
    GLO_GL_S3_s3tc = glo_gl_has_extension(exts, exts_i, "GL_S3_s3tc");
    GLO_GL_SGIS_detail_texture = glo_gl_has_extension(exts, exts_i, "GL_SGIS_detail_texture");
    GLO_GL_SGIS_fog_function = glo_gl_has_extension(exts, exts_i, "GL_SGIS_fog_function");
    GLO_GL_SGIS_generate_mipmap = glo_gl_has_extension(exts, exts_i, "GL_SGIS_generate_mipmap");
    GLO_GL_SGIS_multisample = glo_gl_has_extension(exts, exts_i, "GL_SGIS_multisample");
    GLO_GL_SGIS_pixel_texture = glo_gl_has_extension(exts, exts_i, "GL_SGIS_pixel_texture");
    GLO_GL_SGIS_point_line_texgen = glo_gl_has_extension(exts, exts_i, "GL_SGIS_point_line_texgen");
    GLO_GL_SGIS_point_parameters = glo_gl_has_extension(exts, exts_i, "GL_SGIS_point_parameters");
    GLO_GL_SGIS_sharpen_texture = glo_gl_has_extension(exts, exts_i, "GL_SGIS_sharpen_texture");
    GLO_GL_SGIS_texture4D = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture4D");
    GLO_GL_SGIS_texture_border_clamp = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture_border_clamp");
    GLO_GL_SGIS_texture_color_mask = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture_color_mask");
    GLO_GL_SGIS_texture_edge_clamp = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture_edge_clamp");
    GLO_GL_SGIS_texture_filter4 = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture_filter4");
    GLO_GL_SGIS_texture_lod = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture_lod");
    GLO_GL_SGIS_texture_select = glo_gl_has_extension(exts, exts_i, "GL_SGIS_texture_select");
    GLO_GL_SGIX_async = glo_gl_has_extension(exts, exts_i, "GL_SGIX_async");
    GLO_GL_SGIX_async_histogram = glo_gl_has_extension(exts, exts_i, "GL_SGIX_async_histogram");
    GLO_GL_SGIX_async_pixel = glo_gl_has_extension(exts, exts_i, "GL_SGIX_async_pixel");
    GLO_GL_SGIX_blend_alpha_minmax = glo_gl_has_extension(exts, exts_i, "GL_SGIX_blend_alpha_minmax");
    GLO_GL_SGIX_calligraphic_fragment = glo_gl_has_extension(exts, exts_i, "GL_SGIX_calligraphic_fragment");
    GLO_GL_SGIX_clipmap = glo_gl_has_extension(exts, exts_i, "GL_SGIX_clipmap");
    GLO_GL_SGIX_convolution_accuracy = glo_gl_has_extension(exts, exts_i, "GL_SGIX_convolution_accuracy");
    GLO_GL_SGIX_depth_pass_instrument = glo_gl_has_extension(exts, exts_i, "GL_SGIX_depth_pass_instrument");
    GLO_GL_SGIX_depth_texture = glo_gl_has_extension(exts, exts_i, "GL_SGIX_depth_texture");
    GLO_GL_SGIX_flush_raster = glo_gl_has_extension(exts, exts_i, "GL_SGIX_flush_raster");
    GLO_GL_SGIX_fog_offset = glo_gl_has_extension(exts, exts_i, "GL_SGIX_fog_offset");
    GLO_GL_SGIX_fragment_lighting = glo_gl_has_extension(exts, exts_i, "GL_SGIX_fragment_lighting");
    GLO_GL_SGIX_framezoom = glo_gl_has_extension(exts, exts_i, "GL_SGIX_framezoom");
    GLO_GL_SGIX_igloo_interface = glo_gl_has_extension(exts, exts_i, "GL_SGIX_igloo_interface");
    GLO_GL_SGIX_instruments = glo_gl_has_extension(exts, exts_i, "GL_SGIX_instruments");
    GLO_GL_SGIX_interlace = glo_gl_has_extension(exts, exts_i, "GL_SGIX_interlace");
    GLO_GL_SGIX_ir_instrument1 = glo_gl_has_extension(exts, exts_i, "GL_SGIX_ir_instrument1");
    GLO_GL_SGIX_list_priority = glo_gl_has_extension(exts, exts_i, "GL_SGIX_list_priority");
    GLO_GL_SGIX_pixel_texture = glo_gl_has_extension(exts, exts_i, "GL_SGIX_pixel_texture");
    GLO_GL_SGIX_pixel_tiles = glo_gl_has_extension(exts, exts_i, "GL_SGIX_pixel_tiles");
    GLO_GL_SGIX_polynomial_ffd = glo_gl_has_extension(exts, exts_i, "GL_SGIX_polynomial_ffd");
    GLO_GL_SGIX_reference_plane = glo_gl_has_extension(exts, exts_i, "GL_SGIX_reference_plane");
    GLO_GL_SGIX_resample = glo_gl_has_extension(exts, exts_i, "GL_SGIX_resample");
    GLO_GL_SGIX_scalebias_hint = glo_gl_has_extension(exts, exts_i, "GL_SGIX_scalebias_hint");
    GLO_GL_SGIX_shadow = glo_gl_has_extension(exts, exts_i, "GL_SGIX_shadow");
    GLO_GL_SGIX_shadow_ambient = glo_gl_has_extension(exts, exts_i, "GL_SGIX_shadow_ambient");
    GLO_GL_SGIX_sprite = glo_gl_has_extension(exts, exts_i, "GL_SGIX_sprite");
    GLO_GL_SGIX_subsample = glo_gl_has_extension(exts, exts_i, "GL_SGIX_subsample");
    GLO_GL_SGIX_tag_sample_buffer = glo_gl_has_extension(exts, exts_i, "GL_SGIX_tag_sample_buffer");
    GLO_GL_SGIX_texture_add_env = glo_gl_has_extension(exts, exts_i, "GL_SGIX_texture_add_env");
    GLO_GL_SGIX_texture_coordinate_clamp = glo_gl_has_extension(exts, exts_i, "GL_SGIX_texture_coordinate_clamp");
    GLO_GL_SGIX_texture_lod_bias = glo_gl_has_extension(exts, exts_i, "GL_SGIX_texture_lod_bias");
    GLO_GL_SGIX_texture_multi_buffer = glo_gl_has_extension(exts, exts_i, "GL_SGIX_texture_multi_buffer");
    GLO_GL_SGIX_texture_scale_bias = glo_gl_has_extension(exts, exts_i, "GL_SGIX_texture_scale_bias");
    GLO_GL_SGIX_vertex_preclip = glo_gl_has_extension(exts, exts_i, "GL_SGIX_vertex_preclip");
    GLO_GL_SGIX_ycrcb = glo_gl_has_extension(exts, exts_i, "GL_SGIX_ycrcb");
    GLO_GL_SGIX_ycrcb_subsample = glo_gl_has_extension(exts, exts_i, "GL_SGIX_ycrcb_subsample");
    GLO_GL_SGIX_ycrcba = glo_gl_has_extension(exts, exts_i, "GL_SGIX_ycrcba");
    GLO_GL_SGI_color_matrix = glo_gl_has_extension(exts, exts_i, "GL_SGI_color_matrix");
    GLO_GL_SGI_color_table = glo_gl_has_extension(exts, exts_i, "GL_SGI_color_table");
    GLO_GL_SGI_texture_color_table = glo_gl_has_extension(exts, exts_i, "GL_SGI_texture_color_table");
    GLO_GL_SUNX_constant_data = glo_gl_has_extension(exts, exts_i, "GL_SUNX_constant_data");
    GLO_GL_SUN_convolution_border_modes = glo_gl_has_extension(exts, exts_i, "GL_SUN_convolution_border_modes");
    GLO_GL_SUN_global_alpha = glo_gl_has_extension(exts, exts_i, "GL_SUN_global_alpha");
    GLO_GL_SUN_mesh_array = glo_gl_has_extension(exts, exts_i, "GL_SUN_mesh_array");
    GLO_GL_SUN_slice_accum = glo_gl_has_extension(exts, exts_i, "GL_SUN_slice_accum");
    GLO_GL_SUN_triangle_list = glo_gl_has_extension(exts, exts_i, "GL_SUN_triangle_list");
    GLO_GL_SUN_vertex = glo_gl_has_extension(exts, exts_i, "GL_SUN_vertex");
    GLO_GL_WIN_phong_shading = glo_gl_has_extension(exts, exts_i, "GL_WIN_phong_shading");
    GLO_GL_WIN_specular_fog = glo_gl_has_extension(exts, exts_i, "GL_WIN_specular_fog");

    glo_gl_free_extensions(exts_i);

    return 1;
}

static int glo_gl_find_core_gl(void) {
    int i;
    const char* version;
    const char* prefixes[] = {
        "OpenGL ES-CM ",
        "OpenGL ES-CL ",
        "OpenGL ES ",
        "OpenGL SC ",
        NULL
    };
    int major = 0;
    int minor = 0;
    version = (const char*) glo_glGetString(GL_VERSION);
    if (!version) return 0;
    for (i = 0;  prefixes[i];  i++) {
        const size_t length = strlen(prefixes[i]);
        if (strncmp(version, prefixes[i], length) == 0) {
            version += length;
            break;
        }
    }

    GLO_IMPL_UTIL_SSCANF(version, "%d.%d", &major, &minor);

    GLO_GL_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
    GLO_GL_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
    GLO_GL_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
    GLO_GL_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
    GLO_GL_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;
    GLO_GL_VERSION_1_5 = (major == 1 && minor >= 5) || major > 1;
    GLO_GL_VERSION_2_0 = (major == 2 && minor >= 0) || major > 2;
    GLO_GL_VERSION_2_1 = (major == 2 && minor >= 1) || major > 2;
    GLO_GL_VERSION_3_0 = (major == 3 && minor >= 0) || major > 3;
    GLO_GL_VERSION_3_1 = (major == 3 && minor >= 1) || major > 3;
    GLO_GL_VERSION_3_2 = (major == 3 && minor >= 2) || major > 3;
    GLO_GL_VERSION_3_3 = (major == 3 && minor >= 3) || major > 3;
    GLO_GL_VERSION_4_0 = (major == 4 && minor >= 0) || major > 4;
    GLO_GL_VERSION_4_1 = (major == 4 && minor >= 1) || major > 4;
    GLO_GL_VERSION_4_2 = (major == 4 && minor >= 2) || major > 4;
    GLO_GL_VERSION_4_3 = (major == 4 && minor >= 3) || major > 4;
    GLO_GL_VERSION_4_4 = (major == 4 && minor >= 4) || major > 4;
    GLO_GL_VERSION_4_5 = (major == 4 && minor >= 5) || major > 4;
    GLO_GL_VERSION_4_6 = (major == 4 && minor >= 6) || major > 4;

    return GLO_MAKE_VERSION(major, minor);
}

int gloLoadGLUserPtr( GLOuserptrloadfunc load, void *userptr) {
    int version;

    glo_glGetString = (PFNGLGETSTRINGPROC) load(userptr, "glGetString");
    if(glo_glGetString == NULL) return 0;
    version = glo_gl_find_core_gl();

    glo_gl_load_GL_VERSION_1_0(load, userptr);
    glo_gl_load_GL_VERSION_1_1(load, userptr);
    glo_gl_load_GL_VERSION_1_2(load, userptr);
    glo_gl_load_GL_VERSION_1_3(load, userptr);
    glo_gl_load_GL_VERSION_1_4(load, userptr);
    glo_gl_load_GL_VERSION_1_5(load, userptr);
    glo_gl_load_GL_VERSION_2_0(load, userptr);
    glo_gl_load_GL_VERSION_2_1(load, userptr);
    glo_gl_load_GL_VERSION_3_0(load, userptr);
    glo_gl_load_GL_VERSION_3_1(load, userptr);
    glo_gl_load_GL_VERSION_3_2(load, userptr);
    glo_gl_load_GL_VERSION_3_3(load, userptr);
    glo_gl_load_GL_VERSION_4_0(load, userptr);
    glo_gl_load_GL_VERSION_4_1(load, userptr);
    glo_gl_load_GL_VERSION_4_2(load, userptr);
    glo_gl_load_GL_VERSION_4_3(load, userptr);
    glo_gl_load_GL_VERSION_4_4(load, userptr);
    glo_gl_load_GL_VERSION_4_5(load, userptr);
    glo_gl_load_GL_VERSION_4_6(load, userptr);

    if (!glo_gl_find_extensions_gl()) return 0;
    glo_gl_load_GL_3DFX_tbuffer(load, userptr);
    glo_gl_load_GL_AMD_debug_output(load, userptr);
    glo_gl_load_GL_AMD_draw_buffers_blend(load, userptr);
    glo_gl_load_GL_AMD_framebuffer_multisample_advanced(load, userptr);
    glo_gl_load_GL_AMD_framebuffer_sample_positions(load, userptr);
    glo_gl_load_GL_AMD_gpu_shader_int64(load, userptr);
    glo_gl_load_GL_AMD_interleaved_elements(load, userptr);
    glo_gl_load_GL_AMD_multi_draw_indirect(load, userptr);
    glo_gl_load_GL_AMD_name_gen_delete(load, userptr);
    glo_gl_load_GL_AMD_occlusion_query_event(load, userptr);
    glo_gl_load_GL_AMD_performance_monitor(load, userptr);
    glo_gl_load_GL_AMD_sample_positions(load, userptr);
    glo_gl_load_GL_AMD_sparse_texture(load, userptr);
    glo_gl_load_GL_AMD_stencil_operation_extended(load, userptr);
    glo_gl_load_GL_AMD_vertex_shader_tessellator(load, userptr);
    glo_gl_load_GL_APPLE_element_array(load, userptr);
    glo_gl_load_GL_APPLE_fence(load, userptr);
    glo_gl_load_GL_APPLE_flush_buffer_range(load, userptr);
    glo_gl_load_GL_APPLE_object_purgeable(load, userptr);
    glo_gl_load_GL_APPLE_texture_range(load, userptr);
    glo_gl_load_GL_APPLE_vertex_array_object(load, userptr);
    glo_gl_load_GL_APPLE_vertex_array_range(load, userptr);
    glo_gl_load_GL_APPLE_vertex_program_evaluators(load, userptr);
    glo_gl_load_GL_ARB_ES2_compatibility(load, userptr);
    glo_gl_load_GL_ARB_ES3_1_compatibility(load, userptr);
    glo_gl_load_GL_ARB_ES3_2_compatibility(load, userptr);
    glo_gl_load_GL_ARB_base_instance(load, userptr);
    glo_gl_load_GL_ARB_bindless_texture(load, userptr);
    glo_gl_load_GL_ARB_blend_func_extended(load, userptr);
    glo_gl_load_GL_ARB_buffer_storage(load, userptr);
    glo_gl_load_GL_ARB_cl_event(load, userptr);
    glo_gl_load_GL_ARB_clear_buffer_object(load, userptr);
    glo_gl_load_GL_ARB_clear_texture(load, userptr);
    glo_gl_load_GL_ARB_clip_control(load, userptr);
    glo_gl_load_GL_ARB_color_buffer_float(load, userptr);
    glo_gl_load_GL_ARB_compute_shader(load, userptr);
    glo_gl_load_GL_ARB_compute_variable_group_size(load, userptr);
    glo_gl_load_GL_ARB_copy_buffer(load, userptr);
    glo_gl_load_GL_ARB_copy_image(load, userptr);
    glo_gl_load_GL_ARB_debug_output(load, userptr);
    glo_gl_load_GL_ARB_direct_state_access(load, userptr);
    glo_gl_load_GL_ARB_draw_buffers(load, userptr);
    glo_gl_load_GL_ARB_draw_buffers_blend(load, userptr);
    glo_gl_load_GL_ARB_draw_elements_base_vertex(load, userptr);
    glo_gl_load_GL_ARB_draw_indirect(load, userptr);
    glo_gl_load_GL_ARB_draw_instanced(load, userptr);
    glo_gl_load_GL_ARB_fragment_program(load, userptr);
    glo_gl_load_GL_ARB_framebuffer_no_attachments(load, userptr);
    glo_gl_load_GL_ARB_framebuffer_object(load, userptr);
    glo_gl_load_GL_ARB_geometry_shader4(load, userptr);
    glo_gl_load_GL_ARB_get_program_binary(load, userptr);
    glo_gl_load_GL_ARB_get_texture_sub_image(load, userptr);
    glo_gl_load_GL_ARB_gl_spirv(load, userptr);
    glo_gl_load_GL_ARB_gpu_shader_fp64(load, userptr);
    glo_gl_load_GL_ARB_gpu_shader_int64(load, userptr);
    glo_gl_load_GL_ARB_imaging(load, userptr);
    glo_gl_load_GL_ARB_indirect_parameters(load, userptr);
    glo_gl_load_GL_ARB_instanced_arrays(load, userptr);
    glo_gl_load_GL_ARB_internalformat_query(load, userptr);
    glo_gl_load_GL_ARB_internalformat_query2(load, userptr);
    glo_gl_load_GL_ARB_invalidate_subdata(load, userptr);
    glo_gl_load_GL_ARB_map_buffer_range(load, userptr);
    glo_gl_load_GL_ARB_matrix_palette(load, userptr);
    glo_gl_load_GL_ARB_multi_bind(load, userptr);
    glo_gl_load_GL_ARB_multi_draw_indirect(load, userptr);
    glo_gl_load_GL_ARB_multisample(load, userptr);
    glo_gl_load_GL_ARB_multitexture(load, userptr);
    glo_gl_load_GL_ARB_occlusion_query(load, userptr);
    glo_gl_load_GL_ARB_parallel_shader_compile(load, userptr);
    glo_gl_load_GL_ARB_point_parameters(load, userptr);
    glo_gl_load_GL_ARB_polygon_offset_clamp(load, userptr);
    glo_gl_load_GL_ARB_program_interface_query(load, userptr);
    glo_gl_load_GL_ARB_provoking_vertex(load, userptr);
    glo_gl_load_GL_ARB_robustness(load, userptr);
    glo_gl_load_GL_ARB_sample_locations(load, userptr);
    glo_gl_load_GL_ARB_sample_shading(load, userptr);
    glo_gl_load_GL_ARB_sampler_objects(load, userptr);
    glo_gl_load_GL_ARB_separate_shader_objects(load, userptr);
    glo_gl_load_GL_ARB_shader_atomic_counters(load, userptr);
    glo_gl_load_GL_ARB_shader_image_load_store(load, userptr);
    glo_gl_load_GL_ARB_shader_objects(load, userptr);
    glo_gl_load_GL_ARB_shader_storage_buffer_object(load, userptr);
    glo_gl_load_GL_ARB_shader_subroutine(load, userptr);
    glo_gl_load_GL_ARB_shading_language_include(load, userptr);
    glo_gl_load_GL_ARB_sparse_buffer(load, userptr);
    glo_gl_load_GL_ARB_sparse_texture(load, userptr);
    glo_gl_load_GL_ARB_sync(load, userptr);
    glo_gl_load_GL_ARB_tessellation_shader(load, userptr);
    glo_gl_load_GL_ARB_texture_barrier(load, userptr);
    glo_gl_load_GL_ARB_texture_buffer_object(load, userptr);
    glo_gl_load_GL_ARB_texture_buffer_range(load, userptr);
    glo_gl_load_GL_ARB_texture_compression(load, userptr);
    glo_gl_load_GL_ARB_texture_multisample(load, userptr);
    glo_gl_load_GL_ARB_texture_storage(load, userptr);
    glo_gl_load_GL_ARB_texture_storage_multisample(load, userptr);
    glo_gl_load_GL_ARB_texture_view(load, userptr);
    glo_gl_load_GL_ARB_timer_query(load, userptr);
    glo_gl_load_GL_ARB_transform_feedback2(load, userptr);
    glo_gl_load_GL_ARB_transform_feedback3(load, userptr);
    glo_gl_load_GL_ARB_transform_feedback_instanced(load, userptr);
    glo_gl_load_GL_ARB_transpose_matrix(load, userptr);
    glo_gl_load_GL_ARB_uniform_buffer_object(load, userptr);
    glo_gl_load_GL_ARB_vertex_array_object(load, userptr);
    glo_gl_load_GL_ARB_vertex_attrib_64bit(load, userptr);
    glo_gl_load_GL_ARB_vertex_attrib_binding(load, userptr);
    glo_gl_load_GL_ARB_vertex_blend(load, userptr);
    glo_gl_load_GL_ARB_vertex_buffer_object(load, userptr);
    glo_gl_load_GL_ARB_vertex_program(load, userptr);
    glo_gl_load_GL_ARB_vertex_shader(load, userptr);
    glo_gl_load_GL_ARB_vertex_type_2_10_10_10_rev(load, userptr);
    glo_gl_load_GL_ARB_viewport_array(load, userptr);
    glo_gl_load_GL_ARB_window_pos(load, userptr);
    glo_gl_load_GL_ATI_draw_buffers(load, userptr);
    glo_gl_load_GL_ATI_element_array(load, userptr);
    glo_gl_load_GL_ATI_envmap_bumpmap(load, userptr);
    glo_gl_load_GL_ATI_fragment_shader(load, userptr);
    glo_gl_load_GL_ATI_map_object_buffer(load, userptr);
    glo_gl_load_GL_ATI_pn_triangles(load, userptr);
    glo_gl_load_GL_ATI_separate_stencil(load, userptr);
    glo_gl_load_GL_ATI_vertex_array_object(load, userptr);
    glo_gl_load_GL_ATI_vertex_attrib_array_object(load, userptr);
    glo_gl_load_GL_ATI_vertex_streams(load, userptr);
    glo_gl_load_GL_EXT_EGL_image_storage(load, userptr);
    glo_gl_load_GL_EXT_bindable_uniform(load, userptr);
    glo_gl_load_GL_EXT_blend_color(load, userptr);
    glo_gl_load_GL_EXT_blend_equation_separate(load, userptr);
    glo_gl_load_GL_EXT_blend_func_separate(load, userptr);
    glo_gl_load_GL_EXT_blend_minmax(load, userptr);
    glo_gl_load_GL_EXT_color_subtable(load, userptr);
    glo_gl_load_GL_EXT_compiled_vertex_array(load, userptr);
    glo_gl_load_GL_EXT_convolution(load, userptr);
    glo_gl_load_GL_EXT_coordinate_frame(load, userptr);
    glo_gl_load_GL_EXT_copy_texture(load, userptr);
    glo_gl_load_GL_EXT_cull_vertex(load, userptr);
    glo_gl_load_GL_EXT_debug_label(load, userptr);
    glo_gl_load_GL_EXT_debug_marker(load, userptr);
    glo_gl_load_GL_EXT_depth_bounds_test(load, userptr);
    glo_gl_load_GL_EXT_direct_state_access(load, userptr);
    glo_gl_load_GL_EXT_draw_buffers2(load, userptr);
    glo_gl_load_GL_EXT_draw_instanced(load, userptr);
    glo_gl_load_GL_EXT_draw_range_elements(load, userptr);
    glo_gl_load_GL_EXT_external_buffer(load, userptr);
    glo_gl_load_GL_EXT_fog_coord(load, userptr);
    glo_gl_load_GL_EXT_fragment_shading_rate(load, userptr);
    glo_gl_load_GL_EXT_framebuffer_blit(load, userptr);
    glo_gl_load_GL_EXT_framebuffer_blit_layers(load, userptr);
    glo_gl_load_GL_EXT_framebuffer_multisample(load, userptr);
    glo_gl_load_GL_EXT_framebuffer_object(load, userptr);
    glo_gl_load_GL_EXT_geometry_shader4(load, userptr);
    glo_gl_load_GL_EXT_gpu_program_parameters(load, userptr);
    glo_gl_load_GL_EXT_gpu_shader4(load, userptr);
    glo_gl_load_GL_EXT_histogram(load, userptr);
    glo_gl_load_GL_EXT_index_func(load, userptr);
    glo_gl_load_GL_EXT_index_material(load, userptr);
    glo_gl_load_GL_EXT_light_texture(load, userptr);
    glo_gl_load_GL_EXT_memory_object(load, userptr);
    glo_gl_load_GL_EXT_memory_object_fd(load, userptr);
    glo_gl_load_GL_EXT_memory_object_win32(load, userptr);
    glo_gl_load_GL_EXT_mesh_shader(load, userptr);
    glo_gl_load_GL_EXT_multi_draw_arrays(load, userptr);
    glo_gl_load_GL_EXT_multisample(load, userptr);
    glo_gl_load_GL_EXT_paletted_texture(load, userptr);
    glo_gl_load_GL_EXT_pixel_transform(load, userptr);
    glo_gl_load_GL_EXT_point_parameters(load, userptr);
    glo_gl_load_GL_EXT_polygon_offset(load, userptr);
    glo_gl_load_GL_EXT_polygon_offset_clamp(load, userptr);
    glo_gl_load_GL_EXT_provoking_vertex(load, userptr);
    glo_gl_load_GL_EXT_raster_multisample(load, userptr);
    glo_gl_load_GL_EXT_secondary_color(load, userptr);
    glo_gl_load_GL_EXT_semaphore(load, userptr);
    glo_gl_load_GL_EXT_semaphore_fd(load, userptr);
    glo_gl_load_GL_EXT_semaphore_win32(load, userptr);
    glo_gl_load_GL_EXT_separate_shader_objects(load, userptr);
    glo_gl_load_GL_EXT_shader_framebuffer_fetch_non_coherent(load, userptr);
    glo_gl_load_GL_EXT_shader_image_load_store(load, userptr);
    glo_gl_load_GL_EXT_stencil_clear_tag(load, userptr);
    glo_gl_load_GL_EXT_stencil_two_side(load, userptr);
    glo_gl_load_GL_EXT_subtexture(load, userptr);
    glo_gl_load_GL_EXT_texture3D(load, userptr);
    glo_gl_load_GL_EXT_texture_array(load, userptr);
    glo_gl_load_GL_EXT_texture_buffer_object(load, userptr);
    glo_gl_load_GL_EXT_texture_integer(load, userptr);
    glo_gl_load_GL_EXT_texture_object(load, userptr);
    glo_gl_load_GL_EXT_texture_perturb_normal(load, userptr);
    glo_gl_load_GL_EXT_texture_storage(load, userptr);
    glo_gl_load_GL_EXT_timer_query(load, userptr);
    glo_gl_load_GL_EXT_transform_feedback(load, userptr);
    glo_gl_load_GL_EXT_vertex_array(load, userptr);
    glo_gl_load_GL_EXT_vertex_attrib_64bit(load, userptr);
    glo_gl_load_GL_EXT_vertex_shader(load, userptr);
    glo_gl_load_GL_EXT_vertex_weighting(load, userptr);
    glo_gl_load_GL_EXT_win32_keyed_mutex(load, userptr);
    glo_gl_load_GL_EXT_window_rectangles(load, userptr);
    glo_gl_load_GL_EXT_x11_sync_object(load, userptr);
    glo_gl_load_GL_GREMEDY_frame_terminator(load, userptr);
    glo_gl_load_GL_GREMEDY_string_marker(load, userptr);
    glo_gl_load_GL_HP_image_transform(load, userptr);
    glo_gl_load_GL_IBM_multimode_draw_arrays(load, userptr);
    glo_gl_load_GL_IBM_static_data(load, userptr);
    glo_gl_load_GL_IBM_vertex_array_lists(load, userptr);
    glo_gl_load_GL_INGR_blend_func_separate(load, userptr);
    glo_gl_load_GL_INTEL_framebuffer_CMAA(load, userptr);
    glo_gl_load_GL_INTEL_map_texture(load, userptr);
    glo_gl_load_GL_INTEL_parallel_arrays(load, userptr);
    glo_gl_load_GL_INTEL_performance_query(load, userptr);
    glo_gl_load_GL_KHR_blend_equation_advanced(load, userptr);
    glo_gl_load_GL_KHR_debug(load, userptr);
    glo_gl_load_GL_KHR_parallel_shader_compile(load, userptr);
    glo_gl_load_GL_KHR_robustness(load, userptr);
    glo_gl_load_GL_MESA_framebuffer_flip_y(load, userptr);
    glo_gl_load_GL_MESA_resize_buffers(load, userptr);
    glo_gl_load_GL_MESA_window_pos(load, userptr);
    glo_gl_load_GL_NVX_conditional_render(load, userptr);
    glo_gl_load_GL_NVX_gpu_multicast2(load, userptr);
    glo_gl_load_GL_NVX_linked_gpu_multicast(load, userptr);
    glo_gl_load_GL_NVX_progress_fence(load, userptr);
    glo_gl_load_GL_NV_alpha_to_coverage_dither_control(load, userptr);
    glo_gl_load_GL_NV_bindless_multi_draw_indirect(load, userptr);
    glo_gl_load_GL_NV_bindless_multi_draw_indirect_count(load, userptr);
    glo_gl_load_GL_NV_bindless_texture(load, userptr);
    glo_gl_load_GL_NV_blend_equation_advanced(load, userptr);
    glo_gl_load_GL_NV_clip_space_w_scaling(load, userptr);
    glo_gl_load_GL_NV_command_list(load, userptr);
    glo_gl_load_GL_NV_conditional_render(load, userptr);
    glo_gl_load_GL_NV_conservative_raster(load, userptr);
    glo_gl_load_GL_NV_conservative_raster_dilate(load, userptr);
    glo_gl_load_GL_NV_conservative_raster_pre_snap_triangles(load, userptr);
    glo_gl_load_GL_NV_copy_image(load, userptr);
    glo_gl_load_GL_NV_depth_buffer_float(load, userptr);
    glo_gl_load_GL_NV_draw_texture(load, userptr);
    glo_gl_load_GL_NV_draw_vulkan_image(load, userptr);
    glo_gl_load_GL_NV_evaluators(load, userptr);
    glo_gl_load_GL_NV_explicit_multisample(load, userptr);
    glo_gl_load_GL_NV_fence(load, userptr);
    glo_gl_load_GL_NV_fragment_coverage_to_color(load, userptr);
    glo_gl_load_GL_NV_fragment_program(load, userptr);
    glo_gl_load_GL_NV_framebuffer_mixed_samples(load, userptr);
    glo_gl_load_GL_NV_framebuffer_multisample_coverage(load, userptr);
    glo_gl_load_GL_NV_geometry_program4(load, userptr);
    glo_gl_load_GL_NV_gpu_multicast(load, userptr);
    glo_gl_load_GL_NV_gpu_program4(load, userptr);
    glo_gl_load_GL_NV_gpu_program5(load, userptr);
    glo_gl_load_GL_NV_gpu_shader5(load, userptr);
    glo_gl_load_GL_NV_half_float(load, userptr);
    glo_gl_load_GL_NV_internalformat_sample_query(load, userptr);
    glo_gl_load_GL_NV_memory_attachment(load, userptr);
    glo_gl_load_GL_NV_memory_object_sparse(load, userptr);
    glo_gl_load_GL_NV_mesh_shader(load, userptr);
    glo_gl_load_GL_NV_occlusion_query(load, userptr);
    glo_gl_load_GL_NV_parameter_buffer_object(load, userptr);
    glo_gl_load_GL_NV_path_rendering(load, userptr);
    glo_gl_load_GL_NV_pixel_data_range(load, userptr);
    glo_gl_load_GL_NV_point_sprite(load, userptr);
    glo_gl_load_GL_NV_present_video(load, userptr);
    glo_gl_load_GL_NV_primitive_restart(load, userptr);
    glo_gl_load_GL_NV_query_resource(load, userptr);
    glo_gl_load_GL_NV_query_resource_tag(load, userptr);
    glo_gl_load_GL_NV_register_combiners(load, userptr);
    glo_gl_load_GL_NV_register_combiners2(load, userptr);
    glo_gl_load_GL_NV_sample_locations(load, userptr);
    glo_gl_load_GL_NV_scissor_exclusive(load, userptr);
    glo_gl_load_GL_NV_shader_buffer_load(load, userptr);
    glo_gl_load_GL_NV_shading_rate_image(load, userptr);
    glo_gl_load_GL_NV_texture_barrier(load, userptr);
    glo_gl_load_GL_NV_texture_multisample(load, userptr);
    glo_gl_load_GL_NV_timeline_semaphore(load, userptr);
    glo_gl_load_GL_NV_transform_feedback(load, userptr);
    glo_gl_load_GL_NV_transform_feedback2(load, userptr);
    glo_gl_load_GL_NV_vdpau_interop(load, userptr);
    glo_gl_load_GL_NV_vdpau_interop2(load, userptr);
    glo_gl_load_GL_NV_vertex_array_range(load, userptr);
    glo_gl_load_GL_NV_vertex_attrib_integer_64bit(load, userptr);
    glo_gl_load_GL_NV_vertex_buffer_unified_memory(load, userptr);
    glo_gl_load_GL_NV_vertex_program(load, userptr);
    glo_gl_load_GL_NV_vertex_program4(load, userptr);
    glo_gl_load_GL_NV_video_capture(load, userptr);
    glo_gl_load_GL_NV_viewport_swizzle(load, userptr);
    glo_gl_load_GL_OES_byte_coordinates(load, userptr);
    glo_gl_load_GL_OES_fixed_point(load, userptr);
    glo_gl_load_GL_OES_query_matrix(load, userptr);
    glo_gl_load_GL_OES_single_precision(load, userptr);
    glo_gl_load_GL_OVR_multiview(load, userptr);
    glo_gl_load_GL_PGI_misc_hints(load, userptr);
    glo_gl_load_GL_SGIS_detail_texture(load, userptr);
    glo_gl_load_GL_SGIS_fog_function(load, userptr);
    glo_gl_load_GL_SGIS_multisample(load, userptr);
    glo_gl_load_GL_SGIS_pixel_texture(load, userptr);
    glo_gl_load_GL_SGIS_point_parameters(load, userptr);
    glo_gl_load_GL_SGIS_sharpen_texture(load, userptr);
    glo_gl_load_GL_SGIS_texture4D(load, userptr);
    glo_gl_load_GL_SGIS_texture_color_mask(load, userptr);
    glo_gl_load_GL_SGIS_texture_filter4(load, userptr);
    glo_gl_load_GL_SGIX_async(load, userptr);
    glo_gl_load_GL_SGIX_flush_raster(load, userptr);
    glo_gl_load_GL_SGIX_fragment_lighting(load, userptr);
    glo_gl_load_GL_SGIX_framezoom(load, userptr);
    glo_gl_load_GL_SGIX_igloo_interface(load, userptr);
    glo_gl_load_GL_SGIX_instruments(load, userptr);
    glo_gl_load_GL_SGIX_list_priority(load, userptr);
    glo_gl_load_GL_SGIX_pixel_texture(load, userptr);
    glo_gl_load_GL_SGIX_polynomial_ffd(load, userptr);
    glo_gl_load_GL_SGIX_reference_plane(load, userptr);
    glo_gl_load_GL_SGIX_sprite(load, userptr);
    glo_gl_load_GL_SGIX_tag_sample_buffer(load, userptr);
    glo_gl_load_GL_SGI_color_table(load, userptr);
    glo_gl_load_GL_SUNX_constant_data(load, userptr);
    glo_gl_load_GL_SUN_global_alpha(load, userptr);
    glo_gl_load_GL_SUN_mesh_array(load, userptr);
    glo_gl_load_GL_SUN_triangle_list(load, userptr);
    glo_gl_load_GL_SUN_vertex(load, userptr);



    return version;
}


int gloLoadGL( GLOloadfunc load) {
    return gloLoadGLUserPtr( glo_gl_get_proc_from_userptr, GLO_GNUC_EXTENSION (void*) load);
}



 

#ifdef GLO_GL

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

typedef void* (GLO_API_PTR *GLOglprocaddrfunc)(const char*);
struct _glo_gl_userptr {
    void *handle;
    GLOglprocaddrfunc gl_get_proc_address_ptr;
};

static GLOapiproc glo_gl_get_proc(void *vuserptr, const char *name) {
    struct _glo_gl_userptr userptr = *(struct _glo_gl_userptr*) vuserptr;
    GLOapiproc result = NULL;

    if(userptr.gl_get_proc_address_ptr != NULL) {
        result = GLO_GNUC_EXTENSION (GLOapiproc) userptr.gl_get_proc_address_ptr(name);
    }
    if(result == NULL) {
        result = glo_dlsym_handle(userptr.handle, name);
    }

    return result;
}

static void* _glo_GL_loader_handle = NULL;

static void* glo_gl_dlopen_handle(void) {
#if GLO_PLATFORM_APPLE
    static const char *NAMES[] = {
        "../Frameworks/OpenGL.framework/OpenGL",
        "/Library/Frameworks/OpenGL.framework/OpenGL",
        "/System/Library/Frameworks/OpenGL.framework/OpenGL",
        "/System/Library/Frameworks/OpenGL.framework/Versions/Current/OpenGL"
    };
#elif GLO_PLATFORM_WIN32
    static const char *NAMES[] = {"opengl32.dll"};
#else
    static const char *NAMES[] = {
  #if defined(__CYGWIN__)
        "libGL-1.so",
  #endif
        "libGL.so.1",
        "libGL.so"
    };
#endif

    if (_glo_GL_loader_handle == NULL) {
        _glo_GL_loader_handle = glo_get_dlopen_handle(NAMES, sizeof(NAMES) / sizeof(NAMES[0]));
    }

    return _glo_GL_loader_handle;
}

static struct _glo_gl_userptr glo_gl_build_userptr(void *handle) {
    struct _glo_gl_userptr userptr;

    userptr.handle = handle;
#if GLO_PLATFORM_APPLE || defined(__HAIKU__)
    userptr.gl_get_proc_address_ptr = NULL;
#elif GLO_PLATFORM_WIN32
    userptr.gl_get_proc_address_ptr =
        (GLOglprocaddrfunc) glo_dlsym_handle(handle, "wglGetProcAddress");
#else
    userptr.gl_get_proc_address_ptr =
        (GLOglprocaddrfunc) glo_dlsym_handle(handle, "glXGetProcAddressARB");
#endif

    return userptr;
}

int gloLoaderLoadGL(void) {
    int version = 0;
    void *handle;
    int did_load = 0;
    struct _glo_gl_userptr userptr;

    did_load = _glo_GL_loader_handle == NULL;
    handle = glo_gl_dlopen_handle();
    if (handle) {
        userptr = glo_gl_build_userptr(handle);

        version = gloLoadGLUserPtr(glo_gl_get_proc, &userptr);

        if (did_load) {
            gloLoaderUnloadGL();
        }
    }

    return version;
}



void gloLoaderUnloadGL(void) {
    if (_glo_GL_loader_handle != NULL) {
        glo_close_dlopen_handle(_glo_GL_loader_handle);
        _glo_GL_loader_handle = NULL;
    }
}

#endif /* GLO_GL */

#ifdef __cplusplus
}
#endif
