/**
 * SPDX-License-Identifier: (WTFPL OR CC0-1.0) AND Apache-2.0
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glext/vulkan.h>

#ifndef GLEXT_IMPL_UTIL_C_
#define GLEXT_IMPL_UTIL_C_

#ifdef _MSC_VER
#define GLEXT_IMPL_UTIL_SSCANF sscanf_s
#else
#define GLEXT_IMPL_UTIL_SSCANF sscanf
#endif

#endif /* GLEXT_IMPL_UTIL_C_ */

#ifdef __cplusplus
extern "C" {
#endif

int GLEXT_VK_VERSION_1_0 = 0;
int GLEXT_VK_VERSION_1_1 = 0;
int GLEXT_VK_VERSION_1_2 = 0;
int GLEXT_VK_VERSION_1_3 = 0;
int GLEXT_VK_VERSION_1_4 = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLEXT_VK_AMDX_dense_geometry_format = 0;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLEXT_VK_AMDX_shader_enqueue = 0;

#endif
int GLEXT_VK_AMD_anti_lag = 0;
int GLEXT_VK_AMD_buffer_marker = 0;
int GLEXT_VK_AMD_device_coherent_memory = 0;
int GLEXT_VK_AMD_display_native_hdr = 0;
int GLEXT_VK_AMD_draw_indirect_count = 0;
int GLEXT_VK_AMD_gcn_shader = 0;
int GLEXT_VK_AMD_gpu_shader_half_float = 0;
int GLEXT_VK_AMD_gpu_shader_int16 = 0;
int GLEXT_VK_AMD_memory_overallocation_behavior = 0;
int GLEXT_VK_AMD_mixed_attachment_samples = 0;
int GLEXT_VK_AMD_negative_viewport_height = 0;
int GLEXT_VK_AMD_pipeline_compiler_control = 0;
int GLEXT_VK_AMD_rasterization_order = 0;
int GLEXT_VK_AMD_shader_ballot = 0;
int GLEXT_VK_AMD_shader_core_properties = 0;
int GLEXT_VK_AMD_shader_core_properties2 = 0;
int GLEXT_VK_AMD_shader_early_and_late_fragment_tests = 0;
int GLEXT_VK_AMD_shader_explicit_vertex_parameter = 0;
int GLEXT_VK_AMD_shader_fragment_mask = 0;
int GLEXT_VK_AMD_shader_image_load_store_lod = 0;
int GLEXT_VK_AMD_shader_info = 0;
int GLEXT_VK_AMD_shader_trinary_minmax = 0;
int GLEXT_VK_AMD_texture_gather_bias_lod = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLEXT_VK_ANDROID_external_format_resolve = 0;

#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLEXT_VK_ANDROID_external_memory_android_hardware_buffer = 0;

#endif
int GLEXT_VK_ARM_data_graph = 0;
int GLEXT_VK_ARM_format_pack = 0;
int GLEXT_VK_ARM_pipeline_opacity_micromap = 0;
int GLEXT_VK_ARM_rasterization_order_attachment_access = 0;
int GLEXT_VK_ARM_render_pass_striped = 0;
int GLEXT_VK_ARM_scheduling_controls = 0;
int GLEXT_VK_ARM_shader_core_builtins = 0;
int GLEXT_VK_ARM_shader_core_properties = 0;
int GLEXT_VK_ARM_tensors = 0;
int GLEXT_VK_EXT_4444_formats = 0;
int GLEXT_VK_EXT_acquire_drm_display = 0;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
int GLEXT_VK_EXT_acquire_xlib_display = 0;

#endif
int GLEXT_VK_EXT_astc_decode_mode = 0;
int GLEXT_VK_EXT_attachment_feedback_loop_dynamic_state = 0;
int GLEXT_VK_EXT_attachment_feedback_loop_layout = 0;
int GLEXT_VK_EXT_blend_operation_advanced = 0;
int GLEXT_VK_EXT_border_color_swizzle = 0;
int GLEXT_VK_EXT_buffer_device_address = 0;
int GLEXT_VK_EXT_calibrated_timestamps = 0;
int GLEXT_VK_EXT_color_write_enable = 0;
int GLEXT_VK_EXT_conditional_rendering = 0;
int GLEXT_VK_EXT_conservative_rasterization = 0;
int GLEXT_VK_EXT_custom_border_color = 0;
int GLEXT_VK_EXT_debug_marker = 0;
int GLEXT_VK_EXT_debug_report = 0;
int GLEXT_VK_EXT_debug_utils = 0;
int GLEXT_VK_EXT_depth_bias_control = 0;
int GLEXT_VK_EXT_depth_clamp_control = 0;
int GLEXT_VK_EXT_depth_clamp_zero_one = 0;
int GLEXT_VK_EXT_depth_clip_control = 0;
int GLEXT_VK_EXT_depth_clip_enable = 0;
int GLEXT_VK_EXT_depth_range_unrestricted = 0;
int GLEXT_VK_EXT_descriptor_buffer = 0;
int GLEXT_VK_EXT_descriptor_indexing = 0;
int GLEXT_VK_EXT_device_address_binding_report = 0;
int GLEXT_VK_EXT_device_fault = 0;
int GLEXT_VK_EXT_device_generated_commands = 0;
int GLEXT_VK_EXT_device_memory_report = 0;
int GLEXT_VK_EXT_direct_mode_display = 0;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
int GLEXT_VK_EXT_directfb_surface = 0;

#endif
int GLEXT_VK_EXT_discard_rectangles = 0;
int GLEXT_VK_EXT_display_control = 0;
int GLEXT_VK_EXT_display_surface_counter = 0;
int GLEXT_VK_EXT_dynamic_rendering_unused_attachments = 0;
int GLEXT_VK_EXT_extended_dynamic_state = 0;
int GLEXT_VK_EXT_extended_dynamic_state2 = 0;
int GLEXT_VK_EXT_extended_dynamic_state3 = 0;
int GLEXT_VK_EXT_external_memory_acquire_unmodified = 0;
int GLEXT_VK_EXT_external_memory_dma_buf = 0;
int GLEXT_VK_EXT_external_memory_host = 0;
#if defined(VK_USE_PLATFORM_METAL_EXT)
int GLEXT_VK_EXT_external_memory_metal = 0;

#endif
int GLEXT_VK_EXT_filter_cubic = 0;
int GLEXT_VK_EXT_fragment_density_map = 0;
int GLEXT_VK_EXT_fragment_density_map2 = 0;
int GLEXT_VK_EXT_fragment_density_map_offset = 0;
int GLEXT_VK_EXT_fragment_shader_interlock = 0;
int GLEXT_VK_EXT_frame_boundary = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_EXT_full_screen_exclusive = 0;

#endif
int GLEXT_VK_EXT_global_priority = 0;
int GLEXT_VK_EXT_global_priority_query = 0;
int GLEXT_VK_EXT_graphics_pipeline_library = 0;
int GLEXT_VK_EXT_hdr_metadata = 0;
int GLEXT_VK_EXT_headless_surface = 0;
int GLEXT_VK_EXT_host_image_copy = 0;
int GLEXT_VK_EXT_host_query_reset = 0;
int GLEXT_VK_EXT_image_2d_view_of_3d = 0;
int GLEXT_VK_EXT_image_compression_control = 0;
int GLEXT_VK_EXT_image_compression_control_swapchain = 0;
int GLEXT_VK_EXT_image_drm_format_modifier = 0;
int GLEXT_VK_EXT_image_robustness = 0;
int GLEXT_VK_EXT_image_sliced_view_of_3d = 0;
int GLEXT_VK_EXT_image_view_min_lod = 0;
int GLEXT_VK_EXT_index_type_uint8 = 0;
int GLEXT_VK_EXT_inline_uniform_block = 0;
int GLEXT_VK_EXT_layer_settings = 0;
int GLEXT_VK_EXT_legacy_dithering = 0;
int GLEXT_VK_EXT_legacy_vertex_attributes = 0;
int GLEXT_VK_EXT_line_rasterization = 0;
int GLEXT_VK_EXT_load_store_op_none = 0;
int GLEXT_VK_EXT_map_memory_placed = 0;
int GLEXT_VK_EXT_memory_budget = 0;
int GLEXT_VK_EXT_memory_priority = 0;
int GLEXT_VK_EXT_mesh_shader = 0;
#if defined(VK_USE_PLATFORM_METAL_EXT)
int GLEXT_VK_EXT_metal_objects = 0;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
int GLEXT_VK_EXT_metal_surface = 0;

#endif
int GLEXT_VK_EXT_multi_draw = 0;
int GLEXT_VK_EXT_multisampled_render_to_single_sampled = 0;
int GLEXT_VK_EXT_mutable_descriptor_type = 0;
int GLEXT_VK_EXT_nested_command_buffer = 0;
int GLEXT_VK_EXT_non_seamless_cube_map = 0;
int GLEXT_VK_EXT_opacity_micromap = 0;
int GLEXT_VK_EXT_pageable_device_local_memory = 0;
int GLEXT_VK_EXT_pci_bus_info = 0;
int GLEXT_VK_EXT_physical_device_drm = 0;
int GLEXT_VK_EXT_pipeline_creation_cache_control = 0;
int GLEXT_VK_EXT_pipeline_creation_feedback = 0;
int GLEXT_VK_EXT_pipeline_library_group_handles = 0;
int GLEXT_VK_EXT_pipeline_properties = 0;
int GLEXT_VK_EXT_pipeline_protected_access = 0;
int GLEXT_VK_EXT_pipeline_robustness = 0;
int GLEXT_VK_EXT_post_depth_coverage = 0;
int GLEXT_VK_EXT_present_mode_fifo_latest_ready = 0;
int GLEXT_VK_EXT_primitive_topology_list_restart = 0;
int GLEXT_VK_EXT_primitives_generated_query = 0;
int GLEXT_VK_EXT_private_data = 0;
int GLEXT_VK_EXT_provoking_vertex = 0;
int GLEXT_VK_EXT_queue_family_foreign = 0;
int GLEXT_VK_EXT_rasterization_order_attachment_access = 0;
int GLEXT_VK_EXT_rgba10x6_formats = 0;
int GLEXT_VK_EXT_robustness2 = 0;
int GLEXT_VK_EXT_sample_locations = 0;
int GLEXT_VK_EXT_sampler_filter_minmax = 0;
int GLEXT_VK_EXT_scalar_block_layout = 0;
int GLEXT_VK_EXT_separate_stencil_usage = 0;
int GLEXT_VK_EXT_shader_atomic_float = 0;
int GLEXT_VK_EXT_shader_atomic_float2 = 0;
int GLEXT_VK_EXT_shader_demote_to_helper_invocation = 0;
int GLEXT_VK_EXT_shader_float8 = 0;
int GLEXT_VK_EXT_shader_image_atomic_int64 = 0;
int GLEXT_VK_EXT_shader_module_identifier = 0;
int GLEXT_VK_EXT_shader_object = 0;
int GLEXT_VK_EXT_shader_replicated_composites = 0;
int GLEXT_VK_EXT_shader_stencil_export = 0;
int GLEXT_VK_EXT_shader_subgroup_ballot = 0;
int GLEXT_VK_EXT_shader_subgroup_vote = 0;
int GLEXT_VK_EXT_shader_tile_image = 0;
int GLEXT_VK_EXT_shader_viewport_index_layer = 0;
int GLEXT_VK_EXT_subgroup_size_control = 0;
int GLEXT_VK_EXT_subpass_merge_feedback = 0;
int GLEXT_VK_EXT_surface_maintenance1 = 0;
int GLEXT_VK_EXT_swapchain_colorspace = 0;
int GLEXT_VK_EXT_swapchain_maintenance1 = 0;
int GLEXT_VK_EXT_texel_buffer_alignment = 0;
int GLEXT_VK_EXT_texture_compression_astc_hdr = 0;
int GLEXT_VK_EXT_tooling_info = 0;
int GLEXT_VK_EXT_transform_feedback = 0;
int GLEXT_VK_EXT_validation_cache = 0;
int GLEXT_VK_EXT_validation_features = 0;
int GLEXT_VK_EXT_validation_flags = 0;
int GLEXT_VK_EXT_vertex_attribute_divisor = 0;
int GLEXT_VK_EXT_vertex_attribute_robustness = 0;
int GLEXT_VK_EXT_vertex_input_dynamic_state = 0;
int GLEXT_VK_EXT_ycbcr_2plane_444_formats = 0;
int GLEXT_VK_EXT_ycbcr_image_arrays = 0;
int GLEXT_VK_EXT_zero_initialize_device_memory = 0;
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLEXT_VK_FUCHSIA_buffer_collection = 0;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLEXT_VK_FUCHSIA_external_memory = 0;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLEXT_VK_FUCHSIA_external_semaphore = 0;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
int GLEXT_VK_FUCHSIA_imagepipe_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_GGP)
int GLEXT_VK_GGP_frame_token = 0;

#endif
#if defined(VK_USE_PLATFORM_GGP)
int GLEXT_VK_GGP_stream_descriptor_surface = 0;

#endif
int GLEXT_VK_GOOGLE_decorate_string = 0;
int GLEXT_VK_GOOGLE_display_timing = 0;
int GLEXT_VK_GOOGLE_hlsl_functionality1 = 0;
int GLEXT_VK_GOOGLE_surfaceless_query = 0;
int GLEXT_VK_GOOGLE_user_type = 0;
int GLEXT_VK_HUAWEI_cluster_culling_shader = 0;
int GLEXT_VK_HUAWEI_hdr_vivid = 0;
int GLEXT_VK_HUAWEI_invocation_mask = 0;
int GLEXT_VK_HUAWEI_subpass_shading = 0;
int GLEXT_VK_IMG_filter_cubic = 0;
int GLEXT_VK_IMG_format_pvrtc = 0;
int GLEXT_VK_IMG_relaxed_line_rasterization = 0;
int GLEXT_VK_INTEL_performance_query = 0;
int GLEXT_VK_INTEL_shader_integer_functions2 = 0;
int GLEXT_VK_KHR_16bit_storage = 0;
int GLEXT_VK_KHR_8bit_storage = 0;
int GLEXT_VK_KHR_acceleration_structure = 0;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
int GLEXT_VK_KHR_android_surface = 0;

#endif
int GLEXT_VK_KHR_bind_memory2 = 0;
int GLEXT_VK_KHR_buffer_device_address = 0;
int GLEXT_VK_KHR_calibrated_timestamps = 0;
int GLEXT_VK_KHR_compute_shader_derivatives = 0;
int GLEXT_VK_KHR_cooperative_matrix = 0;
int GLEXT_VK_KHR_copy_commands2 = 0;
int GLEXT_VK_KHR_copy_memory_indirect = 0;
int GLEXT_VK_KHR_create_renderpass2 = 0;
int GLEXT_VK_KHR_dedicated_allocation = 0;
int GLEXT_VK_KHR_deferred_host_operations = 0;
int GLEXT_VK_KHR_depth_clamp_zero_one = 0;
int GLEXT_VK_KHR_depth_stencil_resolve = 0;
int GLEXT_VK_KHR_descriptor_update_template = 0;
int GLEXT_VK_KHR_device_group = 0;
int GLEXT_VK_KHR_device_group_creation = 0;
int GLEXT_VK_KHR_display = 0;
int GLEXT_VK_KHR_display_swapchain = 0;
int GLEXT_VK_KHR_draw_indirect_count = 0;
int GLEXT_VK_KHR_driver_properties = 0;
int GLEXT_VK_KHR_dynamic_rendering = 0;
int GLEXT_VK_KHR_dynamic_rendering_local_read = 0;
int GLEXT_VK_KHR_external_fence = 0;
int GLEXT_VK_KHR_external_fence_capabilities = 0;
int GLEXT_VK_KHR_external_fence_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_KHR_external_fence_win32 = 0;

#endif
int GLEXT_VK_KHR_external_memory = 0;
int GLEXT_VK_KHR_external_memory_capabilities = 0;
int GLEXT_VK_KHR_external_memory_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_KHR_external_memory_win32 = 0;

#endif
int GLEXT_VK_KHR_external_semaphore = 0;
int GLEXT_VK_KHR_external_semaphore_capabilities = 0;
int GLEXT_VK_KHR_external_semaphore_fd = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_KHR_external_semaphore_win32 = 0;

#endif
int GLEXT_VK_KHR_format_feature_flags2 = 0;
int GLEXT_VK_KHR_fragment_shader_barycentric = 0;
int GLEXT_VK_KHR_fragment_shading_rate = 0;
int GLEXT_VK_KHR_get_display_properties2 = 0;
int GLEXT_VK_KHR_get_memory_requirements2 = 0;
int GLEXT_VK_KHR_get_physical_device_properties2 = 0;
int GLEXT_VK_KHR_get_surface_capabilities2 = 0;
int GLEXT_VK_KHR_global_priority = 0;
int GLEXT_VK_KHR_image_format_list = 0;
int GLEXT_VK_KHR_imageless_framebuffer = 0;
int GLEXT_VK_KHR_incremental_present = 0;
int GLEXT_VK_KHR_index_type_uint8 = 0;
int GLEXT_VK_KHR_line_rasterization = 0;
int GLEXT_VK_KHR_load_store_op_none = 0;
int GLEXT_VK_KHR_maintenance1 = 0;
int GLEXT_VK_KHR_maintenance2 = 0;
int GLEXT_VK_KHR_maintenance3 = 0;
int GLEXT_VK_KHR_maintenance4 = 0;
int GLEXT_VK_KHR_maintenance5 = 0;
int GLEXT_VK_KHR_maintenance6 = 0;
int GLEXT_VK_KHR_maintenance7 = 0;
int GLEXT_VK_KHR_maintenance8 = 0;
int GLEXT_VK_KHR_maintenance9 = 0;
int GLEXT_VK_KHR_map_memory2 = 0;
int GLEXT_VK_KHR_multiview = 0;
int GLEXT_VK_KHR_performance_query = 0;
int GLEXT_VK_KHR_pipeline_binary = 0;
int GLEXT_VK_KHR_pipeline_executable_properties = 0;
int GLEXT_VK_KHR_pipeline_library = 0;
int GLEXT_VK_KHR_portability_enumeration = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLEXT_VK_KHR_portability_subset = 0;

#endif
int GLEXT_VK_KHR_present_id = 0;
int GLEXT_VK_KHR_present_id2 = 0;
int GLEXT_VK_KHR_present_mode_fifo_latest_ready = 0;
int GLEXT_VK_KHR_present_wait = 0;
int GLEXT_VK_KHR_present_wait2 = 0;
int GLEXT_VK_KHR_push_descriptor = 0;
int GLEXT_VK_KHR_ray_query = 0;
int GLEXT_VK_KHR_ray_tracing_maintenance1 = 0;
int GLEXT_VK_KHR_ray_tracing_pipeline = 0;
int GLEXT_VK_KHR_ray_tracing_position_fetch = 0;
int GLEXT_VK_KHR_relaxed_block_layout = 0;
int GLEXT_VK_KHR_robustness2 = 0;
int GLEXT_VK_KHR_sampler_mirror_clamp_to_edge = 0;
int GLEXT_VK_KHR_sampler_ycbcr_conversion = 0;
int GLEXT_VK_KHR_separate_depth_stencil_layouts = 0;
int GLEXT_VK_KHR_shader_atomic_int64 = 0;
int GLEXT_VK_KHR_shader_bfloat16 = 0;
int GLEXT_VK_KHR_shader_clock = 0;
int GLEXT_VK_KHR_shader_draw_parameters = 0;
int GLEXT_VK_KHR_shader_expect_assume = 0;
int GLEXT_VK_KHR_shader_float16_int8 = 0;
int GLEXT_VK_KHR_shader_float_controls = 0;
int GLEXT_VK_KHR_shader_float_controls2 = 0;
int GLEXT_VK_KHR_shader_fma = 0;
int GLEXT_VK_KHR_shader_integer_dot_product = 0;
int GLEXT_VK_KHR_shader_maximal_reconvergence = 0;
int GLEXT_VK_KHR_shader_non_semantic_info = 0;
int GLEXT_VK_KHR_shader_quad_control = 0;
int GLEXT_VK_KHR_shader_relaxed_extended_instruction = 0;
int GLEXT_VK_KHR_shader_subgroup_extended_types = 0;
int GLEXT_VK_KHR_shader_subgroup_rotate = 0;
int GLEXT_VK_KHR_shader_subgroup_uniform_control_flow = 0;
int GLEXT_VK_KHR_shader_terminate_invocation = 0;
int GLEXT_VK_KHR_shader_untyped_pointers = 0;
int GLEXT_VK_KHR_shared_presentable_image = 0;
int GLEXT_VK_KHR_spirv_1_4 = 0;
int GLEXT_VK_KHR_storage_buffer_storage_class = 0;
int GLEXT_VK_KHR_surface = 0;
int GLEXT_VK_KHR_surface_maintenance1 = 0;
int GLEXT_VK_KHR_surface_protected_capabilities = 0;
int GLEXT_VK_KHR_swapchain = 0;
int GLEXT_VK_KHR_swapchain_maintenance1 = 0;
int GLEXT_VK_KHR_swapchain_mutable_format = 0;
int GLEXT_VK_KHR_synchronization2 = 0;
int GLEXT_VK_KHR_timeline_semaphore = 0;
int GLEXT_VK_KHR_unified_image_layouts = 0;
int GLEXT_VK_KHR_uniform_buffer_standard_layout = 0;
int GLEXT_VK_KHR_variable_pointers = 0;
int GLEXT_VK_KHR_vertex_attribute_divisor = 0;
int GLEXT_VK_KHR_vulkan_memory_model = 0;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
int GLEXT_VK_KHR_wayland_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_KHR_win32_keyed_mutex = 0;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_KHR_win32_surface = 0;

#endif
int GLEXT_VK_KHR_workgroup_memory_explicit_layout = 0;
#if defined(VK_USE_PLATFORM_XCB_KHR)
int GLEXT_VK_KHR_xcb_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
int GLEXT_VK_KHR_xlib_surface = 0;

#endif
int GLEXT_VK_KHR_zero_initialize_workgroup_memory = 0;
int GLEXT_VK_LUNARG_direct_driver_loading = 0;
int GLEXT_VK_MESA_image_alignment_control = 0;
int GLEXT_VK_MSFT_layered_driver = 0;
#if defined(VK_USE_PLATFORM_IOS_MVK)
int GLEXT_VK_MVK_ios_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
int GLEXT_VK_MVK_macos_surface = 0;

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
int GLEXT_VK_NN_vi_surface = 0;

#endif
int GLEXT_VK_NVX_binary_import = 0;
int GLEXT_VK_NVX_image_view_handle = 0;
int GLEXT_VK_NVX_multiview_per_view_attributes = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_NV_acquire_winrt_display = 0;

#endif
int GLEXT_VK_NV_clip_space_w_scaling = 0;
int GLEXT_VK_NV_cluster_acceleration_structure = 0;
int GLEXT_VK_NV_command_buffer_inheritance = 0;
int GLEXT_VK_NV_compute_shader_derivatives = 0;
int GLEXT_VK_NV_cooperative_matrix = 0;
int GLEXT_VK_NV_cooperative_matrix2 = 0;
int GLEXT_VK_NV_cooperative_vector = 0;
int GLEXT_VK_NV_copy_memory_indirect = 0;
int GLEXT_VK_NV_corner_sampled_image = 0;
int GLEXT_VK_NV_coverage_reduction_mode = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLEXT_VK_NV_cuda_kernel_launch = 0;

#endif
int GLEXT_VK_NV_dedicated_allocation = 0;
int GLEXT_VK_NV_dedicated_allocation_image_aliasing = 0;
int GLEXT_VK_NV_descriptor_pool_overallocation = 0;
int GLEXT_VK_NV_device_diagnostic_checkpoints = 0;
int GLEXT_VK_NV_device_diagnostics_config = 0;
int GLEXT_VK_NV_device_generated_commands = 0;
int GLEXT_VK_NV_device_generated_commands_compute = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLEXT_VK_NV_displacement_micromap = 0;

#endif
int GLEXT_VK_NV_display_stereo = 0;
int GLEXT_VK_NV_extended_sparse_address_space = 0;
int GLEXT_VK_NV_external_compute_queue = 0;
int GLEXT_VK_NV_external_memory = 0;
int GLEXT_VK_NV_external_memory_capabilities = 0;
int GLEXT_VK_NV_external_memory_rdma = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_NV_external_memory_win32 = 0;

#endif
int GLEXT_VK_NV_fill_rectangle = 0;
int GLEXT_VK_NV_fragment_coverage_to_color = 0;
int GLEXT_VK_NV_fragment_shader_barycentric = 0;
int GLEXT_VK_NV_fragment_shading_rate_enums = 0;
int GLEXT_VK_NV_framebuffer_mixed_samples = 0;
int GLEXT_VK_NV_geometry_shader_passthrough = 0;
int GLEXT_VK_NV_glsl_shader = 0;
int GLEXT_VK_NV_inherited_viewport_scissor = 0;
int GLEXT_VK_NV_linear_color_attachment = 0;
int GLEXT_VK_NV_low_latency = 0;
int GLEXT_VK_NV_low_latency2 = 0;
int GLEXT_VK_NV_memory_decompression = 0;
int GLEXT_VK_NV_mesh_shader = 0;
int GLEXT_VK_NV_optical_flow = 0;
int GLEXT_VK_NV_partitioned_acceleration_structure = 0;
int GLEXT_VK_NV_per_stage_descriptor_set = 0;
int GLEXT_VK_NV_present_barrier = 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
int GLEXT_VK_NV_present_metering = 0;

#endif
int GLEXT_VK_NV_raw_access_chains = 0;
int GLEXT_VK_NV_ray_tracing = 0;
int GLEXT_VK_NV_ray_tracing_invocation_reorder = 0;
int GLEXT_VK_NV_ray_tracing_linear_swept_spheres = 0;
int GLEXT_VK_NV_ray_tracing_motion_blur = 0;
int GLEXT_VK_NV_ray_tracing_validation = 0;
int GLEXT_VK_NV_representative_fragment_test = 0;
int GLEXT_VK_NV_sample_mask_override_coverage = 0;
int GLEXT_VK_NV_scissor_exclusive = 0;
int GLEXT_VK_NV_shader_atomic_float16_vector = 0;
int GLEXT_VK_NV_shader_image_footprint = 0;
int GLEXT_VK_NV_shader_sm_builtins = 0;
int GLEXT_VK_NV_shader_subgroup_partitioned = 0;
int GLEXT_VK_NV_shading_rate_image = 0;
int GLEXT_VK_NV_viewport_array2 = 0;
int GLEXT_VK_NV_viewport_swizzle = 0;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
int GLEXT_VK_NV_win32_keyed_mutex = 0;

#endif
#if defined(VK_USE_PLATFORM_OHOS)
int GLEXT_VK_OHOS_surface = 0;

#endif
int GLEXT_VK_QCOM_filter_cubic_clamp = 0;
int GLEXT_VK_QCOM_filter_cubic_weights = 0;
int GLEXT_VK_QCOM_fragment_density_map_offset = 0;
int GLEXT_VK_QCOM_image_processing = 0;
int GLEXT_VK_QCOM_image_processing2 = 0;
int GLEXT_VK_QCOM_multiview_per_view_render_areas = 0;
int GLEXT_VK_QCOM_multiview_per_view_viewports = 0;
int GLEXT_VK_QCOM_render_pass_shader_resolve = 0;
int GLEXT_VK_QCOM_render_pass_store_ops = 0;
int GLEXT_VK_QCOM_render_pass_transform = 0;
int GLEXT_VK_QCOM_rotated_copy_commands = 0;
int GLEXT_VK_QCOM_tile_memory_heap = 0;
int GLEXT_VK_QCOM_tile_properties = 0;
int GLEXT_VK_QCOM_tile_shading = 0;
int GLEXT_VK_QCOM_ycbcr_degamma = 0;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
int GLEXT_VK_QNX_external_memory_screen_buffer = 0;

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
int GLEXT_VK_QNX_screen_surface = 0;

#endif
int GLEXT_VK_SEC_amigo_profiling = 0;
int GLEXT_VK_SEC_pipeline_cache_incremental_mode = 0;
int GLEXT_VK_VALVE_descriptor_set_host_mapping = 0;
int GLEXT_VK_VALVE_fragment_density_map_layered = 0;
int GLEXT_VK_VALVE_mutable_descriptor_type = 0;

PFN_vkAcquireDrmDisplayEXT glext_vkAcquireDrmDisplayEXT = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkAcquireFullScreenExclusiveModeEXT
  glext_vkAcquireFullScreenExclusiveModeEXT = NULL;

#endif
PFN_vkAcquireNextImage2KHR glext_vkAcquireNextImage2KHR = NULL;
PFN_vkAcquireNextImageKHR glext_vkAcquireNextImageKHR = NULL;
PFN_vkAcquirePerformanceConfigurationINTEL
  glext_vkAcquirePerformanceConfigurationINTEL = NULL;
PFN_vkAcquireProfilingLockKHR glext_vkAcquireProfilingLockKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkAcquireWinrtDisplayNV glext_vkAcquireWinrtDisplayNV = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkAcquireXlibDisplayEXT glext_vkAcquireXlibDisplayEXT = NULL;

#endif
PFN_vkAllocateCommandBuffers glext_vkAllocateCommandBuffers = NULL;
PFN_vkAllocateDescriptorSets glext_vkAllocateDescriptorSets = NULL;
PFN_vkAllocateMemory glext_vkAllocateMemory = NULL;
PFN_vkAntiLagUpdateAMD glext_vkAntiLagUpdateAMD = NULL;
PFN_vkBeginCommandBuffer glext_vkBeginCommandBuffer = NULL;
PFN_vkBindAccelerationStructureMemoryNV
  glext_vkBindAccelerationStructureMemoryNV = NULL;
PFN_vkBindBufferMemory glext_vkBindBufferMemory = NULL;
PFN_vkBindBufferMemory2 glext_vkBindBufferMemory2 = NULL;
PFN_vkBindBufferMemory2KHR glext_vkBindBufferMemory2KHR = NULL;
PFN_vkBindDataGraphPipelineSessionMemoryARM
  glext_vkBindDataGraphPipelineSessionMemoryARM = NULL;
PFN_vkBindImageMemory glext_vkBindImageMemory = NULL;
PFN_vkBindImageMemory2 glext_vkBindImageMemory2 = NULL;
PFN_vkBindImageMemory2KHR glext_vkBindImageMemory2KHR = NULL;
PFN_vkBindOpticalFlowSessionImageNV glext_vkBindOpticalFlowSessionImageNV
  = NULL;
PFN_vkBindTensorMemoryARM glext_vkBindTensorMemoryARM = NULL;
PFN_vkBuildAccelerationStructuresKHR glext_vkBuildAccelerationStructuresKHR
  = NULL;
PFN_vkBuildMicromapsEXT glext_vkBuildMicromapsEXT = NULL;
PFN_vkCmdBeginConditionalRenderingEXT glext_vkCmdBeginConditionalRenderingEXT
  = NULL;
PFN_vkCmdBeginDebugUtilsLabelEXT glext_vkCmdBeginDebugUtilsLabelEXT = NULL;
PFN_vkCmdBeginPerTileExecutionQCOM glext_vkCmdBeginPerTileExecutionQCOM = NULL;
PFN_vkCmdBeginQuery glext_vkCmdBeginQuery = NULL;
PFN_vkCmdBeginQueryIndexedEXT glext_vkCmdBeginQueryIndexedEXT = NULL;
PFN_vkCmdBeginRenderPass glext_vkCmdBeginRenderPass = NULL;
PFN_vkCmdBeginRenderPass2 glext_vkCmdBeginRenderPass2 = NULL;
PFN_vkCmdBeginRenderPass2KHR glext_vkCmdBeginRenderPass2KHR = NULL;
PFN_vkCmdBeginRendering glext_vkCmdBeginRendering = NULL;
PFN_vkCmdBeginRenderingKHR glext_vkCmdBeginRenderingKHR = NULL;
PFN_vkCmdBeginTransformFeedbackEXT glext_vkCmdBeginTransformFeedbackEXT = NULL;
PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT
  glext_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT = NULL;
PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT
  glext_vkCmdBindDescriptorBufferEmbeddedSamplersEXT = NULL;
PFN_vkCmdBindDescriptorBuffersEXT glext_vkCmdBindDescriptorBuffersEXT = NULL;
PFN_vkCmdBindDescriptorSets glext_vkCmdBindDescriptorSets = NULL;
PFN_vkCmdBindDescriptorSets2 glext_vkCmdBindDescriptorSets2 = NULL;
PFN_vkCmdBindDescriptorSets2KHR glext_vkCmdBindDescriptorSets2KHR = NULL;
PFN_vkCmdBindIndexBuffer glext_vkCmdBindIndexBuffer = NULL;
PFN_vkCmdBindIndexBuffer2 glext_vkCmdBindIndexBuffer2 = NULL;
PFN_vkCmdBindIndexBuffer2KHR glext_vkCmdBindIndexBuffer2KHR = NULL;
PFN_vkCmdBindInvocationMaskHUAWEI glext_vkCmdBindInvocationMaskHUAWEI = NULL;
PFN_vkCmdBindPipeline glext_vkCmdBindPipeline = NULL;
PFN_vkCmdBindPipelineShaderGroupNV glext_vkCmdBindPipelineShaderGroupNV = NULL;
PFN_vkCmdBindShadersEXT glext_vkCmdBindShadersEXT = NULL;
PFN_vkCmdBindShadingRateImageNV glext_vkCmdBindShadingRateImageNV = NULL;
PFN_vkCmdBindTileMemoryQCOM glext_vkCmdBindTileMemoryQCOM = NULL;
PFN_vkCmdBindTransformFeedbackBuffersEXT
  glext_vkCmdBindTransformFeedbackBuffersEXT = NULL;
PFN_vkCmdBindVertexBuffers glext_vkCmdBindVertexBuffers = NULL;
PFN_vkCmdBindVertexBuffers2 glext_vkCmdBindVertexBuffers2 = NULL;
PFN_vkCmdBindVertexBuffers2EXT glext_vkCmdBindVertexBuffers2EXT = NULL;
PFN_vkCmdBlitImage glext_vkCmdBlitImage = NULL;
PFN_vkCmdBlitImage2 glext_vkCmdBlitImage2 = NULL;
PFN_vkCmdBlitImage2KHR glext_vkCmdBlitImage2KHR = NULL;
PFN_vkCmdBuildAccelerationStructureNV glext_vkCmdBuildAccelerationStructureNV
  = NULL;
PFN_vkCmdBuildAccelerationStructuresIndirectKHR
  glext_vkCmdBuildAccelerationStructuresIndirectKHR = NULL;
PFN_vkCmdBuildAccelerationStructuresKHR
  glext_vkCmdBuildAccelerationStructuresKHR = NULL;
PFN_vkCmdBuildClusterAccelerationStructureIndirectNV
  glext_vkCmdBuildClusterAccelerationStructureIndirectNV = NULL;
PFN_vkCmdBuildMicromapsEXT glext_vkCmdBuildMicromapsEXT = NULL;
PFN_vkCmdBuildPartitionedAccelerationStructuresNV
  glext_vkCmdBuildPartitionedAccelerationStructuresNV = NULL;
PFN_vkCmdClearAttachments glext_vkCmdClearAttachments = NULL;
PFN_vkCmdClearColorImage glext_vkCmdClearColorImage = NULL;
PFN_vkCmdClearDepthStencilImage glext_vkCmdClearDepthStencilImage = NULL;
PFN_vkCmdConvertCooperativeVectorMatrixNV
  glext_vkCmdConvertCooperativeVectorMatrixNV = NULL;
PFN_vkCmdCopyAccelerationStructureKHR glext_vkCmdCopyAccelerationStructureKHR
  = NULL;
PFN_vkCmdCopyAccelerationStructureNV glext_vkCmdCopyAccelerationStructureNV
  = NULL;
PFN_vkCmdCopyAccelerationStructureToMemoryKHR
  glext_vkCmdCopyAccelerationStructureToMemoryKHR = NULL;
PFN_vkCmdCopyBuffer glext_vkCmdCopyBuffer = NULL;
PFN_vkCmdCopyBuffer2 glext_vkCmdCopyBuffer2 = NULL;
PFN_vkCmdCopyBuffer2KHR glext_vkCmdCopyBuffer2KHR = NULL;
PFN_vkCmdCopyBufferToImage glext_vkCmdCopyBufferToImage = NULL;
PFN_vkCmdCopyBufferToImage2 glext_vkCmdCopyBufferToImage2 = NULL;
PFN_vkCmdCopyBufferToImage2KHR glext_vkCmdCopyBufferToImage2KHR = NULL;
PFN_vkCmdCopyImage glext_vkCmdCopyImage = NULL;
PFN_vkCmdCopyImage2 glext_vkCmdCopyImage2 = NULL;
PFN_vkCmdCopyImage2KHR glext_vkCmdCopyImage2KHR = NULL;
PFN_vkCmdCopyImageToBuffer glext_vkCmdCopyImageToBuffer = NULL;
PFN_vkCmdCopyImageToBuffer2 glext_vkCmdCopyImageToBuffer2 = NULL;
PFN_vkCmdCopyImageToBuffer2KHR glext_vkCmdCopyImageToBuffer2KHR = NULL;
PFN_vkCmdCopyMemoryIndirectKHR glext_vkCmdCopyMemoryIndirectKHR = NULL;
PFN_vkCmdCopyMemoryIndirectNV glext_vkCmdCopyMemoryIndirectNV = NULL;
PFN_vkCmdCopyMemoryToAccelerationStructureKHR
  glext_vkCmdCopyMemoryToAccelerationStructureKHR = NULL;
PFN_vkCmdCopyMemoryToImageIndirectKHR glext_vkCmdCopyMemoryToImageIndirectKHR
  = NULL;
PFN_vkCmdCopyMemoryToImageIndirectNV glext_vkCmdCopyMemoryToImageIndirectNV
  = NULL;
PFN_vkCmdCopyMemoryToMicromapEXT glext_vkCmdCopyMemoryToMicromapEXT = NULL;
PFN_vkCmdCopyMicromapEXT glext_vkCmdCopyMicromapEXT = NULL;
PFN_vkCmdCopyMicromapToMemoryEXT glext_vkCmdCopyMicromapToMemoryEXT = NULL;
PFN_vkCmdCopyQueryPoolResults glext_vkCmdCopyQueryPoolResults = NULL;
PFN_vkCmdCopyTensorARM glext_vkCmdCopyTensorARM = NULL;
PFN_vkCmdCuLaunchKernelNVX glext_vkCmdCuLaunchKernelNVX = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdCudaLaunchKernelNV glext_vkCmdCudaLaunchKernelNV = NULL;

#endif
PFN_vkCmdDebugMarkerBeginEXT glext_vkCmdDebugMarkerBeginEXT = NULL;
PFN_vkCmdDebugMarkerEndEXT glext_vkCmdDebugMarkerEndEXT = NULL;
PFN_vkCmdDebugMarkerInsertEXT glext_vkCmdDebugMarkerInsertEXT = NULL;
PFN_vkCmdDecompressMemoryIndirectCountNV
  glext_vkCmdDecompressMemoryIndirectCountNV = NULL;
PFN_vkCmdDecompressMemoryNV glext_vkCmdDecompressMemoryNV = NULL;
PFN_vkCmdDispatch glext_vkCmdDispatch = NULL;
PFN_vkCmdDispatchBase glext_vkCmdDispatchBase = NULL;
PFN_vkCmdDispatchBaseKHR glext_vkCmdDispatchBaseKHR = NULL;
PFN_vkCmdDispatchDataGraphARM glext_vkCmdDispatchDataGraphARM = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdDispatchGraphAMDX glext_vkCmdDispatchGraphAMDX = NULL;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdDispatchGraphIndirectAMDX glext_vkCmdDispatchGraphIndirectAMDX = NULL;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdDispatchGraphIndirectCountAMDX
  glext_vkCmdDispatchGraphIndirectCountAMDX = NULL;

#endif
PFN_vkCmdDispatchIndirect glext_vkCmdDispatchIndirect = NULL;
PFN_vkCmdDispatchTileQCOM glext_vkCmdDispatchTileQCOM = NULL;
PFN_vkCmdDraw glext_vkCmdDraw = NULL;
PFN_vkCmdDrawClusterHUAWEI glext_vkCmdDrawClusterHUAWEI = NULL;
PFN_vkCmdDrawClusterIndirectHUAWEI glext_vkCmdDrawClusterIndirectHUAWEI = NULL;
PFN_vkCmdDrawIndexed glext_vkCmdDrawIndexed = NULL;
PFN_vkCmdDrawIndexedIndirect glext_vkCmdDrawIndexedIndirect = NULL;
PFN_vkCmdDrawIndexedIndirectCount glext_vkCmdDrawIndexedIndirectCount = NULL;
PFN_vkCmdDrawIndexedIndirectCountAMD glext_vkCmdDrawIndexedIndirectCountAMD
  = NULL;
PFN_vkCmdDrawIndexedIndirectCountKHR glext_vkCmdDrawIndexedIndirectCountKHR
  = NULL;
PFN_vkCmdDrawIndirect glext_vkCmdDrawIndirect = NULL;
PFN_vkCmdDrawIndirectByteCountEXT glext_vkCmdDrawIndirectByteCountEXT = NULL;
PFN_vkCmdDrawIndirectCount glext_vkCmdDrawIndirectCount = NULL;
PFN_vkCmdDrawIndirectCountAMD glext_vkCmdDrawIndirectCountAMD = NULL;
PFN_vkCmdDrawIndirectCountKHR glext_vkCmdDrawIndirectCountKHR = NULL;
PFN_vkCmdDrawMeshTasksEXT glext_vkCmdDrawMeshTasksEXT = NULL;
PFN_vkCmdDrawMeshTasksIndirectCountEXT glext_vkCmdDrawMeshTasksIndirectCountEXT
  = NULL;
PFN_vkCmdDrawMeshTasksIndirectCountNV glext_vkCmdDrawMeshTasksIndirectCountNV
  = NULL;
PFN_vkCmdDrawMeshTasksIndirectEXT glext_vkCmdDrawMeshTasksIndirectEXT = NULL;
PFN_vkCmdDrawMeshTasksIndirectNV glext_vkCmdDrawMeshTasksIndirectNV = NULL;
PFN_vkCmdDrawMeshTasksNV glext_vkCmdDrawMeshTasksNV = NULL;
PFN_vkCmdDrawMultiEXT glext_vkCmdDrawMultiEXT = NULL;
PFN_vkCmdDrawMultiIndexedEXT glext_vkCmdDrawMultiIndexedEXT = NULL;
PFN_vkCmdEndConditionalRenderingEXT glext_vkCmdEndConditionalRenderingEXT
  = NULL;
PFN_vkCmdEndDebugUtilsLabelEXT glext_vkCmdEndDebugUtilsLabelEXT = NULL;
PFN_vkCmdEndPerTileExecutionQCOM glext_vkCmdEndPerTileExecutionQCOM = NULL;
PFN_vkCmdEndQuery glext_vkCmdEndQuery = NULL;
PFN_vkCmdEndQueryIndexedEXT glext_vkCmdEndQueryIndexedEXT = NULL;
PFN_vkCmdEndRenderPass glext_vkCmdEndRenderPass = NULL;
PFN_vkCmdEndRenderPass2 glext_vkCmdEndRenderPass2 = NULL;
PFN_vkCmdEndRenderPass2KHR glext_vkCmdEndRenderPass2KHR = NULL;
PFN_vkCmdEndRendering glext_vkCmdEndRendering = NULL;
PFN_vkCmdEndRendering2EXT glext_vkCmdEndRendering2EXT = NULL;
PFN_vkCmdEndRenderingKHR glext_vkCmdEndRenderingKHR = NULL;
PFN_vkCmdEndTransformFeedbackEXT glext_vkCmdEndTransformFeedbackEXT = NULL;
PFN_vkCmdExecuteCommands glext_vkCmdExecuteCommands = NULL;
PFN_vkCmdExecuteGeneratedCommandsEXT glext_vkCmdExecuteGeneratedCommandsEXT
  = NULL;
PFN_vkCmdExecuteGeneratedCommandsNV glext_vkCmdExecuteGeneratedCommandsNV
  = NULL;
PFN_vkCmdFillBuffer glext_vkCmdFillBuffer = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCmdInitializeGraphScratchMemoryAMDX
  glext_vkCmdInitializeGraphScratchMemoryAMDX = NULL;

#endif
PFN_vkCmdInsertDebugUtilsLabelEXT glext_vkCmdInsertDebugUtilsLabelEXT = NULL;
PFN_vkCmdNextSubpass glext_vkCmdNextSubpass = NULL;
PFN_vkCmdNextSubpass2 glext_vkCmdNextSubpass2 = NULL;
PFN_vkCmdNextSubpass2KHR glext_vkCmdNextSubpass2KHR = NULL;
PFN_vkCmdOpticalFlowExecuteNV glext_vkCmdOpticalFlowExecuteNV = NULL;
PFN_vkCmdPipelineBarrier glext_vkCmdPipelineBarrier = NULL;
PFN_vkCmdPipelineBarrier2 glext_vkCmdPipelineBarrier2 = NULL;
PFN_vkCmdPipelineBarrier2KHR glext_vkCmdPipelineBarrier2KHR = NULL;
PFN_vkCmdPreprocessGeneratedCommandsEXT
  glext_vkCmdPreprocessGeneratedCommandsEXT = NULL;
PFN_vkCmdPreprocessGeneratedCommandsNV glext_vkCmdPreprocessGeneratedCommandsNV
  = NULL;
PFN_vkCmdPushConstants glext_vkCmdPushConstants = NULL;
PFN_vkCmdPushConstants2 glext_vkCmdPushConstants2 = NULL;
PFN_vkCmdPushConstants2KHR glext_vkCmdPushConstants2KHR = NULL;
PFN_vkCmdPushDescriptorSet glext_vkCmdPushDescriptorSet = NULL;
PFN_vkCmdPushDescriptorSet2 glext_vkCmdPushDescriptorSet2 = NULL;
PFN_vkCmdPushDescriptorSet2KHR glext_vkCmdPushDescriptorSet2KHR = NULL;
PFN_vkCmdPushDescriptorSetKHR glext_vkCmdPushDescriptorSetKHR = NULL;
PFN_vkCmdPushDescriptorSetWithTemplate glext_vkCmdPushDescriptorSetWithTemplate
  = NULL;
PFN_vkCmdPushDescriptorSetWithTemplate2
  glext_vkCmdPushDescriptorSetWithTemplate2 = NULL;
PFN_vkCmdPushDescriptorSetWithTemplate2KHR
  glext_vkCmdPushDescriptorSetWithTemplate2KHR = NULL;
PFN_vkCmdPushDescriptorSetWithTemplateKHR
  glext_vkCmdPushDescriptorSetWithTemplateKHR = NULL;
PFN_vkCmdResetEvent glext_vkCmdResetEvent = NULL;
PFN_vkCmdResetEvent2 glext_vkCmdResetEvent2 = NULL;
PFN_vkCmdResetEvent2KHR glext_vkCmdResetEvent2KHR = NULL;
PFN_vkCmdResetQueryPool glext_vkCmdResetQueryPool = NULL;
PFN_vkCmdResolveImage glext_vkCmdResolveImage = NULL;
PFN_vkCmdResolveImage2 glext_vkCmdResolveImage2 = NULL;
PFN_vkCmdResolveImage2KHR glext_vkCmdResolveImage2KHR = NULL;
PFN_vkCmdSetAlphaToCoverageEnableEXT glext_vkCmdSetAlphaToCoverageEnableEXT
  = NULL;
PFN_vkCmdSetAlphaToOneEnableEXT glext_vkCmdSetAlphaToOneEnableEXT = NULL;
PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT
  glext_vkCmdSetAttachmentFeedbackLoopEnableEXT = NULL;
PFN_vkCmdSetBlendConstants glext_vkCmdSetBlendConstants = NULL;
PFN_vkCmdSetCheckpointNV glext_vkCmdSetCheckpointNV = NULL;
PFN_vkCmdSetCoarseSampleOrderNV glext_vkCmdSetCoarseSampleOrderNV = NULL;
PFN_vkCmdSetColorBlendAdvancedEXT glext_vkCmdSetColorBlendAdvancedEXT = NULL;
PFN_vkCmdSetColorBlendEnableEXT glext_vkCmdSetColorBlendEnableEXT = NULL;
PFN_vkCmdSetColorBlendEquationEXT glext_vkCmdSetColorBlendEquationEXT = NULL;
PFN_vkCmdSetColorWriteEnableEXT glext_vkCmdSetColorWriteEnableEXT = NULL;
PFN_vkCmdSetColorWriteMaskEXT glext_vkCmdSetColorWriteMaskEXT = NULL;
PFN_vkCmdSetConservativeRasterizationModeEXT
  glext_vkCmdSetConservativeRasterizationModeEXT = NULL;
PFN_vkCmdSetCoverageModulationModeNV glext_vkCmdSetCoverageModulationModeNV
  = NULL;
PFN_vkCmdSetCoverageModulationTableEnableNV
  glext_vkCmdSetCoverageModulationTableEnableNV = NULL;
PFN_vkCmdSetCoverageModulationTableNV glext_vkCmdSetCoverageModulationTableNV
  = NULL;
PFN_vkCmdSetCoverageReductionModeNV glext_vkCmdSetCoverageReductionModeNV
  = NULL;
PFN_vkCmdSetCoverageToColorEnableNV glext_vkCmdSetCoverageToColorEnableNV
  = NULL;
PFN_vkCmdSetCoverageToColorLocationNV glext_vkCmdSetCoverageToColorLocationNV
  = NULL;
PFN_vkCmdSetCullMode glext_vkCmdSetCullMode = NULL;
PFN_vkCmdSetCullModeEXT glext_vkCmdSetCullModeEXT = NULL;
PFN_vkCmdSetDepthBias glext_vkCmdSetDepthBias = NULL;
PFN_vkCmdSetDepthBias2EXT glext_vkCmdSetDepthBias2EXT = NULL;
PFN_vkCmdSetDepthBiasEnable glext_vkCmdSetDepthBiasEnable = NULL;
PFN_vkCmdSetDepthBiasEnableEXT glext_vkCmdSetDepthBiasEnableEXT = NULL;
PFN_vkCmdSetDepthBounds glext_vkCmdSetDepthBounds = NULL;
PFN_vkCmdSetDepthBoundsTestEnable glext_vkCmdSetDepthBoundsTestEnable = NULL;
PFN_vkCmdSetDepthBoundsTestEnableEXT glext_vkCmdSetDepthBoundsTestEnableEXT
  = NULL;
PFN_vkCmdSetDepthClampEnableEXT glext_vkCmdSetDepthClampEnableEXT = NULL;
PFN_vkCmdSetDepthClampRangeEXT glext_vkCmdSetDepthClampRangeEXT = NULL;
PFN_vkCmdSetDepthClipEnableEXT glext_vkCmdSetDepthClipEnableEXT = NULL;
PFN_vkCmdSetDepthClipNegativeOneToOneEXT
  glext_vkCmdSetDepthClipNegativeOneToOneEXT = NULL;
PFN_vkCmdSetDepthCompareOp glext_vkCmdSetDepthCompareOp = NULL;
PFN_vkCmdSetDepthCompareOpEXT glext_vkCmdSetDepthCompareOpEXT = NULL;
PFN_vkCmdSetDepthTestEnable glext_vkCmdSetDepthTestEnable = NULL;
PFN_vkCmdSetDepthTestEnableEXT glext_vkCmdSetDepthTestEnableEXT = NULL;
PFN_vkCmdSetDepthWriteEnable glext_vkCmdSetDepthWriteEnable = NULL;
PFN_vkCmdSetDepthWriteEnableEXT glext_vkCmdSetDepthWriteEnableEXT = NULL;
PFN_vkCmdSetDescriptorBufferOffsets2EXT
  glext_vkCmdSetDescriptorBufferOffsets2EXT = NULL;
PFN_vkCmdSetDescriptorBufferOffsetsEXT glext_vkCmdSetDescriptorBufferOffsetsEXT
  = NULL;
PFN_vkCmdSetDeviceMask glext_vkCmdSetDeviceMask = NULL;
PFN_vkCmdSetDeviceMaskKHR glext_vkCmdSetDeviceMaskKHR = NULL;
PFN_vkCmdSetDiscardRectangleEXT glext_vkCmdSetDiscardRectangleEXT = NULL;
PFN_vkCmdSetDiscardRectangleEnableEXT glext_vkCmdSetDiscardRectangleEnableEXT
  = NULL;
PFN_vkCmdSetDiscardRectangleModeEXT glext_vkCmdSetDiscardRectangleModeEXT
  = NULL;
PFN_vkCmdSetEvent glext_vkCmdSetEvent = NULL;
PFN_vkCmdSetEvent2 glext_vkCmdSetEvent2 = NULL;
PFN_vkCmdSetEvent2KHR glext_vkCmdSetEvent2KHR = NULL;
PFN_vkCmdSetExclusiveScissorEnableNV glext_vkCmdSetExclusiveScissorEnableNV
  = NULL;
PFN_vkCmdSetExclusiveScissorNV glext_vkCmdSetExclusiveScissorNV = NULL;
PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT
  glext_vkCmdSetExtraPrimitiveOverestimationSizeEXT = NULL;
PFN_vkCmdSetFragmentShadingRateEnumNV glext_vkCmdSetFragmentShadingRateEnumNV
  = NULL;
PFN_vkCmdSetFragmentShadingRateKHR glext_vkCmdSetFragmentShadingRateKHR = NULL;
PFN_vkCmdSetFrontFace glext_vkCmdSetFrontFace = NULL;
PFN_vkCmdSetFrontFaceEXT glext_vkCmdSetFrontFaceEXT = NULL;
PFN_vkCmdSetLineRasterizationModeEXT glext_vkCmdSetLineRasterizationModeEXT
  = NULL;
PFN_vkCmdSetLineStipple glext_vkCmdSetLineStipple = NULL;
PFN_vkCmdSetLineStippleEXT glext_vkCmdSetLineStippleEXT = NULL;
PFN_vkCmdSetLineStippleEnableEXT glext_vkCmdSetLineStippleEnableEXT = NULL;
PFN_vkCmdSetLineStippleKHR glext_vkCmdSetLineStippleKHR = NULL;
PFN_vkCmdSetLineWidth glext_vkCmdSetLineWidth = NULL;
PFN_vkCmdSetLogicOpEXT glext_vkCmdSetLogicOpEXT = NULL;
PFN_vkCmdSetLogicOpEnableEXT glext_vkCmdSetLogicOpEnableEXT = NULL;
PFN_vkCmdSetPatchControlPointsEXT glext_vkCmdSetPatchControlPointsEXT = NULL;
PFN_vkCmdSetPerformanceMarkerINTEL glext_vkCmdSetPerformanceMarkerINTEL = NULL;
PFN_vkCmdSetPerformanceOverrideINTEL glext_vkCmdSetPerformanceOverrideINTEL
  = NULL;
PFN_vkCmdSetPerformanceStreamMarkerINTEL
  glext_vkCmdSetPerformanceStreamMarkerINTEL = NULL;
PFN_vkCmdSetPolygonModeEXT glext_vkCmdSetPolygonModeEXT = NULL;
PFN_vkCmdSetPrimitiveRestartEnable glext_vkCmdSetPrimitiveRestartEnable = NULL;
PFN_vkCmdSetPrimitiveRestartEnableEXT glext_vkCmdSetPrimitiveRestartEnableEXT
  = NULL;
PFN_vkCmdSetPrimitiveTopology glext_vkCmdSetPrimitiveTopology = NULL;
PFN_vkCmdSetPrimitiveTopologyEXT glext_vkCmdSetPrimitiveTopologyEXT = NULL;
PFN_vkCmdSetProvokingVertexModeEXT glext_vkCmdSetProvokingVertexModeEXT = NULL;
PFN_vkCmdSetRasterizationSamplesEXT glext_vkCmdSetRasterizationSamplesEXT
  = NULL;
PFN_vkCmdSetRasterizationStreamEXT glext_vkCmdSetRasterizationStreamEXT = NULL;
PFN_vkCmdSetRasterizerDiscardEnable glext_vkCmdSetRasterizerDiscardEnable
  = NULL;
PFN_vkCmdSetRasterizerDiscardEnableEXT glext_vkCmdSetRasterizerDiscardEnableEXT
  = NULL;
PFN_vkCmdSetRayTracingPipelineStackSizeKHR
  glext_vkCmdSetRayTracingPipelineStackSizeKHR = NULL;
PFN_vkCmdSetRenderingAttachmentLocations
  glext_vkCmdSetRenderingAttachmentLocations = NULL;
PFN_vkCmdSetRenderingAttachmentLocationsKHR
  glext_vkCmdSetRenderingAttachmentLocationsKHR = NULL;
PFN_vkCmdSetRenderingInputAttachmentIndices
  glext_vkCmdSetRenderingInputAttachmentIndices = NULL;
PFN_vkCmdSetRenderingInputAttachmentIndicesKHR
  glext_vkCmdSetRenderingInputAttachmentIndicesKHR = NULL;
PFN_vkCmdSetRepresentativeFragmentTestEnableNV
  glext_vkCmdSetRepresentativeFragmentTestEnableNV = NULL;
PFN_vkCmdSetSampleLocationsEXT glext_vkCmdSetSampleLocationsEXT = NULL;
PFN_vkCmdSetSampleLocationsEnableEXT glext_vkCmdSetSampleLocationsEnableEXT
  = NULL;
PFN_vkCmdSetSampleMaskEXT glext_vkCmdSetSampleMaskEXT = NULL;
PFN_vkCmdSetScissor glext_vkCmdSetScissor = NULL;
PFN_vkCmdSetScissorWithCount glext_vkCmdSetScissorWithCount = NULL;
PFN_vkCmdSetScissorWithCountEXT glext_vkCmdSetScissorWithCountEXT = NULL;
PFN_vkCmdSetShadingRateImageEnableNV glext_vkCmdSetShadingRateImageEnableNV
  = NULL;
PFN_vkCmdSetStencilCompareMask glext_vkCmdSetStencilCompareMask = NULL;
PFN_vkCmdSetStencilOp glext_vkCmdSetStencilOp = NULL;
PFN_vkCmdSetStencilOpEXT glext_vkCmdSetStencilOpEXT = NULL;
PFN_vkCmdSetStencilReference glext_vkCmdSetStencilReference = NULL;
PFN_vkCmdSetStencilTestEnable glext_vkCmdSetStencilTestEnable = NULL;
PFN_vkCmdSetStencilTestEnableEXT glext_vkCmdSetStencilTestEnableEXT = NULL;
PFN_vkCmdSetStencilWriteMask glext_vkCmdSetStencilWriteMask = NULL;
PFN_vkCmdSetTessellationDomainOriginEXT
  glext_vkCmdSetTessellationDomainOriginEXT = NULL;
PFN_vkCmdSetVertexInputEXT glext_vkCmdSetVertexInputEXT = NULL;
PFN_vkCmdSetViewport glext_vkCmdSetViewport = NULL;
PFN_vkCmdSetViewportShadingRatePaletteNV
  glext_vkCmdSetViewportShadingRatePaletteNV = NULL;
PFN_vkCmdSetViewportSwizzleNV glext_vkCmdSetViewportSwizzleNV = NULL;
PFN_vkCmdSetViewportWScalingEnableNV glext_vkCmdSetViewportWScalingEnableNV
  = NULL;
PFN_vkCmdSetViewportWScalingNV glext_vkCmdSetViewportWScalingNV = NULL;
PFN_vkCmdSetViewportWithCount glext_vkCmdSetViewportWithCount = NULL;
PFN_vkCmdSetViewportWithCountEXT glext_vkCmdSetViewportWithCountEXT = NULL;
PFN_vkCmdSubpassShadingHUAWEI glext_vkCmdSubpassShadingHUAWEI = NULL;
PFN_vkCmdTraceRaysIndirect2KHR glext_vkCmdTraceRaysIndirect2KHR = NULL;
PFN_vkCmdTraceRaysIndirectKHR glext_vkCmdTraceRaysIndirectKHR = NULL;
PFN_vkCmdTraceRaysKHR glext_vkCmdTraceRaysKHR = NULL;
PFN_vkCmdTraceRaysNV glext_vkCmdTraceRaysNV = NULL;
PFN_vkCmdUpdateBuffer glext_vkCmdUpdateBuffer = NULL;
PFN_vkCmdUpdatePipelineIndirectBufferNV
  glext_vkCmdUpdatePipelineIndirectBufferNV = NULL;
PFN_vkCmdWaitEvents glext_vkCmdWaitEvents = NULL;
PFN_vkCmdWaitEvents2 glext_vkCmdWaitEvents2 = NULL;
PFN_vkCmdWaitEvents2KHR glext_vkCmdWaitEvents2KHR = NULL;
PFN_vkCmdWriteAccelerationStructuresPropertiesKHR
  glext_vkCmdWriteAccelerationStructuresPropertiesKHR = NULL;
PFN_vkCmdWriteAccelerationStructuresPropertiesNV
  glext_vkCmdWriteAccelerationStructuresPropertiesNV = NULL;
PFN_vkCmdWriteBufferMarker2AMD glext_vkCmdWriteBufferMarker2AMD = NULL;
PFN_vkCmdWriteBufferMarkerAMD glext_vkCmdWriteBufferMarkerAMD = NULL;
PFN_vkCmdWriteMicromapsPropertiesEXT glext_vkCmdWriteMicromapsPropertiesEXT
  = NULL;
PFN_vkCmdWriteTimestamp glext_vkCmdWriteTimestamp = NULL;
PFN_vkCmdWriteTimestamp2 glext_vkCmdWriteTimestamp2 = NULL;
PFN_vkCmdWriteTimestamp2KHR glext_vkCmdWriteTimestamp2KHR = NULL;
PFN_vkCompileDeferredNV glext_vkCompileDeferredNV = NULL;
PFN_vkConvertCooperativeVectorMatrixNV glext_vkConvertCooperativeVectorMatrixNV
  = NULL;
PFN_vkCopyAccelerationStructureKHR glext_vkCopyAccelerationStructureKHR = NULL;
PFN_vkCopyAccelerationStructureToMemoryKHR
  glext_vkCopyAccelerationStructureToMemoryKHR = NULL;
PFN_vkCopyImageToImage glext_vkCopyImageToImage = NULL;
PFN_vkCopyImageToImageEXT glext_vkCopyImageToImageEXT = NULL;
PFN_vkCopyImageToMemory glext_vkCopyImageToMemory = NULL;
PFN_vkCopyImageToMemoryEXT glext_vkCopyImageToMemoryEXT = NULL;
PFN_vkCopyMemoryToAccelerationStructureKHR
  glext_vkCopyMemoryToAccelerationStructureKHR = NULL;
PFN_vkCopyMemoryToImage glext_vkCopyMemoryToImage = NULL;
PFN_vkCopyMemoryToImageEXT glext_vkCopyMemoryToImageEXT = NULL;
PFN_vkCopyMemoryToMicromapEXT glext_vkCopyMemoryToMicromapEXT = NULL;
PFN_vkCopyMicromapEXT glext_vkCopyMicromapEXT = NULL;
PFN_vkCopyMicromapToMemoryEXT glext_vkCopyMicromapToMemoryEXT = NULL;
PFN_vkCreateAccelerationStructureKHR glext_vkCreateAccelerationStructureKHR
  = NULL;
PFN_vkCreateAccelerationStructureNV glext_vkCreateAccelerationStructureNV
  = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkCreateAndroidSurfaceKHR glext_vkCreateAndroidSurfaceKHR = NULL;

#endif
PFN_vkCreateBuffer glext_vkCreateBuffer = NULL;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkCreateBufferCollectionFUCHSIA glext_vkCreateBufferCollectionFUCHSIA
  = NULL;

#endif
PFN_vkCreateBufferView glext_vkCreateBufferView = NULL;
PFN_vkCreateCommandPool glext_vkCreateCommandPool = NULL;
PFN_vkCreateComputePipelines glext_vkCreateComputePipelines = NULL;
PFN_vkCreateCuFunctionNVX glext_vkCreateCuFunctionNVX = NULL;
PFN_vkCreateCuModuleNVX glext_vkCreateCuModuleNVX = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCreateCudaFunctionNV glext_vkCreateCudaFunctionNV = NULL;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCreateCudaModuleNV glext_vkCreateCudaModuleNV = NULL;

#endif
PFN_vkCreateDataGraphPipelineSessionARM
  glext_vkCreateDataGraphPipelineSessionARM = NULL;
PFN_vkCreateDataGraphPipelinesARM glext_vkCreateDataGraphPipelinesARM = NULL;
PFN_vkCreateDebugReportCallbackEXT glext_vkCreateDebugReportCallbackEXT = NULL;
PFN_vkCreateDebugUtilsMessengerEXT glext_vkCreateDebugUtilsMessengerEXT = NULL;
PFN_vkCreateDeferredOperationKHR glext_vkCreateDeferredOperationKHR = NULL;
PFN_vkCreateDescriptorPool glext_vkCreateDescriptorPool = NULL;
PFN_vkCreateDescriptorSetLayout glext_vkCreateDescriptorSetLayout = NULL;
PFN_vkCreateDescriptorUpdateTemplate glext_vkCreateDescriptorUpdateTemplate
  = NULL;
PFN_vkCreateDescriptorUpdateTemplateKHR
  glext_vkCreateDescriptorUpdateTemplateKHR = NULL;
PFN_vkCreateDevice glext_vkCreateDevice = NULL;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
PFN_vkCreateDirectFBSurfaceEXT glext_vkCreateDirectFBSurfaceEXT = NULL;

#endif
PFN_vkCreateDisplayModeKHR glext_vkCreateDisplayModeKHR = NULL;
PFN_vkCreateDisplayPlaneSurfaceKHR glext_vkCreateDisplayPlaneSurfaceKHR = NULL;
PFN_vkCreateEvent glext_vkCreateEvent = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkCreateExecutionGraphPipelinesAMDX
  glext_vkCreateExecutionGraphPipelinesAMDX = NULL;

#endif
PFN_vkCreateExternalComputeQueueNV glext_vkCreateExternalComputeQueueNV = NULL;
PFN_vkCreateFence glext_vkCreateFence = NULL;
PFN_vkCreateFramebuffer glext_vkCreateFramebuffer = NULL;
PFN_vkCreateGraphicsPipelines glext_vkCreateGraphicsPipelines = NULL;
PFN_vkCreateHeadlessSurfaceEXT glext_vkCreateHeadlessSurfaceEXT = NULL;
#if defined(VK_USE_PLATFORM_IOS_MVK)
PFN_vkCreateIOSSurfaceMVK glext_vkCreateIOSSurfaceMVK = NULL;

#endif
PFN_vkCreateImage glext_vkCreateImage = NULL;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkCreateImagePipeSurfaceFUCHSIA glext_vkCreateImagePipeSurfaceFUCHSIA
  = NULL;

#endif
PFN_vkCreateImageView glext_vkCreateImageView = NULL;
PFN_vkCreateIndirectCommandsLayoutEXT glext_vkCreateIndirectCommandsLayoutEXT
  = NULL;
PFN_vkCreateIndirectCommandsLayoutNV glext_vkCreateIndirectCommandsLayoutNV
  = NULL;
PFN_vkCreateIndirectExecutionSetEXT glext_vkCreateIndirectExecutionSetEXT
  = NULL;
PFN_vkCreateInstance glext_vkCreateInstance = NULL;
#if defined(VK_USE_PLATFORM_MACOS_MVK)
PFN_vkCreateMacOSSurfaceMVK glext_vkCreateMacOSSurfaceMVK = NULL;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkCreateMetalSurfaceEXT glext_vkCreateMetalSurfaceEXT = NULL;

#endif
PFN_vkCreateMicromapEXT glext_vkCreateMicromapEXT = NULL;
PFN_vkCreateOpticalFlowSessionNV glext_vkCreateOpticalFlowSessionNV = NULL;
PFN_vkCreatePipelineBinariesKHR glext_vkCreatePipelineBinariesKHR = NULL;
PFN_vkCreatePipelineCache glext_vkCreatePipelineCache = NULL;
PFN_vkCreatePipelineLayout glext_vkCreatePipelineLayout = NULL;
PFN_vkCreatePrivateDataSlot glext_vkCreatePrivateDataSlot = NULL;
PFN_vkCreatePrivateDataSlotEXT glext_vkCreatePrivateDataSlotEXT = NULL;
PFN_vkCreateQueryPool glext_vkCreateQueryPool = NULL;
PFN_vkCreateRayTracingPipelinesKHR glext_vkCreateRayTracingPipelinesKHR = NULL;
PFN_vkCreateRayTracingPipelinesNV glext_vkCreateRayTracingPipelinesNV = NULL;
PFN_vkCreateRenderPass glext_vkCreateRenderPass = NULL;
PFN_vkCreateRenderPass2 glext_vkCreateRenderPass2 = NULL;
PFN_vkCreateRenderPass2KHR glext_vkCreateRenderPass2KHR = NULL;
PFN_vkCreateSampler glext_vkCreateSampler = NULL;
PFN_vkCreateSamplerYcbcrConversion glext_vkCreateSamplerYcbcrConversion = NULL;
PFN_vkCreateSamplerYcbcrConversionKHR glext_vkCreateSamplerYcbcrConversionKHR
  = NULL;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkCreateScreenSurfaceQNX glext_vkCreateScreenSurfaceQNX = NULL;

#endif
PFN_vkCreateSemaphore glext_vkCreateSemaphore = NULL;
PFN_vkCreateShaderModule glext_vkCreateShaderModule = NULL;
PFN_vkCreateShadersEXT glext_vkCreateShadersEXT = NULL;
PFN_vkCreateSharedSwapchainsKHR glext_vkCreateSharedSwapchainsKHR = NULL;
#if defined(VK_USE_PLATFORM_GGP)
PFN_vkCreateStreamDescriptorSurfaceGGP glext_vkCreateStreamDescriptorSurfaceGGP
  = NULL;

#endif
#if defined(VK_USE_PLATFORM_OHOS)
PFN_vkCreateSurfaceOHOS glext_vkCreateSurfaceOHOS = NULL;

#endif
PFN_vkCreateSwapchainKHR glext_vkCreateSwapchainKHR = NULL;
PFN_vkCreateTensorARM glext_vkCreateTensorARM = NULL;
PFN_vkCreateTensorViewARM glext_vkCreateTensorViewARM = NULL;
PFN_vkCreateValidationCacheEXT glext_vkCreateValidationCacheEXT = NULL;
#if defined(VK_USE_PLATFORM_VI_NN)
PFN_vkCreateViSurfaceNN glext_vkCreateViSurfaceNN = NULL;

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkCreateWaylandSurfaceKHR glext_vkCreateWaylandSurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkCreateWin32SurfaceKHR glext_vkCreateWin32SurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkCreateXcbSurfaceKHR glext_vkCreateXcbSurfaceKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkCreateXlibSurfaceKHR glext_vkCreateXlibSurfaceKHR = NULL;

#endif
PFN_vkDebugMarkerSetObjectNameEXT glext_vkDebugMarkerSetObjectNameEXT = NULL;
PFN_vkDebugMarkerSetObjectTagEXT glext_vkDebugMarkerSetObjectTagEXT = NULL;
PFN_vkDebugReportMessageEXT glext_vkDebugReportMessageEXT = NULL;
PFN_vkDeferredOperationJoinKHR glext_vkDeferredOperationJoinKHR = NULL;
PFN_vkDestroyAccelerationStructureKHR glext_vkDestroyAccelerationStructureKHR
  = NULL;
PFN_vkDestroyAccelerationStructureNV glext_vkDestroyAccelerationStructureNV
  = NULL;
PFN_vkDestroyBuffer glext_vkDestroyBuffer = NULL;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkDestroyBufferCollectionFUCHSIA glext_vkDestroyBufferCollectionFUCHSIA
  = NULL;

#endif
PFN_vkDestroyBufferView glext_vkDestroyBufferView = NULL;
PFN_vkDestroyCommandPool glext_vkDestroyCommandPool = NULL;
PFN_vkDestroyCuFunctionNVX glext_vkDestroyCuFunctionNVX = NULL;
PFN_vkDestroyCuModuleNVX glext_vkDestroyCuModuleNVX = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkDestroyCudaFunctionNV glext_vkDestroyCudaFunctionNV = NULL;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkDestroyCudaModuleNV glext_vkDestroyCudaModuleNV = NULL;

#endif
PFN_vkDestroyDataGraphPipelineSessionARM
  glext_vkDestroyDataGraphPipelineSessionARM = NULL;
PFN_vkDestroyDebugReportCallbackEXT glext_vkDestroyDebugReportCallbackEXT
  = NULL;
PFN_vkDestroyDebugUtilsMessengerEXT glext_vkDestroyDebugUtilsMessengerEXT
  = NULL;
PFN_vkDestroyDeferredOperationKHR glext_vkDestroyDeferredOperationKHR = NULL;
PFN_vkDestroyDescriptorPool glext_vkDestroyDescriptorPool = NULL;
PFN_vkDestroyDescriptorSetLayout glext_vkDestroyDescriptorSetLayout = NULL;
PFN_vkDestroyDescriptorUpdateTemplate glext_vkDestroyDescriptorUpdateTemplate
  = NULL;
PFN_vkDestroyDescriptorUpdateTemplateKHR
  glext_vkDestroyDescriptorUpdateTemplateKHR = NULL;
PFN_vkDestroyDevice glext_vkDestroyDevice = NULL;
PFN_vkDestroyEvent glext_vkDestroyEvent = NULL;
PFN_vkDestroyExternalComputeQueueNV glext_vkDestroyExternalComputeQueueNV
  = NULL;
PFN_vkDestroyFence glext_vkDestroyFence = NULL;
PFN_vkDestroyFramebuffer glext_vkDestroyFramebuffer = NULL;
PFN_vkDestroyImage glext_vkDestroyImage = NULL;
PFN_vkDestroyImageView glext_vkDestroyImageView = NULL;
PFN_vkDestroyIndirectCommandsLayoutEXT glext_vkDestroyIndirectCommandsLayoutEXT
  = NULL;
PFN_vkDestroyIndirectCommandsLayoutNV glext_vkDestroyIndirectCommandsLayoutNV
  = NULL;
PFN_vkDestroyIndirectExecutionSetEXT glext_vkDestroyIndirectExecutionSetEXT
  = NULL;
PFN_vkDestroyInstance glext_vkDestroyInstance = NULL;
PFN_vkDestroyMicromapEXT glext_vkDestroyMicromapEXT = NULL;
PFN_vkDestroyOpticalFlowSessionNV glext_vkDestroyOpticalFlowSessionNV = NULL;
PFN_vkDestroyPipeline glext_vkDestroyPipeline = NULL;
PFN_vkDestroyPipelineBinaryKHR glext_vkDestroyPipelineBinaryKHR = NULL;
PFN_vkDestroyPipelineCache glext_vkDestroyPipelineCache = NULL;
PFN_vkDestroyPipelineLayout glext_vkDestroyPipelineLayout = NULL;
PFN_vkDestroyPrivateDataSlot glext_vkDestroyPrivateDataSlot = NULL;
PFN_vkDestroyPrivateDataSlotEXT glext_vkDestroyPrivateDataSlotEXT = NULL;
PFN_vkDestroyQueryPool glext_vkDestroyQueryPool = NULL;
PFN_vkDestroyRenderPass glext_vkDestroyRenderPass = NULL;
PFN_vkDestroySampler glext_vkDestroySampler = NULL;
PFN_vkDestroySamplerYcbcrConversion glext_vkDestroySamplerYcbcrConversion
  = NULL;
PFN_vkDestroySamplerYcbcrConversionKHR glext_vkDestroySamplerYcbcrConversionKHR
  = NULL;
PFN_vkDestroySemaphore glext_vkDestroySemaphore = NULL;
PFN_vkDestroyShaderEXT glext_vkDestroyShaderEXT = NULL;
PFN_vkDestroyShaderModule glext_vkDestroyShaderModule = NULL;
PFN_vkDestroySurfaceKHR glext_vkDestroySurfaceKHR = NULL;
PFN_vkDestroySwapchainKHR glext_vkDestroySwapchainKHR = NULL;
PFN_vkDestroyTensorARM glext_vkDestroyTensorARM = NULL;
PFN_vkDestroyTensorViewARM glext_vkDestroyTensorViewARM = NULL;
PFN_vkDestroyValidationCacheEXT glext_vkDestroyValidationCacheEXT = NULL;
PFN_vkDeviceWaitIdle glext_vkDeviceWaitIdle = NULL;
PFN_vkDisplayPowerControlEXT glext_vkDisplayPowerControlEXT = NULL;
PFN_vkEndCommandBuffer glext_vkEndCommandBuffer = NULL;
PFN_vkEnumerateDeviceExtensionProperties
  glext_vkEnumerateDeviceExtensionProperties = NULL;
PFN_vkEnumerateDeviceLayerProperties glext_vkEnumerateDeviceLayerProperties
  = NULL;
PFN_vkEnumerateInstanceExtensionProperties
  glext_vkEnumerateInstanceExtensionProperties = NULL;
PFN_vkEnumerateInstanceLayerProperties glext_vkEnumerateInstanceLayerProperties
  = NULL;
PFN_vkEnumerateInstanceVersion glext_vkEnumerateInstanceVersion = NULL;
PFN_vkEnumeratePhysicalDeviceGroups glext_vkEnumeratePhysicalDeviceGroups
  = NULL;
PFN_vkEnumeratePhysicalDeviceGroupsKHR glext_vkEnumeratePhysicalDeviceGroupsKHR
  = NULL;
PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
  glext_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR = NULL;
PFN_vkEnumeratePhysicalDevices glext_vkEnumeratePhysicalDevices = NULL;
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkExportMetalObjectsEXT glext_vkExportMetalObjectsEXT = NULL;

#endif
PFN_vkFlushMappedMemoryRanges glext_vkFlushMappedMemoryRanges = NULL;
PFN_vkFreeCommandBuffers glext_vkFreeCommandBuffers = NULL;
PFN_vkFreeDescriptorSets glext_vkFreeDescriptorSets = NULL;
PFN_vkFreeMemory glext_vkFreeMemory = NULL;
PFN_vkGetAccelerationStructureBuildSizesKHR
  glext_vkGetAccelerationStructureBuildSizesKHR = NULL;
PFN_vkGetAccelerationStructureDeviceAddressKHR
  glext_vkGetAccelerationStructureDeviceAddressKHR = NULL;
PFN_vkGetAccelerationStructureHandleNV glext_vkGetAccelerationStructureHandleNV
  = NULL;
PFN_vkGetAccelerationStructureMemoryRequirementsNV
  glext_vkGetAccelerationStructureMemoryRequirementsNV = NULL;
PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT
  glext_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetAndroidHardwareBufferPropertiesANDROID
  glext_vkGetAndroidHardwareBufferPropertiesANDROID = NULL;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetBufferCollectionPropertiesFUCHSIA
  glext_vkGetBufferCollectionPropertiesFUCHSIA = NULL;

#endif
PFN_vkGetBufferDeviceAddress glext_vkGetBufferDeviceAddress = NULL;
PFN_vkGetBufferDeviceAddressEXT glext_vkGetBufferDeviceAddressEXT = NULL;
PFN_vkGetBufferDeviceAddressKHR glext_vkGetBufferDeviceAddressKHR = NULL;
PFN_vkGetBufferMemoryRequirements glext_vkGetBufferMemoryRequirements = NULL;
PFN_vkGetBufferMemoryRequirements2 glext_vkGetBufferMemoryRequirements2 = NULL;
PFN_vkGetBufferMemoryRequirements2KHR glext_vkGetBufferMemoryRequirements2KHR
  = NULL;
PFN_vkGetBufferOpaqueCaptureAddress glext_vkGetBufferOpaqueCaptureAddress
  = NULL;
PFN_vkGetBufferOpaqueCaptureAddressKHR glext_vkGetBufferOpaqueCaptureAddressKHR
  = NULL;
PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT
  glext_vkGetBufferOpaqueCaptureDescriptorDataEXT = NULL;
PFN_vkGetCalibratedTimestampsEXT glext_vkGetCalibratedTimestampsEXT = NULL;
PFN_vkGetCalibratedTimestampsKHR glext_vkGetCalibratedTimestampsKHR = NULL;
PFN_vkGetClusterAccelerationStructureBuildSizesNV
  glext_vkGetClusterAccelerationStructureBuildSizesNV = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkGetCudaModuleCacheNV glext_vkGetCudaModuleCacheNV = NULL;

#endif
PFN_vkGetDataGraphPipelineAvailablePropertiesARM
  glext_vkGetDataGraphPipelineAvailablePropertiesARM = NULL;
PFN_vkGetDataGraphPipelinePropertiesARM
  glext_vkGetDataGraphPipelinePropertiesARM = NULL;
PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM
  glext_vkGetDataGraphPipelineSessionBindPointRequirementsARM = NULL;
PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM
  glext_vkGetDataGraphPipelineSessionMemoryRequirementsARM = NULL;
PFN_vkGetDeferredOperationMaxConcurrencyKHR
  glext_vkGetDeferredOperationMaxConcurrencyKHR = NULL;
PFN_vkGetDeferredOperationResultKHR glext_vkGetDeferredOperationResultKHR
  = NULL;
PFN_vkGetDescriptorEXT glext_vkGetDescriptorEXT = NULL;
PFN_vkGetDescriptorSetHostMappingVALVE glext_vkGetDescriptorSetHostMappingVALVE
  = NULL;
PFN_vkGetDescriptorSetLayoutBindingOffsetEXT
  glext_vkGetDescriptorSetLayoutBindingOffsetEXT = NULL;
PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE
  glext_vkGetDescriptorSetLayoutHostMappingInfoVALVE = NULL;
PFN_vkGetDescriptorSetLayoutSizeEXT glext_vkGetDescriptorSetLayoutSizeEXT
  = NULL;
PFN_vkGetDescriptorSetLayoutSupport glext_vkGetDescriptorSetLayoutSupport
  = NULL;
PFN_vkGetDescriptorSetLayoutSupportKHR glext_vkGetDescriptorSetLayoutSupportKHR
  = NULL;
PFN_vkGetDeviceAccelerationStructureCompatibilityKHR
  glext_vkGetDeviceAccelerationStructureCompatibilityKHR = NULL;
PFN_vkGetDeviceBufferMemoryRequirements
  glext_vkGetDeviceBufferMemoryRequirements = NULL;
PFN_vkGetDeviceBufferMemoryRequirementsKHR
  glext_vkGetDeviceBufferMemoryRequirementsKHR = NULL;
PFN_vkGetDeviceFaultInfoEXT glext_vkGetDeviceFaultInfoEXT = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeatures glext_vkGetDeviceGroupPeerMemoryFeatures
  = NULL;
PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR
  glext_vkGetDeviceGroupPeerMemoryFeaturesKHR = NULL;
PFN_vkGetDeviceGroupPresentCapabilitiesKHR
  glext_vkGetDeviceGroupPresentCapabilitiesKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetDeviceGroupSurfacePresentModes2EXT
  glext_vkGetDeviceGroupSurfacePresentModes2EXT = NULL;

#endif
PFN_vkGetDeviceGroupSurfacePresentModesKHR
  glext_vkGetDeviceGroupSurfacePresentModesKHR = NULL;
PFN_vkGetDeviceImageMemoryRequirements glext_vkGetDeviceImageMemoryRequirements
  = NULL;
PFN_vkGetDeviceImageMemoryRequirementsKHR
  glext_vkGetDeviceImageMemoryRequirementsKHR = NULL;
PFN_vkGetDeviceImageSparseMemoryRequirements
  glext_vkGetDeviceImageSparseMemoryRequirements = NULL;
PFN_vkGetDeviceImageSparseMemoryRequirementsKHR
  glext_vkGetDeviceImageSparseMemoryRequirementsKHR = NULL;
PFN_vkGetDeviceImageSubresourceLayout glext_vkGetDeviceImageSubresourceLayout
  = NULL;
PFN_vkGetDeviceImageSubresourceLayoutKHR
  glext_vkGetDeviceImageSubresourceLayoutKHR = NULL;
PFN_vkGetDeviceMemoryCommitment glext_vkGetDeviceMemoryCommitment = NULL;
PFN_vkGetDeviceMemoryOpaqueCaptureAddress
  glext_vkGetDeviceMemoryOpaqueCaptureAddress = NULL;
PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR
  glext_vkGetDeviceMemoryOpaqueCaptureAddressKHR = NULL;
PFN_vkGetDeviceMicromapCompatibilityEXT
  glext_vkGetDeviceMicromapCompatibilityEXT = NULL;
PFN_vkGetDeviceProcAddr glext_vkGetDeviceProcAddr = NULL;
PFN_vkGetDeviceQueue glext_vkGetDeviceQueue = NULL;
PFN_vkGetDeviceQueue2 glext_vkGetDeviceQueue2 = NULL;
PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI
  glext_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI = NULL;
PFN_vkGetDeviceTensorMemoryRequirementsARM
  glext_vkGetDeviceTensorMemoryRequirementsARM = NULL;
PFN_vkGetDisplayModeProperties2KHR glext_vkGetDisplayModeProperties2KHR = NULL;
PFN_vkGetDisplayModePropertiesKHR glext_vkGetDisplayModePropertiesKHR = NULL;
PFN_vkGetDisplayPlaneCapabilities2KHR glext_vkGetDisplayPlaneCapabilities2KHR
  = NULL;
PFN_vkGetDisplayPlaneCapabilitiesKHR glext_vkGetDisplayPlaneCapabilitiesKHR
  = NULL;
PFN_vkGetDisplayPlaneSupportedDisplaysKHR
  glext_vkGetDisplayPlaneSupportedDisplaysKHR = NULL;
PFN_vkGetDrmDisplayEXT glext_vkGetDrmDisplayEXT = NULL;
PFN_vkGetDynamicRenderingTilePropertiesQCOM
  glext_vkGetDynamicRenderingTilePropertiesQCOM = NULL;
PFN_vkGetEventStatus glext_vkGetEventStatus = NULL;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkGetExecutionGraphPipelineNodeIndexAMDX
  glext_vkGetExecutionGraphPipelineNodeIndexAMDX = NULL;

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
PFN_vkGetExecutionGraphPipelineScratchSizeAMDX
  glext_vkGetExecutionGraphPipelineScratchSizeAMDX = NULL;

#endif
PFN_vkGetExternalComputeQueueDataNV glext_vkGetExternalComputeQueueDataNV
  = NULL;
PFN_vkGetFenceFdKHR glext_vkGetFenceFdKHR = NULL;
PFN_vkGetFenceStatus glext_vkGetFenceStatus = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetFenceWin32HandleKHR glext_vkGetFenceWin32HandleKHR = NULL;

#endif
PFN_vkGetFramebufferTilePropertiesQCOM glext_vkGetFramebufferTilePropertiesQCOM
  = NULL;
PFN_vkGetGeneratedCommandsMemoryRequirementsEXT
  glext_vkGetGeneratedCommandsMemoryRequirementsEXT = NULL;
PFN_vkGetGeneratedCommandsMemoryRequirementsNV
  glext_vkGetGeneratedCommandsMemoryRequirementsNV = NULL;
PFN_vkGetImageDrmFormatModifierPropertiesEXT
  glext_vkGetImageDrmFormatModifierPropertiesEXT = NULL;
PFN_vkGetImageMemoryRequirements glext_vkGetImageMemoryRequirements = NULL;
PFN_vkGetImageMemoryRequirements2 glext_vkGetImageMemoryRequirements2 = NULL;
PFN_vkGetImageMemoryRequirements2KHR glext_vkGetImageMemoryRequirements2KHR
  = NULL;
PFN_vkGetImageOpaqueCaptureDescriptorDataEXT
  glext_vkGetImageOpaqueCaptureDescriptorDataEXT = NULL;
PFN_vkGetImageSparseMemoryRequirements glext_vkGetImageSparseMemoryRequirements
  = NULL;
PFN_vkGetImageSparseMemoryRequirements2
  glext_vkGetImageSparseMemoryRequirements2 = NULL;
PFN_vkGetImageSparseMemoryRequirements2KHR
  glext_vkGetImageSparseMemoryRequirements2KHR = NULL;
PFN_vkGetImageSubresourceLayout glext_vkGetImageSubresourceLayout = NULL;
PFN_vkGetImageSubresourceLayout2 glext_vkGetImageSubresourceLayout2 = NULL;
PFN_vkGetImageSubresourceLayout2EXT glext_vkGetImageSubresourceLayout2EXT
  = NULL;
PFN_vkGetImageSubresourceLayout2KHR glext_vkGetImageSubresourceLayout2KHR
  = NULL;
PFN_vkGetImageViewAddressNVX glext_vkGetImageViewAddressNVX = NULL;
PFN_vkGetImageViewHandle64NVX glext_vkGetImageViewHandle64NVX = NULL;
PFN_vkGetImageViewHandleNVX glext_vkGetImageViewHandleNVX = NULL;
PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT
  glext_vkGetImageViewOpaqueCaptureDescriptorDataEXT = NULL;
PFN_vkGetInstanceProcAddr glext_vkGetInstanceProcAddr = NULL;
PFN_vkGetLatencyTimingsNV glext_vkGetLatencyTimingsNV = NULL;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
PFN_vkGetMemoryAndroidHardwareBufferANDROID
  glext_vkGetMemoryAndroidHardwareBufferANDROID = NULL;

#endif
PFN_vkGetMemoryFdKHR glext_vkGetMemoryFdKHR = NULL;
PFN_vkGetMemoryFdPropertiesKHR glext_vkGetMemoryFdPropertiesKHR = NULL;
PFN_vkGetMemoryHostPointerPropertiesEXT
  glext_vkGetMemoryHostPointerPropertiesEXT = NULL;
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkGetMemoryMetalHandleEXT glext_vkGetMemoryMetalHandleEXT = NULL;

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
PFN_vkGetMemoryMetalHandlePropertiesEXT
  glext_vkGetMemoryMetalHandlePropertiesEXT = NULL;

#endif
PFN_vkGetMemoryRemoteAddressNV glext_vkGetMemoryRemoteAddressNV = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleKHR glext_vkGetMemoryWin32HandleKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandleNV glext_vkGetMemoryWin32HandleNV = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetMemoryWin32HandlePropertiesKHR
  glext_vkGetMemoryWin32HandlePropertiesKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetMemoryZirconHandleFUCHSIA glext_vkGetMemoryZirconHandleFUCHSIA = NULL;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA
  glext_vkGetMemoryZirconHandlePropertiesFUCHSIA = NULL;

#endif
PFN_vkGetMicromapBuildSizesEXT glext_vkGetMicromapBuildSizesEXT = NULL;
PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV
  glext_vkGetPartitionedAccelerationStructuresBuildSizesNV = NULL;
PFN_vkGetPastPresentationTimingGOOGLE glext_vkGetPastPresentationTimingGOOGLE
  = NULL;
PFN_vkGetPerformanceParameterINTEL glext_vkGetPerformanceParameterINTEL = NULL;
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
  glext_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT = NULL;
PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR
  glext_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR = NULL;
PFN_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV
  glext_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV
  = NULL;
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR
  glext_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
  glext_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV = NULL;
PFN_vkGetPhysicalDeviceCooperativeVectorPropertiesNV
  glext_vkGetPhysicalDeviceCooperativeVectorPropertiesNV = NULL;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT
  glext_vkGetPhysicalDeviceDirectFBPresentationSupportEXT = NULL;

#endif
PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR
  glext_vkGetPhysicalDeviceDisplayPlaneProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR
  glext_vkGetPhysicalDeviceDisplayPlanePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceDisplayProperties2KHR
  glext_vkGetPhysicalDeviceDisplayProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceDisplayPropertiesKHR
  glext_vkGetPhysicalDeviceDisplayPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalBufferProperties
  glext_vkGetPhysicalDeviceExternalBufferProperties = NULL;
PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR
  glext_vkGetPhysicalDeviceExternalBufferPropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalFenceProperties
  glext_vkGetPhysicalDeviceExternalFenceProperties = NULL;
PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR
  glext_vkGetPhysicalDeviceExternalFencePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV
  glext_vkGetPhysicalDeviceExternalImageFormatPropertiesNV = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphoreProperties
  glext_vkGetPhysicalDeviceExternalSemaphoreProperties = NULL;
PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
  glext_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR = NULL;
PFN_vkGetPhysicalDeviceExternalTensorPropertiesARM
  glext_vkGetPhysicalDeviceExternalTensorPropertiesARM = NULL;
PFN_vkGetPhysicalDeviceFeatures glext_vkGetPhysicalDeviceFeatures = NULL;
PFN_vkGetPhysicalDeviceFeatures2 glext_vkGetPhysicalDeviceFeatures2 = NULL;
PFN_vkGetPhysicalDeviceFeatures2KHR glext_vkGetPhysicalDeviceFeatures2KHR
  = NULL;
PFN_vkGetPhysicalDeviceFormatProperties
  glext_vkGetPhysicalDeviceFormatProperties = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2
  glext_vkGetPhysicalDeviceFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceFormatProperties2KHR
  glext_vkGetPhysicalDeviceFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR
  glext_vkGetPhysicalDeviceFragmentShadingRatesKHR = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties
  glext_vkGetPhysicalDeviceImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2
  glext_vkGetPhysicalDeviceImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceImageFormatProperties2KHR
  glext_vkGetPhysicalDeviceImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties
  glext_vkGetPhysicalDeviceMemoryProperties = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2
  glext_vkGetPhysicalDeviceMemoryProperties2 = NULL;
PFN_vkGetPhysicalDeviceMemoryProperties2KHR
  glext_vkGetPhysicalDeviceMemoryProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT
  glext_vkGetPhysicalDeviceMultisamplePropertiesEXT = NULL;
PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV
  glext_vkGetPhysicalDeviceOpticalFlowImageFormatsNV = NULL;
PFN_vkGetPhysicalDevicePresentRectanglesKHR
  glext_vkGetPhysicalDevicePresentRectanglesKHR = NULL;
PFN_vkGetPhysicalDeviceProperties glext_vkGetPhysicalDeviceProperties = NULL;
PFN_vkGetPhysicalDeviceProperties2 glext_vkGetPhysicalDeviceProperties2 = NULL;
PFN_vkGetPhysicalDeviceProperties2KHR glext_vkGetPhysicalDeviceProperties2KHR
  = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM
  glext_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM
  = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM
  glext_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
  glext_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties
  glext_vkGetPhysicalDeviceQueueFamilyProperties = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2
  glext_vkGetPhysicalDeviceQueueFamilyProperties2 = NULL;
PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR
  glext_vkGetPhysicalDeviceQueueFamilyProperties2KHR = NULL;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX
  glext_vkGetPhysicalDeviceScreenPresentationSupportQNX = NULL;

#endif
PFN_vkGetPhysicalDeviceSparseImageFormatProperties
  glext_vkGetPhysicalDeviceSparseImageFormatProperties = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2
  glext_vkGetPhysicalDeviceSparseImageFormatProperties2 = NULL;
PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR
  glext_vkGetPhysicalDeviceSparseImageFormatProperties2KHR = NULL;
PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
  glext_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
  = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT
  glext_vkGetPhysicalDeviceSurfaceCapabilities2EXT = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR
  glext_vkGetPhysicalDeviceSurfaceCapabilities2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
  glext_vkGetPhysicalDeviceSurfaceCapabilitiesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormats2KHR
  glext_vkGetPhysicalDeviceSurfaceFormats2KHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceFormatsKHR
  glext_vkGetPhysicalDeviceSurfaceFormatsKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT
  glext_vkGetPhysicalDeviceSurfacePresentModes2EXT = NULL;

#endif
PFN_vkGetPhysicalDeviceSurfacePresentModesKHR
  glext_vkGetPhysicalDeviceSurfacePresentModesKHR = NULL;
PFN_vkGetPhysicalDeviceSurfaceSupportKHR
  glext_vkGetPhysicalDeviceSurfaceSupportKHR = NULL;
PFN_vkGetPhysicalDeviceToolProperties glext_vkGetPhysicalDeviceToolProperties
  = NULL;
PFN_vkGetPhysicalDeviceToolPropertiesEXT
  glext_vkGetPhysicalDeviceToolPropertiesEXT = NULL;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR
  glext_vkGetPhysicalDeviceWaylandPresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR
  glext_vkGetPhysicalDeviceWin32PresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR
  glext_vkGetPhysicalDeviceXcbPresentationSupportKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR
  glext_vkGetPhysicalDeviceXlibPresentationSupportKHR = NULL;

#endif
PFN_vkGetPipelineBinaryDataKHR glext_vkGetPipelineBinaryDataKHR = NULL;
PFN_vkGetPipelineCacheData glext_vkGetPipelineCacheData = NULL;
PFN_vkGetPipelineExecutableInternalRepresentationsKHR
  glext_vkGetPipelineExecutableInternalRepresentationsKHR = NULL;
PFN_vkGetPipelineExecutablePropertiesKHR
  glext_vkGetPipelineExecutablePropertiesKHR = NULL;
PFN_vkGetPipelineExecutableStatisticsKHR
  glext_vkGetPipelineExecutableStatisticsKHR = NULL;
PFN_vkGetPipelineIndirectDeviceAddressNV
  glext_vkGetPipelineIndirectDeviceAddressNV = NULL;
PFN_vkGetPipelineIndirectMemoryRequirementsNV
  glext_vkGetPipelineIndirectMemoryRequirementsNV = NULL;
PFN_vkGetPipelineKeyKHR glext_vkGetPipelineKeyKHR = NULL;
PFN_vkGetPipelinePropertiesEXT glext_vkGetPipelinePropertiesEXT = NULL;
PFN_vkGetPrivateData glext_vkGetPrivateData = NULL;
PFN_vkGetPrivateDataEXT glext_vkGetPrivateDataEXT = NULL;
PFN_vkGetQueryPoolResults glext_vkGetQueryPoolResults = NULL;
PFN_vkGetQueueCheckpointData2NV glext_vkGetQueueCheckpointData2NV = NULL;
PFN_vkGetQueueCheckpointDataNV glext_vkGetQueueCheckpointDataNV = NULL;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
PFN_vkGetRandROutputDisplayEXT glext_vkGetRandROutputDisplayEXT = NULL;

#endif
PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR
  glext_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR = NULL;
PFN_vkGetRayTracingShaderGroupHandlesKHR
  glext_vkGetRayTracingShaderGroupHandlesKHR = NULL;
PFN_vkGetRayTracingShaderGroupHandlesNV
  glext_vkGetRayTracingShaderGroupHandlesNV = NULL;
PFN_vkGetRayTracingShaderGroupStackSizeKHR
  glext_vkGetRayTracingShaderGroupStackSizeKHR = NULL;
PFN_vkGetRefreshCycleDurationGOOGLE glext_vkGetRefreshCycleDurationGOOGLE
  = NULL;
PFN_vkGetRenderAreaGranularity glext_vkGetRenderAreaGranularity = NULL;
PFN_vkGetRenderingAreaGranularity glext_vkGetRenderingAreaGranularity = NULL;
PFN_vkGetRenderingAreaGranularityKHR glext_vkGetRenderingAreaGranularityKHR
  = NULL;
PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT
  glext_vkGetSamplerOpaqueCaptureDescriptorDataEXT = NULL;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
PFN_vkGetScreenBufferPropertiesQNX glext_vkGetScreenBufferPropertiesQNX = NULL;

#endif
PFN_vkGetSemaphoreCounterValue glext_vkGetSemaphoreCounterValue = NULL;
PFN_vkGetSemaphoreCounterValueKHR glext_vkGetSemaphoreCounterValueKHR = NULL;
PFN_vkGetSemaphoreFdKHR glext_vkGetSemaphoreFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetSemaphoreWin32HandleKHR glext_vkGetSemaphoreWin32HandleKHR = NULL;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkGetSemaphoreZirconHandleFUCHSIA glext_vkGetSemaphoreZirconHandleFUCHSIA
  = NULL;

#endif
PFN_vkGetShaderBinaryDataEXT glext_vkGetShaderBinaryDataEXT = NULL;
PFN_vkGetShaderInfoAMD glext_vkGetShaderInfoAMD = NULL;
PFN_vkGetShaderModuleCreateInfoIdentifierEXT
  glext_vkGetShaderModuleCreateInfoIdentifierEXT = NULL;
PFN_vkGetShaderModuleIdentifierEXT glext_vkGetShaderModuleIdentifierEXT = NULL;
PFN_vkGetSwapchainCounterEXT glext_vkGetSwapchainCounterEXT = NULL;
PFN_vkGetSwapchainImagesKHR glext_vkGetSwapchainImagesKHR = NULL;
PFN_vkGetSwapchainStatusKHR glext_vkGetSwapchainStatusKHR = NULL;
PFN_vkGetTensorMemoryRequirementsARM glext_vkGetTensorMemoryRequirementsARM
  = NULL;
PFN_vkGetTensorOpaqueCaptureDescriptorDataARM
  glext_vkGetTensorOpaqueCaptureDescriptorDataARM = NULL;
PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM
  glext_vkGetTensorViewOpaqueCaptureDescriptorDataARM = NULL;
PFN_vkGetValidationCacheDataEXT glext_vkGetValidationCacheDataEXT = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkGetWinrtDisplayNV glext_vkGetWinrtDisplayNV = NULL;

#endif
PFN_vkImportFenceFdKHR glext_vkImportFenceFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportFenceWin32HandleKHR glext_vkImportFenceWin32HandleKHR = NULL;

#endif
PFN_vkImportSemaphoreFdKHR glext_vkImportSemaphoreFdKHR = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkImportSemaphoreWin32HandleKHR glext_vkImportSemaphoreWin32HandleKHR
  = NULL;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkImportSemaphoreZirconHandleFUCHSIA
  glext_vkImportSemaphoreZirconHandleFUCHSIA = NULL;

#endif
PFN_vkInitializePerformanceApiINTEL glext_vkInitializePerformanceApiINTEL
  = NULL;
PFN_vkInvalidateMappedMemoryRanges glext_vkInvalidateMappedMemoryRanges = NULL;
PFN_vkLatencySleepNV glext_vkLatencySleepNV = NULL;
PFN_vkMapMemory glext_vkMapMemory = NULL;
PFN_vkMapMemory2 glext_vkMapMemory2 = NULL;
PFN_vkMapMemory2KHR glext_vkMapMemory2KHR = NULL;
PFN_vkMergePipelineCaches glext_vkMergePipelineCaches = NULL;
PFN_vkMergeValidationCachesEXT glext_vkMergeValidationCachesEXT = NULL;
PFN_vkQueueBeginDebugUtilsLabelEXT glext_vkQueueBeginDebugUtilsLabelEXT = NULL;
PFN_vkQueueBindSparse glext_vkQueueBindSparse = NULL;
PFN_vkQueueEndDebugUtilsLabelEXT glext_vkQueueEndDebugUtilsLabelEXT = NULL;
PFN_vkQueueInsertDebugUtilsLabelEXT glext_vkQueueInsertDebugUtilsLabelEXT
  = NULL;
PFN_vkQueueNotifyOutOfBandNV glext_vkQueueNotifyOutOfBandNV = NULL;
PFN_vkQueuePresentKHR glext_vkQueuePresentKHR = NULL;
PFN_vkQueueSetPerformanceConfigurationINTEL
  glext_vkQueueSetPerformanceConfigurationINTEL = NULL;
PFN_vkQueueSubmit glext_vkQueueSubmit = NULL;
PFN_vkQueueSubmit2 glext_vkQueueSubmit2 = NULL;
PFN_vkQueueSubmit2KHR glext_vkQueueSubmit2KHR = NULL;
PFN_vkQueueWaitIdle glext_vkQueueWaitIdle = NULL;
PFN_vkRegisterDeviceEventEXT glext_vkRegisterDeviceEventEXT = NULL;
PFN_vkRegisterDisplayEventEXT glext_vkRegisterDisplayEventEXT = NULL;
PFN_vkReleaseCapturedPipelineDataKHR glext_vkReleaseCapturedPipelineDataKHR
  = NULL;
PFN_vkReleaseDisplayEXT glext_vkReleaseDisplayEXT = NULL;
#if defined(VK_USE_PLATFORM_WIN32_KHR)
PFN_vkReleaseFullScreenExclusiveModeEXT
  glext_vkReleaseFullScreenExclusiveModeEXT = NULL;

#endif
PFN_vkReleasePerformanceConfigurationINTEL
  glext_vkReleasePerformanceConfigurationINTEL = NULL;
PFN_vkReleaseProfilingLockKHR glext_vkReleaseProfilingLockKHR = NULL;
PFN_vkReleaseSwapchainImagesEXT glext_vkReleaseSwapchainImagesEXT = NULL;
PFN_vkReleaseSwapchainImagesKHR glext_vkReleaseSwapchainImagesKHR = NULL;
PFN_vkResetCommandBuffer glext_vkResetCommandBuffer = NULL;
PFN_vkResetCommandPool glext_vkResetCommandPool = NULL;
PFN_vkResetDescriptorPool glext_vkResetDescriptorPool = NULL;
PFN_vkResetEvent glext_vkResetEvent = NULL;
PFN_vkResetFences glext_vkResetFences = NULL;
PFN_vkResetQueryPool glext_vkResetQueryPool = NULL;
PFN_vkResetQueryPoolEXT glext_vkResetQueryPoolEXT = NULL;
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA
  glext_vkSetBufferCollectionBufferConstraintsFUCHSIA = NULL;

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
PFN_vkSetBufferCollectionImageConstraintsFUCHSIA
  glext_vkSetBufferCollectionImageConstraintsFUCHSIA = NULL;

#endif
PFN_vkSetDebugUtilsObjectNameEXT glext_vkSetDebugUtilsObjectNameEXT = NULL;
PFN_vkSetDebugUtilsObjectTagEXT glext_vkSetDebugUtilsObjectTagEXT = NULL;
PFN_vkSetDeviceMemoryPriorityEXT glext_vkSetDeviceMemoryPriorityEXT = NULL;
PFN_vkSetEvent glext_vkSetEvent = NULL;
PFN_vkSetHdrMetadataEXT glext_vkSetHdrMetadataEXT = NULL;
PFN_vkSetLatencyMarkerNV glext_vkSetLatencyMarkerNV = NULL;
PFN_vkSetLatencySleepModeNV glext_vkSetLatencySleepModeNV = NULL;
PFN_vkSetLocalDimmingAMD glext_vkSetLocalDimmingAMD = NULL;
PFN_vkSetPrivateData glext_vkSetPrivateData = NULL;
PFN_vkSetPrivateDataEXT glext_vkSetPrivateDataEXT = NULL;
PFN_vkSignalSemaphore glext_vkSignalSemaphore = NULL;
PFN_vkSignalSemaphoreKHR glext_vkSignalSemaphoreKHR = NULL;
PFN_vkSubmitDebugUtilsMessageEXT glext_vkSubmitDebugUtilsMessageEXT = NULL;
PFN_vkTransitionImageLayout glext_vkTransitionImageLayout = NULL;
PFN_vkTransitionImageLayoutEXT glext_vkTransitionImageLayoutEXT = NULL;
PFN_vkTrimCommandPool glext_vkTrimCommandPool = NULL;
PFN_vkTrimCommandPoolKHR glext_vkTrimCommandPoolKHR = NULL;
PFN_vkUninitializePerformanceApiINTEL glext_vkUninitializePerformanceApiINTEL
  = NULL;
PFN_vkUnmapMemory glext_vkUnmapMemory = NULL;
PFN_vkUnmapMemory2 glext_vkUnmapMemory2 = NULL;
PFN_vkUnmapMemory2KHR glext_vkUnmapMemory2KHR = NULL;
PFN_vkUpdateDescriptorSetWithTemplate glext_vkUpdateDescriptorSetWithTemplate
  = NULL;
PFN_vkUpdateDescriptorSetWithTemplateKHR
  glext_vkUpdateDescriptorSetWithTemplateKHR = NULL;
PFN_vkUpdateDescriptorSets glext_vkUpdateDescriptorSets = NULL;
PFN_vkUpdateIndirectExecutionSetPipelineEXT
  glext_vkUpdateIndirectExecutionSetPipelineEXT = NULL;
PFN_vkUpdateIndirectExecutionSetShaderEXT
  glext_vkUpdateIndirectExecutionSetShaderEXT = NULL;
PFN_vkWaitForFences glext_vkWaitForFences = NULL;
PFN_vkWaitForPresent2KHR glext_vkWaitForPresent2KHR = NULL;
PFN_vkWaitForPresentKHR glext_vkWaitForPresentKHR = NULL;
PFN_vkWaitSemaphores glext_vkWaitSemaphores = NULL;
PFN_vkWaitSemaphoresKHR glext_vkWaitSemaphoresKHR = NULL;
PFN_vkWriteAccelerationStructuresPropertiesKHR
  glext_vkWriteAccelerationStructuresPropertiesKHR = NULL;
PFN_vkWriteMicromapsPropertiesEXT glext_vkWriteMicromapsPropertiesEXT = NULL;

static void
glext_vk_load_VK_VERSION_1_0 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_VERSION_1_0)
    return;
  glext_vkAllocateCommandBuffers
    = (PFN_vkAllocateCommandBuffers)load (userptr, "vkAllocateCommandBuffers");
  glext_vkAllocateDescriptorSets
    = (PFN_vkAllocateDescriptorSets)load (userptr, "vkAllocateDescriptorSets");
  glext_vkAllocateMemory
    = (PFN_vkAllocateMemory)load (userptr, "vkAllocateMemory");
  glext_vkBeginCommandBuffer
    = (PFN_vkBeginCommandBuffer)load (userptr, "vkBeginCommandBuffer");
  glext_vkBindBufferMemory
    = (PFN_vkBindBufferMemory)load (userptr, "vkBindBufferMemory");
  glext_vkBindImageMemory
    = (PFN_vkBindImageMemory)load (userptr, "vkBindImageMemory");
  glext_vkCmdBeginQuery
    = (PFN_vkCmdBeginQuery)load (userptr, "vkCmdBeginQuery");
  glext_vkCmdBeginRenderPass
    = (PFN_vkCmdBeginRenderPass)load (userptr, "vkCmdBeginRenderPass");
  glext_vkCmdBindDescriptorSets
    = (PFN_vkCmdBindDescriptorSets)load (userptr, "vkCmdBindDescriptorSets");
  glext_vkCmdBindIndexBuffer
    = (PFN_vkCmdBindIndexBuffer)load (userptr, "vkCmdBindIndexBuffer");
  glext_vkCmdBindPipeline
    = (PFN_vkCmdBindPipeline)load (userptr, "vkCmdBindPipeline");
  glext_vkCmdBindVertexBuffers
    = (PFN_vkCmdBindVertexBuffers)load (userptr, "vkCmdBindVertexBuffers");
  glext_vkCmdBlitImage = (PFN_vkCmdBlitImage)load (userptr, "vkCmdBlitImage");
  glext_vkCmdClearAttachments
    = (PFN_vkCmdClearAttachments)load (userptr, "vkCmdClearAttachments");
  glext_vkCmdClearColorImage
    = (PFN_vkCmdClearColorImage)load (userptr, "vkCmdClearColorImage");
  glext_vkCmdClearDepthStencilImage = (PFN_vkCmdClearDepthStencilImage)load (
    userptr, "vkCmdClearDepthStencilImage");
  glext_vkCmdCopyBuffer
    = (PFN_vkCmdCopyBuffer)load (userptr, "vkCmdCopyBuffer");
  glext_vkCmdCopyBufferToImage
    = (PFN_vkCmdCopyBufferToImage)load (userptr, "vkCmdCopyBufferToImage");
  glext_vkCmdCopyImage = (PFN_vkCmdCopyImage)load (userptr, "vkCmdCopyImage");
  glext_vkCmdCopyImageToBuffer
    = (PFN_vkCmdCopyImageToBuffer)load (userptr, "vkCmdCopyImageToBuffer");
  glext_vkCmdCopyQueryPoolResults = (PFN_vkCmdCopyQueryPoolResults)load (
    userptr, "vkCmdCopyQueryPoolResults");
  glext_vkCmdDispatch = (PFN_vkCmdDispatch)load (userptr, "vkCmdDispatch");
  glext_vkCmdDispatchIndirect
    = (PFN_vkCmdDispatchIndirect)load (userptr, "vkCmdDispatchIndirect");
  glext_vkCmdDraw = (PFN_vkCmdDraw)load (userptr, "vkCmdDraw");
  glext_vkCmdDrawIndexed
    = (PFN_vkCmdDrawIndexed)load (userptr, "vkCmdDrawIndexed");
  glext_vkCmdDrawIndexedIndirect
    = (PFN_vkCmdDrawIndexedIndirect)load (userptr, "vkCmdDrawIndexedIndirect");
  glext_vkCmdDrawIndirect
    = (PFN_vkCmdDrawIndirect)load (userptr, "vkCmdDrawIndirect");
  glext_vkCmdEndQuery = (PFN_vkCmdEndQuery)load (userptr, "vkCmdEndQuery");
  glext_vkCmdEndRenderPass
    = (PFN_vkCmdEndRenderPass)load (userptr, "vkCmdEndRenderPass");
  glext_vkCmdExecuteCommands
    = (PFN_vkCmdExecuteCommands)load (userptr, "vkCmdExecuteCommands");
  glext_vkCmdFillBuffer
    = (PFN_vkCmdFillBuffer)load (userptr, "vkCmdFillBuffer");
  glext_vkCmdNextSubpass
    = (PFN_vkCmdNextSubpass)load (userptr, "vkCmdNextSubpass");
  glext_vkCmdPipelineBarrier
    = (PFN_vkCmdPipelineBarrier)load (userptr, "vkCmdPipelineBarrier");
  glext_vkCmdPushConstants
    = (PFN_vkCmdPushConstants)load (userptr, "vkCmdPushConstants");
  glext_vkCmdResetEvent
    = (PFN_vkCmdResetEvent)load (userptr, "vkCmdResetEvent");
  glext_vkCmdResetQueryPool
    = (PFN_vkCmdResetQueryPool)load (userptr, "vkCmdResetQueryPool");
  glext_vkCmdResolveImage
    = (PFN_vkCmdResolveImage)load (userptr, "vkCmdResolveImage");
  glext_vkCmdSetBlendConstants
    = (PFN_vkCmdSetBlendConstants)load (userptr, "vkCmdSetBlendConstants");
  glext_vkCmdSetDepthBias
    = (PFN_vkCmdSetDepthBias)load (userptr, "vkCmdSetDepthBias");
  glext_vkCmdSetDepthBounds
    = (PFN_vkCmdSetDepthBounds)load (userptr, "vkCmdSetDepthBounds");
  glext_vkCmdSetEvent = (PFN_vkCmdSetEvent)load (userptr, "vkCmdSetEvent");
  glext_vkCmdSetLineWidth
    = (PFN_vkCmdSetLineWidth)load (userptr, "vkCmdSetLineWidth");
  glext_vkCmdSetScissor
    = (PFN_vkCmdSetScissor)load (userptr, "vkCmdSetScissor");
  glext_vkCmdSetStencilCompareMask = (PFN_vkCmdSetStencilCompareMask)load (
    userptr, "vkCmdSetStencilCompareMask");
  glext_vkCmdSetStencilReference
    = (PFN_vkCmdSetStencilReference)load (userptr, "vkCmdSetStencilReference");
  glext_vkCmdSetStencilWriteMask
    = (PFN_vkCmdSetStencilWriteMask)load (userptr, "vkCmdSetStencilWriteMask");
  glext_vkCmdSetViewport
    = (PFN_vkCmdSetViewport)load (userptr, "vkCmdSetViewport");
  glext_vkCmdUpdateBuffer
    = (PFN_vkCmdUpdateBuffer)load (userptr, "vkCmdUpdateBuffer");
  glext_vkCmdWaitEvents
    = (PFN_vkCmdWaitEvents)load (userptr, "vkCmdWaitEvents");
  glext_vkCmdWriteTimestamp
    = (PFN_vkCmdWriteTimestamp)load (userptr, "vkCmdWriteTimestamp");
  glext_vkCreateBuffer = (PFN_vkCreateBuffer)load (userptr, "vkCreateBuffer");
  glext_vkCreateBufferView
    = (PFN_vkCreateBufferView)load (userptr, "vkCreateBufferView");
  glext_vkCreateCommandPool
    = (PFN_vkCreateCommandPool)load (userptr, "vkCreateCommandPool");
  glext_vkCreateComputePipelines
    = (PFN_vkCreateComputePipelines)load (userptr, "vkCreateComputePipelines");
  glext_vkCreateDescriptorPool
    = (PFN_vkCreateDescriptorPool)load (userptr, "vkCreateDescriptorPool");
  glext_vkCreateDescriptorSetLayout = (PFN_vkCreateDescriptorSetLayout)load (
    userptr, "vkCreateDescriptorSetLayout");
  glext_vkCreateDevice = (PFN_vkCreateDevice)load (userptr, "vkCreateDevice");
  glext_vkCreateEvent = (PFN_vkCreateEvent)load (userptr, "vkCreateEvent");
  glext_vkCreateFence = (PFN_vkCreateFence)load (userptr, "vkCreateFence");
  glext_vkCreateFramebuffer
    = (PFN_vkCreateFramebuffer)load (userptr, "vkCreateFramebuffer");
  glext_vkCreateGraphicsPipelines = (PFN_vkCreateGraphicsPipelines)load (
    userptr, "vkCreateGraphicsPipelines");
  glext_vkCreateImage = (PFN_vkCreateImage)load (userptr, "vkCreateImage");
  glext_vkCreateImageView
    = (PFN_vkCreateImageView)load (userptr, "vkCreateImageView");
  glext_vkCreateInstance
    = (PFN_vkCreateInstance)load (userptr, "vkCreateInstance");
  glext_vkCreatePipelineCache
    = (PFN_vkCreatePipelineCache)load (userptr, "vkCreatePipelineCache");
  glext_vkCreatePipelineLayout
    = (PFN_vkCreatePipelineLayout)load (userptr, "vkCreatePipelineLayout");
  glext_vkCreateQueryPool
    = (PFN_vkCreateQueryPool)load (userptr, "vkCreateQueryPool");
  glext_vkCreateRenderPass
    = (PFN_vkCreateRenderPass)load (userptr, "vkCreateRenderPass");
  glext_vkCreateSampler
    = (PFN_vkCreateSampler)load (userptr, "vkCreateSampler");
  glext_vkCreateSemaphore
    = (PFN_vkCreateSemaphore)load (userptr, "vkCreateSemaphore");
  glext_vkCreateShaderModule
    = (PFN_vkCreateShaderModule)load (userptr, "vkCreateShaderModule");
  glext_vkDestroyBuffer
    = (PFN_vkDestroyBuffer)load (userptr, "vkDestroyBuffer");
  glext_vkDestroyBufferView
    = (PFN_vkDestroyBufferView)load (userptr, "vkDestroyBufferView");
  glext_vkDestroyCommandPool
    = (PFN_vkDestroyCommandPool)load (userptr, "vkDestroyCommandPool");
  glext_vkDestroyDescriptorPool
    = (PFN_vkDestroyDescriptorPool)load (userptr, "vkDestroyDescriptorPool");
  glext_vkDestroyDescriptorSetLayout = (PFN_vkDestroyDescriptorSetLayout)load (
    userptr, "vkDestroyDescriptorSetLayout");
  glext_vkDestroyDevice
    = (PFN_vkDestroyDevice)load (userptr, "vkDestroyDevice");
  glext_vkDestroyEvent = (PFN_vkDestroyEvent)load (userptr, "vkDestroyEvent");
  glext_vkDestroyFence = (PFN_vkDestroyFence)load (userptr, "vkDestroyFence");
  glext_vkDestroyFramebuffer
    = (PFN_vkDestroyFramebuffer)load (userptr, "vkDestroyFramebuffer");
  glext_vkDestroyImage = (PFN_vkDestroyImage)load (userptr, "vkDestroyImage");
  glext_vkDestroyImageView
    = (PFN_vkDestroyImageView)load (userptr, "vkDestroyImageView");
  glext_vkDestroyInstance
    = (PFN_vkDestroyInstance)load (userptr, "vkDestroyInstance");
  glext_vkDestroyPipeline
    = (PFN_vkDestroyPipeline)load (userptr, "vkDestroyPipeline");
  glext_vkDestroyPipelineCache
    = (PFN_vkDestroyPipelineCache)load (userptr, "vkDestroyPipelineCache");
  glext_vkDestroyPipelineLayout
    = (PFN_vkDestroyPipelineLayout)load (userptr, "vkDestroyPipelineLayout");
  glext_vkDestroyQueryPool
    = (PFN_vkDestroyQueryPool)load (userptr, "vkDestroyQueryPool");
  glext_vkDestroyRenderPass
    = (PFN_vkDestroyRenderPass)load (userptr, "vkDestroyRenderPass");
  glext_vkDestroySampler
    = (PFN_vkDestroySampler)load (userptr, "vkDestroySampler");
  glext_vkDestroySemaphore
    = (PFN_vkDestroySemaphore)load (userptr, "vkDestroySemaphore");
  glext_vkDestroyShaderModule
    = (PFN_vkDestroyShaderModule)load (userptr, "vkDestroyShaderModule");
  glext_vkDeviceWaitIdle
    = (PFN_vkDeviceWaitIdle)load (userptr, "vkDeviceWaitIdle");
  glext_vkEndCommandBuffer
    = (PFN_vkEndCommandBuffer)load (userptr, "vkEndCommandBuffer");
  glext_vkEnumerateDeviceExtensionProperties
    = (PFN_vkEnumerateDeviceExtensionProperties)load (
      userptr, "vkEnumerateDeviceExtensionProperties");
  glext_vkEnumerateDeviceLayerProperties
    = (PFN_vkEnumerateDeviceLayerProperties)load (
      userptr, "vkEnumerateDeviceLayerProperties");
  glext_vkEnumerateInstanceExtensionProperties
    = (PFN_vkEnumerateInstanceExtensionProperties)load (
      userptr, "vkEnumerateInstanceExtensionProperties");
  glext_vkEnumerateInstanceLayerProperties
    = (PFN_vkEnumerateInstanceLayerProperties)load (
      userptr, "vkEnumerateInstanceLayerProperties");
  glext_vkEnumeratePhysicalDevices = (PFN_vkEnumeratePhysicalDevices)load (
    userptr, "vkEnumeratePhysicalDevices");
  glext_vkFlushMappedMemoryRanges = (PFN_vkFlushMappedMemoryRanges)load (
    userptr, "vkFlushMappedMemoryRanges");
  glext_vkFreeCommandBuffers
    = (PFN_vkFreeCommandBuffers)load (userptr, "vkFreeCommandBuffers");
  glext_vkFreeDescriptorSets
    = (PFN_vkFreeDescriptorSets)load (userptr, "vkFreeDescriptorSets");
  glext_vkFreeMemory = (PFN_vkFreeMemory)load (userptr, "vkFreeMemory");
  glext_vkGetBufferMemoryRequirements
    = (PFN_vkGetBufferMemoryRequirements)load (
      userptr, "vkGetBufferMemoryRequirements");
  glext_vkGetDeviceMemoryCommitment = (PFN_vkGetDeviceMemoryCommitment)load (
    userptr, "vkGetDeviceMemoryCommitment");
  glext_vkGetDeviceProcAddr
    = (PFN_vkGetDeviceProcAddr)load (userptr, "vkGetDeviceProcAddr");
  glext_vkGetDeviceQueue
    = (PFN_vkGetDeviceQueue)load (userptr, "vkGetDeviceQueue");
  glext_vkGetEventStatus
    = (PFN_vkGetEventStatus)load (userptr, "vkGetEventStatus");
  glext_vkGetFenceStatus
    = (PFN_vkGetFenceStatus)load (userptr, "vkGetFenceStatus");
  glext_vkGetImageMemoryRequirements = (PFN_vkGetImageMemoryRequirements)load (
    userptr, "vkGetImageMemoryRequirements");
  glext_vkGetImageSparseMemoryRequirements
    = (PFN_vkGetImageSparseMemoryRequirements)load (
      userptr, "vkGetImageSparseMemoryRequirements");
  glext_vkGetImageSubresourceLayout = (PFN_vkGetImageSubresourceLayout)load (
    userptr, "vkGetImageSubresourceLayout");
  glext_vkGetInstanceProcAddr
    = (PFN_vkGetInstanceProcAddr)load (userptr, "vkGetInstanceProcAddr");
  glext_vkGetPhysicalDeviceFeatures = (PFN_vkGetPhysicalDeviceFeatures)load (
    userptr, "vkGetPhysicalDeviceFeatures");
  glext_vkGetPhysicalDeviceFormatProperties
    = (PFN_vkGetPhysicalDeviceFormatProperties)load (
      userptr, "vkGetPhysicalDeviceFormatProperties");
  glext_vkGetPhysicalDeviceImageFormatProperties
    = (PFN_vkGetPhysicalDeviceImageFormatProperties)load (
      userptr, "vkGetPhysicalDeviceImageFormatProperties");
  glext_vkGetPhysicalDeviceMemoryProperties
    = (PFN_vkGetPhysicalDeviceMemoryProperties)load (
      userptr, "vkGetPhysicalDeviceMemoryProperties");
  glext_vkGetPhysicalDeviceProperties
    = (PFN_vkGetPhysicalDeviceProperties)load (
      userptr, "vkGetPhysicalDeviceProperties");
  glext_vkGetPhysicalDeviceQueueFamilyProperties
    = (PFN_vkGetPhysicalDeviceQueueFamilyProperties)load (
      userptr, "vkGetPhysicalDeviceQueueFamilyProperties");
  glext_vkGetPhysicalDeviceSparseImageFormatProperties
    = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties)load (
      userptr, "vkGetPhysicalDeviceSparseImageFormatProperties");
  glext_vkGetPipelineCacheData
    = (PFN_vkGetPipelineCacheData)load (userptr, "vkGetPipelineCacheData");
  glext_vkGetQueryPoolResults
    = (PFN_vkGetQueryPoolResults)load (userptr, "vkGetQueryPoolResults");
  glext_vkGetRenderAreaGranularity = (PFN_vkGetRenderAreaGranularity)load (
    userptr, "vkGetRenderAreaGranularity");
  glext_vkInvalidateMappedMemoryRanges
    = (PFN_vkInvalidateMappedMemoryRanges)load (
      userptr, "vkInvalidateMappedMemoryRanges");
  glext_vkMapMemory = (PFN_vkMapMemory)load (userptr, "vkMapMemory");
  glext_vkMergePipelineCaches
    = (PFN_vkMergePipelineCaches)load (userptr, "vkMergePipelineCaches");
  glext_vkQueueBindSparse
    = (PFN_vkQueueBindSparse)load (userptr, "vkQueueBindSparse");
  glext_vkQueueSubmit = (PFN_vkQueueSubmit)load (userptr, "vkQueueSubmit");
  glext_vkQueueWaitIdle
    = (PFN_vkQueueWaitIdle)load (userptr, "vkQueueWaitIdle");
  glext_vkResetCommandBuffer
    = (PFN_vkResetCommandBuffer)load (userptr, "vkResetCommandBuffer");
  glext_vkResetCommandPool
    = (PFN_vkResetCommandPool)load (userptr, "vkResetCommandPool");
  glext_vkResetDescriptorPool
    = (PFN_vkResetDescriptorPool)load (userptr, "vkResetDescriptorPool");
  glext_vkResetEvent = (PFN_vkResetEvent)load (userptr, "vkResetEvent");
  glext_vkResetFences = (PFN_vkResetFences)load (userptr, "vkResetFences");
  glext_vkSetEvent = (PFN_vkSetEvent)load (userptr, "vkSetEvent");
  glext_vkUnmapMemory = (PFN_vkUnmapMemory)load (userptr, "vkUnmapMemory");
  glext_vkUpdateDescriptorSets
    = (PFN_vkUpdateDescriptorSets)load (userptr, "vkUpdateDescriptorSets");
  glext_vkWaitForFences
    = (PFN_vkWaitForFences)load (userptr, "vkWaitForFences");
}
static void
glext_vk_load_VK_VERSION_1_1 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_VERSION_1_1)
    return;
  glext_vkBindBufferMemory2
    = (PFN_vkBindBufferMemory2)load (userptr, "vkBindBufferMemory2");
  glext_vkBindImageMemory2
    = (PFN_vkBindImageMemory2)load (userptr, "vkBindImageMemory2");
  glext_vkCmdDispatchBase
    = (PFN_vkCmdDispatchBase)load (userptr, "vkCmdDispatchBase");
  glext_vkCmdSetDeviceMask
    = (PFN_vkCmdSetDeviceMask)load (userptr, "vkCmdSetDeviceMask");
  glext_vkCreateDescriptorUpdateTemplate
    = (PFN_vkCreateDescriptorUpdateTemplate)load (
      userptr, "vkCreateDescriptorUpdateTemplate");
  glext_vkCreateSamplerYcbcrConversion
    = (PFN_vkCreateSamplerYcbcrConversion)load (
      userptr, "vkCreateSamplerYcbcrConversion");
  glext_vkDestroyDescriptorUpdateTemplate
    = (PFN_vkDestroyDescriptorUpdateTemplate)load (
      userptr, "vkDestroyDescriptorUpdateTemplate");
  glext_vkDestroySamplerYcbcrConversion
    = (PFN_vkDestroySamplerYcbcrConversion)load (
      userptr, "vkDestroySamplerYcbcrConversion");
  glext_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)load (
    userptr, "vkEnumerateInstanceVersion");
  glext_vkEnumeratePhysicalDeviceGroups
    = (PFN_vkEnumeratePhysicalDeviceGroups)load (
      userptr, "vkEnumeratePhysicalDeviceGroups");
  glext_vkGetBufferMemoryRequirements2
    = (PFN_vkGetBufferMemoryRequirements2)load (
      userptr, "vkGetBufferMemoryRequirements2");
  glext_vkGetDescriptorSetLayoutSupport
    = (PFN_vkGetDescriptorSetLayoutSupport)load (
      userptr, "vkGetDescriptorSetLayoutSupport");
  glext_vkGetDeviceGroupPeerMemoryFeatures
    = (PFN_vkGetDeviceGroupPeerMemoryFeatures)load (
      userptr, "vkGetDeviceGroupPeerMemoryFeatures");
  glext_vkGetDeviceQueue2
    = (PFN_vkGetDeviceQueue2)load (userptr, "vkGetDeviceQueue2");
  glext_vkGetImageMemoryRequirements2
    = (PFN_vkGetImageMemoryRequirements2)load (
      userptr, "vkGetImageMemoryRequirements2");
  glext_vkGetImageSparseMemoryRequirements2
    = (PFN_vkGetImageSparseMemoryRequirements2)load (
      userptr, "vkGetImageSparseMemoryRequirements2");
  glext_vkGetPhysicalDeviceExternalBufferProperties
    = (PFN_vkGetPhysicalDeviceExternalBufferProperties)load (
      userptr, "vkGetPhysicalDeviceExternalBufferProperties");
  glext_vkGetPhysicalDeviceExternalFenceProperties
    = (PFN_vkGetPhysicalDeviceExternalFenceProperties)load (
      userptr, "vkGetPhysicalDeviceExternalFenceProperties");
  glext_vkGetPhysicalDeviceExternalSemaphoreProperties
    = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)load (
      userptr, "vkGetPhysicalDeviceExternalSemaphoreProperties");
  glext_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)load (
    userptr, "vkGetPhysicalDeviceFeatures2");
  glext_vkGetPhysicalDeviceFormatProperties2
    = (PFN_vkGetPhysicalDeviceFormatProperties2)load (
      userptr, "vkGetPhysicalDeviceFormatProperties2");
  glext_vkGetPhysicalDeviceImageFormatProperties2
    = (PFN_vkGetPhysicalDeviceImageFormatProperties2)load (
      userptr, "vkGetPhysicalDeviceImageFormatProperties2");
  glext_vkGetPhysicalDeviceMemoryProperties2
    = (PFN_vkGetPhysicalDeviceMemoryProperties2)load (
      userptr, "vkGetPhysicalDeviceMemoryProperties2");
  glext_vkGetPhysicalDeviceProperties2
    = (PFN_vkGetPhysicalDeviceProperties2)load (
      userptr, "vkGetPhysicalDeviceProperties2");
  glext_vkGetPhysicalDeviceQueueFamilyProperties2
    = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)load (
      userptr, "vkGetPhysicalDeviceQueueFamilyProperties2");
  glext_vkGetPhysicalDeviceSparseImageFormatProperties2
    = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)load (
      userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2");
  glext_vkTrimCommandPool
    = (PFN_vkTrimCommandPool)load (userptr, "vkTrimCommandPool");
  glext_vkUpdateDescriptorSetWithTemplate
    = (PFN_vkUpdateDescriptorSetWithTemplate)load (
      userptr, "vkUpdateDescriptorSetWithTemplate");
}
static void
glext_vk_load_VK_VERSION_1_2 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_VERSION_1_2)
    return;
  glext_vkCmdBeginRenderPass2
    = (PFN_vkCmdBeginRenderPass2)load (userptr, "vkCmdBeginRenderPass2");
  glext_vkCmdDrawIndexedIndirectCount
    = (PFN_vkCmdDrawIndexedIndirectCount)load (
      userptr, "vkCmdDrawIndexedIndirectCount");
  glext_vkCmdDrawIndirectCount
    = (PFN_vkCmdDrawIndirectCount)load (userptr, "vkCmdDrawIndirectCount");
  glext_vkCmdEndRenderPass2
    = (PFN_vkCmdEndRenderPass2)load (userptr, "vkCmdEndRenderPass2");
  glext_vkCmdNextSubpass2
    = (PFN_vkCmdNextSubpass2)load (userptr, "vkCmdNextSubpass2");
  glext_vkCreateRenderPass2
    = (PFN_vkCreateRenderPass2)load (userptr, "vkCreateRenderPass2");
  glext_vkGetBufferDeviceAddress
    = (PFN_vkGetBufferDeviceAddress)load (userptr, "vkGetBufferDeviceAddress");
  glext_vkGetBufferOpaqueCaptureAddress
    = (PFN_vkGetBufferOpaqueCaptureAddress)load (
      userptr, "vkGetBufferOpaqueCaptureAddress");
  glext_vkGetDeviceMemoryOpaqueCaptureAddress
    = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)load (
      userptr, "vkGetDeviceMemoryOpaqueCaptureAddress");
  glext_vkGetSemaphoreCounterValue = (PFN_vkGetSemaphoreCounterValue)load (
    userptr, "vkGetSemaphoreCounterValue");
  glext_vkResetQueryPool
    = (PFN_vkResetQueryPool)load (userptr, "vkResetQueryPool");
  glext_vkSignalSemaphore
    = (PFN_vkSignalSemaphore)load (userptr, "vkSignalSemaphore");
  glext_vkWaitSemaphores
    = (PFN_vkWaitSemaphores)load (userptr, "vkWaitSemaphores");
}
static void
glext_vk_load_VK_VERSION_1_3 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_VERSION_1_3)
    return;
  glext_vkCmdBeginRendering
    = (PFN_vkCmdBeginRendering)load (userptr, "vkCmdBeginRendering");
  glext_vkCmdBindVertexBuffers2
    = (PFN_vkCmdBindVertexBuffers2)load (userptr, "vkCmdBindVertexBuffers2");
  glext_vkCmdBlitImage2
    = (PFN_vkCmdBlitImage2)load (userptr, "vkCmdBlitImage2");
  glext_vkCmdCopyBuffer2
    = (PFN_vkCmdCopyBuffer2)load (userptr, "vkCmdCopyBuffer2");
  glext_vkCmdCopyBufferToImage2
    = (PFN_vkCmdCopyBufferToImage2)load (userptr, "vkCmdCopyBufferToImage2");
  glext_vkCmdCopyImage2
    = (PFN_vkCmdCopyImage2)load (userptr, "vkCmdCopyImage2");
  glext_vkCmdCopyImageToBuffer2
    = (PFN_vkCmdCopyImageToBuffer2)load (userptr, "vkCmdCopyImageToBuffer2");
  glext_vkCmdEndRendering
    = (PFN_vkCmdEndRendering)load (userptr, "vkCmdEndRendering");
  glext_vkCmdPipelineBarrier2
    = (PFN_vkCmdPipelineBarrier2)load (userptr, "vkCmdPipelineBarrier2");
  glext_vkCmdResetEvent2
    = (PFN_vkCmdResetEvent2)load (userptr, "vkCmdResetEvent2");
  glext_vkCmdResolveImage2
    = (PFN_vkCmdResolveImage2)load (userptr, "vkCmdResolveImage2");
  glext_vkCmdSetCullMode
    = (PFN_vkCmdSetCullMode)load (userptr, "vkCmdSetCullMode");
  glext_vkCmdSetDepthBiasEnable
    = (PFN_vkCmdSetDepthBiasEnable)load (userptr, "vkCmdSetDepthBiasEnable");
  glext_vkCmdSetDepthBoundsTestEnable
    = (PFN_vkCmdSetDepthBoundsTestEnable)load (
      userptr, "vkCmdSetDepthBoundsTestEnable");
  glext_vkCmdSetDepthCompareOp
    = (PFN_vkCmdSetDepthCompareOp)load (userptr, "vkCmdSetDepthCompareOp");
  glext_vkCmdSetDepthTestEnable
    = (PFN_vkCmdSetDepthTestEnable)load (userptr, "vkCmdSetDepthTestEnable");
  glext_vkCmdSetDepthWriteEnable
    = (PFN_vkCmdSetDepthWriteEnable)load (userptr, "vkCmdSetDepthWriteEnable");
  glext_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)load (userptr, "vkCmdSetEvent2");
  glext_vkCmdSetFrontFace
    = (PFN_vkCmdSetFrontFace)load (userptr, "vkCmdSetFrontFace");
  glext_vkCmdSetPrimitiveRestartEnable
    = (PFN_vkCmdSetPrimitiveRestartEnable)load (
      userptr, "vkCmdSetPrimitiveRestartEnable");
  glext_vkCmdSetPrimitiveTopology = (PFN_vkCmdSetPrimitiveTopology)load (
    userptr, "vkCmdSetPrimitiveTopology");
  glext_vkCmdSetRasterizerDiscardEnable
    = (PFN_vkCmdSetRasterizerDiscardEnable)load (
      userptr, "vkCmdSetRasterizerDiscardEnable");
  glext_vkCmdSetScissorWithCount
    = (PFN_vkCmdSetScissorWithCount)load (userptr, "vkCmdSetScissorWithCount");
  glext_vkCmdSetStencilOp
    = (PFN_vkCmdSetStencilOp)load (userptr, "vkCmdSetStencilOp");
  glext_vkCmdSetStencilTestEnable = (PFN_vkCmdSetStencilTestEnable)load (
    userptr, "vkCmdSetStencilTestEnable");
  glext_vkCmdSetViewportWithCount = (PFN_vkCmdSetViewportWithCount)load (
    userptr, "vkCmdSetViewportWithCount");
  glext_vkCmdWaitEvents2
    = (PFN_vkCmdWaitEvents2)load (userptr, "vkCmdWaitEvents2");
  glext_vkCmdWriteTimestamp2
    = (PFN_vkCmdWriteTimestamp2)load (userptr, "vkCmdWriteTimestamp2");
  glext_vkCreatePrivateDataSlot
    = (PFN_vkCreatePrivateDataSlot)load (userptr, "vkCreatePrivateDataSlot");
  glext_vkDestroyPrivateDataSlot
    = (PFN_vkDestroyPrivateDataSlot)load (userptr, "vkDestroyPrivateDataSlot");
  glext_vkGetDeviceBufferMemoryRequirements
    = (PFN_vkGetDeviceBufferMemoryRequirements)load (
      userptr, "vkGetDeviceBufferMemoryRequirements");
  glext_vkGetDeviceImageMemoryRequirements
    = (PFN_vkGetDeviceImageMemoryRequirements)load (
      userptr, "vkGetDeviceImageMemoryRequirements");
  glext_vkGetDeviceImageSparseMemoryRequirements
    = (PFN_vkGetDeviceImageSparseMemoryRequirements)load (
      userptr, "vkGetDeviceImageSparseMemoryRequirements");
  glext_vkGetPhysicalDeviceToolProperties
    = (PFN_vkGetPhysicalDeviceToolProperties)load (
      userptr, "vkGetPhysicalDeviceToolProperties");
  glext_vkGetPrivateData
    = (PFN_vkGetPrivateData)load (userptr, "vkGetPrivateData");
  glext_vkQueueSubmit2 = (PFN_vkQueueSubmit2)load (userptr, "vkQueueSubmit2");
  glext_vkSetPrivateData
    = (PFN_vkSetPrivateData)load (userptr, "vkSetPrivateData");
}
static void
glext_vk_load_VK_VERSION_1_4 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_VERSION_1_4)
    return;
  glext_vkCmdBindDescriptorSets2
    = (PFN_vkCmdBindDescriptorSets2)load (userptr, "vkCmdBindDescriptorSets2");
  glext_vkCmdBindIndexBuffer2
    = (PFN_vkCmdBindIndexBuffer2)load (userptr, "vkCmdBindIndexBuffer2");
  glext_vkCmdPushConstants2
    = (PFN_vkCmdPushConstants2)load (userptr, "vkCmdPushConstants2");
  glext_vkCmdPushDescriptorSet
    = (PFN_vkCmdPushDescriptorSet)load (userptr, "vkCmdPushDescriptorSet");
  glext_vkCmdPushDescriptorSet2
    = (PFN_vkCmdPushDescriptorSet2)load (userptr, "vkCmdPushDescriptorSet2");
  glext_vkCmdPushDescriptorSetWithTemplate
    = (PFN_vkCmdPushDescriptorSetWithTemplate)load (
      userptr, "vkCmdPushDescriptorSetWithTemplate");
  glext_vkCmdPushDescriptorSetWithTemplate2
    = (PFN_vkCmdPushDescriptorSetWithTemplate2)load (
      userptr, "vkCmdPushDescriptorSetWithTemplate2");
  glext_vkCmdSetLineStipple
    = (PFN_vkCmdSetLineStipple)load (userptr, "vkCmdSetLineStipple");
  glext_vkCmdSetRenderingAttachmentLocations
    = (PFN_vkCmdSetRenderingAttachmentLocations)load (
      userptr, "vkCmdSetRenderingAttachmentLocations");
  glext_vkCmdSetRenderingInputAttachmentIndices
    = (PFN_vkCmdSetRenderingInputAttachmentIndices)load (
      userptr, "vkCmdSetRenderingInputAttachmentIndices");
  glext_vkCopyImageToImage
    = (PFN_vkCopyImageToImage)load (userptr, "vkCopyImageToImage");
  glext_vkCopyImageToMemory
    = (PFN_vkCopyImageToMemory)load (userptr, "vkCopyImageToMemory");
  glext_vkCopyMemoryToImage
    = (PFN_vkCopyMemoryToImage)load (userptr, "vkCopyMemoryToImage");
  glext_vkGetDeviceImageSubresourceLayout
    = (PFN_vkGetDeviceImageSubresourceLayout)load (
      userptr, "vkGetDeviceImageSubresourceLayout");
  glext_vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)load (
    userptr, "vkGetImageSubresourceLayout2");
  glext_vkGetRenderingAreaGranularity
    = (PFN_vkGetRenderingAreaGranularity)load (
      userptr, "vkGetRenderingAreaGranularity");
  glext_vkMapMemory2 = (PFN_vkMapMemory2)load (userptr, "vkMapMemory2");
  glext_vkTransitionImageLayout
    = (PFN_vkTransitionImageLayout)load (userptr, "vkTransitionImageLayout");
  glext_vkUnmapMemory2 = (PFN_vkUnmapMemory2)load (userptr, "vkUnmapMemory2");
}
#if defined(VK_ENABLE_BETA_EXTENSIONS)
static void
glext_vk_load_VK_AMDX_shader_enqueue (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_AMDX_shader_enqueue)
    return;
  glext_vkCmdDispatchGraphAMDX
    = (PFN_vkCmdDispatchGraphAMDX)load (userptr, "vkCmdDispatchGraphAMDX");
  glext_vkCmdDispatchGraphIndirectAMDX
    = (PFN_vkCmdDispatchGraphIndirectAMDX)load (
      userptr, "vkCmdDispatchGraphIndirectAMDX");
  glext_vkCmdDispatchGraphIndirectCountAMDX
    = (PFN_vkCmdDispatchGraphIndirectCountAMDX)load (
      userptr, "vkCmdDispatchGraphIndirectCountAMDX");
  glext_vkCmdInitializeGraphScratchMemoryAMDX
    = (PFN_vkCmdInitializeGraphScratchMemoryAMDX)load (
      userptr, "vkCmdInitializeGraphScratchMemoryAMDX");
  glext_vkCreateExecutionGraphPipelinesAMDX
    = (PFN_vkCreateExecutionGraphPipelinesAMDX)load (
      userptr, "vkCreateExecutionGraphPipelinesAMDX");
  glext_vkGetExecutionGraphPipelineNodeIndexAMDX
    = (PFN_vkGetExecutionGraphPipelineNodeIndexAMDX)load (
      userptr, "vkGetExecutionGraphPipelineNodeIndexAMDX");
  glext_vkGetExecutionGraphPipelineScratchSizeAMDX
    = (PFN_vkGetExecutionGraphPipelineScratchSizeAMDX)load (
      userptr, "vkGetExecutionGraphPipelineScratchSizeAMDX");
}

#endif
static void
glext_vk_load_VK_AMD_anti_lag (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_AMD_anti_lag)
    return;
  glext_vkAntiLagUpdateAMD
    = (PFN_vkAntiLagUpdateAMD)load (userptr, "vkAntiLagUpdateAMD");
}
static void
glext_vk_load_VK_AMD_buffer_marker (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_AMD_buffer_marker)
    return;
  glext_vkCmdWriteBufferMarker2AMD = (PFN_vkCmdWriteBufferMarker2AMD)load (
    userptr, "vkCmdWriteBufferMarker2AMD");
  glext_vkCmdWriteBufferMarkerAMD = (PFN_vkCmdWriteBufferMarkerAMD)load (
    userptr, "vkCmdWriteBufferMarkerAMD");
}
static void
glext_vk_load_VK_AMD_display_native_hdr (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_AMD_display_native_hdr)
    return;
  glext_vkSetLocalDimmingAMD
    = (PFN_vkSetLocalDimmingAMD)load (userptr, "vkSetLocalDimmingAMD");
}
static void
glext_vk_load_VK_AMD_draw_indirect_count (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_AMD_draw_indirect_count)
    return;
  glext_vkCmdDrawIndexedIndirectCountAMD
    = (PFN_vkCmdDrawIndexedIndirectCountAMD)load (
      userptr, "vkCmdDrawIndexedIndirectCountAMD");
  glext_vkCmdDrawIndirectCountAMD = (PFN_vkCmdDrawIndirectCountAMD)load (
    userptr, "vkCmdDrawIndirectCountAMD");
}
static void
glext_vk_load_VK_AMD_shader_info (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_AMD_shader_info)
    return;
  glext_vkGetShaderInfoAMD
    = (PFN_vkGetShaderInfoAMD)load (userptr, "vkGetShaderInfoAMD");
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void
glext_vk_load_VK_ANDROID_external_memory_android_hardware_buffer (
  GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_ANDROID_external_memory_android_hardware_buffer)
    return;
  glext_vkGetAndroidHardwareBufferPropertiesANDROID
    = (PFN_vkGetAndroidHardwareBufferPropertiesANDROID)load (
      userptr, "vkGetAndroidHardwareBufferPropertiesANDROID");
  glext_vkGetMemoryAndroidHardwareBufferANDROID
    = (PFN_vkGetMemoryAndroidHardwareBufferANDROID)load (
      userptr, "vkGetMemoryAndroidHardwareBufferANDROID");
}

#endif
static void
glext_vk_load_VK_ARM_data_graph (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_ARM_data_graph)
    return;
  glext_vkBindDataGraphPipelineSessionMemoryARM
    = (PFN_vkBindDataGraphPipelineSessionMemoryARM)load (
      userptr, "vkBindDataGraphPipelineSessionMemoryARM");
  glext_vkCmdDispatchDataGraphARM = (PFN_vkCmdDispatchDataGraphARM)load (
    userptr, "vkCmdDispatchDataGraphARM");
  glext_vkCreateDataGraphPipelineSessionARM
    = (PFN_vkCreateDataGraphPipelineSessionARM)load (
      userptr, "vkCreateDataGraphPipelineSessionARM");
  glext_vkCreateDataGraphPipelinesARM
    = (PFN_vkCreateDataGraphPipelinesARM)load (
      userptr, "vkCreateDataGraphPipelinesARM");
  glext_vkDestroyDataGraphPipelineSessionARM
    = (PFN_vkDestroyDataGraphPipelineSessionARM)load (
      userptr, "vkDestroyDataGraphPipelineSessionARM");
  glext_vkGetDataGraphPipelineAvailablePropertiesARM
    = (PFN_vkGetDataGraphPipelineAvailablePropertiesARM)load (
      userptr, "vkGetDataGraphPipelineAvailablePropertiesARM");
  glext_vkGetDataGraphPipelinePropertiesARM
    = (PFN_vkGetDataGraphPipelinePropertiesARM)load (
      userptr, "vkGetDataGraphPipelinePropertiesARM");
  glext_vkGetDataGraphPipelineSessionBindPointRequirementsARM
    = (PFN_vkGetDataGraphPipelineSessionBindPointRequirementsARM)load (
      userptr, "vkGetDataGraphPipelineSessionBindPointRequirementsARM");
  glext_vkGetDataGraphPipelineSessionMemoryRequirementsARM
    = (PFN_vkGetDataGraphPipelineSessionMemoryRequirementsARM)load (
      userptr, "vkGetDataGraphPipelineSessionMemoryRequirementsARM");
  glext_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM
    = (PFN_vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEnginePropertiesARM)
      load (userptr, "vkGetPhysicalDeviceQueueFamilyDataGraphProcessingEngineP"
                     "ropertiesARM");
  glext_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM
    = (PFN_vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM)load (
      userptr, "vkGetPhysicalDeviceQueueFamilyDataGraphPropertiesARM");
}
static void
glext_vk_load_VK_ARM_tensors (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_ARM_tensors)
    return;
  glext_vkBindTensorMemoryARM
    = (PFN_vkBindTensorMemoryARM)load (userptr, "vkBindTensorMemoryARM");
  glext_vkCmdCopyTensorARM
    = (PFN_vkCmdCopyTensorARM)load (userptr, "vkCmdCopyTensorARM");
  glext_vkCreateTensorARM
    = (PFN_vkCreateTensorARM)load (userptr, "vkCreateTensorARM");
  glext_vkCreateTensorViewARM
    = (PFN_vkCreateTensorViewARM)load (userptr, "vkCreateTensorViewARM");
  glext_vkDestroyTensorARM
    = (PFN_vkDestroyTensorARM)load (userptr, "vkDestroyTensorARM");
  glext_vkDestroyTensorViewARM
    = (PFN_vkDestroyTensorViewARM)load (userptr, "vkDestroyTensorViewARM");
  glext_vkGetDeviceTensorMemoryRequirementsARM
    = (PFN_vkGetDeviceTensorMemoryRequirementsARM)load (
      userptr, "vkGetDeviceTensorMemoryRequirementsARM");
  glext_vkGetPhysicalDeviceExternalTensorPropertiesARM
    = (PFN_vkGetPhysicalDeviceExternalTensorPropertiesARM)load (
      userptr, "vkGetPhysicalDeviceExternalTensorPropertiesARM");
  glext_vkGetTensorMemoryRequirementsARM
    = (PFN_vkGetTensorMemoryRequirementsARM)load (
      userptr, "vkGetTensorMemoryRequirementsARM");
  glext_vkGetTensorOpaqueCaptureDescriptorDataARM
    = (PFN_vkGetTensorOpaqueCaptureDescriptorDataARM)load (
      userptr, "vkGetTensorOpaqueCaptureDescriptorDataARM");
  glext_vkGetTensorViewOpaqueCaptureDescriptorDataARM
    = (PFN_vkGetTensorViewOpaqueCaptureDescriptorDataARM)load (
      userptr, "vkGetTensorViewOpaqueCaptureDescriptorDataARM");
}
static void
glext_vk_load_VK_EXT_acquire_drm_display (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_EXT_acquire_drm_display)
    return;
  glext_vkAcquireDrmDisplayEXT
    = (PFN_vkAcquireDrmDisplayEXT)load (userptr, "vkAcquireDrmDisplayEXT");
  glext_vkGetDrmDisplayEXT
    = (PFN_vkGetDrmDisplayEXT)load (userptr, "vkGetDrmDisplayEXT");
}
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
static void
glext_vk_load_VK_EXT_acquire_xlib_display (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_EXT_acquire_xlib_display)
    return;
  glext_vkAcquireXlibDisplayEXT
    = (PFN_vkAcquireXlibDisplayEXT)load (userptr, "vkAcquireXlibDisplayEXT");
  glext_vkGetRandROutputDisplayEXT = (PFN_vkGetRandROutputDisplayEXT)load (
    userptr, "vkGetRandROutputDisplayEXT");
}

#endif
static void
glext_vk_load_VK_EXT_attachment_feedback_loop_dynamic_state (
  GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_attachment_feedback_loop_dynamic_state)
    return;
  glext_vkCmdSetAttachmentFeedbackLoopEnableEXT
    = (PFN_vkCmdSetAttachmentFeedbackLoopEnableEXT)load (
      userptr, "vkCmdSetAttachmentFeedbackLoopEnableEXT");
}
static void
glext_vk_load_VK_EXT_buffer_device_address (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_EXT_buffer_device_address)
    return;
  glext_vkGetBufferDeviceAddressEXT = (PFN_vkGetBufferDeviceAddressEXT)load (
    userptr, "vkGetBufferDeviceAddressEXT");
}
static void
glext_vk_load_VK_EXT_calibrated_timestamps (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_EXT_calibrated_timestamps)
    return;
  glext_vkGetCalibratedTimestampsEXT = (PFN_vkGetCalibratedTimestampsEXT)load (
    userptr, "vkGetCalibratedTimestampsEXT");
  glext_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
    = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)load (
      userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsEXT");
}
static void
glext_vk_load_VK_EXT_color_write_enable (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_EXT_color_write_enable)
    return;
  glext_vkCmdSetColorWriteEnableEXT = (PFN_vkCmdSetColorWriteEnableEXT)load (
    userptr, "vkCmdSetColorWriteEnableEXT");
}
static void
glext_vk_load_VK_EXT_conditional_rendering (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_EXT_conditional_rendering)
    return;
  glext_vkCmdBeginConditionalRenderingEXT
    = (PFN_vkCmdBeginConditionalRenderingEXT)load (
      userptr, "vkCmdBeginConditionalRenderingEXT");
  glext_vkCmdEndConditionalRenderingEXT
    = (PFN_vkCmdEndConditionalRenderingEXT)load (
      userptr, "vkCmdEndConditionalRenderingEXT");
}
static void
glext_vk_load_VK_EXT_debug_marker (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_debug_marker)
    return;
  glext_vkCmdDebugMarkerBeginEXT
    = (PFN_vkCmdDebugMarkerBeginEXT)load (userptr, "vkCmdDebugMarkerBeginEXT");
  glext_vkCmdDebugMarkerEndEXT
    = (PFN_vkCmdDebugMarkerEndEXT)load (userptr, "vkCmdDebugMarkerEndEXT");
  glext_vkCmdDebugMarkerInsertEXT = (PFN_vkCmdDebugMarkerInsertEXT)load (
    userptr, "vkCmdDebugMarkerInsertEXT");
  glext_vkDebugMarkerSetObjectNameEXT
    = (PFN_vkDebugMarkerSetObjectNameEXT)load (
      userptr, "vkDebugMarkerSetObjectNameEXT");
  glext_vkDebugMarkerSetObjectTagEXT = (PFN_vkDebugMarkerSetObjectTagEXT)load (
    userptr, "vkDebugMarkerSetObjectTagEXT");
}
static void
glext_vk_load_VK_EXT_debug_report (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_debug_report)
    return;
  glext_vkCreateDebugReportCallbackEXT
    = (PFN_vkCreateDebugReportCallbackEXT)load (
      userptr, "vkCreateDebugReportCallbackEXT");
  glext_vkDebugReportMessageEXT
    = (PFN_vkDebugReportMessageEXT)load (userptr, "vkDebugReportMessageEXT");
  glext_vkDestroyDebugReportCallbackEXT
    = (PFN_vkDestroyDebugReportCallbackEXT)load (
      userptr, "vkDestroyDebugReportCallbackEXT");
}
static void
glext_vk_load_VK_EXT_debug_utils (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_debug_utils)
    return;
  glext_vkCmdBeginDebugUtilsLabelEXT = (PFN_vkCmdBeginDebugUtilsLabelEXT)load (
    userptr, "vkCmdBeginDebugUtilsLabelEXT");
  glext_vkCmdEndDebugUtilsLabelEXT = (PFN_vkCmdEndDebugUtilsLabelEXT)load (
    userptr, "vkCmdEndDebugUtilsLabelEXT");
  glext_vkCmdInsertDebugUtilsLabelEXT
    = (PFN_vkCmdInsertDebugUtilsLabelEXT)load (
      userptr, "vkCmdInsertDebugUtilsLabelEXT");
  glext_vkCreateDebugUtilsMessengerEXT
    = (PFN_vkCreateDebugUtilsMessengerEXT)load (
      userptr, "vkCreateDebugUtilsMessengerEXT");
  glext_vkDestroyDebugUtilsMessengerEXT
    = (PFN_vkDestroyDebugUtilsMessengerEXT)load (
      userptr, "vkDestroyDebugUtilsMessengerEXT");
  glext_vkQueueBeginDebugUtilsLabelEXT
    = (PFN_vkQueueBeginDebugUtilsLabelEXT)load (
      userptr, "vkQueueBeginDebugUtilsLabelEXT");
  glext_vkQueueEndDebugUtilsLabelEXT = (PFN_vkQueueEndDebugUtilsLabelEXT)load (
    userptr, "vkQueueEndDebugUtilsLabelEXT");
  glext_vkQueueInsertDebugUtilsLabelEXT
    = (PFN_vkQueueInsertDebugUtilsLabelEXT)load (
      userptr, "vkQueueInsertDebugUtilsLabelEXT");
  glext_vkSetDebugUtilsObjectNameEXT = (PFN_vkSetDebugUtilsObjectNameEXT)load (
    userptr, "vkSetDebugUtilsObjectNameEXT");
  glext_vkSetDebugUtilsObjectTagEXT = (PFN_vkSetDebugUtilsObjectTagEXT)load (
    userptr, "vkSetDebugUtilsObjectTagEXT");
  glext_vkSubmitDebugUtilsMessageEXT = (PFN_vkSubmitDebugUtilsMessageEXT)load (
    userptr, "vkSubmitDebugUtilsMessageEXT");
}
static void
glext_vk_load_VK_EXT_depth_bias_control (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_EXT_depth_bias_control)
    return;
  glext_vkCmdSetDepthBias2EXT
    = (PFN_vkCmdSetDepthBias2EXT)load (userptr, "vkCmdSetDepthBias2EXT");
}
static void
glext_vk_load_VK_EXT_depth_clamp_control (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_EXT_depth_clamp_control)
    return;
  glext_vkCmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT)load (
    userptr, "vkCmdSetDepthClampRangeEXT");
}
static void
glext_vk_load_VK_EXT_descriptor_buffer (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_EXT_descriptor_buffer)
    return;
  glext_vkCmdBindDescriptorBufferEmbeddedSamplersEXT
    = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplersEXT)load (
      userptr, "vkCmdBindDescriptorBufferEmbeddedSamplersEXT");
  glext_vkCmdBindDescriptorBuffersEXT
    = (PFN_vkCmdBindDescriptorBuffersEXT)load (
      userptr, "vkCmdBindDescriptorBuffersEXT");
  glext_vkCmdSetDescriptorBufferOffsetsEXT
    = (PFN_vkCmdSetDescriptorBufferOffsetsEXT)load (
      userptr, "vkCmdSetDescriptorBufferOffsetsEXT");
  glext_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT
    = (PFN_vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT)load (
      userptr, "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT");
  glext_vkGetBufferOpaqueCaptureDescriptorDataEXT
    = (PFN_vkGetBufferOpaqueCaptureDescriptorDataEXT)load (
      userptr, "vkGetBufferOpaqueCaptureDescriptorDataEXT");
  glext_vkGetDescriptorEXT
    = (PFN_vkGetDescriptorEXT)load (userptr, "vkGetDescriptorEXT");
  glext_vkGetDescriptorSetLayoutBindingOffsetEXT
    = (PFN_vkGetDescriptorSetLayoutBindingOffsetEXT)load (
      userptr, "vkGetDescriptorSetLayoutBindingOffsetEXT");
  glext_vkGetDescriptorSetLayoutSizeEXT
    = (PFN_vkGetDescriptorSetLayoutSizeEXT)load (
      userptr, "vkGetDescriptorSetLayoutSizeEXT");
  glext_vkGetImageOpaqueCaptureDescriptorDataEXT
    = (PFN_vkGetImageOpaqueCaptureDescriptorDataEXT)load (
      userptr, "vkGetImageOpaqueCaptureDescriptorDataEXT");
  glext_vkGetImageViewOpaqueCaptureDescriptorDataEXT
    = (PFN_vkGetImageViewOpaqueCaptureDescriptorDataEXT)load (
      userptr, "vkGetImageViewOpaqueCaptureDescriptorDataEXT");
  glext_vkGetSamplerOpaqueCaptureDescriptorDataEXT
    = (PFN_vkGetSamplerOpaqueCaptureDescriptorDataEXT)load (
      userptr, "vkGetSamplerOpaqueCaptureDescriptorDataEXT");
}
static void
glext_vk_load_VK_EXT_device_fault (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_device_fault)
    return;
  glext_vkGetDeviceFaultInfoEXT
    = (PFN_vkGetDeviceFaultInfoEXT)load (userptr, "vkGetDeviceFaultInfoEXT");
}
static void
glext_vk_load_VK_EXT_device_generated_commands (GLADuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_VK_EXT_device_generated_commands)
    return;
  glext_vkCmdExecuteGeneratedCommandsEXT
    = (PFN_vkCmdExecuteGeneratedCommandsEXT)load (
      userptr, "vkCmdExecuteGeneratedCommandsEXT");
  glext_vkCmdPreprocessGeneratedCommandsEXT
    = (PFN_vkCmdPreprocessGeneratedCommandsEXT)load (
      userptr, "vkCmdPreprocessGeneratedCommandsEXT");
  glext_vkCreateIndirectCommandsLayoutEXT
    = (PFN_vkCreateIndirectCommandsLayoutEXT)load (
      userptr, "vkCreateIndirectCommandsLayoutEXT");
  glext_vkCreateIndirectExecutionSetEXT
    = (PFN_vkCreateIndirectExecutionSetEXT)load (
      userptr, "vkCreateIndirectExecutionSetEXT");
  glext_vkDestroyIndirectCommandsLayoutEXT
    = (PFN_vkDestroyIndirectCommandsLayoutEXT)load (
      userptr, "vkDestroyIndirectCommandsLayoutEXT");
  glext_vkDestroyIndirectExecutionSetEXT
    = (PFN_vkDestroyIndirectExecutionSetEXT)load (
      userptr, "vkDestroyIndirectExecutionSetEXT");
  glext_vkGetGeneratedCommandsMemoryRequirementsEXT
    = (PFN_vkGetGeneratedCommandsMemoryRequirementsEXT)load (
      userptr, "vkGetGeneratedCommandsMemoryRequirementsEXT");
  glext_vkUpdateIndirectExecutionSetPipelineEXT
    = (PFN_vkUpdateIndirectExecutionSetPipelineEXT)load (
      userptr, "vkUpdateIndirectExecutionSetPipelineEXT");
  glext_vkUpdateIndirectExecutionSetShaderEXT
    = (PFN_vkUpdateIndirectExecutionSetShaderEXT)load (
      userptr, "vkUpdateIndirectExecutionSetShaderEXT");
}
static void
glext_vk_load_VK_EXT_direct_mode_display (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_EXT_direct_mode_display)
    return;
  glext_vkReleaseDisplayEXT
    = (PFN_vkReleaseDisplayEXT)load (userptr, "vkReleaseDisplayEXT");
}
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
static void
glext_vk_load_VK_EXT_directfb_surface (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_EXT_directfb_surface)
    return;
  glext_vkCreateDirectFBSurfaceEXT = (PFN_vkCreateDirectFBSurfaceEXT)load (
    userptr, "vkCreateDirectFBSurfaceEXT");
  glext_vkGetPhysicalDeviceDirectFBPresentationSupportEXT
    = (PFN_vkGetPhysicalDeviceDirectFBPresentationSupportEXT)load (
      userptr, "vkGetPhysicalDeviceDirectFBPresentationSupportEXT");
}

#endif
static void
glext_vk_load_VK_EXT_discard_rectangles (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_EXT_discard_rectangles)
    return;
  glext_vkCmdSetDiscardRectangleEXT = (PFN_vkCmdSetDiscardRectangleEXT)load (
    userptr, "vkCmdSetDiscardRectangleEXT");
  glext_vkCmdSetDiscardRectangleEnableEXT
    = (PFN_vkCmdSetDiscardRectangleEnableEXT)load (
      userptr, "vkCmdSetDiscardRectangleEnableEXT");
  glext_vkCmdSetDiscardRectangleModeEXT
    = (PFN_vkCmdSetDiscardRectangleModeEXT)load (
      userptr, "vkCmdSetDiscardRectangleModeEXT");
}
static void
glext_vk_load_VK_EXT_display_control (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_EXT_display_control)
    return;
  glext_vkDisplayPowerControlEXT
    = (PFN_vkDisplayPowerControlEXT)load (userptr, "vkDisplayPowerControlEXT");
  glext_vkGetSwapchainCounterEXT
    = (PFN_vkGetSwapchainCounterEXT)load (userptr, "vkGetSwapchainCounterEXT");
  glext_vkRegisterDeviceEventEXT
    = (PFN_vkRegisterDeviceEventEXT)load (userptr, "vkRegisterDeviceEventEXT");
  glext_vkRegisterDisplayEventEXT = (PFN_vkRegisterDisplayEventEXT)load (
    userptr, "vkRegisterDisplayEventEXT");
}
static void
glext_vk_load_VK_EXT_display_surface_counter (GLADuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_VK_EXT_display_surface_counter)
    return;
  glext_vkGetPhysicalDeviceSurfaceCapabilities2EXT
    = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2EXT)load (
      userptr, "vkGetPhysicalDeviceSurfaceCapabilities2EXT");
}
static void
glext_vk_load_VK_EXT_extended_dynamic_state (GLADuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_VK_EXT_extended_dynamic_state)
    return;
  glext_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)load (
    userptr, "vkCmdBindVertexBuffers2EXT");
  glext_vkCmdSetCullModeEXT
    = (PFN_vkCmdSetCullModeEXT)load (userptr, "vkCmdSetCullModeEXT");
  glext_vkCmdSetDepthBoundsTestEnableEXT
    = (PFN_vkCmdSetDepthBoundsTestEnableEXT)load (
      userptr, "vkCmdSetDepthBoundsTestEnableEXT");
  glext_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)load (
    userptr, "vkCmdSetDepthCompareOpEXT");
  glext_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)load (
    userptr, "vkCmdSetDepthTestEnableEXT");
  glext_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)load (
    userptr, "vkCmdSetDepthWriteEnableEXT");
  glext_vkCmdSetFrontFaceEXT
    = (PFN_vkCmdSetFrontFaceEXT)load (userptr, "vkCmdSetFrontFaceEXT");
  glext_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)load (
    userptr, "vkCmdSetPrimitiveTopologyEXT");
  glext_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)load (
    userptr, "vkCmdSetScissorWithCountEXT");
  glext_vkCmdSetStencilOpEXT
    = (PFN_vkCmdSetStencilOpEXT)load (userptr, "vkCmdSetStencilOpEXT");
  glext_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)load (
    userptr, "vkCmdSetStencilTestEnableEXT");
  glext_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)load (
    userptr, "vkCmdSetViewportWithCountEXT");
}
static void
glext_vk_load_VK_EXT_extended_dynamic_state2 (GLADuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_VK_EXT_extended_dynamic_state2)
    return;
  glext_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)load (
    userptr, "vkCmdSetDepthBiasEnableEXT");
  glext_vkCmdSetLogicOpEXT
    = (PFN_vkCmdSetLogicOpEXT)load (userptr, "vkCmdSetLogicOpEXT");
  glext_vkCmdSetPatchControlPointsEXT
    = (PFN_vkCmdSetPatchControlPointsEXT)load (
      userptr, "vkCmdSetPatchControlPointsEXT");
  glext_vkCmdSetPrimitiveRestartEnableEXT
    = (PFN_vkCmdSetPrimitiveRestartEnableEXT)load (
      userptr, "vkCmdSetPrimitiveRestartEnableEXT");
  glext_vkCmdSetRasterizerDiscardEnableEXT
    = (PFN_vkCmdSetRasterizerDiscardEnableEXT)load (
      userptr, "vkCmdSetRasterizerDiscardEnableEXT");
}
static void
glext_vk_load_VK_EXT_extended_dynamic_state3 (GLADuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_VK_EXT_extended_dynamic_state3)
    return;
  glext_vkCmdSetAlphaToCoverageEnableEXT
    = (PFN_vkCmdSetAlphaToCoverageEnableEXT)load (
      userptr, "vkCmdSetAlphaToCoverageEnableEXT");
  glext_vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)load (
    userptr, "vkCmdSetAlphaToOneEnableEXT");
  glext_vkCmdSetColorBlendAdvancedEXT
    = (PFN_vkCmdSetColorBlendAdvancedEXT)load (
      userptr, "vkCmdSetColorBlendAdvancedEXT");
  glext_vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)load (
    userptr, "vkCmdSetColorBlendEnableEXT");
  glext_vkCmdSetColorBlendEquationEXT
    = (PFN_vkCmdSetColorBlendEquationEXT)load (
      userptr, "vkCmdSetColorBlendEquationEXT");
  glext_vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)load (
    userptr, "vkCmdSetColorWriteMaskEXT");
  glext_vkCmdSetConservativeRasterizationModeEXT
    = (PFN_vkCmdSetConservativeRasterizationModeEXT)load (
      userptr, "vkCmdSetConservativeRasterizationModeEXT");
  glext_vkCmdSetCoverageModulationModeNV
    = (PFN_vkCmdSetCoverageModulationModeNV)load (
      userptr, "vkCmdSetCoverageModulationModeNV");
  glext_vkCmdSetCoverageModulationTableEnableNV
    = (PFN_vkCmdSetCoverageModulationTableEnableNV)load (
      userptr, "vkCmdSetCoverageModulationTableEnableNV");
  glext_vkCmdSetCoverageModulationTableNV
    = (PFN_vkCmdSetCoverageModulationTableNV)load (
      userptr, "vkCmdSetCoverageModulationTableNV");
  glext_vkCmdSetCoverageReductionModeNV
    = (PFN_vkCmdSetCoverageReductionModeNV)load (
      userptr, "vkCmdSetCoverageReductionModeNV");
  glext_vkCmdSetCoverageToColorEnableNV
    = (PFN_vkCmdSetCoverageToColorEnableNV)load (
      userptr, "vkCmdSetCoverageToColorEnableNV");
  glext_vkCmdSetCoverageToColorLocationNV
    = (PFN_vkCmdSetCoverageToColorLocationNV)load (
      userptr, "vkCmdSetCoverageToColorLocationNV");
  glext_vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)load (
    userptr, "vkCmdSetDepthClampEnableEXT");
  glext_vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)load (
    userptr, "vkCmdSetDepthClipEnableEXT");
  glext_vkCmdSetDepthClipNegativeOneToOneEXT
    = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)load (
      userptr, "vkCmdSetDepthClipNegativeOneToOneEXT");
  glext_vkCmdSetExtraPrimitiveOverestimationSizeEXT
    = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)load (
      userptr, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
  glext_vkCmdSetLineRasterizationModeEXT
    = (PFN_vkCmdSetLineRasterizationModeEXT)load (
      userptr, "vkCmdSetLineRasterizationModeEXT");
  glext_vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)load (
    userptr, "vkCmdSetLineStippleEnableEXT");
  glext_vkCmdSetLogicOpEnableEXT
    = (PFN_vkCmdSetLogicOpEnableEXT)load (userptr, "vkCmdSetLogicOpEnableEXT");
  glext_vkCmdSetPolygonModeEXT
    = (PFN_vkCmdSetPolygonModeEXT)load (userptr, "vkCmdSetPolygonModeEXT");
  glext_vkCmdSetProvokingVertexModeEXT
    = (PFN_vkCmdSetProvokingVertexModeEXT)load (
      userptr, "vkCmdSetProvokingVertexModeEXT");
  glext_vkCmdSetRasterizationSamplesEXT
    = (PFN_vkCmdSetRasterizationSamplesEXT)load (
      userptr, "vkCmdSetRasterizationSamplesEXT");
  glext_vkCmdSetRasterizationStreamEXT
    = (PFN_vkCmdSetRasterizationStreamEXT)load (
      userptr, "vkCmdSetRasterizationStreamEXT");
  glext_vkCmdSetRepresentativeFragmentTestEnableNV
    = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)load (
      userptr, "vkCmdSetRepresentativeFragmentTestEnableNV");
  glext_vkCmdSetSampleLocationsEnableEXT
    = (PFN_vkCmdSetSampleLocationsEnableEXT)load (
      userptr, "vkCmdSetSampleLocationsEnableEXT");
  glext_vkCmdSetSampleMaskEXT
    = (PFN_vkCmdSetSampleMaskEXT)load (userptr, "vkCmdSetSampleMaskEXT");
  glext_vkCmdSetShadingRateImageEnableNV
    = (PFN_vkCmdSetShadingRateImageEnableNV)load (
      userptr, "vkCmdSetShadingRateImageEnableNV");
  glext_vkCmdSetTessellationDomainOriginEXT
    = (PFN_vkCmdSetTessellationDomainOriginEXT)load (
      userptr, "vkCmdSetTessellationDomainOriginEXT");
  glext_vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)load (
    userptr, "vkCmdSetViewportSwizzleNV");
  glext_vkCmdSetViewportWScalingEnableNV
    = (PFN_vkCmdSetViewportWScalingEnableNV)load (
      userptr, "vkCmdSetViewportWScalingEnableNV");
}
static void
glext_vk_load_VK_EXT_external_memory_host (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_EXT_external_memory_host)
    return;
  glext_vkGetMemoryHostPointerPropertiesEXT
    = (PFN_vkGetMemoryHostPointerPropertiesEXT)load (
      userptr, "vkGetMemoryHostPointerPropertiesEXT");
}
#if defined(VK_USE_PLATFORM_METAL_EXT)
static void
glext_vk_load_VK_EXT_external_memory_metal (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_EXT_external_memory_metal)
    return;
  glext_vkGetMemoryMetalHandleEXT = (PFN_vkGetMemoryMetalHandleEXT)load (
    userptr, "vkGetMemoryMetalHandleEXT");
  glext_vkGetMemoryMetalHandlePropertiesEXT
    = (PFN_vkGetMemoryMetalHandlePropertiesEXT)load (
      userptr, "vkGetMemoryMetalHandlePropertiesEXT");
}

#endif
static void
glext_vk_load_VK_EXT_fragment_density_map_offset (GLADuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_VK_EXT_fragment_density_map_offset)
    return;
  glext_vkCmdEndRendering2EXT
    = (PFN_vkCmdEndRendering2EXT)load (userptr, "vkCmdEndRendering2EXT");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_EXT_full_screen_exclusive (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_EXT_full_screen_exclusive)
    return;
  glext_vkAcquireFullScreenExclusiveModeEXT
    = (PFN_vkAcquireFullScreenExclusiveModeEXT)load (
      userptr, "vkAcquireFullScreenExclusiveModeEXT");
  glext_vkGetDeviceGroupSurfacePresentModes2EXT
    = (PFN_vkGetDeviceGroupSurfacePresentModes2EXT)load (
      userptr, "vkGetDeviceGroupSurfacePresentModes2EXT");
  glext_vkGetPhysicalDeviceSurfacePresentModes2EXT
    = (PFN_vkGetPhysicalDeviceSurfacePresentModes2EXT)load (
      userptr, "vkGetPhysicalDeviceSurfacePresentModes2EXT");
  glext_vkReleaseFullScreenExclusiveModeEXT
    = (PFN_vkReleaseFullScreenExclusiveModeEXT)load (
      userptr, "vkReleaseFullScreenExclusiveModeEXT");
}

#endif
static void
glext_vk_load_VK_EXT_hdr_metadata (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_hdr_metadata)
    return;
  glext_vkSetHdrMetadataEXT
    = (PFN_vkSetHdrMetadataEXT)load (userptr, "vkSetHdrMetadataEXT");
}
static void
glext_vk_load_VK_EXT_headless_surface (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_EXT_headless_surface)
    return;
  glext_vkCreateHeadlessSurfaceEXT = (PFN_vkCreateHeadlessSurfaceEXT)load (
    userptr, "vkCreateHeadlessSurfaceEXT");
}
static void
glext_vk_load_VK_EXT_host_image_copy (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_EXT_host_image_copy)
    return;
  glext_vkCopyImageToImageEXT
    = (PFN_vkCopyImageToImageEXT)load (userptr, "vkCopyImageToImageEXT");
  glext_vkCopyImageToMemoryEXT
    = (PFN_vkCopyImageToMemoryEXT)load (userptr, "vkCopyImageToMemoryEXT");
  glext_vkCopyMemoryToImageEXT
    = (PFN_vkCopyMemoryToImageEXT)load (userptr, "vkCopyMemoryToImageEXT");
  glext_vkGetImageSubresourceLayout2EXT
    = (PFN_vkGetImageSubresourceLayout2EXT)load (
      userptr, "vkGetImageSubresourceLayout2EXT");
  glext_vkTransitionImageLayoutEXT = (PFN_vkTransitionImageLayoutEXT)load (
    userptr, "vkTransitionImageLayoutEXT");
}
static void
glext_vk_load_VK_EXT_host_query_reset (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_EXT_host_query_reset)
    return;
  glext_vkResetQueryPoolEXT
    = (PFN_vkResetQueryPoolEXT)load (userptr, "vkResetQueryPoolEXT");
}
static void
glext_vk_load_VK_EXT_image_compression_control (GLADuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_VK_EXT_image_compression_control)
    return;
  glext_vkGetImageSubresourceLayout2EXT
    = (PFN_vkGetImageSubresourceLayout2EXT)load (
      userptr, "vkGetImageSubresourceLayout2EXT");
}
static void
glext_vk_load_VK_EXT_image_drm_format_modifier (GLADuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_VK_EXT_image_drm_format_modifier)
    return;
  glext_vkGetImageDrmFormatModifierPropertiesEXT
    = (PFN_vkGetImageDrmFormatModifierPropertiesEXT)load (
      userptr, "vkGetImageDrmFormatModifierPropertiesEXT");
}
static void
glext_vk_load_VK_EXT_line_rasterization (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_EXT_line_rasterization)
    return;
  glext_vkCmdSetLineStippleEXT
    = (PFN_vkCmdSetLineStippleEXT)load (userptr, "vkCmdSetLineStippleEXT");
}
static void
glext_vk_load_VK_EXT_mesh_shader (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_mesh_shader)
    return;
  glext_vkCmdDrawMeshTasksEXT
    = (PFN_vkCmdDrawMeshTasksEXT)load (userptr, "vkCmdDrawMeshTasksEXT");
  glext_vkCmdDrawMeshTasksIndirectCountEXT
    = (PFN_vkCmdDrawMeshTasksIndirectCountEXT)load (
      userptr, "vkCmdDrawMeshTasksIndirectCountEXT");
  glext_vkCmdDrawMeshTasksIndirectEXT
    = (PFN_vkCmdDrawMeshTasksIndirectEXT)load (
      userptr, "vkCmdDrawMeshTasksIndirectEXT");
}
#if defined(VK_USE_PLATFORM_METAL_EXT)
static void
glext_vk_load_VK_EXT_metal_objects (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_metal_objects)
    return;
  glext_vkExportMetalObjectsEXT
    = (PFN_vkExportMetalObjectsEXT)load (userptr, "vkExportMetalObjectsEXT");
}

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
static void
glext_vk_load_VK_EXT_metal_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_metal_surface)
    return;
  glext_vkCreateMetalSurfaceEXT
    = (PFN_vkCreateMetalSurfaceEXT)load (userptr, "vkCreateMetalSurfaceEXT");
}

#endif
static void
glext_vk_load_VK_EXT_multi_draw (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_multi_draw)
    return;
  glext_vkCmdDrawMultiEXT
    = (PFN_vkCmdDrawMultiEXT)load (userptr, "vkCmdDrawMultiEXT");
  glext_vkCmdDrawMultiIndexedEXT
    = (PFN_vkCmdDrawMultiIndexedEXT)load (userptr, "vkCmdDrawMultiIndexedEXT");
}
static void
glext_vk_load_VK_EXT_opacity_micromap (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_EXT_opacity_micromap)
    return;
  glext_vkBuildMicromapsEXT
    = (PFN_vkBuildMicromapsEXT)load (userptr, "vkBuildMicromapsEXT");
  glext_vkCmdBuildMicromapsEXT
    = (PFN_vkCmdBuildMicromapsEXT)load (userptr, "vkCmdBuildMicromapsEXT");
  glext_vkCmdCopyMemoryToMicromapEXT = (PFN_vkCmdCopyMemoryToMicromapEXT)load (
    userptr, "vkCmdCopyMemoryToMicromapEXT");
  glext_vkCmdCopyMicromapEXT
    = (PFN_vkCmdCopyMicromapEXT)load (userptr, "vkCmdCopyMicromapEXT");
  glext_vkCmdCopyMicromapToMemoryEXT = (PFN_vkCmdCopyMicromapToMemoryEXT)load (
    userptr, "vkCmdCopyMicromapToMemoryEXT");
  glext_vkCmdWriteMicromapsPropertiesEXT
    = (PFN_vkCmdWriteMicromapsPropertiesEXT)load (
      userptr, "vkCmdWriteMicromapsPropertiesEXT");
  glext_vkCopyMemoryToMicromapEXT = (PFN_vkCopyMemoryToMicromapEXT)load (
    userptr, "vkCopyMemoryToMicromapEXT");
  glext_vkCopyMicromapEXT
    = (PFN_vkCopyMicromapEXT)load (userptr, "vkCopyMicromapEXT");
  glext_vkCopyMicromapToMemoryEXT = (PFN_vkCopyMicromapToMemoryEXT)load (
    userptr, "vkCopyMicromapToMemoryEXT");
  glext_vkCreateMicromapEXT
    = (PFN_vkCreateMicromapEXT)load (userptr, "vkCreateMicromapEXT");
  glext_vkDestroyMicromapEXT
    = (PFN_vkDestroyMicromapEXT)load (userptr, "vkDestroyMicromapEXT");
  glext_vkGetDeviceMicromapCompatibilityEXT
    = (PFN_vkGetDeviceMicromapCompatibilityEXT)load (
      userptr, "vkGetDeviceMicromapCompatibilityEXT");
  glext_vkGetMicromapBuildSizesEXT = (PFN_vkGetMicromapBuildSizesEXT)load (
    userptr, "vkGetMicromapBuildSizesEXT");
  glext_vkWriteMicromapsPropertiesEXT
    = (PFN_vkWriteMicromapsPropertiesEXT)load (
      userptr, "vkWriteMicromapsPropertiesEXT");
}
static void
glext_vk_load_VK_EXT_pageable_device_local_memory (GLADuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_VK_EXT_pageable_device_local_memory)
    return;
  glext_vkSetDeviceMemoryPriorityEXT = (PFN_vkSetDeviceMemoryPriorityEXT)load (
    userptr, "vkSetDeviceMemoryPriorityEXT");
}
static void
glext_vk_load_VK_EXT_pipeline_properties (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_EXT_pipeline_properties)
    return;
  glext_vkGetPipelinePropertiesEXT = (PFN_vkGetPipelinePropertiesEXT)load (
    userptr, "vkGetPipelinePropertiesEXT");
}
static void
glext_vk_load_VK_EXT_private_data (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_private_data)
    return;
  glext_vkCreatePrivateDataSlotEXT = (PFN_vkCreatePrivateDataSlotEXT)load (
    userptr, "vkCreatePrivateDataSlotEXT");
  glext_vkDestroyPrivateDataSlotEXT = (PFN_vkDestroyPrivateDataSlotEXT)load (
    userptr, "vkDestroyPrivateDataSlotEXT");
  glext_vkGetPrivateDataEXT
    = (PFN_vkGetPrivateDataEXT)load (userptr, "vkGetPrivateDataEXT");
  glext_vkSetPrivateDataEXT
    = (PFN_vkSetPrivateDataEXT)load (userptr, "vkSetPrivateDataEXT");
}
static void
glext_vk_load_VK_EXT_sample_locations (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_EXT_sample_locations)
    return;
  glext_vkCmdSetSampleLocationsEXT = (PFN_vkCmdSetSampleLocationsEXT)load (
    userptr, "vkCmdSetSampleLocationsEXT");
  glext_vkGetPhysicalDeviceMultisamplePropertiesEXT
    = (PFN_vkGetPhysicalDeviceMultisamplePropertiesEXT)load (
      userptr, "vkGetPhysicalDeviceMultisamplePropertiesEXT");
}
static void
glext_vk_load_VK_EXT_shader_module_identifier (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_EXT_shader_module_identifier)
    return;
  glext_vkGetShaderModuleCreateInfoIdentifierEXT
    = (PFN_vkGetShaderModuleCreateInfoIdentifierEXT)load (
      userptr, "vkGetShaderModuleCreateInfoIdentifierEXT");
  glext_vkGetShaderModuleIdentifierEXT
    = (PFN_vkGetShaderModuleIdentifierEXT)load (
      userptr, "vkGetShaderModuleIdentifierEXT");
}
static void
glext_vk_load_VK_EXT_shader_object (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_shader_object)
    return;
  glext_vkCmdBindShadersEXT
    = (PFN_vkCmdBindShadersEXT)load (userptr, "vkCmdBindShadersEXT");
  glext_vkCmdBindVertexBuffers2EXT = (PFN_vkCmdBindVertexBuffers2EXT)load (
    userptr, "vkCmdBindVertexBuffers2EXT");
  glext_vkCmdSetAlphaToCoverageEnableEXT
    = (PFN_vkCmdSetAlphaToCoverageEnableEXT)load (
      userptr, "vkCmdSetAlphaToCoverageEnableEXT");
  glext_vkCmdSetAlphaToOneEnableEXT = (PFN_vkCmdSetAlphaToOneEnableEXT)load (
    userptr, "vkCmdSetAlphaToOneEnableEXT");
  glext_vkCmdSetColorBlendAdvancedEXT
    = (PFN_vkCmdSetColorBlendAdvancedEXT)load (
      userptr, "vkCmdSetColorBlendAdvancedEXT");
  glext_vkCmdSetColorBlendEnableEXT = (PFN_vkCmdSetColorBlendEnableEXT)load (
    userptr, "vkCmdSetColorBlendEnableEXT");
  glext_vkCmdSetColorBlendEquationEXT
    = (PFN_vkCmdSetColorBlendEquationEXT)load (
      userptr, "vkCmdSetColorBlendEquationEXT");
  glext_vkCmdSetColorWriteMaskEXT = (PFN_vkCmdSetColorWriteMaskEXT)load (
    userptr, "vkCmdSetColorWriteMaskEXT");
  glext_vkCmdSetConservativeRasterizationModeEXT
    = (PFN_vkCmdSetConservativeRasterizationModeEXT)load (
      userptr, "vkCmdSetConservativeRasterizationModeEXT");
  glext_vkCmdSetCoverageModulationModeNV
    = (PFN_vkCmdSetCoverageModulationModeNV)load (
      userptr, "vkCmdSetCoverageModulationModeNV");
  glext_vkCmdSetCoverageModulationTableEnableNV
    = (PFN_vkCmdSetCoverageModulationTableEnableNV)load (
      userptr, "vkCmdSetCoverageModulationTableEnableNV");
  glext_vkCmdSetCoverageModulationTableNV
    = (PFN_vkCmdSetCoverageModulationTableNV)load (
      userptr, "vkCmdSetCoverageModulationTableNV");
  glext_vkCmdSetCoverageReductionModeNV
    = (PFN_vkCmdSetCoverageReductionModeNV)load (
      userptr, "vkCmdSetCoverageReductionModeNV");
  glext_vkCmdSetCoverageToColorEnableNV
    = (PFN_vkCmdSetCoverageToColorEnableNV)load (
      userptr, "vkCmdSetCoverageToColorEnableNV");
  glext_vkCmdSetCoverageToColorLocationNV
    = (PFN_vkCmdSetCoverageToColorLocationNV)load (
      userptr, "vkCmdSetCoverageToColorLocationNV");
  glext_vkCmdSetCullModeEXT
    = (PFN_vkCmdSetCullModeEXT)load (userptr, "vkCmdSetCullModeEXT");
  glext_vkCmdSetDepthBiasEnableEXT = (PFN_vkCmdSetDepthBiasEnableEXT)load (
    userptr, "vkCmdSetDepthBiasEnableEXT");
  glext_vkCmdSetDepthBoundsTestEnableEXT
    = (PFN_vkCmdSetDepthBoundsTestEnableEXT)load (
      userptr, "vkCmdSetDepthBoundsTestEnableEXT");
  glext_vkCmdSetDepthClampEnableEXT = (PFN_vkCmdSetDepthClampEnableEXT)load (
    userptr, "vkCmdSetDepthClampEnableEXT");
  glext_vkCmdSetDepthClampRangeEXT = (PFN_vkCmdSetDepthClampRangeEXT)load (
    userptr, "vkCmdSetDepthClampRangeEXT");
  glext_vkCmdSetDepthClipEnableEXT = (PFN_vkCmdSetDepthClipEnableEXT)load (
    userptr, "vkCmdSetDepthClipEnableEXT");
  glext_vkCmdSetDepthClipNegativeOneToOneEXT
    = (PFN_vkCmdSetDepthClipNegativeOneToOneEXT)load (
      userptr, "vkCmdSetDepthClipNegativeOneToOneEXT");
  glext_vkCmdSetDepthCompareOpEXT = (PFN_vkCmdSetDepthCompareOpEXT)load (
    userptr, "vkCmdSetDepthCompareOpEXT");
  glext_vkCmdSetDepthTestEnableEXT = (PFN_vkCmdSetDepthTestEnableEXT)load (
    userptr, "vkCmdSetDepthTestEnableEXT");
  glext_vkCmdSetDepthWriteEnableEXT = (PFN_vkCmdSetDepthWriteEnableEXT)load (
    userptr, "vkCmdSetDepthWriteEnableEXT");
  glext_vkCmdSetExtraPrimitiveOverestimationSizeEXT
    = (PFN_vkCmdSetExtraPrimitiveOverestimationSizeEXT)load (
      userptr, "vkCmdSetExtraPrimitiveOverestimationSizeEXT");
  glext_vkCmdSetFrontFaceEXT
    = (PFN_vkCmdSetFrontFaceEXT)load (userptr, "vkCmdSetFrontFaceEXT");
  glext_vkCmdSetLineRasterizationModeEXT
    = (PFN_vkCmdSetLineRasterizationModeEXT)load (
      userptr, "vkCmdSetLineRasterizationModeEXT");
  glext_vkCmdSetLineStippleEnableEXT = (PFN_vkCmdSetLineStippleEnableEXT)load (
    userptr, "vkCmdSetLineStippleEnableEXT");
  glext_vkCmdSetLogicOpEXT
    = (PFN_vkCmdSetLogicOpEXT)load (userptr, "vkCmdSetLogicOpEXT");
  glext_vkCmdSetLogicOpEnableEXT
    = (PFN_vkCmdSetLogicOpEnableEXT)load (userptr, "vkCmdSetLogicOpEnableEXT");
  glext_vkCmdSetPatchControlPointsEXT
    = (PFN_vkCmdSetPatchControlPointsEXT)load (
      userptr, "vkCmdSetPatchControlPointsEXT");
  glext_vkCmdSetPolygonModeEXT
    = (PFN_vkCmdSetPolygonModeEXT)load (userptr, "vkCmdSetPolygonModeEXT");
  glext_vkCmdSetPrimitiveRestartEnableEXT
    = (PFN_vkCmdSetPrimitiveRestartEnableEXT)load (
      userptr, "vkCmdSetPrimitiveRestartEnableEXT");
  glext_vkCmdSetPrimitiveTopologyEXT = (PFN_vkCmdSetPrimitiveTopologyEXT)load (
    userptr, "vkCmdSetPrimitiveTopologyEXT");
  glext_vkCmdSetProvokingVertexModeEXT
    = (PFN_vkCmdSetProvokingVertexModeEXT)load (
      userptr, "vkCmdSetProvokingVertexModeEXT");
  glext_vkCmdSetRasterizationSamplesEXT
    = (PFN_vkCmdSetRasterizationSamplesEXT)load (
      userptr, "vkCmdSetRasterizationSamplesEXT");
  glext_vkCmdSetRasterizationStreamEXT
    = (PFN_vkCmdSetRasterizationStreamEXT)load (
      userptr, "vkCmdSetRasterizationStreamEXT");
  glext_vkCmdSetRasterizerDiscardEnableEXT
    = (PFN_vkCmdSetRasterizerDiscardEnableEXT)load (
      userptr, "vkCmdSetRasterizerDiscardEnableEXT");
  glext_vkCmdSetRepresentativeFragmentTestEnableNV
    = (PFN_vkCmdSetRepresentativeFragmentTestEnableNV)load (
      userptr, "vkCmdSetRepresentativeFragmentTestEnableNV");
  glext_vkCmdSetSampleLocationsEnableEXT
    = (PFN_vkCmdSetSampleLocationsEnableEXT)load (
      userptr, "vkCmdSetSampleLocationsEnableEXT");
  glext_vkCmdSetSampleMaskEXT
    = (PFN_vkCmdSetSampleMaskEXT)load (userptr, "vkCmdSetSampleMaskEXT");
  glext_vkCmdSetScissorWithCountEXT = (PFN_vkCmdSetScissorWithCountEXT)load (
    userptr, "vkCmdSetScissorWithCountEXT");
  glext_vkCmdSetShadingRateImageEnableNV
    = (PFN_vkCmdSetShadingRateImageEnableNV)load (
      userptr, "vkCmdSetShadingRateImageEnableNV");
  glext_vkCmdSetStencilOpEXT
    = (PFN_vkCmdSetStencilOpEXT)load (userptr, "vkCmdSetStencilOpEXT");
  glext_vkCmdSetStencilTestEnableEXT = (PFN_vkCmdSetStencilTestEnableEXT)load (
    userptr, "vkCmdSetStencilTestEnableEXT");
  glext_vkCmdSetTessellationDomainOriginEXT
    = (PFN_vkCmdSetTessellationDomainOriginEXT)load (
      userptr, "vkCmdSetTessellationDomainOriginEXT");
  glext_vkCmdSetVertexInputEXT
    = (PFN_vkCmdSetVertexInputEXT)load (userptr, "vkCmdSetVertexInputEXT");
  glext_vkCmdSetViewportSwizzleNV = (PFN_vkCmdSetViewportSwizzleNV)load (
    userptr, "vkCmdSetViewportSwizzleNV");
  glext_vkCmdSetViewportWScalingEnableNV
    = (PFN_vkCmdSetViewportWScalingEnableNV)load (
      userptr, "vkCmdSetViewportWScalingEnableNV");
  glext_vkCmdSetViewportWithCountEXT = (PFN_vkCmdSetViewportWithCountEXT)load (
    userptr, "vkCmdSetViewportWithCountEXT");
  glext_vkCreateShadersEXT
    = (PFN_vkCreateShadersEXT)load (userptr, "vkCreateShadersEXT");
  glext_vkDestroyShaderEXT
    = (PFN_vkDestroyShaderEXT)load (userptr, "vkDestroyShaderEXT");
  glext_vkGetShaderBinaryDataEXT
    = (PFN_vkGetShaderBinaryDataEXT)load (userptr, "vkGetShaderBinaryDataEXT");
}
static void
glext_vk_load_VK_EXT_swapchain_maintenance1 (GLADuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_VK_EXT_swapchain_maintenance1)
    return;
  glext_vkReleaseSwapchainImagesEXT = (PFN_vkReleaseSwapchainImagesEXT)load (
    userptr, "vkReleaseSwapchainImagesEXT");
}
static void
glext_vk_load_VK_EXT_tooling_info (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_EXT_tooling_info)
    return;
  glext_vkGetPhysicalDeviceToolPropertiesEXT
    = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)load (
      userptr, "vkGetPhysicalDeviceToolPropertiesEXT");
}
static void
glext_vk_load_VK_EXT_transform_feedback (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_EXT_transform_feedback)
    return;
  glext_vkCmdBeginQueryIndexedEXT = (PFN_vkCmdBeginQueryIndexedEXT)load (
    userptr, "vkCmdBeginQueryIndexedEXT");
  glext_vkCmdBeginTransformFeedbackEXT
    = (PFN_vkCmdBeginTransformFeedbackEXT)load (
      userptr, "vkCmdBeginTransformFeedbackEXT");
  glext_vkCmdBindTransformFeedbackBuffersEXT
    = (PFN_vkCmdBindTransformFeedbackBuffersEXT)load (
      userptr, "vkCmdBindTransformFeedbackBuffersEXT");
  glext_vkCmdDrawIndirectByteCountEXT
    = (PFN_vkCmdDrawIndirectByteCountEXT)load (
      userptr, "vkCmdDrawIndirectByteCountEXT");
  glext_vkCmdEndQueryIndexedEXT
    = (PFN_vkCmdEndQueryIndexedEXT)load (userptr, "vkCmdEndQueryIndexedEXT");
  glext_vkCmdEndTransformFeedbackEXT = (PFN_vkCmdEndTransformFeedbackEXT)load (
    userptr, "vkCmdEndTransformFeedbackEXT");
}
static void
glext_vk_load_VK_EXT_validation_cache (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_EXT_validation_cache)
    return;
  glext_vkCreateValidationCacheEXT = (PFN_vkCreateValidationCacheEXT)load (
    userptr, "vkCreateValidationCacheEXT");
  glext_vkDestroyValidationCacheEXT = (PFN_vkDestroyValidationCacheEXT)load (
    userptr, "vkDestroyValidationCacheEXT");
  glext_vkGetValidationCacheDataEXT = (PFN_vkGetValidationCacheDataEXT)load (
    userptr, "vkGetValidationCacheDataEXT");
  glext_vkMergeValidationCachesEXT = (PFN_vkMergeValidationCachesEXT)load (
    userptr, "vkMergeValidationCachesEXT");
}
static void
glext_vk_load_VK_EXT_vertex_input_dynamic_state (GLADuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_VK_EXT_vertex_input_dynamic_state)
    return;
  glext_vkCmdSetVertexInputEXT
    = (PFN_vkCmdSetVertexInputEXT)load (userptr, "vkCmdSetVertexInputEXT");
}
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void
glext_vk_load_VK_FUCHSIA_buffer_collection (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_FUCHSIA_buffer_collection)
    return;
  glext_vkCreateBufferCollectionFUCHSIA
    = (PFN_vkCreateBufferCollectionFUCHSIA)load (
      userptr, "vkCreateBufferCollectionFUCHSIA");
  glext_vkDestroyBufferCollectionFUCHSIA
    = (PFN_vkDestroyBufferCollectionFUCHSIA)load (
      userptr, "vkDestroyBufferCollectionFUCHSIA");
  glext_vkGetBufferCollectionPropertiesFUCHSIA
    = (PFN_vkGetBufferCollectionPropertiesFUCHSIA)load (
      userptr, "vkGetBufferCollectionPropertiesFUCHSIA");
  glext_vkSetBufferCollectionBufferConstraintsFUCHSIA
    = (PFN_vkSetBufferCollectionBufferConstraintsFUCHSIA)load (
      userptr, "vkSetBufferCollectionBufferConstraintsFUCHSIA");
  glext_vkSetBufferCollectionImageConstraintsFUCHSIA
    = (PFN_vkSetBufferCollectionImageConstraintsFUCHSIA)load (
      userptr, "vkSetBufferCollectionImageConstraintsFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void
glext_vk_load_VK_FUCHSIA_external_memory (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_FUCHSIA_external_memory)
    return;
  glext_vkGetMemoryZirconHandleFUCHSIA
    = (PFN_vkGetMemoryZirconHandleFUCHSIA)load (
      userptr, "vkGetMemoryZirconHandleFUCHSIA");
  glext_vkGetMemoryZirconHandlePropertiesFUCHSIA
    = (PFN_vkGetMemoryZirconHandlePropertiesFUCHSIA)load (
      userptr, "vkGetMemoryZirconHandlePropertiesFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void
glext_vk_load_VK_FUCHSIA_external_semaphore (GLADuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_VK_FUCHSIA_external_semaphore)
    return;
  glext_vkGetSemaphoreZirconHandleFUCHSIA
    = (PFN_vkGetSemaphoreZirconHandleFUCHSIA)load (
      userptr, "vkGetSemaphoreZirconHandleFUCHSIA");
  glext_vkImportSemaphoreZirconHandleFUCHSIA
    = (PFN_vkImportSemaphoreZirconHandleFUCHSIA)load (
      userptr, "vkImportSemaphoreZirconHandleFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
static void
glext_vk_load_VK_FUCHSIA_imagepipe_surface (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_FUCHSIA_imagepipe_surface)
    return;
  glext_vkCreateImagePipeSurfaceFUCHSIA
    = (PFN_vkCreateImagePipeSurfaceFUCHSIA)load (
      userptr, "vkCreateImagePipeSurfaceFUCHSIA");
}

#endif
#if defined(VK_USE_PLATFORM_GGP)
static void
glext_vk_load_VK_GGP_stream_descriptor_surface (GLADuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_VK_GGP_stream_descriptor_surface)
    return;
  glext_vkCreateStreamDescriptorSurfaceGGP
    = (PFN_vkCreateStreamDescriptorSurfaceGGP)load (
      userptr, "vkCreateStreamDescriptorSurfaceGGP");
}

#endif
static void
glext_vk_load_VK_GOOGLE_display_timing (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_GOOGLE_display_timing)
    return;
  glext_vkGetPastPresentationTimingGOOGLE
    = (PFN_vkGetPastPresentationTimingGOOGLE)load (
      userptr, "vkGetPastPresentationTimingGOOGLE");
  glext_vkGetRefreshCycleDurationGOOGLE
    = (PFN_vkGetRefreshCycleDurationGOOGLE)load (
      userptr, "vkGetRefreshCycleDurationGOOGLE");
}
static void
glext_vk_load_VK_HUAWEI_cluster_culling_shader (GLADuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_VK_HUAWEI_cluster_culling_shader)
    return;
  glext_vkCmdDrawClusterHUAWEI
    = (PFN_vkCmdDrawClusterHUAWEI)load (userptr, "vkCmdDrawClusterHUAWEI");
  glext_vkCmdDrawClusterIndirectHUAWEI
    = (PFN_vkCmdDrawClusterIndirectHUAWEI)load (
      userptr, "vkCmdDrawClusterIndirectHUAWEI");
}
static void
glext_vk_load_VK_HUAWEI_invocation_mask (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_HUAWEI_invocation_mask)
    return;
  glext_vkCmdBindInvocationMaskHUAWEI
    = (PFN_vkCmdBindInvocationMaskHUAWEI)load (
      userptr, "vkCmdBindInvocationMaskHUAWEI");
}
static void
glext_vk_load_VK_HUAWEI_subpass_shading (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_HUAWEI_subpass_shading)
    return;
  glext_vkCmdSubpassShadingHUAWEI = (PFN_vkCmdSubpassShadingHUAWEI)load (
    userptr, "vkCmdSubpassShadingHUAWEI");
  glext_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI
    = (PFN_vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI)load (
      userptr, "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI");
}
static void
glext_vk_load_VK_INTEL_performance_query (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_INTEL_performance_query)
    return;
  glext_vkAcquirePerformanceConfigurationINTEL
    = (PFN_vkAcquirePerformanceConfigurationINTEL)load (
      userptr, "vkAcquirePerformanceConfigurationINTEL");
  glext_vkCmdSetPerformanceMarkerINTEL
    = (PFN_vkCmdSetPerformanceMarkerINTEL)load (
      userptr, "vkCmdSetPerformanceMarkerINTEL");
  glext_vkCmdSetPerformanceOverrideINTEL
    = (PFN_vkCmdSetPerformanceOverrideINTEL)load (
      userptr, "vkCmdSetPerformanceOverrideINTEL");
  glext_vkCmdSetPerformanceStreamMarkerINTEL
    = (PFN_vkCmdSetPerformanceStreamMarkerINTEL)load (
      userptr, "vkCmdSetPerformanceStreamMarkerINTEL");
  glext_vkGetPerformanceParameterINTEL
    = (PFN_vkGetPerformanceParameterINTEL)load (
      userptr, "vkGetPerformanceParameterINTEL");
  glext_vkInitializePerformanceApiINTEL
    = (PFN_vkInitializePerformanceApiINTEL)load (
      userptr, "vkInitializePerformanceApiINTEL");
  glext_vkQueueSetPerformanceConfigurationINTEL
    = (PFN_vkQueueSetPerformanceConfigurationINTEL)load (
      userptr, "vkQueueSetPerformanceConfigurationINTEL");
  glext_vkReleasePerformanceConfigurationINTEL
    = (PFN_vkReleasePerformanceConfigurationINTEL)load (
      userptr, "vkReleasePerformanceConfigurationINTEL");
  glext_vkUninitializePerformanceApiINTEL
    = (PFN_vkUninitializePerformanceApiINTEL)load (
      userptr, "vkUninitializePerformanceApiINTEL");
}
static void
glext_vk_load_VK_KHR_acceleration_structure (GLADuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_VK_KHR_acceleration_structure)
    return;
  glext_vkBuildAccelerationStructuresKHR
    = (PFN_vkBuildAccelerationStructuresKHR)load (
      userptr, "vkBuildAccelerationStructuresKHR");
  glext_vkCmdBuildAccelerationStructuresIndirectKHR
    = (PFN_vkCmdBuildAccelerationStructuresIndirectKHR)load (
      userptr, "vkCmdBuildAccelerationStructuresIndirectKHR");
  glext_vkCmdBuildAccelerationStructuresKHR
    = (PFN_vkCmdBuildAccelerationStructuresKHR)load (
      userptr, "vkCmdBuildAccelerationStructuresKHR");
  glext_vkCmdCopyAccelerationStructureKHR
    = (PFN_vkCmdCopyAccelerationStructureKHR)load (
      userptr, "vkCmdCopyAccelerationStructureKHR");
  glext_vkCmdCopyAccelerationStructureToMemoryKHR
    = (PFN_vkCmdCopyAccelerationStructureToMemoryKHR)load (
      userptr, "vkCmdCopyAccelerationStructureToMemoryKHR");
  glext_vkCmdCopyMemoryToAccelerationStructureKHR
    = (PFN_vkCmdCopyMemoryToAccelerationStructureKHR)load (
      userptr, "vkCmdCopyMemoryToAccelerationStructureKHR");
  glext_vkCmdWriteAccelerationStructuresPropertiesKHR
    = (PFN_vkCmdWriteAccelerationStructuresPropertiesKHR)load (
      userptr, "vkCmdWriteAccelerationStructuresPropertiesKHR");
  glext_vkCopyAccelerationStructureKHR
    = (PFN_vkCopyAccelerationStructureKHR)load (
      userptr, "vkCopyAccelerationStructureKHR");
  glext_vkCopyAccelerationStructureToMemoryKHR
    = (PFN_vkCopyAccelerationStructureToMemoryKHR)load (
      userptr, "vkCopyAccelerationStructureToMemoryKHR");
  glext_vkCopyMemoryToAccelerationStructureKHR
    = (PFN_vkCopyMemoryToAccelerationStructureKHR)load (
      userptr, "vkCopyMemoryToAccelerationStructureKHR");
  glext_vkCreateAccelerationStructureKHR
    = (PFN_vkCreateAccelerationStructureKHR)load (
      userptr, "vkCreateAccelerationStructureKHR");
  glext_vkDestroyAccelerationStructureKHR
    = (PFN_vkDestroyAccelerationStructureKHR)load (
      userptr, "vkDestroyAccelerationStructureKHR");
  glext_vkGetAccelerationStructureBuildSizesKHR
    = (PFN_vkGetAccelerationStructureBuildSizesKHR)load (
      userptr, "vkGetAccelerationStructureBuildSizesKHR");
  glext_vkGetAccelerationStructureDeviceAddressKHR
    = (PFN_vkGetAccelerationStructureDeviceAddressKHR)load (
      userptr, "vkGetAccelerationStructureDeviceAddressKHR");
  glext_vkGetDeviceAccelerationStructureCompatibilityKHR
    = (PFN_vkGetDeviceAccelerationStructureCompatibilityKHR)load (
      userptr, "vkGetDeviceAccelerationStructureCompatibilityKHR");
  glext_vkWriteAccelerationStructuresPropertiesKHR
    = (PFN_vkWriteAccelerationStructuresPropertiesKHR)load (
      userptr, "vkWriteAccelerationStructuresPropertiesKHR");
}
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
static void
glext_vk_load_VK_KHR_android_surface (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_KHR_android_surface)
    return;
  glext_vkCreateAndroidSurfaceKHR = (PFN_vkCreateAndroidSurfaceKHR)load (
    userptr, "vkCreateAndroidSurfaceKHR");
}

#endif
static void
glext_vk_load_VK_KHR_bind_memory2 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_bind_memory2)
    return;
  glext_vkBindBufferMemory2KHR
    = (PFN_vkBindBufferMemory2KHR)load (userptr, "vkBindBufferMemory2KHR");
  glext_vkBindImageMemory2KHR
    = (PFN_vkBindImageMemory2KHR)load (userptr, "vkBindImageMemory2KHR");
}
static void
glext_vk_load_VK_KHR_buffer_device_address (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_KHR_buffer_device_address)
    return;
  glext_vkGetBufferDeviceAddressKHR = (PFN_vkGetBufferDeviceAddressKHR)load (
    userptr, "vkGetBufferDeviceAddressKHR");
  glext_vkGetBufferOpaqueCaptureAddressKHR
    = (PFN_vkGetBufferOpaqueCaptureAddressKHR)load (
      userptr, "vkGetBufferOpaqueCaptureAddressKHR");
  glext_vkGetDeviceMemoryOpaqueCaptureAddressKHR
    = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)load (
      userptr, "vkGetDeviceMemoryOpaqueCaptureAddressKHR");
}
static void
glext_vk_load_VK_KHR_calibrated_timestamps (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_KHR_calibrated_timestamps)
    return;
  glext_vkGetCalibratedTimestampsKHR = (PFN_vkGetCalibratedTimestampsKHR)load (
    userptr, "vkGetCalibratedTimestampsKHR");
  glext_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR
    = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR)load (
      userptr, "vkGetPhysicalDeviceCalibrateableTimeDomainsKHR");
}
static void
glext_vk_load_VK_KHR_cooperative_matrix (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_KHR_cooperative_matrix)
    return;
  glext_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR
    = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR)load (
      userptr, "vkGetPhysicalDeviceCooperativeMatrixPropertiesKHR");
}
static void
glext_vk_load_VK_KHR_copy_commands2 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_copy_commands2)
    return;
  glext_vkCmdBlitImage2KHR
    = (PFN_vkCmdBlitImage2KHR)load (userptr, "vkCmdBlitImage2KHR");
  glext_vkCmdCopyBuffer2KHR
    = (PFN_vkCmdCopyBuffer2KHR)load (userptr, "vkCmdCopyBuffer2KHR");
  glext_vkCmdCopyBufferToImage2KHR = (PFN_vkCmdCopyBufferToImage2KHR)load (
    userptr, "vkCmdCopyBufferToImage2KHR");
  glext_vkCmdCopyImage2KHR
    = (PFN_vkCmdCopyImage2KHR)load (userptr, "vkCmdCopyImage2KHR");
  glext_vkCmdCopyImageToBuffer2KHR = (PFN_vkCmdCopyImageToBuffer2KHR)load (
    userptr, "vkCmdCopyImageToBuffer2KHR");
  glext_vkCmdResolveImage2KHR
    = (PFN_vkCmdResolveImage2KHR)load (userptr, "vkCmdResolveImage2KHR");
}
static void
glext_vk_load_VK_KHR_copy_memory_indirect (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_KHR_copy_memory_indirect)
    return;
  glext_vkCmdCopyMemoryIndirectKHR = (PFN_vkCmdCopyMemoryIndirectKHR)load (
    userptr, "vkCmdCopyMemoryIndirectKHR");
  glext_vkCmdCopyMemoryToImageIndirectKHR
    = (PFN_vkCmdCopyMemoryToImageIndirectKHR)load (
      userptr, "vkCmdCopyMemoryToImageIndirectKHR");
}
static void
glext_vk_load_VK_KHR_create_renderpass2 (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_KHR_create_renderpass2)
    return;
  glext_vkCmdBeginRenderPass2KHR
    = (PFN_vkCmdBeginRenderPass2KHR)load (userptr, "vkCmdBeginRenderPass2KHR");
  glext_vkCmdEndRenderPass2KHR
    = (PFN_vkCmdEndRenderPass2KHR)load (userptr, "vkCmdEndRenderPass2KHR");
  glext_vkCmdNextSubpass2KHR
    = (PFN_vkCmdNextSubpass2KHR)load (userptr, "vkCmdNextSubpass2KHR");
  glext_vkCreateRenderPass2KHR
    = (PFN_vkCreateRenderPass2KHR)load (userptr, "vkCreateRenderPass2KHR");
}
static void
glext_vk_load_VK_KHR_deferred_host_operations (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_KHR_deferred_host_operations)
    return;
  glext_vkCreateDeferredOperationKHR = (PFN_vkCreateDeferredOperationKHR)load (
    userptr, "vkCreateDeferredOperationKHR");
  glext_vkDeferredOperationJoinKHR = (PFN_vkDeferredOperationJoinKHR)load (
    userptr, "vkDeferredOperationJoinKHR");
  glext_vkDestroyDeferredOperationKHR
    = (PFN_vkDestroyDeferredOperationKHR)load (
      userptr, "vkDestroyDeferredOperationKHR");
  glext_vkGetDeferredOperationMaxConcurrencyKHR
    = (PFN_vkGetDeferredOperationMaxConcurrencyKHR)load (
      userptr, "vkGetDeferredOperationMaxConcurrencyKHR");
  glext_vkGetDeferredOperationResultKHR
    = (PFN_vkGetDeferredOperationResultKHR)load (
      userptr, "vkGetDeferredOperationResultKHR");
}
static void
glext_vk_load_VK_KHR_descriptor_update_template (GLADuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_VK_KHR_descriptor_update_template)
    return;
  glext_vkCmdPushDescriptorSetWithTemplateKHR
    = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)load (
      userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
  glext_vkCreateDescriptorUpdateTemplateKHR
    = (PFN_vkCreateDescriptorUpdateTemplateKHR)load (
      userptr, "vkCreateDescriptorUpdateTemplateKHR");
  glext_vkDestroyDescriptorUpdateTemplateKHR
    = (PFN_vkDestroyDescriptorUpdateTemplateKHR)load (
      userptr, "vkDestroyDescriptorUpdateTemplateKHR");
  glext_vkUpdateDescriptorSetWithTemplateKHR
    = (PFN_vkUpdateDescriptorSetWithTemplateKHR)load (
      userptr, "vkUpdateDescriptorSetWithTemplateKHR");
}
static void
glext_vk_load_VK_KHR_device_group (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_device_group)
    return;
  glext_vkAcquireNextImage2KHR
    = (PFN_vkAcquireNextImage2KHR)load (userptr, "vkAcquireNextImage2KHR");
  glext_vkCmdDispatchBaseKHR
    = (PFN_vkCmdDispatchBaseKHR)load (userptr, "vkCmdDispatchBaseKHR");
  glext_vkCmdSetDeviceMaskKHR
    = (PFN_vkCmdSetDeviceMaskKHR)load (userptr, "vkCmdSetDeviceMaskKHR");
  glext_vkGetDeviceGroupPeerMemoryFeaturesKHR
    = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)load (
      userptr, "vkGetDeviceGroupPeerMemoryFeaturesKHR");
  glext_vkGetDeviceGroupPresentCapabilitiesKHR
    = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)load (
      userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
  glext_vkGetDeviceGroupSurfacePresentModesKHR
    = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)load (
      userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
  glext_vkGetPhysicalDevicePresentRectanglesKHR
    = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)load (
      userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
}
static void
glext_vk_load_VK_KHR_device_group_creation (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_KHR_device_group_creation)
    return;
  glext_vkEnumeratePhysicalDeviceGroupsKHR
    = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)load (
      userptr, "vkEnumeratePhysicalDeviceGroupsKHR");
}
static void
glext_vk_load_VK_KHR_display (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_display)
    return;
  glext_vkCreateDisplayModeKHR
    = (PFN_vkCreateDisplayModeKHR)load (userptr, "vkCreateDisplayModeKHR");
  glext_vkCreateDisplayPlaneSurfaceKHR
    = (PFN_vkCreateDisplayPlaneSurfaceKHR)load (
      userptr, "vkCreateDisplayPlaneSurfaceKHR");
  glext_vkGetDisplayModePropertiesKHR
    = (PFN_vkGetDisplayModePropertiesKHR)load (
      userptr, "vkGetDisplayModePropertiesKHR");
  glext_vkGetDisplayPlaneCapabilitiesKHR
    = (PFN_vkGetDisplayPlaneCapabilitiesKHR)load (
      userptr, "vkGetDisplayPlaneCapabilitiesKHR");
  glext_vkGetDisplayPlaneSupportedDisplaysKHR
    = (PFN_vkGetDisplayPlaneSupportedDisplaysKHR)load (
      userptr, "vkGetDisplayPlaneSupportedDisplaysKHR");
  glext_vkGetPhysicalDeviceDisplayPlanePropertiesKHR
    = (PFN_vkGetPhysicalDeviceDisplayPlanePropertiesKHR)load (
      userptr, "vkGetPhysicalDeviceDisplayPlanePropertiesKHR");
  glext_vkGetPhysicalDeviceDisplayPropertiesKHR
    = (PFN_vkGetPhysicalDeviceDisplayPropertiesKHR)load (
      userptr, "vkGetPhysicalDeviceDisplayPropertiesKHR");
}
static void
glext_vk_load_VK_KHR_display_swapchain (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_KHR_display_swapchain)
    return;
  glext_vkCreateSharedSwapchainsKHR = (PFN_vkCreateSharedSwapchainsKHR)load (
    userptr, "vkCreateSharedSwapchainsKHR");
}
static void
glext_vk_load_VK_KHR_draw_indirect_count (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_KHR_draw_indirect_count)
    return;
  glext_vkCmdDrawIndexedIndirectCountKHR
    = (PFN_vkCmdDrawIndexedIndirectCountKHR)load (
      userptr, "vkCmdDrawIndexedIndirectCountKHR");
  glext_vkCmdDrawIndirectCountKHR = (PFN_vkCmdDrawIndirectCountKHR)load (
    userptr, "vkCmdDrawIndirectCountKHR");
}
static void
glext_vk_load_VK_KHR_dynamic_rendering (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_KHR_dynamic_rendering)
    return;
  glext_vkCmdBeginRenderingKHR
    = (PFN_vkCmdBeginRenderingKHR)load (userptr, "vkCmdBeginRenderingKHR");
  glext_vkCmdEndRenderingKHR
    = (PFN_vkCmdEndRenderingKHR)load (userptr, "vkCmdEndRenderingKHR");
}
static void
glext_vk_load_VK_KHR_dynamic_rendering_local_read (GLADuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_VK_KHR_dynamic_rendering_local_read)
    return;
  glext_vkCmdSetRenderingAttachmentLocationsKHR
    = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)load (
      userptr, "vkCmdSetRenderingAttachmentLocationsKHR");
  glext_vkCmdSetRenderingInputAttachmentIndicesKHR
    = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)load (
      userptr, "vkCmdSetRenderingInputAttachmentIndicesKHR");
}
static void
glext_vk_load_VK_KHR_external_fence_capabilities (GLADuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_VK_KHR_external_fence_capabilities)
    return;
  glext_vkGetPhysicalDeviceExternalFencePropertiesKHR
    = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)load (
      userptr, "vkGetPhysicalDeviceExternalFencePropertiesKHR");
}
static void
glext_vk_load_VK_KHR_external_fence_fd (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_KHR_external_fence_fd)
    return;
  glext_vkGetFenceFdKHR
    = (PFN_vkGetFenceFdKHR)load (userptr, "vkGetFenceFdKHR");
  glext_vkImportFenceFdKHR
    = (PFN_vkImportFenceFdKHR)load (userptr, "vkImportFenceFdKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_KHR_external_fence_win32 (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_KHR_external_fence_win32)
    return;
  glext_vkGetFenceWin32HandleKHR
    = (PFN_vkGetFenceWin32HandleKHR)load (userptr, "vkGetFenceWin32HandleKHR");
  glext_vkImportFenceWin32HandleKHR = (PFN_vkImportFenceWin32HandleKHR)load (
    userptr, "vkImportFenceWin32HandleKHR");
}

#endif
static void
glext_vk_load_VK_KHR_external_memory_capabilities (GLADuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_VK_KHR_external_memory_capabilities)
    return;
  glext_vkGetPhysicalDeviceExternalBufferPropertiesKHR
    = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)load (
      userptr, "vkGetPhysicalDeviceExternalBufferPropertiesKHR");
}
static void
glext_vk_load_VK_KHR_external_memory_fd (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_KHR_external_memory_fd)
    return;
  glext_vkGetMemoryFdKHR
    = (PFN_vkGetMemoryFdKHR)load (userptr, "vkGetMemoryFdKHR");
  glext_vkGetMemoryFdPropertiesKHR = (PFN_vkGetMemoryFdPropertiesKHR)load (
    userptr, "vkGetMemoryFdPropertiesKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_KHR_external_memory_win32 (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_KHR_external_memory_win32)
    return;
  glext_vkGetMemoryWin32HandleKHR = (PFN_vkGetMemoryWin32HandleKHR)load (
    userptr, "vkGetMemoryWin32HandleKHR");
  glext_vkGetMemoryWin32HandlePropertiesKHR
    = (PFN_vkGetMemoryWin32HandlePropertiesKHR)load (
      userptr, "vkGetMemoryWin32HandlePropertiesKHR");
}

#endif
static void
glext_vk_load_VK_KHR_external_semaphore_capabilities (GLADuserptrloadfunc load,
                                                      void* userptr) {
  if (!GLEXT_VK_KHR_external_semaphore_capabilities)
    return;
  glext_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
    = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)load (
      userptr, "vkGetPhysicalDeviceExternalSemaphorePropertiesKHR");
}
static void
glext_vk_load_VK_KHR_external_semaphore_fd (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_KHR_external_semaphore_fd)
    return;
  glext_vkGetSemaphoreFdKHR
    = (PFN_vkGetSemaphoreFdKHR)load (userptr, "vkGetSemaphoreFdKHR");
  glext_vkImportSemaphoreFdKHR
    = (PFN_vkImportSemaphoreFdKHR)load (userptr, "vkImportSemaphoreFdKHR");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_KHR_external_semaphore_win32 (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_KHR_external_semaphore_win32)
    return;
  glext_vkGetSemaphoreWin32HandleKHR = (PFN_vkGetSemaphoreWin32HandleKHR)load (
    userptr, "vkGetSemaphoreWin32HandleKHR");
  glext_vkImportSemaphoreWin32HandleKHR
    = (PFN_vkImportSemaphoreWin32HandleKHR)load (
      userptr, "vkImportSemaphoreWin32HandleKHR");
}

#endif
static void
glext_vk_load_VK_KHR_fragment_shading_rate (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_KHR_fragment_shading_rate)
    return;
  glext_vkCmdSetFragmentShadingRateKHR
    = (PFN_vkCmdSetFragmentShadingRateKHR)load (
      userptr, "vkCmdSetFragmentShadingRateKHR");
  glext_vkGetPhysicalDeviceFragmentShadingRatesKHR
    = (PFN_vkGetPhysicalDeviceFragmentShadingRatesKHR)load (
      userptr, "vkGetPhysicalDeviceFragmentShadingRatesKHR");
}
static void
glext_vk_load_VK_KHR_get_display_properties2 (GLADuserptrloadfunc load,
                                              void* userptr) {
  if (!GLEXT_VK_KHR_get_display_properties2)
    return;
  glext_vkGetDisplayModeProperties2KHR
    = (PFN_vkGetDisplayModeProperties2KHR)load (
      userptr, "vkGetDisplayModeProperties2KHR");
  glext_vkGetDisplayPlaneCapabilities2KHR
    = (PFN_vkGetDisplayPlaneCapabilities2KHR)load (
      userptr, "vkGetDisplayPlaneCapabilities2KHR");
  glext_vkGetPhysicalDeviceDisplayPlaneProperties2KHR
    = (PFN_vkGetPhysicalDeviceDisplayPlaneProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceDisplayPlaneProperties2KHR");
  glext_vkGetPhysicalDeviceDisplayProperties2KHR
    = (PFN_vkGetPhysicalDeviceDisplayProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceDisplayProperties2KHR");
}
static void
glext_vk_load_VK_KHR_get_memory_requirements2 (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_KHR_get_memory_requirements2)
    return;
  glext_vkGetBufferMemoryRequirements2KHR
    = (PFN_vkGetBufferMemoryRequirements2KHR)load (
      userptr, "vkGetBufferMemoryRequirements2KHR");
  glext_vkGetImageMemoryRequirements2KHR
    = (PFN_vkGetImageMemoryRequirements2KHR)load (
      userptr, "vkGetImageMemoryRequirements2KHR");
  glext_vkGetImageSparseMemoryRequirements2KHR
    = (PFN_vkGetImageSparseMemoryRequirements2KHR)load (
      userptr, "vkGetImageSparseMemoryRequirements2KHR");
}
static void
glext_vk_load_VK_KHR_get_physical_device_properties2 (GLADuserptrloadfunc load,
                                                      void* userptr) {
  if (!GLEXT_VK_KHR_get_physical_device_properties2)
    return;
  glext_vkGetPhysicalDeviceFeatures2KHR
    = (PFN_vkGetPhysicalDeviceFeatures2KHR)load (
      userptr, "vkGetPhysicalDeviceFeatures2KHR");
  glext_vkGetPhysicalDeviceFormatProperties2KHR
    = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceFormatProperties2KHR");
  glext_vkGetPhysicalDeviceImageFormatProperties2KHR
    = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceImageFormatProperties2KHR");
  glext_vkGetPhysicalDeviceMemoryProperties2KHR
    = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceMemoryProperties2KHR");
  glext_vkGetPhysicalDeviceProperties2KHR
    = (PFN_vkGetPhysicalDeviceProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceProperties2KHR");
  glext_vkGetPhysicalDeviceQueueFamilyProperties2KHR
    = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceQueueFamilyProperties2KHR");
  glext_vkGetPhysicalDeviceSparseImageFormatProperties2KHR
    = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)load (
      userptr, "vkGetPhysicalDeviceSparseImageFormatProperties2KHR");
}
static void
glext_vk_load_VK_KHR_get_surface_capabilities2 (GLADuserptrloadfunc load,
                                                void* userptr) {
  if (!GLEXT_VK_KHR_get_surface_capabilities2)
    return;
  glext_vkGetPhysicalDeviceSurfaceCapabilities2KHR
    = (PFN_vkGetPhysicalDeviceSurfaceCapabilities2KHR)load (
      userptr, "vkGetPhysicalDeviceSurfaceCapabilities2KHR");
  glext_vkGetPhysicalDeviceSurfaceFormats2KHR
    = (PFN_vkGetPhysicalDeviceSurfaceFormats2KHR)load (
      userptr, "vkGetPhysicalDeviceSurfaceFormats2KHR");
}
static void
glext_vk_load_VK_KHR_line_rasterization (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_KHR_line_rasterization)
    return;
  glext_vkCmdSetLineStippleKHR
    = (PFN_vkCmdSetLineStippleKHR)load (userptr, "vkCmdSetLineStippleKHR");
}
static void
glext_vk_load_VK_KHR_maintenance1 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_maintenance1)
    return;
  glext_vkTrimCommandPoolKHR
    = (PFN_vkTrimCommandPoolKHR)load (userptr, "vkTrimCommandPoolKHR");
}
static void
glext_vk_load_VK_KHR_maintenance3 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_maintenance3)
    return;
  glext_vkGetDescriptorSetLayoutSupportKHR
    = (PFN_vkGetDescriptorSetLayoutSupportKHR)load (
      userptr, "vkGetDescriptorSetLayoutSupportKHR");
}
static void
glext_vk_load_VK_KHR_maintenance4 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_maintenance4)
    return;
  glext_vkGetDeviceBufferMemoryRequirementsKHR
    = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)load (
      userptr, "vkGetDeviceBufferMemoryRequirementsKHR");
  glext_vkGetDeviceImageMemoryRequirementsKHR
    = (PFN_vkGetDeviceImageMemoryRequirementsKHR)load (
      userptr, "vkGetDeviceImageMemoryRequirementsKHR");
  glext_vkGetDeviceImageSparseMemoryRequirementsKHR
    = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)load (
      userptr, "vkGetDeviceImageSparseMemoryRequirementsKHR");
}
static void
glext_vk_load_VK_KHR_maintenance5 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_maintenance5)
    return;
  glext_vkCmdBindIndexBuffer2KHR
    = (PFN_vkCmdBindIndexBuffer2KHR)load (userptr, "vkCmdBindIndexBuffer2KHR");
  glext_vkGetDeviceImageSubresourceLayoutKHR
    = (PFN_vkGetDeviceImageSubresourceLayoutKHR)load (
      userptr, "vkGetDeviceImageSubresourceLayoutKHR");
  glext_vkGetImageSubresourceLayout2KHR
    = (PFN_vkGetImageSubresourceLayout2KHR)load (
      userptr, "vkGetImageSubresourceLayout2KHR");
  glext_vkGetRenderingAreaGranularityKHR
    = (PFN_vkGetRenderingAreaGranularityKHR)load (
      userptr, "vkGetRenderingAreaGranularityKHR");
}
static void
glext_vk_load_VK_KHR_maintenance6 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_maintenance6)
    return;
  glext_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT
    = (PFN_vkCmdBindDescriptorBufferEmbeddedSamplers2EXT)load (
      userptr, "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT");
  glext_vkCmdBindDescriptorSets2KHR = (PFN_vkCmdBindDescriptorSets2KHR)load (
    userptr, "vkCmdBindDescriptorSets2KHR");
  glext_vkCmdPushConstants2KHR
    = (PFN_vkCmdPushConstants2KHR)load (userptr, "vkCmdPushConstants2KHR");
  glext_vkCmdPushDescriptorSet2KHR = (PFN_vkCmdPushDescriptorSet2KHR)load (
    userptr, "vkCmdPushDescriptorSet2KHR");
  glext_vkCmdPushDescriptorSetWithTemplate2KHR
    = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)load (
      userptr, "vkCmdPushDescriptorSetWithTemplate2KHR");
  glext_vkCmdSetDescriptorBufferOffsets2EXT
    = (PFN_vkCmdSetDescriptorBufferOffsets2EXT)load (
      userptr, "vkCmdSetDescriptorBufferOffsets2EXT");
}
static void
glext_vk_load_VK_KHR_map_memory2 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_map_memory2)
    return;
  glext_vkMapMemory2KHR
    = (PFN_vkMapMemory2KHR)load (userptr, "vkMapMemory2KHR");
  glext_vkUnmapMemory2KHR
    = (PFN_vkUnmapMemory2KHR)load (userptr, "vkUnmapMemory2KHR");
}
static void
glext_vk_load_VK_KHR_performance_query (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_KHR_performance_query)
    return;
  glext_vkAcquireProfilingLockKHR = (PFN_vkAcquireProfilingLockKHR)load (
    userptr, "vkAcquireProfilingLockKHR");
  glext_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR
    = (PFN_vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR)
      load (userptr,
            "vkEnumeratePhysicalDeviceQueueFamilyPerformanceQueryCountersKHR");
  glext_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR
    = (PFN_vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR)load (
      userptr, "vkGetPhysicalDeviceQueueFamilyPerformanceQueryPassesKHR");
  glext_vkReleaseProfilingLockKHR = (PFN_vkReleaseProfilingLockKHR)load (
    userptr, "vkReleaseProfilingLockKHR");
}
static void
glext_vk_load_VK_KHR_pipeline_binary (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_KHR_pipeline_binary)
    return;
  glext_vkCreatePipelineBinariesKHR = (PFN_vkCreatePipelineBinariesKHR)load (
    userptr, "vkCreatePipelineBinariesKHR");
  glext_vkDestroyPipelineBinaryKHR = (PFN_vkDestroyPipelineBinaryKHR)load (
    userptr, "vkDestroyPipelineBinaryKHR");
  glext_vkGetPipelineBinaryDataKHR = (PFN_vkGetPipelineBinaryDataKHR)load (
    userptr, "vkGetPipelineBinaryDataKHR");
  glext_vkGetPipelineKeyKHR
    = (PFN_vkGetPipelineKeyKHR)load (userptr, "vkGetPipelineKeyKHR");
  glext_vkReleaseCapturedPipelineDataKHR
    = (PFN_vkReleaseCapturedPipelineDataKHR)load (
      userptr, "vkReleaseCapturedPipelineDataKHR");
}
static void
glext_vk_load_VK_KHR_pipeline_executable_properties (GLADuserptrloadfunc load,
                                                     void* userptr) {
  if (!GLEXT_VK_KHR_pipeline_executable_properties)
    return;
  glext_vkGetPipelineExecutableInternalRepresentationsKHR
    = (PFN_vkGetPipelineExecutableInternalRepresentationsKHR)load (
      userptr, "vkGetPipelineExecutableInternalRepresentationsKHR");
  glext_vkGetPipelineExecutablePropertiesKHR
    = (PFN_vkGetPipelineExecutablePropertiesKHR)load (
      userptr, "vkGetPipelineExecutablePropertiesKHR");
  glext_vkGetPipelineExecutableStatisticsKHR
    = (PFN_vkGetPipelineExecutableStatisticsKHR)load (
      userptr, "vkGetPipelineExecutableStatisticsKHR");
}
static void
glext_vk_load_VK_KHR_present_wait (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_present_wait)
    return;
  glext_vkWaitForPresentKHR
    = (PFN_vkWaitForPresentKHR)load (userptr, "vkWaitForPresentKHR");
}
static void
glext_vk_load_VK_KHR_present_wait2 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_present_wait2)
    return;
  glext_vkWaitForPresent2KHR
    = (PFN_vkWaitForPresent2KHR)load (userptr, "vkWaitForPresent2KHR");
}
static void
glext_vk_load_VK_KHR_push_descriptor (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_KHR_push_descriptor)
    return;
  glext_vkCmdPushDescriptorSetKHR = (PFN_vkCmdPushDescriptorSetKHR)load (
    userptr, "vkCmdPushDescriptorSetKHR");
  glext_vkCmdPushDescriptorSetWithTemplateKHR
    = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)load (
      userptr, "vkCmdPushDescriptorSetWithTemplateKHR");
}
static void
glext_vk_load_VK_KHR_ray_tracing_maintenance1 (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_KHR_ray_tracing_maintenance1)
    return;
  glext_vkCmdTraceRaysIndirect2KHR = (PFN_vkCmdTraceRaysIndirect2KHR)load (
    userptr, "vkCmdTraceRaysIndirect2KHR");
}
static void
glext_vk_load_VK_KHR_ray_tracing_pipeline (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_KHR_ray_tracing_pipeline)
    return;
  glext_vkCmdSetRayTracingPipelineStackSizeKHR
    = (PFN_vkCmdSetRayTracingPipelineStackSizeKHR)load (
      userptr, "vkCmdSetRayTracingPipelineStackSizeKHR");
  glext_vkCmdTraceRaysIndirectKHR = (PFN_vkCmdTraceRaysIndirectKHR)load (
    userptr, "vkCmdTraceRaysIndirectKHR");
  glext_vkCmdTraceRaysKHR
    = (PFN_vkCmdTraceRaysKHR)load (userptr, "vkCmdTraceRaysKHR");
  glext_vkCreateRayTracingPipelinesKHR
    = (PFN_vkCreateRayTracingPipelinesKHR)load (
      userptr, "vkCreateRayTracingPipelinesKHR");
  glext_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR
    = (PFN_vkGetRayTracingCaptureReplayShaderGroupHandlesKHR)load (
      userptr, "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR");
  glext_vkGetRayTracingShaderGroupHandlesKHR
    = (PFN_vkGetRayTracingShaderGroupHandlesKHR)load (
      userptr, "vkGetRayTracingShaderGroupHandlesKHR");
  glext_vkGetRayTracingShaderGroupStackSizeKHR
    = (PFN_vkGetRayTracingShaderGroupStackSizeKHR)load (
      userptr, "vkGetRayTracingShaderGroupStackSizeKHR");
}
static void
glext_vk_load_VK_KHR_sampler_ycbcr_conversion (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_KHR_sampler_ycbcr_conversion)
    return;
  glext_vkCreateSamplerYcbcrConversionKHR
    = (PFN_vkCreateSamplerYcbcrConversionKHR)load (
      userptr, "vkCreateSamplerYcbcrConversionKHR");
  glext_vkDestroySamplerYcbcrConversionKHR
    = (PFN_vkDestroySamplerYcbcrConversionKHR)load (
      userptr, "vkDestroySamplerYcbcrConversionKHR");
}
static void
glext_vk_load_VK_KHR_shared_presentable_image (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_KHR_shared_presentable_image)
    return;
  glext_vkGetSwapchainStatusKHR
    = (PFN_vkGetSwapchainStatusKHR)load (userptr, "vkGetSwapchainStatusKHR");
}
static void
glext_vk_load_VK_KHR_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_surface)
    return;
  glext_vkDestroySurfaceKHR
    = (PFN_vkDestroySurfaceKHR)load (userptr, "vkDestroySurfaceKHR");
  glext_vkGetPhysicalDeviceSurfaceCapabilitiesKHR
    = (PFN_vkGetPhysicalDeviceSurfaceCapabilitiesKHR)load (
      userptr, "vkGetPhysicalDeviceSurfaceCapabilitiesKHR");
  glext_vkGetPhysicalDeviceSurfaceFormatsKHR
    = (PFN_vkGetPhysicalDeviceSurfaceFormatsKHR)load (
      userptr, "vkGetPhysicalDeviceSurfaceFormatsKHR");
  glext_vkGetPhysicalDeviceSurfacePresentModesKHR
    = (PFN_vkGetPhysicalDeviceSurfacePresentModesKHR)load (
      userptr, "vkGetPhysicalDeviceSurfacePresentModesKHR");
  glext_vkGetPhysicalDeviceSurfaceSupportKHR
    = (PFN_vkGetPhysicalDeviceSurfaceSupportKHR)load (
      userptr, "vkGetPhysicalDeviceSurfaceSupportKHR");
}
static void
glext_vk_load_VK_KHR_swapchain (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_swapchain)
    return;
  glext_vkAcquireNextImage2KHR
    = (PFN_vkAcquireNextImage2KHR)load (userptr, "vkAcquireNextImage2KHR");
  glext_vkAcquireNextImageKHR
    = (PFN_vkAcquireNextImageKHR)load (userptr, "vkAcquireNextImageKHR");
  glext_vkCreateSwapchainKHR
    = (PFN_vkCreateSwapchainKHR)load (userptr, "vkCreateSwapchainKHR");
  glext_vkDestroySwapchainKHR
    = (PFN_vkDestroySwapchainKHR)load (userptr, "vkDestroySwapchainKHR");
  glext_vkGetDeviceGroupPresentCapabilitiesKHR
    = (PFN_vkGetDeviceGroupPresentCapabilitiesKHR)load (
      userptr, "vkGetDeviceGroupPresentCapabilitiesKHR");
  glext_vkGetDeviceGroupSurfacePresentModesKHR
    = (PFN_vkGetDeviceGroupSurfacePresentModesKHR)load (
      userptr, "vkGetDeviceGroupSurfacePresentModesKHR");
  glext_vkGetPhysicalDevicePresentRectanglesKHR
    = (PFN_vkGetPhysicalDevicePresentRectanglesKHR)load (
      userptr, "vkGetPhysicalDevicePresentRectanglesKHR");
  glext_vkGetSwapchainImagesKHR
    = (PFN_vkGetSwapchainImagesKHR)load (userptr, "vkGetSwapchainImagesKHR");
  glext_vkQueuePresentKHR
    = (PFN_vkQueuePresentKHR)load (userptr, "vkQueuePresentKHR");
}
static void
glext_vk_load_VK_KHR_swapchain_maintenance1 (GLADuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_VK_KHR_swapchain_maintenance1)
    return;
  glext_vkReleaseSwapchainImagesKHR = (PFN_vkReleaseSwapchainImagesKHR)load (
    userptr, "vkReleaseSwapchainImagesKHR");
}
static void
glext_vk_load_VK_KHR_synchronization2 (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_KHR_synchronization2)
    return;
  glext_vkCmdPipelineBarrier2KHR
    = (PFN_vkCmdPipelineBarrier2KHR)load (userptr, "vkCmdPipelineBarrier2KHR");
  glext_vkCmdResetEvent2KHR
    = (PFN_vkCmdResetEvent2KHR)load (userptr, "vkCmdResetEvent2KHR");
  glext_vkCmdSetEvent2KHR
    = (PFN_vkCmdSetEvent2KHR)load (userptr, "vkCmdSetEvent2KHR");
  glext_vkCmdWaitEvents2KHR
    = (PFN_vkCmdWaitEvents2KHR)load (userptr, "vkCmdWaitEvents2KHR");
  glext_vkCmdWriteTimestamp2KHR
    = (PFN_vkCmdWriteTimestamp2KHR)load (userptr, "vkCmdWriteTimestamp2KHR");
  glext_vkQueueSubmit2KHR
    = (PFN_vkQueueSubmit2KHR)load (userptr, "vkQueueSubmit2KHR");
}
static void
glext_vk_load_VK_KHR_timeline_semaphore (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_KHR_timeline_semaphore)
    return;
  glext_vkGetSemaphoreCounterValueKHR
    = (PFN_vkGetSemaphoreCounterValueKHR)load (
      userptr, "vkGetSemaphoreCounterValueKHR");
  glext_vkSignalSemaphoreKHR
    = (PFN_vkSignalSemaphoreKHR)load (userptr, "vkSignalSemaphoreKHR");
  glext_vkWaitSemaphoresKHR
    = (PFN_vkWaitSemaphoresKHR)load (userptr, "vkWaitSemaphoresKHR");
}
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
static void
glext_vk_load_VK_KHR_wayland_surface (GLADuserptrloadfunc load,
                                      void* userptr) {
  if (!GLEXT_VK_KHR_wayland_surface)
    return;
  glext_vkCreateWaylandSurfaceKHR = (PFN_vkCreateWaylandSurfaceKHR)load (
    userptr, "vkCreateWaylandSurfaceKHR");
  glext_vkGetPhysicalDeviceWaylandPresentationSupportKHR
    = (PFN_vkGetPhysicalDeviceWaylandPresentationSupportKHR)load (
      userptr, "vkGetPhysicalDeviceWaylandPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_KHR_win32_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_win32_surface)
    return;
  glext_vkCreateWin32SurfaceKHR
    = (PFN_vkCreateWin32SurfaceKHR)load (userptr, "vkCreateWin32SurfaceKHR");
  glext_vkGetPhysicalDeviceWin32PresentationSupportKHR
    = (PFN_vkGetPhysicalDeviceWin32PresentationSupportKHR)load (
      userptr, "vkGetPhysicalDeviceWin32PresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
static void
glext_vk_load_VK_KHR_xcb_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_xcb_surface)
    return;
  glext_vkCreateXcbSurfaceKHR
    = (PFN_vkCreateXcbSurfaceKHR)load (userptr, "vkCreateXcbSurfaceKHR");
  glext_vkGetPhysicalDeviceXcbPresentationSupportKHR
    = (PFN_vkGetPhysicalDeviceXcbPresentationSupportKHR)load (
      userptr, "vkGetPhysicalDeviceXcbPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
static void
glext_vk_load_VK_KHR_xlib_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_KHR_xlib_surface)
    return;
  glext_vkCreateXlibSurfaceKHR
    = (PFN_vkCreateXlibSurfaceKHR)load (userptr, "vkCreateXlibSurfaceKHR");
  glext_vkGetPhysicalDeviceXlibPresentationSupportKHR
    = (PFN_vkGetPhysicalDeviceXlibPresentationSupportKHR)load (
      userptr, "vkGetPhysicalDeviceXlibPresentationSupportKHR");
}

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
static void
glext_vk_load_VK_MVK_ios_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_MVK_ios_surface)
    return;
  glext_vkCreateIOSSurfaceMVK
    = (PFN_vkCreateIOSSurfaceMVK)load (userptr, "vkCreateIOSSurfaceMVK");
}

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
static void
glext_vk_load_VK_MVK_macos_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_MVK_macos_surface)
    return;
  glext_vkCreateMacOSSurfaceMVK
    = (PFN_vkCreateMacOSSurfaceMVK)load (userptr, "vkCreateMacOSSurfaceMVK");
}

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
static void
glext_vk_load_VK_NN_vi_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NN_vi_surface)
    return;
  glext_vkCreateViSurfaceNN
    = (PFN_vkCreateViSurfaceNN)load (userptr, "vkCreateViSurfaceNN");
}

#endif
static void
glext_vk_load_VK_NVX_binary_import (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NVX_binary_import)
    return;
  glext_vkCmdCuLaunchKernelNVX
    = (PFN_vkCmdCuLaunchKernelNVX)load (userptr, "vkCmdCuLaunchKernelNVX");
  glext_vkCreateCuFunctionNVX
    = (PFN_vkCreateCuFunctionNVX)load (userptr, "vkCreateCuFunctionNVX");
  glext_vkCreateCuModuleNVX
    = (PFN_vkCreateCuModuleNVX)load (userptr, "vkCreateCuModuleNVX");
  glext_vkDestroyCuFunctionNVX
    = (PFN_vkDestroyCuFunctionNVX)load (userptr, "vkDestroyCuFunctionNVX");
  glext_vkDestroyCuModuleNVX
    = (PFN_vkDestroyCuModuleNVX)load (userptr, "vkDestroyCuModuleNVX");
}
static void
glext_vk_load_VK_NVX_image_view_handle (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_NVX_image_view_handle)
    return;
  glext_vkGetImageViewAddressNVX
    = (PFN_vkGetImageViewAddressNVX)load (userptr, "vkGetImageViewAddressNVX");
  glext_vkGetImageViewHandle64NVX = (PFN_vkGetImageViewHandle64NVX)load (
    userptr, "vkGetImageViewHandle64NVX");
  glext_vkGetImageViewHandleNVX
    = (PFN_vkGetImageViewHandleNVX)load (userptr, "vkGetImageViewHandleNVX");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_NV_acquire_winrt_display (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_NV_acquire_winrt_display)
    return;
  glext_vkAcquireWinrtDisplayNV
    = (PFN_vkAcquireWinrtDisplayNV)load (userptr, "vkAcquireWinrtDisplayNV");
  glext_vkGetWinrtDisplayNV
    = (PFN_vkGetWinrtDisplayNV)load (userptr, "vkGetWinrtDisplayNV");
}

#endif
static void
glext_vk_load_VK_NV_clip_space_w_scaling (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_NV_clip_space_w_scaling)
    return;
  glext_vkCmdSetViewportWScalingNV = (PFN_vkCmdSetViewportWScalingNV)load (
    userptr, "vkCmdSetViewportWScalingNV");
}
static void
glext_vk_load_VK_NV_cluster_acceleration_structure (GLADuserptrloadfunc load,
                                                    void* userptr) {
  if (!GLEXT_VK_NV_cluster_acceleration_structure)
    return;
  glext_vkCmdBuildClusterAccelerationStructureIndirectNV
    = (PFN_vkCmdBuildClusterAccelerationStructureIndirectNV)load (
      userptr, "vkCmdBuildClusterAccelerationStructureIndirectNV");
  glext_vkGetClusterAccelerationStructureBuildSizesNV
    = (PFN_vkGetClusterAccelerationStructureBuildSizesNV)load (
      userptr, "vkGetClusterAccelerationStructureBuildSizesNV");
}
static void
glext_vk_load_VK_NV_cooperative_matrix (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_NV_cooperative_matrix)
    return;
  glext_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV
    = (PFN_vkGetPhysicalDeviceCooperativeMatrixPropertiesNV)load (
      userptr, "vkGetPhysicalDeviceCooperativeMatrixPropertiesNV");
}
static void
glext_vk_load_VK_NV_cooperative_matrix2 (GLADuserptrloadfunc load,
                                         void* userptr) {
  if (!GLEXT_VK_NV_cooperative_matrix2)
    return;
  glext_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV
    = (PFN_vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV)
      load (
        userptr,
        "vkGetPhysicalDeviceCooperativeMatrixFlexibleDimensionsPropertiesNV");
}
static void
glext_vk_load_VK_NV_cooperative_vector (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_NV_cooperative_vector)
    return;
  glext_vkCmdConvertCooperativeVectorMatrixNV
    = (PFN_vkCmdConvertCooperativeVectorMatrixNV)load (
      userptr, "vkCmdConvertCooperativeVectorMatrixNV");
  glext_vkConvertCooperativeVectorMatrixNV
    = (PFN_vkConvertCooperativeVectorMatrixNV)load (
      userptr, "vkConvertCooperativeVectorMatrixNV");
  glext_vkGetPhysicalDeviceCooperativeVectorPropertiesNV
    = (PFN_vkGetPhysicalDeviceCooperativeVectorPropertiesNV)load (
      userptr, "vkGetPhysicalDeviceCooperativeVectorPropertiesNV");
}
static void
glext_vk_load_VK_NV_copy_memory_indirect (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_NV_copy_memory_indirect)
    return;
  glext_vkCmdCopyMemoryIndirectNV = (PFN_vkCmdCopyMemoryIndirectNV)load (
    userptr, "vkCmdCopyMemoryIndirectNV");
  glext_vkCmdCopyMemoryToImageIndirectNV
    = (PFN_vkCmdCopyMemoryToImageIndirectNV)load (
      userptr, "vkCmdCopyMemoryToImageIndirectNV");
}
static void
glext_vk_load_VK_NV_coverage_reduction_mode (GLADuserptrloadfunc load,
                                             void* userptr) {
  if (!GLEXT_VK_NV_coverage_reduction_mode)
    return;
  glext_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV
    = (PFN_vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV)
      load (
        userptr,
        "vkGetPhysicalDeviceSupportedFramebufferMixedSamplesCombinationsNV");
}
#if defined(VK_ENABLE_BETA_EXTENSIONS)
static void
glext_vk_load_VK_NV_cuda_kernel_launch (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_NV_cuda_kernel_launch)
    return;
  glext_vkCmdCudaLaunchKernelNV
    = (PFN_vkCmdCudaLaunchKernelNV)load (userptr, "vkCmdCudaLaunchKernelNV");
  glext_vkCreateCudaFunctionNV
    = (PFN_vkCreateCudaFunctionNV)load (userptr, "vkCreateCudaFunctionNV");
  glext_vkCreateCudaModuleNV
    = (PFN_vkCreateCudaModuleNV)load (userptr, "vkCreateCudaModuleNV");
  glext_vkDestroyCudaFunctionNV
    = (PFN_vkDestroyCudaFunctionNV)load (userptr, "vkDestroyCudaFunctionNV");
  glext_vkDestroyCudaModuleNV
    = (PFN_vkDestroyCudaModuleNV)load (userptr, "vkDestroyCudaModuleNV");
  glext_vkGetCudaModuleCacheNV
    = (PFN_vkGetCudaModuleCacheNV)load (userptr, "vkGetCudaModuleCacheNV");
}

#endif
static void
glext_vk_load_VK_NV_device_diagnostic_checkpoints (GLADuserptrloadfunc load,
                                                   void* userptr) {
  if (!GLEXT_VK_NV_device_diagnostic_checkpoints)
    return;
  glext_vkCmdSetCheckpointNV
    = (PFN_vkCmdSetCheckpointNV)load (userptr, "vkCmdSetCheckpointNV");
  glext_vkGetQueueCheckpointData2NV = (PFN_vkGetQueueCheckpointData2NV)load (
    userptr, "vkGetQueueCheckpointData2NV");
  glext_vkGetQueueCheckpointDataNV = (PFN_vkGetQueueCheckpointDataNV)load (
    userptr, "vkGetQueueCheckpointDataNV");
}
static void
glext_vk_load_VK_NV_device_generated_commands (GLADuserptrloadfunc load,
                                               void* userptr) {
  if (!GLEXT_VK_NV_device_generated_commands)
    return;
  glext_vkCmdBindPipelineShaderGroupNV
    = (PFN_vkCmdBindPipelineShaderGroupNV)load (
      userptr, "vkCmdBindPipelineShaderGroupNV");
  glext_vkCmdExecuteGeneratedCommandsNV
    = (PFN_vkCmdExecuteGeneratedCommandsNV)load (
      userptr, "vkCmdExecuteGeneratedCommandsNV");
  glext_vkCmdPreprocessGeneratedCommandsNV
    = (PFN_vkCmdPreprocessGeneratedCommandsNV)load (
      userptr, "vkCmdPreprocessGeneratedCommandsNV");
  glext_vkCreateIndirectCommandsLayoutNV
    = (PFN_vkCreateIndirectCommandsLayoutNV)load (
      userptr, "vkCreateIndirectCommandsLayoutNV");
  glext_vkDestroyIndirectCommandsLayoutNV
    = (PFN_vkDestroyIndirectCommandsLayoutNV)load (
      userptr, "vkDestroyIndirectCommandsLayoutNV");
  glext_vkGetGeneratedCommandsMemoryRequirementsNV
    = (PFN_vkGetGeneratedCommandsMemoryRequirementsNV)load (
      userptr, "vkGetGeneratedCommandsMemoryRequirementsNV");
}
static void
glext_vk_load_VK_NV_device_generated_commands_compute (
  GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NV_device_generated_commands_compute)
    return;
  glext_vkCmdUpdatePipelineIndirectBufferNV
    = (PFN_vkCmdUpdatePipelineIndirectBufferNV)load (
      userptr, "vkCmdUpdatePipelineIndirectBufferNV");
  glext_vkGetPipelineIndirectDeviceAddressNV
    = (PFN_vkGetPipelineIndirectDeviceAddressNV)load (
      userptr, "vkGetPipelineIndirectDeviceAddressNV");
  glext_vkGetPipelineIndirectMemoryRequirementsNV
    = (PFN_vkGetPipelineIndirectMemoryRequirementsNV)load (
      userptr, "vkGetPipelineIndirectMemoryRequirementsNV");
}
static void
glext_vk_load_VK_NV_external_compute_queue (GLADuserptrloadfunc load,
                                            void* userptr) {
  if (!GLEXT_VK_NV_external_compute_queue)
    return;
  glext_vkCreateExternalComputeQueueNV
    = (PFN_vkCreateExternalComputeQueueNV)load (
      userptr, "vkCreateExternalComputeQueueNV");
  glext_vkDestroyExternalComputeQueueNV
    = (PFN_vkDestroyExternalComputeQueueNV)load (
      userptr, "vkDestroyExternalComputeQueueNV");
  glext_vkGetExternalComputeQueueDataNV
    = (PFN_vkGetExternalComputeQueueDataNV)load (
      userptr, "vkGetExternalComputeQueueDataNV");
}
static void
glext_vk_load_VK_NV_external_memory_capabilities (GLADuserptrloadfunc load,
                                                  void* userptr) {
  if (!GLEXT_VK_NV_external_memory_capabilities)
    return;
  glext_vkGetPhysicalDeviceExternalImageFormatPropertiesNV
    = (PFN_vkGetPhysicalDeviceExternalImageFormatPropertiesNV)load (
      userptr, "vkGetPhysicalDeviceExternalImageFormatPropertiesNV");
}
static void
glext_vk_load_VK_NV_external_memory_rdma (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_NV_external_memory_rdma)
    return;
  glext_vkGetMemoryRemoteAddressNV = (PFN_vkGetMemoryRemoteAddressNV)load (
    userptr, "vkGetMemoryRemoteAddressNV");
}
#if defined(VK_USE_PLATFORM_WIN32_KHR)
static void
glext_vk_load_VK_NV_external_memory_win32 (GLADuserptrloadfunc load,
                                           void* userptr) {
  if (!GLEXT_VK_NV_external_memory_win32)
    return;
  glext_vkGetMemoryWin32HandleNV
    = (PFN_vkGetMemoryWin32HandleNV)load (userptr, "vkGetMemoryWin32HandleNV");
}

#endif
static void
glext_vk_load_VK_NV_fragment_shading_rate_enums (GLADuserptrloadfunc load,
                                                 void* userptr) {
  if (!GLEXT_VK_NV_fragment_shading_rate_enums)
    return;
  glext_vkCmdSetFragmentShadingRateEnumNV
    = (PFN_vkCmdSetFragmentShadingRateEnumNV)load (
      userptr, "vkCmdSetFragmentShadingRateEnumNV");
}
static void
glext_vk_load_VK_NV_low_latency2 (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NV_low_latency2)
    return;
  glext_vkGetLatencyTimingsNV
    = (PFN_vkGetLatencyTimingsNV)load (userptr, "vkGetLatencyTimingsNV");
  glext_vkLatencySleepNV
    = (PFN_vkLatencySleepNV)load (userptr, "vkLatencySleepNV");
  glext_vkQueueNotifyOutOfBandNV
    = (PFN_vkQueueNotifyOutOfBandNV)load (userptr, "vkQueueNotifyOutOfBandNV");
  glext_vkSetLatencyMarkerNV
    = (PFN_vkSetLatencyMarkerNV)load (userptr, "vkSetLatencyMarkerNV");
  glext_vkSetLatencySleepModeNV
    = (PFN_vkSetLatencySleepModeNV)load (userptr, "vkSetLatencySleepModeNV");
}
static void
glext_vk_load_VK_NV_memory_decompression (GLADuserptrloadfunc load,
                                          void* userptr) {
  if (!GLEXT_VK_NV_memory_decompression)
    return;
  glext_vkCmdDecompressMemoryIndirectCountNV
    = (PFN_vkCmdDecompressMemoryIndirectCountNV)load (
      userptr, "vkCmdDecompressMemoryIndirectCountNV");
  glext_vkCmdDecompressMemoryNV
    = (PFN_vkCmdDecompressMemoryNV)load (userptr, "vkCmdDecompressMemoryNV");
}
static void
glext_vk_load_VK_NV_mesh_shader (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NV_mesh_shader)
    return;
  glext_vkCmdDrawMeshTasksIndirectCountNV
    = (PFN_vkCmdDrawMeshTasksIndirectCountNV)load (
      userptr, "vkCmdDrawMeshTasksIndirectCountNV");
  glext_vkCmdDrawMeshTasksIndirectNV = (PFN_vkCmdDrawMeshTasksIndirectNV)load (
    userptr, "vkCmdDrawMeshTasksIndirectNV");
  glext_vkCmdDrawMeshTasksNV
    = (PFN_vkCmdDrawMeshTasksNV)load (userptr, "vkCmdDrawMeshTasksNV");
}
static void
glext_vk_load_VK_NV_optical_flow (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NV_optical_flow)
    return;
  glext_vkBindOpticalFlowSessionImageNV
    = (PFN_vkBindOpticalFlowSessionImageNV)load (
      userptr, "vkBindOpticalFlowSessionImageNV");
  glext_vkCmdOpticalFlowExecuteNV = (PFN_vkCmdOpticalFlowExecuteNV)load (
    userptr, "vkCmdOpticalFlowExecuteNV");
  glext_vkCreateOpticalFlowSessionNV = (PFN_vkCreateOpticalFlowSessionNV)load (
    userptr, "vkCreateOpticalFlowSessionNV");
  glext_vkDestroyOpticalFlowSessionNV
    = (PFN_vkDestroyOpticalFlowSessionNV)load (
      userptr, "vkDestroyOpticalFlowSessionNV");
  glext_vkGetPhysicalDeviceOpticalFlowImageFormatsNV
    = (PFN_vkGetPhysicalDeviceOpticalFlowImageFormatsNV)load (
      userptr, "vkGetPhysicalDeviceOpticalFlowImageFormatsNV");
}
static void
glext_vk_load_VK_NV_partitioned_acceleration_structure (
  GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NV_partitioned_acceleration_structure)
    return;
  glext_vkCmdBuildPartitionedAccelerationStructuresNV
    = (PFN_vkCmdBuildPartitionedAccelerationStructuresNV)load (
      userptr, "vkCmdBuildPartitionedAccelerationStructuresNV");
  glext_vkGetPartitionedAccelerationStructuresBuildSizesNV
    = (PFN_vkGetPartitionedAccelerationStructuresBuildSizesNV)load (
      userptr, "vkGetPartitionedAccelerationStructuresBuildSizesNV");
}
static void
glext_vk_load_VK_NV_ray_tracing (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_NV_ray_tracing)
    return;
  glext_vkBindAccelerationStructureMemoryNV
    = (PFN_vkBindAccelerationStructureMemoryNV)load (
      userptr, "vkBindAccelerationStructureMemoryNV");
  glext_vkCmdBuildAccelerationStructureNV
    = (PFN_vkCmdBuildAccelerationStructureNV)load (
      userptr, "vkCmdBuildAccelerationStructureNV");
  glext_vkCmdCopyAccelerationStructureNV
    = (PFN_vkCmdCopyAccelerationStructureNV)load (
      userptr, "vkCmdCopyAccelerationStructureNV");
  glext_vkCmdTraceRaysNV
    = (PFN_vkCmdTraceRaysNV)load (userptr, "vkCmdTraceRaysNV");
  glext_vkCmdWriteAccelerationStructuresPropertiesNV
    = (PFN_vkCmdWriteAccelerationStructuresPropertiesNV)load (
      userptr, "vkCmdWriteAccelerationStructuresPropertiesNV");
  glext_vkCompileDeferredNV
    = (PFN_vkCompileDeferredNV)load (userptr, "vkCompileDeferredNV");
  glext_vkCreateAccelerationStructureNV
    = (PFN_vkCreateAccelerationStructureNV)load (
      userptr, "vkCreateAccelerationStructureNV");
  glext_vkCreateRayTracingPipelinesNV
    = (PFN_vkCreateRayTracingPipelinesNV)load (
      userptr, "vkCreateRayTracingPipelinesNV");
  glext_vkDestroyAccelerationStructureNV
    = (PFN_vkDestroyAccelerationStructureNV)load (
      userptr, "vkDestroyAccelerationStructureNV");
  glext_vkGetAccelerationStructureHandleNV
    = (PFN_vkGetAccelerationStructureHandleNV)load (
      userptr, "vkGetAccelerationStructureHandleNV");
  glext_vkGetAccelerationStructureMemoryRequirementsNV
    = (PFN_vkGetAccelerationStructureMemoryRequirementsNV)load (
      userptr, "vkGetAccelerationStructureMemoryRequirementsNV");
  glext_vkGetRayTracingShaderGroupHandlesNV
    = (PFN_vkGetRayTracingShaderGroupHandlesNV)load (
      userptr, "vkGetRayTracingShaderGroupHandlesNV");
}
static void
glext_vk_load_VK_NV_scissor_exclusive (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_NV_scissor_exclusive)
    return;
  glext_vkCmdSetExclusiveScissorEnableNV
    = (PFN_vkCmdSetExclusiveScissorEnableNV)load (
      userptr, "vkCmdSetExclusiveScissorEnableNV");
  glext_vkCmdSetExclusiveScissorNV = (PFN_vkCmdSetExclusiveScissorNV)load (
    userptr, "vkCmdSetExclusiveScissorNV");
}
static void
glext_vk_load_VK_NV_shading_rate_image (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_NV_shading_rate_image)
    return;
  glext_vkCmdBindShadingRateImageNV = (PFN_vkCmdBindShadingRateImageNV)load (
    userptr, "vkCmdBindShadingRateImageNV");
  glext_vkCmdSetCoarseSampleOrderNV = (PFN_vkCmdSetCoarseSampleOrderNV)load (
    userptr, "vkCmdSetCoarseSampleOrderNV");
  glext_vkCmdSetViewportShadingRatePaletteNV
    = (PFN_vkCmdSetViewportShadingRatePaletteNV)load (
      userptr, "vkCmdSetViewportShadingRatePaletteNV");
}
#if defined(VK_USE_PLATFORM_OHOS)
static void
glext_vk_load_VK_OHOS_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_OHOS_surface)
    return;
  glext_vkCreateSurfaceOHOS
    = (PFN_vkCreateSurfaceOHOS)load (userptr, "vkCreateSurfaceOHOS");
}

#endif
static void
glext_vk_load_VK_QCOM_tile_memory_heap (GLADuserptrloadfunc load,
                                        void* userptr) {
  if (!GLEXT_VK_QCOM_tile_memory_heap)
    return;
  glext_vkCmdBindTileMemoryQCOM
    = (PFN_vkCmdBindTileMemoryQCOM)load (userptr, "vkCmdBindTileMemoryQCOM");
}
static void
glext_vk_load_VK_QCOM_tile_properties (GLADuserptrloadfunc load,
                                       void* userptr) {
  if (!GLEXT_VK_QCOM_tile_properties)
    return;
  glext_vkGetDynamicRenderingTilePropertiesQCOM
    = (PFN_vkGetDynamicRenderingTilePropertiesQCOM)load (
      userptr, "vkGetDynamicRenderingTilePropertiesQCOM");
  glext_vkGetFramebufferTilePropertiesQCOM
    = (PFN_vkGetFramebufferTilePropertiesQCOM)load (
      userptr, "vkGetFramebufferTilePropertiesQCOM");
}
static void
glext_vk_load_VK_QCOM_tile_shading (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_QCOM_tile_shading)
    return;
  glext_vkCmdBeginPerTileExecutionQCOM
    = (PFN_vkCmdBeginPerTileExecutionQCOM)load (
      userptr, "vkCmdBeginPerTileExecutionQCOM");
  glext_vkCmdDispatchTileQCOM
    = (PFN_vkCmdDispatchTileQCOM)load (userptr, "vkCmdDispatchTileQCOM");
  glext_vkCmdEndPerTileExecutionQCOM = (PFN_vkCmdEndPerTileExecutionQCOM)load (
    userptr, "vkCmdEndPerTileExecutionQCOM");
}
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
static void
glext_vk_load_VK_QNX_external_memory_screen_buffer (GLADuserptrloadfunc load,
                                                    void* userptr) {
  if (!GLEXT_VK_QNX_external_memory_screen_buffer)
    return;
  glext_vkGetScreenBufferPropertiesQNX
    = (PFN_vkGetScreenBufferPropertiesQNX)load (
      userptr, "vkGetScreenBufferPropertiesQNX");
}

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
static void
glext_vk_load_VK_QNX_screen_surface (GLADuserptrloadfunc load, void* userptr) {
  if (!GLEXT_VK_QNX_screen_surface)
    return;
  glext_vkCreateScreenSurfaceQNX
    = (PFN_vkCreateScreenSurfaceQNX)load (userptr, "vkCreateScreenSurfaceQNX");
  glext_vkGetPhysicalDeviceScreenPresentationSupportQNX
    = (PFN_vkGetPhysicalDeviceScreenPresentationSupportQNX)load (
      userptr, "vkGetPhysicalDeviceScreenPresentationSupportQNX");
}

#endif
static void
glext_vk_load_VK_VALVE_descriptor_set_host_mapping (GLADuserptrloadfunc load,
                                                    void* userptr) {
  if (!GLEXT_VK_VALVE_descriptor_set_host_mapping)
    return;
  glext_vkGetDescriptorSetHostMappingVALVE
    = (PFN_vkGetDescriptorSetHostMappingVALVE)load (
      userptr, "vkGetDescriptorSetHostMappingVALVE");
  glext_vkGetDescriptorSetLayoutHostMappingInfoVALVE
    = (PFN_vkGetDescriptorSetLayoutHostMappingInfoVALVE)load (
      userptr, "vkGetDescriptorSetLayoutHostMappingInfoVALVE");
}

static void
glext_vk_resolve_aliases (void) {
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
  if (glext_vkBindBufferMemory2 == NULL
      && glext_vkBindBufferMemory2KHR != NULL)
    glext_vkBindBufferMemory2
      = (PFN_vkBindBufferMemory2)glext_vkBindBufferMemory2KHR;
  if (glext_vkBindBufferMemory2KHR == NULL
      && glext_vkBindBufferMemory2 != NULL)
    glext_vkBindBufferMemory2KHR
      = (PFN_vkBindBufferMemory2KHR)glext_vkBindBufferMemory2;
  if (glext_vkBindImageMemory2 == NULL && glext_vkBindImageMemory2KHR != NULL)
    glext_vkBindImageMemory2
      = (PFN_vkBindImageMemory2)glext_vkBindImageMemory2KHR;
  if (glext_vkBindImageMemory2KHR == NULL && glext_vkBindImageMemory2 != NULL)
    glext_vkBindImageMemory2KHR
      = (PFN_vkBindImageMemory2KHR)glext_vkBindImageMemory2;
  if (glext_vkCmdBeginRendering == NULL
      && glext_vkCmdBeginRenderingKHR != NULL)
    glext_vkCmdBeginRendering
      = (PFN_vkCmdBeginRendering)glext_vkCmdBeginRenderingKHR;
  if (glext_vkCmdBeginRenderingKHR == NULL
      && glext_vkCmdBeginRendering != NULL)
    glext_vkCmdBeginRenderingKHR
      = (PFN_vkCmdBeginRenderingKHR)glext_vkCmdBeginRendering;
  if (glext_vkCmdBeginRenderPass2 == NULL
      && glext_vkCmdBeginRenderPass2KHR != NULL)
    glext_vkCmdBeginRenderPass2
      = (PFN_vkCmdBeginRenderPass2)glext_vkCmdBeginRenderPass2KHR;
  if (glext_vkCmdBeginRenderPass2KHR == NULL
      && glext_vkCmdBeginRenderPass2 != NULL)
    glext_vkCmdBeginRenderPass2KHR
      = (PFN_vkCmdBeginRenderPass2KHR)glext_vkCmdBeginRenderPass2;
  if (glext_vkCmdBindDescriptorSets2 == NULL
      && glext_vkCmdBindDescriptorSets2KHR != NULL)
    glext_vkCmdBindDescriptorSets2
      = (PFN_vkCmdBindDescriptorSets2)glext_vkCmdBindDescriptorSets2KHR;
  if (glext_vkCmdBindDescriptorSets2KHR == NULL
      && glext_vkCmdBindDescriptorSets2 != NULL)
    glext_vkCmdBindDescriptorSets2KHR
      = (PFN_vkCmdBindDescriptorSets2KHR)glext_vkCmdBindDescriptorSets2;
  if (glext_vkCmdBindIndexBuffer2 == NULL
      && glext_vkCmdBindIndexBuffer2KHR != NULL)
    glext_vkCmdBindIndexBuffer2
      = (PFN_vkCmdBindIndexBuffer2)glext_vkCmdBindIndexBuffer2KHR;
  if (glext_vkCmdBindIndexBuffer2KHR == NULL
      && glext_vkCmdBindIndexBuffer2 != NULL)
    glext_vkCmdBindIndexBuffer2KHR
      = (PFN_vkCmdBindIndexBuffer2KHR)glext_vkCmdBindIndexBuffer2;
  if (glext_vkCmdBindVertexBuffers2 == NULL
      && glext_vkCmdBindVertexBuffers2EXT != NULL)
    glext_vkCmdBindVertexBuffers2
      = (PFN_vkCmdBindVertexBuffers2)glext_vkCmdBindVertexBuffers2EXT;
  if (glext_vkCmdBindVertexBuffers2EXT == NULL
      && glext_vkCmdBindVertexBuffers2 != NULL)
    glext_vkCmdBindVertexBuffers2EXT
      = (PFN_vkCmdBindVertexBuffers2EXT)glext_vkCmdBindVertexBuffers2;
  if (glext_vkCmdBlitImage2 == NULL && glext_vkCmdBlitImage2KHR != NULL)
    glext_vkCmdBlitImage2 = (PFN_vkCmdBlitImage2)glext_vkCmdBlitImage2KHR;
  if (glext_vkCmdBlitImage2KHR == NULL && glext_vkCmdBlitImage2 != NULL)
    glext_vkCmdBlitImage2KHR = (PFN_vkCmdBlitImage2KHR)glext_vkCmdBlitImage2;
  if (glext_vkCmdCopyBuffer2 == NULL && glext_vkCmdCopyBuffer2KHR != NULL)
    glext_vkCmdCopyBuffer2 = (PFN_vkCmdCopyBuffer2)glext_vkCmdCopyBuffer2KHR;
  if (glext_vkCmdCopyBuffer2KHR == NULL && glext_vkCmdCopyBuffer2 != NULL)
    glext_vkCmdCopyBuffer2KHR
      = (PFN_vkCmdCopyBuffer2KHR)glext_vkCmdCopyBuffer2;
  if (glext_vkCmdCopyBufferToImage2 == NULL
      && glext_vkCmdCopyBufferToImage2KHR != NULL)
    glext_vkCmdCopyBufferToImage2
      = (PFN_vkCmdCopyBufferToImage2)glext_vkCmdCopyBufferToImage2KHR;
  if (glext_vkCmdCopyBufferToImage2KHR == NULL
      && glext_vkCmdCopyBufferToImage2 != NULL)
    glext_vkCmdCopyBufferToImage2KHR
      = (PFN_vkCmdCopyBufferToImage2KHR)glext_vkCmdCopyBufferToImage2;
  if (glext_vkCmdCopyImage2 == NULL && glext_vkCmdCopyImage2KHR != NULL)
    glext_vkCmdCopyImage2 = (PFN_vkCmdCopyImage2)glext_vkCmdCopyImage2KHR;
  if (glext_vkCmdCopyImage2KHR == NULL && glext_vkCmdCopyImage2 != NULL)
    glext_vkCmdCopyImage2KHR = (PFN_vkCmdCopyImage2KHR)glext_vkCmdCopyImage2;
  if (glext_vkCmdCopyImageToBuffer2 == NULL
      && glext_vkCmdCopyImageToBuffer2KHR != NULL)
    glext_vkCmdCopyImageToBuffer2
      = (PFN_vkCmdCopyImageToBuffer2)glext_vkCmdCopyImageToBuffer2KHR;
  if (glext_vkCmdCopyImageToBuffer2KHR == NULL
      && glext_vkCmdCopyImageToBuffer2 != NULL)
    glext_vkCmdCopyImageToBuffer2KHR
      = (PFN_vkCmdCopyImageToBuffer2KHR)glext_vkCmdCopyImageToBuffer2;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
  if (glext_vkCmdDispatchBase == NULL && glext_vkCmdDispatchBaseKHR != NULL)
    glext_vkCmdDispatchBase
      = (PFN_vkCmdDispatchBase)glext_vkCmdDispatchBaseKHR;
  if (glext_vkCmdDispatchBaseKHR == NULL && glext_vkCmdDispatchBase != NULL)
    glext_vkCmdDispatchBaseKHR
      = (PFN_vkCmdDispatchBaseKHR)glext_vkCmdDispatchBase;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
  if (glext_vkCmdDrawIndexedIndirectCount == NULL
      && glext_vkCmdDrawIndexedIndirectCountAMD != NULL)
    glext_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)
      glext_vkCmdDrawIndexedIndirectCountAMD;
  if (glext_vkCmdDrawIndexedIndirectCount == NULL
      && glext_vkCmdDrawIndexedIndirectCountKHR != NULL)
    glext_vkCmdDrawIndexedIndirectCount = (PFN_vkCmdDrawIndexedIndirectCount)
      glext_vkCmdDrawIndexedIndirectCountKHR;
  if (glext_vkCmdDrawIndexedIndirectCountAMD == NULL
      && glext_vkCmdDrawIndexedIndirectCount != NULL)
    glext_vkCmdDrawIndexedIndirectCountAMD
      = (PFN_vkCmdDrawIndexedIndirectCountAMD)
        glext_vkCmdDrawIndexedIndirectCount;
  if (glext_vkCmdDrawIndexedIndirectCountAMD == NULL
      && glext_vkCmdDrawIndexedIndirectCountKHR != NULL)
    glext_vkCmdDrawIndexedIndirectCountAMD
      = (PFN_vkCmdDrawIndexedIndirectCountAMD)
        glext_vkCmdDrawIndexedIndirectCountKHR;
  if (glext_vkCmdDrawIndexedIndirectCountKHR == NULL
      && glext_vkCmdDrawIndexedIndirectCount != NULL)
    glext_vkCmdDrawIndexedIndirectCountKHR
      = (PFN_vkCmdDrawIndexedIndirectCountKHR)
        glext_vkCmdDrawIndexedIndirectCount;
  if (glext_vkCmdDrawIndexedIndirectCountKHR == NULL
      && glext_vkCmdDrawIndexedIndirectCountAMD != NULL)
    glext_vkCmdDrawIndexedIndirectCountKHR
      = (PFN_vkCmdDrawIndexedIndirectCountKHR)
        glext_vkCmdDrawIndexedIndirectCountAMD;
  if (glext_vkCmdDrawIndirectCount == NULL
      && glext_vkCmdDrawIndirectCountAMD != NULL)
    glext_vkCmdDrawIndirectCount
      = (PFN_vkCmdDrawIndirectCount)glext_vkCmdDrawIndirectCountAMD;
  if (glext_vkCmdDrawIndirectCount == NULL
      && glext_vkCmdDrawIndirectCountKHR != NULL)
    glext_vkCmdDrawIndirectCount
      = (PFN_vkCmdDrawIndirectCount)glext_vkCmdDrawIndirectCountKHR;
  if (glext_vkCmdDrawIndirectCountAMD == NULL
      && glext_vkCmdDrawIndirectCount != NULL)
    glext_vkCmdDrawIndirectCountAMD
      = (PFN_vkCmdDrawIndirectCountAMD)glext_vkCmdDrawIndirectCount;
  if (glext_vkCmdDrawIndirectCountAMD == NULL
      && glext_vkCmdDrawIndirectCountKHR != NULL)
    glext_vkCmdDrawIndirectCountAMD
      = (PFN_vkCmdDrawIndirectCountAMD)glext_vkCmdDrawIndirectCountKHR;
  if (glext_vkCmdDrawIndirectCountKHR == NULL
      && glext_vkCmdDrawIndirectCount != NULL)
    glext_vkCmdDrawIndirectCountKHR
      = (PFN_vkCmdDrawIndirectCountKHR)glext_vkCmdDrawIndirectCount;
  if (glext_vkCmdDrawIndirectCountKHR == NULL
      && glext_vkCmdDrawIndirectCountAMD != NULL)
    glext_vkCmdDrawIndirectCountKHR
      = (PFN_vkCmdDrawIndirectCountKHR)glext_vkCmdDrawIndirectCountAMD;
  if (glext_vkCmdEndRendering == NULL && glext_vkCmdEndRenderingKHR != NULL)
    glext_vkCmdEndRendering
      = (PFN_vkCmdEndRendering)glext_vkCmdEndRenderingKHR;
  if (glext_vkCmdEndRenderingKHR == NULL && glext_vkCmdEndRendering != NULL)
    glext_vkCmdEndRenderingKHR
      = (PFN_vkCmdEndRenderingKHR)glext_vkCmdEndRendering;
  if (glext_vkCmdEndRenderPass2 == NULL
      && glext_vkCmdEndRenderPass2KHR != NULL)
    glext_vkCmdEndRenderPass2
      = (PFN_vkCmdEndRenderPass2)glext_vkCmdEndRenderPass2KHR;
  if (glext_vkCmdEndRenderPass2KHR == NULL
      && glext_vkCmdEndRenderPass2 != NULL)
    glext_vkCmdEndRenderPass2KHR
      = (PFN_vkCmdEndRenderPass2KHR)glext_vkCmdEndRenderPass2;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
  if (glext_vkCmdNextSubpass2 == NULL && glext_vkCmdNextSubpass2KHR != NULL)
    glext_vkCmdNextSubpass2
      = (PFN_vkCmdNextSubpass2)glext_vkCmdNextSubpass2KHR;
  if (glext_vkCmdNextSubpass2KHR == NULL && glext_vkCmdNextSubpass2 != NULL)
    glext_vkCmdNextSubpass2KHR
      = (PFN_vkCmdNextSubpass2KHR)glext_vkCmdNextSubpass2;
  if (glext_vkCmdPipelineBarrier2 == NULL
      && glext_vkCmdPipelineBarrier2KHR != NULL)
    glext_vkCmdPipelineBarrier2
      = (PFN_vkCmdPipelineBarrier2)glext_vkCmdPipelineBarrier2KHR;
  if (glext_vkCmdPipelineBarrier2KHR == NULL
      && glext_vkCmdPipelineBarrier2 != NULL)
    glext_vkCmdPipelineBarrier2KHR
      = (PFN_vkCmdPipelineBarrier2KHR)glext_vkCmdPipelineBarrier2;
  if (glext_vkCmdPushConstants2 == NULL
      && glext_vkCmdPushConstants2KHR != NULL)
    glext_vkCmdPushConstants2
      = (PFN_vkCmdPushConstants2)glext_vkCmdPushConstants2KHR;
  if (glext_vkCmdPushConstants2KHR == NULL
      && glext_vkCmdPushConstants2 != NULL)
    glext_vkCmdPushConstants2KHR
      = (PFN_vkCmdPushConstants2KHR)glext_vkCmdPushConstants2;
  if (glext_vkCmdPushDescriptorSet == NULL
      && glext_vkCmdPushDescriptorSetKHR != NULL)
    glext_vkCmdPushDescriptorSet
      = (PFN_vkCmdPushDescriptorSet)glext_vkCmdPushDescriptorSetKHR;
  if (glext_vkCmdPushDescriptorSet2 == NULL
      && glext_vkCmdPushDescriptorSet2KHR != NULL)
    glext_vkCmdPushDescriptorSet2
      = (PFN_vkCmdPushDescriptorSet2)glext_vkCmdPushDescriptorSet2KHR;
  if (glext_vkCmdPushDescriptorSet2KHR == NULL
      && glext_vkCmdPushDescriptorSet2 != NULL)
    glext_vkCmdPushDescriptorSet2KHR
      = (PFN_vkCmdPushDescriptorSet2KHR)glext_vkCmdPushDescriptorSet2;
  if (glext_vkCmdPushDescriptorSetKHR == NULL
      && glext_vkCmdPushDescriptorSet != NULL)
    glext_vkCmdPushDescriptorSetKHR
      = (PFN_vkCmdPushDescriptorSetKHR)glext_vkCmdPushDescriptorSet;
  if (glext_vkCmdPushDescriptorSetWithTemplate == NULL
      && glext_vkCmdPushDescriptorSetWithTemplateKHR != NULL)
    glext_vkCmdPushDescriptorSetWithTemplate
      = (PFN_vkCmdPushDescriptorSetWithTemplate)
        glext_vkCmdPushDescriptorSetWithTemplateKHR;
  if (glext_vkCmdPushDescriptorSetWithTemplate2 == NULL
      && glext_vkCmdPushDescriptorSetWithTemplate2KHR != NULL)
    glext_vkCmdPushDescriptorSetWithTemplate2
      = (PFN_vkCmdPushDescriptorSetWithTemplate2)
        glext_vkCmdPushDescriptorSetWithTemplate2KHR;
  if (glext_vkCmdPushDescriptorSetWithTemplate2KHR == NULL
      && glext_vkCmdPushDescriptorSetWithTemplate2 != NULL)
    glext_vkCmdPushDescriptorSetWithTemplate2KHR
      = (PFN_vkCmdPushDescriptorSetWithTemplate2KHR)
        glext_vkCmdPushDescriptorSetWithTemplate2;
  if (glext_vkCmdPushDescriptorSetWithTemplateKHR == NULL
      && glext_vkCmdPushDescriptorSetWithTemplate != NULL)
    glext_vkCmdPushDescriptorSetWithTemplateKHR
      = (PFN_vkCmdPushDescriptorSetWithTemplateKHR)
        glext_vkCmdPushDescriptorSetWithTemplate;
  if (glext_vkCmdResetEvent2 == NULL && glext_vkCmdResetEvent2KHR != NULL)
    glext_vkCmdResetEvent2 = (PFN_vkCmdResetEvent2)glext_vkCmdResetEvent2KHR;
  if (glext_vkCmdResetEvent2KHR == NULL && glext_vkCmdResetEvent2 != NULL)
    glext_vkCmdResetEvent2KHR
      = (PFN_vkCmdResetEvent2KHR)glext_vkCmdResetEvent2;
  if (glext_vkCmdResolveImage2 == NULL && glext_vkCmdResolveImage2KHR != NULL)
    glext_vkCmdResolveImage2
      = (PFN_vkCmdResolveImage2)glext_vkCmdResolveImage2KHR;
  if (glext_vkCmdResolveImage2KHR == NULL && glext_vkCmdResolveImage2 != NULL)
    glext_vkCmdResolveImage2KHR
      = (PFN_vkCmdResolveImage2KHR)glext_vkCmdResolveImage2;
  if (glext_vkCmdSetCullMode == NULL && glext_vkCmdSetCullModeEXT != NULL)
    glext_vkCmdSetCullMode = (PFN_vkCmdSetCullMode)glext_vkCmdSetCullModeEXT;
  if (glext_vkCmdSetCullModeEXT == NULL && glext_vkCmdSetCullMode != NULL)
    glext_vkCmdSetCullModeEXT
      = (PFN_vkCmdSetCullModeEXT)glext_vkCmdSetCullMode;
  if (glext_vkCmdSetDepthBiasEnable == NULL
      && glext_vkCmdSetDepthBiasEnableEXT != NULL)
    glext_vkCmdSetDepthBiasEnable
      = (PFN_vkCmdSetDepthBiasEnable)glext_vkCmdSetDepthBiasEnableEXT;
  if (glext_vkCmdSetDepthBiasEnableEXT == NULL
      && glext_vkCmdSetDepthBiasEnable != NULL)
    glext_vkCmdSetDepthBiasEnableEXT
      = (PFN_vkCmdSetDepthBiasEnableEXT)glext_vkCmdSetDepthBiasEnable;
  if (glext_vkCmdSetDepthBoundsTestEnable == NULL
      && glext_vkCmdSetDepthBoundsTestEnableEXT != NULL)
    glext_vkCmdSetDepthBoundsTestEnable = (PFN_vkCmdSetDepthBoundsTestEnable)
      glext_vkCmdSetDepthBoundsTestEnableEXT;
  if (glext_vkCmdSetDepthBoundsTestEnableEXT == NULL
      && glext_vkCmdSetDepthBoundsTestEnable != NULL)
    glext_vkCmdSetDepthBoundsTestEnableEXT
      = (PFN_vkCmdSetDepthBoundsTestEnableEXT)
        glext_vkCmdSetDepthBoundsTestEnable;
  if (glext_vkCmdSetDepthCompareOp == NULL
      && glext_vkCmdSetDepthCompareOpEXT != NULL)
    glext_vkCmdSetDepthCompareOp
      = (PFN_vkCmdSetDepthCompareOp)glext_vkCmdSetDepthCompareOpEXT;
  if (glext_vkCmdSetDepthCompareOpEXT == NULL
      && glext_vkCmdSetDepthCompareOp != NULL)
    glext_vkCmdSetDepthCompareOpEXT
      = (PFN_vkCmdSetDepthCompareOpEXT)glext_vkCmdSetDepthCompareOp;
  if (glext_vkCmdSetDepthTestEnable == NULL
      && glext_vkCmdSetDepthTestEnableEXT != NULL)
    glext_vkCmdSetDepthTestEnable
      = (PFN_vkCmdSetDepthTestEnable)glext_vkCmdSetDepthTestEnableEXT;
  if (glext_vkCmdSetDepthTestEnableEXT == NULL
      && glext_vkCmdSetDepthTestEnable != NULL)
    glext_vkCmdSetDepthTestEnableEXT
      = (PFN_vkCmdSetDepthTestEnableEXT)glext_vkCmdSetDepthTestEnable;
  if (glext_vkCmdSetDepthWriteEnable == NULL
      && glext_vkCmdSetDepthWriteEnableEXT != NULL)
    glext_vkCmdSetDepthWriteEnable
      = (PFN_vkCmdSetDepthWriteEnable)glext_vkCmdSetDepthWriteEnableEXT;
  if (glext_vkCmdSetDepthWriteEnableEXT == NULL
      && glext_vkCmdSetDepthWriteEnable != NULL)
    glext_vkCmdSetDepthWriteEnableEXT
      = (PFN_vkCmdSetDepthWriteEnableEXT)glext_vkCmdSetDepthWriteEnable;
  if (glext_vkCmdSetDeviceMask == NULL && glext_vkCmdSetDeviceMaskKHR != NULL)
    glext_vkCmdSetDeviceMask
      = (PFN_vkCmdSetDeviceMask)glext_vkCmdSetDeviceMaskKHR;
  if (glext_vkCmdSetDeviceMaskKHR == NULL && glext_vkCmdSetDeviceMask != NULL)
    glext_vkCmdSetDeviceMaskKHR
      = (PFN_vkCmdSetDeviceMaskKHR)glext_vkCmdSetDeviceMask;
  if (glext_vkCmdSetEvent2 == NULL && glext_vkCmdSetEvent2KHR != NULL)
    glext_vkCmdSetEvent2 = (PFN_vkCmdSetEvent2)glext_vkCmdSetEvent2KHR;
  if (glext_vkCmdSetEvent2KHR == NULL && glext_vkCmdSetEvent2 != NULL)
    glext_vkCmdSetEvent2KHR = (PFN_vkCmdSetEvent2KHR)glext_vkCmdSetEvent2;
  if (glext_vkCmdSetFrontFace == NULL && glext_vkCmdSetFrontFaceEXT != NULL)
    glext_vkCmdSetFrontFace
      = (PFN_vkCmdSetFrontFace)glext_vkCmdSetFrontFaceEXT;
  if (glext_vkCmdSetFrontFaceEXT == NULL && glext_vkCmdSetFrontFace != NULL)
    glext_vkCmdSetFrontFaceEXT
      = (PFN_vkCmdSetFrontFaceEXT)glext_vkCmdSetFrontFace;
  if (glext_vkCmdSetLineStipple == NULL
      && glext_vkCmdSetLineStippleEXT != NULL)
    glext_vkCmdSetLineStipple
      = (PFN_vkCmdSetLineStipple)glext_vkCmdSetLineStippleEXT;
  if (glext_vkCmdSetLineStipple == NULL
      && glext_vkCmdSetLineStippleKHR != NULL)
    glext_vkCmdSetLineStipple
      = (PFN_vkCmdSetLineStipple)glext_vkCmdSetLineStippleKHR;
  if (glext_vkCmdSetLineStippleEXT == NULL
      && glext_vkCmdSetLineStipple != NULL)
    glext_vkCmdSetLineStippleEXT
      = (PFN_vkCmdSetLineStippleEXT)glext_vkCmdSetLineStipple;
  if (glext_vkCmdSetLineStippleEXT == NULL
      && glext_vkCmdSetLineStippleKHR != NULL)
    glext_vkCmdSetLineStippleEXT
      = (PFN_vkCmdSetLineStippleEXT)glext_vkCmdSetLineStippleKHR;
  if (glext_vkCmdSetLineStippleKHR == NULL
      && glext_vkCmdSetLineStipple != NULL)
    glext_vkCmdSetLineStippleKHR
      = (PFN_vkCmdSetLineStippleKHR)glext_vkCmdSetLineStipple;
  if (glext_vkCmdSetLineStippleKHR == NULL
      && glext_vkCmdSetLineStippleEXT != NULL)
    glext_vkCmdSetLineStippleKHR
      = (PFN_vkCmdSetLineStippleKHR)glext_vkCmdSetLineStippleEXT;
  if (glext_vkCmdSetPrimitiveRestartEnable == NULL
      && glext_vkCmdSetPrimitiveRestartEnableEXT != NULL)
    glext_vkCmdSetPrimitiveRestartEnable = (PFN_vkCmdSetPrimitiveRestartEnable)
      glext_vkCmdSetPrimitiveRestartEnableEXT;
  if (glext_vkCmdSetPrimitiveRestartEnableEXT == NULL
      && glext_vkCmdSetPrimitiveRestartEnable != NULL)
    glext_vkCmdSetPrimitiveRestartEnableEXT
      = (PFN_vkCmdSetPrimitiveRestartEnableEXT)
        glext_vkCmdSetPrimitiveRestartEnable;
  if (glext_vkCmdSetPrimitiveTopology == NULL
      && glext_vkCmdSetPrimitiveTopologyEXT != NULL)
    glext_vkCmdSetPrimitiveTopology
      = (PFN_vkCmdSetPrimitiveTopology)glext_vkCmdSetPrimitiveTopologyEXT;
  if (glext_vkCmdSetPrimitiveTopologyEXT == NULL
      && glext_vkCmdSetPrimitiveTopology != NULL)
    glext_vkCmdSetPrimitiveTopologyEXT
      = (PFN_vkCmdSetPrimitiveTopologyEXT)glext_vkCmdSetPrimitiveTopology;
  if (glext_vkCmdSetRasterizerDiscardEnable == NULL
      && glext_vkCmdSetRasterizerDiscardEnableEXT != NULL)
    glext_vkCmdSetRasterizerDiscardEnable
      = (PFN_vkCmdSetRasterizerDiscardEnable)
        glext_vkCmdSetRasterizerDiscardEnableEXT;
  if (glext_vkCmdSetRasterizerDiscardEnableEXT == NULL
      && glext_vkCmdSetRasterizerDiscardEnable != NULL)
    glext_vkCmdSetRasterizerDiscardEnableEXT
      = (PFN_vkCmdSetRasterizerDiscardEnableEXT)
        glext_vkCmdSetRasterizerDiscardEnable;
  if (glext_vkCmdSetRenderingAttachmentLocations == NULL
      && glext_vkCmdSetRenderingAttachmentLocationsKHR != NULL)
    glext_vkCmdSetRenderingAttachmentLocations
      = (PFN_vkCmdSetRenderingAttachmentLocations)
        glext_vkCmdSetRenderingAttachmentLocationsKHR;
  if (glext_vkCmdSetRenderingAttachmentLocationsKHR == NULL
      && glext_vkCmdSetRenderingAttachmentLocations != NULL)
    glext_vkCmdSetRenderingAttachmentLocationsKHR
      = (PFN_vkCmdSetRenderingAttachmentLocationsKHR)
        glext_vkCmdSetRenderingAttachmentLocations;
  if (glext_vkCmdSetRenderingInputAttachmentIndices == NULL
      && glext_vkCmdSetRenderingInputAttachmentIndicesKHR != NULL)
    glext_vkCmdSetRenderingInputAttachmentIndices
      = (PFN_vkCmdSetRenderingInputAttachmentIndices)
        glext_vkCmdSetRenderingInputAttachmentIndicesKHR;
  if (glext_vkCmdSetRenderingInputAttachmentIndicesKHR == NULL
      && glext_vkCmdSetRenderingInputAttachmentIndices != NULL)
    glext_vkCmdSetRenderingInputAttachmentIndicesKHR
      = (PFN_vkCmdSetRenderingInputAttachmentIndicesKHR)
        glext_vkCmdSetRenderingInputAttachmentIndices;
  if (glext_vkCmdSetScissorWithCount == NULL
      && glext_vkCmdSetScissorWithCountEXT != NULL)
    glext_vkCmdSetScissorWithCount
      = (PFN_vkCmdSetScissorWithCount)glext_vkCmdSetScissorWithCountEXT;
  if (glext_vkCmdSetScissorWithCountEXT == NULL
      && glext_vkCmdSetScissorWithCount != NULL)
    glext_vkCmdSetScissorWithCountEXT
      = (PFN_vkCmdSetScissorWithCountEXT)glext_vkCmdSetScissorWithCount;
  if (glext_vkCmdSetStencilOp == NULL && glext_vkCmdSetStencilOpEXT != NULL)
    glext_vkCmdSetStencilOp
      = (PFN_vkCmdSetStencilOp)glext_vkCmdSetStencilOpEXT;
  if (glext_vkCmdSetStencilOpEXT == NULL && glext_vkCmdSetStencilOp != NULL)
    glext_vkCmdSetStencilOpEXT
      = (PFN_vkCmdSetStencilOpEXT)glext_vkCmdSetStencilOp;
  if (glext_vkCmdSetStencilTestEnable == NULL
      && glext_vkCmdSetStencilTestEnableEXT != NULL)
    glext_vkCmdSetStencilTestEnable
      = (PFN_vkCmdSetStencilTestEnable)glext_vkCmdSetStencilTestEnableEXT;
  if (glext_vkCmdSetStencilTestEnableEXT == NULL
      && glext_vkCmdSetStencilTestEnable != NULL)
    glext_vkCmdSetStencilTestEnableEXT
      = (PFN_vkCmdSetStencilTestEnableEXT)glext_vkCmdSetStencilTestEnable;
  if (glext_vkCmdSetViewportWithCount == NULL
      && glext_vkCmdSetViewportWithCountEXT != NULL)
    glext_vkCmdSetViewportWithCount
      = (PFN_vkCmdSetViewportWithCount)glext_vkCmdSetViewportWithCountEXT;
  if (glext_vkCmdSetViewportWithCountEXT == NULL
      && glext_vkCmdSetViewportWithCount != NULL)
    glext_vkCmdSetViewportWithCountEXT
      = (PFN_vkCmdSetViewportWithCountEXT)glext_vkCmdSetViewportWithCount;
  if (glext_vkCmdWaitEvents2 == NULL && glext_vkCmdWaitEvents2KHR != NULL)
    glext_vkCmdWaitEvents2 = (PFN_vkCmdWaitEvents2)glext_vkCmdWaitEvents2KHR;
  if (glext_vkCmdWaitEvents2KHR == NULL && glext_vkCmdWaitEvents2 != NULL)
    glext_vkCmdWaitEvents2KHR
      = (PFN_vkCmdWaitEvents2KHR)glext_vkCmdWaitEvents2;
  if (glext_vkCmdWriteTimestamp2 == NULL
      && glext_vkCmdWriteTimestamp2KHR != NULL)
    glext_vkCmdWriteTimestamp2
      = (PFN_vkCmdWriteTimestamp2)glext_vkCmdWriteTimestamp2KHR;
  if (glext_vkCmdWriteTimestamp2KHR == NULL
      && glext_vkCmdWriteTimestamp2 != NULL)
    glext_vkCmdWriteTimestamp2KHR
      = (PFN_vkCmdWriteTimestamp2KHR)glext_vkCmdWriteTimestamp2;
  if (glext_vkCopyImageToImage == NULL && glext_vkCopyImageToImageEXT != NULL)
    glext_vkCopyImageToImage
      = (PFN_vkCopyImageToImage)glext_vkCopyImageToImageEXT;
  if (glext_vkCopyImageToImageEXT == NULL && glext_vkCopyImageToImage != NULL)
    glext_vkCopyImageToImageEXT
      = (PFN_vkCopyImageToImageEXT)glext_vkCopyImageToImage;
  if (glext_vkCopyImageToMemory == NULL
      && glext_vkCopyImageToMemoryEXT != NULL)
    glext_vkCopyImageToMemory
      = (PFN_vkCopyImageToMemory)glext_vkCopyImageToMemoryEXT;
  if (glext_vkCopyImageToMemoryEXT == NULL
      && glext_vkCopyImageToMemory != NULL)
    glext_vkCopyImageToMemoryEXT
      = (PFN_vkCopyImageToMemoryEXT)glext_vkCopyImageToMemory;
  if (glext_vkCopyMemoryToImage == NULL
      && glext_vkCopyMemoryToImageEXT != NULL)
    glext_vkCopyMemoryToImage
      = (PFN_vkCopyMemoryToImage)glext_vkCopyMemoryToImageEXT;
  if (glext_vkCopyMemoryToImageEXT == NULL
      && glext_vkCopyMemoryToImage != NULL)
    glext_vkCopyMemoryToImageEXT
      = (PFN_vkCopyMemoryToImageEXT)glext_vkCopyMemoryToImage;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
  if (glext_vkCreateDescriptorUpdateTemplate == NULL
      && glext_vkCreateDescriptorUpdateTemplateKHR != NULL)
    glext_vkCreateDescriptorUpdateTemplate
      = (PFN_vkCreateDescriptorUpdateTemplate)
        glext_vkCreateDescriptorUpdateTemplateKHR;
  if (glext_vkCreateDescriptorUpdateTemplateKHR == NULL
      && glext_vkCreateDescriptorUpdateTemplate != NULL)
    glext_vkCreateDescriptorUpdateTemplateKHR
      = (PFN_vkCreateDescriptorUpdateTemplateKHR)
        glext_vkCreateDescriptorUpdateTemplate;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
  if (glext_vkCreatePrivateDataSlot == NULL
      && glext_vkCreatePrivateDataSlotEXT != NULL)
    glext_vkCreatePrivateDataSlot
      = (PFN_vkCreatePrivateDataSlot)glext_vkCreatePrivateDataSlotEXT;
  if (glext_vkCreatePrivateDataSlotEXT == NULL
      && glext_vkCreatePrivateDataSlot != NULL)
    glext_vkCreatePrivateDataSlotEXT
      = (PFN_vkCreatePrivateDataSlotEXT)glext_vkCreatePrivateDataSlot;
  if (glext_vkCreateRenderPass2 == NULL
      && glext_vkCreateRenderPass2KHR != NULL)
    glext_vkCreateRenderPass2
      = (PFN_vkCreateRenderPass2)glext_vkCreateRenderPass2KHR;
  if (glext_vkCreateRenderPass2KHR == NULL
      && glext_vkCreateRenderPass2 != NULL)
    glext_vkCreateRenderPass2KHR
      = (PFN_vkCreateRenderPass2KHR)glext_vkCreateRenderPass2;
  if (glext_vkCreateSamplerYcbcrConversion == NULL
      && glext_vkCreateSamplerYcbcrConversionKHR != NULL)
    glext_vkCreateSamplerYcbcrConversion = (PFN_vkCreateSamplerYcbcrConversion)
      glext_vkCreateSamplerYcbcrConversionKHR;
  if (glext_vkCreateSamplerYcbcrConversionKHR == NULL
      && glext_vkCreateSamplerYcbcrConversion != NULL)
    glext_vkCreateSamplerYcbcrConversionKHR
      = (PFN_vkCreateSamplerYcbcrConversionKHR)
        glext_vkCreateSamplerYcbcrConversion;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
#if defined(VK_USE_PLATFORM_GGP)

#endif
#if defined(VK_USE_PLATFORM_OHOS)

#endif
#if defined(VK_USE_PLATFORM_VI_NN)

#endif
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
  if (glext_vkDestroyDescriptorUpdateTemplate == NULL
      && glext_vkDestroyDescriptorUpdateTemplateKHR != NULL)
    glext_vkDestroyDescriptorUpdateTemplate
      = (PFN_vkDestroyDescriptorUpdateTemplate)
        glext_vkDestroyDescriptorUpdateTemplateKHR;
  if (glext_vkDestroyDescriptorUpdateTemplateKHR == NULL
      && glext_vkDestroyDescriptorUpdateTemplate != NULL)
    glext_vkDestroyDescriptorUpdateTemplateKHR
      = (PFN_vkDestroyDescriptorUpdateTemplateKHR)
        glext_vkDestroyDescriptorUpdateTemplate;
  if (glext_vkDestroyPrivateDataSlot == NULL
      && glext_vkDestroyPrivateDataSlotEXT != NULL)
    glext_vkDestroyPrivateDataSlot
      = (PFN_vkDestroyPrivateDataSlot)glext_vkDestroyPrivateDataSlotEXT;
  if (glext_vkDestroyPrivateDataSlotEXT == NULL
      && glext_vkDestroyPrivateDataSlot != NULL)
    glext_vkDestroyPrivateDataSlotEXT
      = (PFN_vkDestroyPrivateDataSlotEXT)glext_vkDestroyPrivateDataSlot;
  if (glext_vkDestroySamplerYcbcrConversion == NULL
      && glext_vkDestroySamplerYcbcrConversionKHR != NULL)
    glext_vkDestroySamplerYcbcrConversion
      = (PFN_vkDestroySamplerYcbcrConversion)
        glext_vkDestroySamplerYcbcrConversionKHR;
  if (glext_vkDestroySamplerYcbcrConversionKHR == NULL
      && glext_vkDestroySamplerYcbcrConversion != NULL)
    glext_vkDestroySamplerYcbcrConversionKHR
      = (PFN_vkDestroySamplerYcbcrConversionKHR)
        glext_vkDestroySamplerYcbcrConversion;
  if (glext_vkEnumeratePhysicalDeviceGroups == NULL
      && glext_vkEnumeratePhysicalDeviceGroupsKHR != NULL)
    glext_vkEnumeratePhysicalDeviceGroups
      = (PFN_vkEnumeratePhysicalDeviceGroups)
        glext_vkEnumeratePhysicalDeviceGroupsKHR;
  if (glext_vkEnumeratePhysicalDeviceGroupsKHR == NULL
      && glext_vkEnumeratePhysicalDeviceGroups != NULL)
    glext_vkEnumeratePhysicalDeviceGroupsKHR
      = (PFN_vkEnumeratePhysicalDeviceGroupsKHR)
        glext_vkEnumeratePhysicalDeviceGroups;
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
  if (glext_vkGetBufferDeviceAddress == NULL
      && glext_vkGetBufferDeviceAddressEXT != NULL)
    glext_vkGetBufferDeviceAddress
      = (PFN_vkGetBufferDeviceAddress)glext_vkGetBufferDeviceAddressEXT;
  if (glext_vkGetBufferDeviceAddress == NULL
      && glext_vkGetBufferDeviceAddressKHR != NULL)
    glext_vkGetBufferDeviceAddress
      = (PFN_vkGetBufferDeviceAddress)glext_vkGetBufferDeviceAddressKHR;
  if (glext_vkGetBufferDeviceAddressEXT == NULL
      && glext_vkGetBufferDeviceAddress != NULL)
    glext_vkGetBufferDeviceAddressEXT
      = (PFN_vkGetBufferDeviceAddressEXT)glext_vkGetBufferDeviceAddress;
  if (glext_vkGetBufferDeviceAddressEXT == NULL
      && glext_vkGetBufferDeviceAddressKHR != NULL)
    glext_vkGetBufferDeviceAddressEXT
      = (PFN_vkGetBufferDeviceAddressEXT)glext_vkGetBufferDeviceAddressKHR;
  if (glext_vkGetBufferDeviceAddressKHR == NULL
      && glext_vkGetBufferDeviceAddress != NULL)
    glext_vkGetBufferDeviceAddressKHR
      = (PFN_vkGetBufferDeviceAddressKHR)glext_vkGetBufferDeviceAddress;
  if (glext_vkGetBufferDeviceAddressKHR == NULL
      && glext_vkGetBufferDeviceAddressEXT != NULL)
    glext_vkGetBufferDeviceAddressKHR
      = (PFN_vkGetBufferDeviceAddressKHR)glext_vkGetBufferDeviceAddressEXT;
  if (glext_vkGetBufferMemoryRequirements2 == NULL
      && glext_vkGetBufferMemoryRequirements2KHR != NULL)
    glext_vkGetBufferMemoryRequirements2 = (PFN_vkGetBufferMemoryRequirements2)
      glext_vkGetBufferMemoryRequirements2KHR;
  if (glext_vkGetBufferMemoryRequirements2KHR == NULL
      && glext_vkGetBufferMemoryRequirements2 != NULL)
    glext_vkGetBufferMemoryRequirements2KHR
      = (PFN_vkGetBufferMemoryRequirements2KHR)
        glext_vkGetBufferMemoryRequirements2;
  if (glext_vkGetBufferOpaqueCaptureAddress == NULL
      && glext_vkGetBufferOpaqueCaptureAddressKHR != NULL)
    glext_vkGetBufferOpaqueCaptureAddress
      = (PFN_vkGetBufferOpaqueCaptureAddress)
        glext_vkGetBufferOpaqueCaptureAddressKHR;
  if (glext_vkGetBufferOpaqueCaptureAddressKHR == NULL
      && glext_vkGetBufferOpaqueCaptureAddress != NULL)
    glext_vkGetBufferOpaqueCaptureAddressKHR
      = (PFN_vkGetBufferOpaqueCaptureAddressKHR)
        glext_vkGetBufferOpaqueCaptureAddress;
  if (glext_vkGetCalibratedTimestampsEXT == NULL
      && glext_vkGetCalibratedTimestampsKHR != NULL)
    glext_vkGetCalibratedTimestampsEXT
      = (PFN_vkGetCalibratedTimestampsEXT)glext_vkGetCalibratedTimestampsKHR;
  if (glext_vkGetCalibratedTimestampsKHR == NULL
      && glext_vkGetCalibratedTimestampsEXT != NULL)
    glext_vkGetCalibratedTimestampsKHR
      = (PFN_vkGetCalibratedTimestampsKHR)glext_vkGetCalibratedTimestampsEXT;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
  if (glext_vkGetDescriptorSetLayoutSupport == NULL
      && glext_vkGetDescriptorSetLayoutSupportKHR != NULL)
    glext_vkGetDescriptorSetLayoutSupport
      = (PFN_vkGetDescriptorSetLayoutSupport)
        glext_vkGetDescriptorSetLayoutSupportKHR;
  if (glext_vkGetDescriptorSetLayoutSupportKHR == NULL
      && glext_vkGetDescriptorSetLayoutSupport != NULL)
    glext_vkGetDescriptorSetLayoutSupportKHR
      = (PFN_vkGetDescriptorSetLayoutSupportKHR)
        glext_vkGetDescriptorSetLayoutSupport;
  if (glext_vkGetDeviceBufferMemoryRequirements == NULL
      && glext_vkGetDeviceBufferMemoryRequirementsKHR != NULL)
    glext_vkGetDeviceBufferMemoryRequirements
      = (PFN_vkGetDeviceBufferMemoryRequirements)
        glext_vkGetDeviceBufferMemoryRequirementsKHR;
  if (glext_vkGetDeviceBufferMemoryRequirementsKHR == NULL
      && glext_vkGetDeviceBufferMemoryRequirements != NULL)
    glext_vkGetDeviceBufferMemoryRequirementsKHR
      = (PFN_vkGetDeviceBufferMemoryRequirementsKHR)
        glext_vkGetDeviceBufferMemoryRequirements;
  if (glext_vkGetDeviceGroupPeerMemoryFeatures == NULL
      && glext_vkGetDeviceGroupPeerMemoryFeaturesKHR != NULL)
    glext_vkGetDeviceGroupPeerMemoryFeatures
      = (PFN_vkGetDeviceGroupPeerMemoryFeatures)
        glext_vkGetDeviceGroupPeerMemoryFeaturesKHR;
  if (glext_vkGetDeviceGroupPeerMemoryFeaturesKHR == NULL
      && glext_vkGetDeviceGroupPeerMemoryFeatures != NULL)
    glext_vkGetDeviceGroupPeerMemoryFeaturesKHR
      = (PFN_vkGetDeviceGroupPeerMemoryFeaturesKHR)
        glext_vkGetDeviceGroupPeerMemoryFeatures;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
  if (glext_vkGetDeviceImageMemoryRequirements == NULL
      && glext_vkGetDeviceImageMemoryRequirementsKHR != NULL)
    glext_vkGetDeviceImageMemoryRequirements
      = (PFN_vkGetDeviceImageMemoryRequirements)
        glext_vkGetDeviceImageMemoryRequirementsKHR;
  if (glext_vkGetDeviceImageMemoryRequirementsKHR == NULL
      && glext_vkGetDeviceImageMemoryRequirements != NULL)
    glext_vkGetDeviceImageMemoryRequirementsKHR
      = (PFN_vkGetDeviceImageMemoryRequirementsKHR)
        glext_vkGetDeviceImageMemoryRequirements;
  if (glext_vkGetDeviceImageSparseMemoryRequirements == NULL
      && glext_vkGetDeviceImageSparseMemoryRequirementsKHR != NULL)
    glext_vkGetDeviceImageSparseMemoryRequirements
      = (PFN_vkGetDeviceImageSparseMemoryRequirements)
        glext_vkGetDeviceImageSparseMemoryRequirementsKHR;
  if (glext_vkGetDeviceImageSparseMemoryRequirementsKHR == NULL
      && glext_vkGetDeviceImageSparseMemoryRequirements != NULL)
    glext_vkGetDeviceImageSparseMemoryRequirementsKHR
      = (PFN_vkGetDeviceImageSparseMemoryRequirementsKHR)
        glext_vkGetDeviceImageSparseMemoryRequirements;
  if (glext_vkGetDeviceImageSubresourceLayout == NULL
      && glext_vkGetDeviceImageSubresourceLayoutKHR != NULL)
    glext_vkGetDeviceImageSubresourceLayout
      = (PFN_vkGetDeviceImageSubresourceLayout)
        glext_vkGetDeviceImageSubresourceLayoutKHR;
  if (glext_vkGetDeviceImageSubresourceLayoutKHR == NULL
      && glext_vkGetDeviceImageSubresourceLayout != NULL)
    glext_vkGetDeviceImageSubresourceLayoutKHR
      = (PFN_vkGetDeviceImageSubresourceLayoutKHR)
        glext_vkGetDeviceImageSubresourceLayout;
  if (glext_vkGetDeviceMemoryOpaqueCaptureAddress == NULL
      && glext_vkGetDeviceMemoryOpaqueCaptureAddressKHR != NULL)
    glext_vkGetDeviceMemoryOpaqueCaptureAddress
      = (PFN_vkGetDeviceMemoryOpaqueCaptureAddress)
        glext_vkGetDeviceMemoryOpaqueCaptureAddressKHR;
  if (glext_vkGetDeviceMemoryOpaqueCaptureAddressKHR == NULL
      && glext_vkGetDeviceMemoryOpaqueCaptureAddress != NULL)
    glext_vkGetDeviceMemoryOpaqueCaptureAddressKHR
      = (PFN_vkGetDeviceMemoryOpaqueCaptureAddressKHR)
        glext_vkGetDeviceMemoryOpaqueCaptureAddress;
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
  if (glext_vkGetImageMemoryRequirements2 == NULL
      && glext_vkGetImageMemoryRequirements2KHR != NULL)
    glext_vkGetImageMemoryRequirements2 = (PFN_vkGetImageMemoryRequirements2)
      glext_vkGetImageMemoryRequirements2KHR;
  if (glext_vkGetImageMemoryRequirements2KHR == NULL
      && glext_vkGetImageMemoryRequirements2 != NULL)
    glext_vkGetImageMemoryRequirements2KHR
      = (PFN_vkGetImageMemoryRequirements2KHR)
        glext_vkGetImageMemoryRequirements2;
  if (glext_vkGetImageSparseMemoryRequirements2 == NULL
      && glext_vkGetImageSparseMemoryRequirements2KHR != NULL)
    glext_vkGetImageSparseMemoryRequirements2
      = (PFN_vkGetImageSparseMemoryRequirements2)
        glext_vkGetImageSparseMemoryRequirements2KHR;
  if (glext_vkGetImageSparseMemoryRequirements2KHR == NULL
      && glext_vkGetImageSparseMemoryRequirements2 != NULL)
    glext_vkGetImageSparseMemoryRequirements2KHR
      = (PFN_vkGetImageSparseMemoryRequirements2KHR)
        glext_vkGetImageSparseMemoryRequirements2;
  if (glext_vkGetImageSubresourceLayout2 == NULL
      && glext_vkGetImageSubresourceLayout2EXT != NULL)
    glext_vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)
      glext_vkGetImageSubresourceLayout2EXT;
  if (glext_vkGetImageSubresourceLayout2 == NULL
      && glext_vkGetImageSubresourceLayout2KHR != NULL)
    glext_vkGetImageSubresourceLayout2 = (PFN_vkGetImageSubresourceLayout2)
      glext_vkGetImageSubresourceLayout2KHR;
  if (glext_vkGetImageSubresourceLayout2EXT == NULL
      && glext_vkGetImageSubresourceLayout2 != NULL)
    glext_vkGetImageSubresourceLayout2EXT
      = (PFN_vkGetImageSubresourceLayout2EXT)
        glext_vkGetImageSubresourceLayout2;
  if (glext_vkGetImageSubresourceLayout2EXT == NULL
      && glext_vkGetImageSubresourceLayout2KHR != NULL)
    glext_vkGetImageSubresourceLayout2EXT
      = (PFN_vkGetImageSubresourceLayout2EXT)
        glext_vkGetImageSubresourceLayout2KHR;
  if (glext_vkGetImageSubresourceLayout2KHR == NULL
      && glext_vkGetImageSubresourceLayout2 != NULL)
    glext_vkGetImageSubresourceLayout2KHR
      = (PFN_vkGetImageSubresourceLayout2KHR)
        glext_vkGetImageSubresourceLayout2;
  if (glext_vkGetImageSubresourceLayout2KHR == NULL
      && glext_vkGetImageSubresourceLayout2EXT != NULL)
    glext_vkGetImageSubresourceLayout2KHR
      = (PFN_vkGetImageSubresourceLayout2KHR)
        glext_vkGetImageSubresourceLayout2EXT;
#if defined(VK_USE_PLATFORM_ANDROID_KHR)

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
  if (glext_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT == NULL
      && glext_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR != NULL)
    glext_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT
      = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT)
        glext_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR;
  if (glext_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR == NULL
      && glext_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT != NULL)
    glext_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR
      = (PFN_vkGetPhysicalDeviceCalibrateableTimeDomainsKHR)
        glext_vkGetPhysicalDeviceCalibrateableTimeDomainsEXT;
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)

#endif
  if (glext_vkGetPhysicalDeviceExternalBufferProperties == NULL
      && glext_vkGetPhysicalDeviceExternalBufferPropertiesKHR != NULL)
    glext_vkGetPhysicalDeviceExternalBufferProperties
      = (PFN_vkGetPhysicalDeviceExternalBufferProperties)
        glext_vkGetPhysicalDeviceExternalBufferPropertiesKHR;
  if (glext_vkGetPhysicalDeviceExternalBufferPropertiesKHR == NULL
      && glext_vkGetPhysicalDeviceExternalBufferProperties != NULL)
    glext_vkGetPhysicalDeviceExternalBufferPropertiesKHR
      = (PFN_vkGetPhysicalDeviceExternalBufferPropertiesKHR)
        glext_vkGetPhysicalDeviceExternalBufferProperties;
  if (glext_vkGetPhysicalDeviceExternalFenceProperties == NULL
      && glext_vkGetPhysicalDeviceExternalFencePropertiesKHR != NULL)
    glext_vkGetPhysicalDeviceExternalFenceProperties
      = (PFN_vkGetPhysicalDeviceExternalFenceProperties)
        glext_vkGetPhysicalDeviceExternalFencePropertiesKHR;
  if (glext_vkGetPhysicalDeviceExternalFencePropertiesKHR == NULL
      && glext_vkGetPhysicalDeviceExternalFenceProperties != NULL)
    glext_vkGetPhysicalDeviceExternalFencePropertiesKHR
      = (PFN_vkGetPhysicalDeviceExternalFencePropertiesKHR)
        glext_vkGetPhysicalDeviceExternalFenceProperties;
  if (glext_vkGetPhysicalDeviceExternalSemaphoreProperties == NULL
      && glext_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR != NULL)
    glext_vkGetPhysicalDeviceExternalSemaphoreProperties
      = (PFN_vkGetPhysicalDeviceExternalSemaphoreProperties)
        glext_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR;
  if (glext_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR == NULL
      && glext_vkGetPhysicalDeviceExternalSemaphoreProperties != NULL)
    glext_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR
      = (PFN_vkGetPhysicalDeviceExternalSemaphorePropertiesKHR)
        glext_vkGetPhysicalDeviceExternalSemaphoreProperties;
  if (glext_vkGetPhysicalDeviceFeatures2 == NULL
      && glext_vkGetPhysicalDeviceFeatures2KHR != NULL)
    glext_vkGetPhysicalDeviceFeatures2 = (PFN_vkGetPhysicalDeviceFeatures2)
      glext_vkGetPhysicalDeviceFeatures2KHR;
  if (glext_vkGetPhysicalDeviceFeatures2KHR == NULL
      && glext_vkGetPhysicalDeviceFeatures2 != NULL)
    glext_vkGetPhysicalDeviceFeatures2KHR
      = (PFN_vkGetPhysicalDeviceFeatures2KHR)
        glext_vkGetPhysicalDeviceFeatures2;
  if (glext_vkGetPhysicalDeviceFormatProperties2 == NULL
      && glext_vkGetPhysicalDeviceFormatProperties2KHR != NULL)
    glext_vkGetPhysicalDeviceFormatProperties2
      = (PFN_vkGetPhysicalDeviceFormatProperties2)
        glext_vkGetPhysicalDeviceFormatProperties2KHR;
  if (glext_vkGetPhysicalDeviceFormatProperties2KHR == NULL
      && glext_vkGetPhysicalDeviceFormatProperties2 != NULL)
    glext_vkGetPhysicalDeviceFormatProperties2KHR
      = (PFN_vkGetPhysicalDeviceFormatProperties2KHR)
        glext_vkGetPhysicalDeviceFormatProperties2;
  if (glext_vkGetPhysicalDeviceImageFormatProperties2 == NULL
      && glext_vkGetPhysicalDeviceImageFormatProperties2KHR != NULL)
    glext_vkGetPhysicalDeviceImageFormatProperties2
      = (PFN_vkGetPhysicalDeviceImageFormatProperties2)
        glext_vkGetPhysicalDeviceImageFormatProperties2KHR;
  if (glext_vkGetPhysicalDeviceImageFormatProperties2KHR == NULL
      && glext_vkGetPhysicalDeviceImageFormatProperties2 != NULL)
    glext_vkGetPhysicalDeviceImageFormatProperties2KHR
      = (PFN_vkGetPhysicalDeviceImageFormatProperties2KHR)
        glext_vkGetPhysicalDeviceImageFormatProperties2;
  if (glext_vkGetPhysicalDeviceMemoryProperties2 == NULL
      && glext_vkGetPhysicalDeviceMemoryProperties2KHR != NULL)
    glext_vkGetPhysicalDeviceMemoryProperties2
      = (PFN_vkGetPhysicalDeviceMemoryProperties2)
        glext_vkGetPhysicalDeviceMemoryProperties2KHR;
  if (glext_vkGetPhysicalDeviceMemoryProperties2KHR == NULL
      && glext_vkGetPhysicalDeviceMemoryProperties2 != NULL)
    glext_vkGetPhysicalDeviceMemoryProperties2KHR
      = (PFN_vkGetPhysicalDeviceMemoryProperties2KHR)
        glext_vkGetPhysicalDeviceMemoryProperties2;
  if (glext_vkGetPhysicalDeviceProperties2 == NULL
      && glext_vkGetPhysicalDeviceProperties2KHR != NULL)
    glext_vkGetPhysicalDeviceProperties2 = (PFN_vkGetPhysicalDeviceProperties2)
      glext_vkGetPhysicalDeviceProperties2KHR;
  if (glext_vkGetPhysicalDeviceProperties2KHR == NULL
      && glext_vkGetPhysicalDeviceProperties2 != NULL)
    glext_vkGetPhysicalDeviceProperties2KHR
      = (PFN_vkGetPhysicalDeviceProperties2KHR)
        glext_vkGetPhysicalDeviceProperties2;
  if (glext_vkGetPhysicalDeviceQueueFamilyProperties2 == NULL
      && glext_vkGetPhysicalDeviceQueueFamilyProperties2KHR != NULL)
    glext_vkGetPhysicalDeviceQueueFamilyProperties2
      = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2)
        glext_vkGetPhysicalDeviceQueueFamilyProperties2KHR;
  if (glext_vkGetPhysicalDeviceQueueFamilyProperties2KHR == NULL
      && glext_vkGetPhysicalDeviceQueueFamilyProperties2 != NULL)
    glext_vkGetPhysicalDeviceQueueFamilyProperties2KHR
      = (PFN_vkGetPhysicalDeviceQueueFamilyProperties2KHR)
        glext_vkGetPhysicalDeviceQueueFamilyProperties2;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
  if (glext_vkGetPhysicalDeviceSparseImageFormatProperties2 == NULL
      && glext_vkGetPhysicalDeviceSparseImageFormatProperties2KHR != NULL)
    glext_vkGetPhysicalDeviceSparseImageFormatProperties2
      = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2)
        glext_vkGetPhysicalDeviceSparseImageFormatProperties2KHR;
  if (glext_vkGetPhysicalDeviceSparseImageFormatProperties2KHR == NULL
      && glext_vkGetPhysicalDeviceSparseImageFormatProperties2 != NULL)
    glext_vkGetPhysicalDeviceSparseImageFormatProperties2KHR
      = (PFN_vkGetPhysicalDeviceSparseImageFormatProperties2KHR)
        glext_vkGetPhysicalDeviceSparseImageFormatProperties2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
  if (glext_vkGetPhysicalDeviceToolProperties == NULL
      && glext_vkGetPhysicalDeviceToolPropertiesEXT != NULL)
    glext_vkGetPhysicalDeviceToolProperties
      = (PFN_vkGetPhysicalDeviceToolProperties)
        glext_vkGetPhysicalDeviceToolPropertiesEXT;
  if (glext_vkGetPhysicalDeviceToolPropertiesEXT == NULL
      && glext_vkGetPhysicalDeviceToolProperties != NULL)
    glext_vkGetPhysicalDeviceToolPropertiesEXT
      = (PFN_vkGetPhysicalDeviceToolPropertiesEXT)
        glext_vkGetPhysicalDeviceToolProperties;
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)

#endif
  if (glext_vkGetPrivateData == NULL && glext_vkGetPrivateDataEXT != NULL)
    glext_vkGetPrivateData = (PFN_vkGetPrivateData)glext_vkGetPrivateDataEXT;
  if (glext_vkGetPrivateDataEXT == NULL && glext_vkGetPrivateData != NULL)
    glext_vkGetPrivateDataEXT
      = (PFN_vkGetPrivateDataEXT)glext_vkGetPrivateData;
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)

#endif
  if (glext_vkGetRayTracingShaderGroupHandlesKHR == NULL
      && glext_vkGetRayTracingShaderGroupHandlesNV != NULL)
    glext_vkGetRayTracingShaderGroupHandlesKHR
      = (PFN_vkGetRayTracingShaderGroupHandlesKHR)
        glext_vkGetRayTracingShaderGroupHandlesNV;
  if (glext_vkGetRayTracingShaderGroupHandlesNV == NULL
      && glext_vkGetRayTracingShaderGroupHandlesKHR != NULL)
    glext_vkGetRayTracingShaderGroupHandlesNV
      = (PFN_vkGetRayTracingShaderGroupHandlesNV)
        glext_vkGetRayTracingShaderGroupHandlesKHR;
  if (glext_vkGetRenderingAreaGranularity == NULL
      && glext_vkGetRenderingAreaGranularityKHR != NULL)
    glext_vkGetRenderingAreaGranularity = (PFN_vkGetRenderingAreaGranularity)
      glext_vkGetRenderingAreaGranularityKHR;
  if (glext_vkGetRenderingAreaGranularityKHR == NULL
      && glext_vkGetRenderingAreaGranularity != NULL)
    glext_vkGetRenderingAreaGranularityKHR
      = (PFN_vkGetRenderingAreaGranularityKHR)
        glext_vkGetRenderingAreaGranularity;
#if defined(VK_USE_PLATFORM_SCREEN_QNX)

#endif
  if (glext_vkGetSemaphoreCounterValue == NULL
      && glext_vkGetSemaphoreCounterValueKHR != NULL)
    glext_vkGetSemaphoreCounterValue
      = (PFN_vkGetSemaphoreCounterValue)glext_vkGetSemaphoreCounterValueKHR;
  if (glext_vkGetSemaphoreCounterValueKHR == NULL
      && glext_vkGetSemaphoreCounterValue != NULL)
    glext_vkGetSemaphoreCounterValueKHR
      = (PFN_vkGetSemaphoreCounterValueKHR)glext_vkGetSemaphoreCounterValue;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
  if (glext_vkMapMemory2 == NULL && glext_vkMapMemory2KHR != NULL)
    glext_vkMapMemory2 = (PFN_vkMapMemory2)glext_vkMapMemory2KHR;
  if (glext_vkMapMemory2KHR == NULL && glext_vkMapMemory2 != NULL)
    glext_vkMapMemory2KHR = (PFN_vkMapMemory2KHR)glext_vkMapMemory2;
  if (glext_vkQueueSubmit2 == NULL && glext_vkQueueSubmit2KHR != NULL)
    glext_vkQueueSubmit2 = (PFN_vkQueueSubmit2)glext_vkQueueSubmit2KHR;
  if (glext_vkQueueSubmit2KHR == NULL && glext_vkQueueSubmit2 != NULL)
    glext_vkQueueSubmit2KHR = (PFN_vkQueueSubmit2KHR)glext_vkQueueSubmit2;
#if defined(VK_USE_PLATFORM_WIN32_KHR)

#endif
  if (glext_vkReleaseSwapchainImagesEXT == NULL
      && glext_vkReleaseSwapchainImagesKHR != NULL)
    glext_vkReleaseSwapchainImagesEXT
      = (PFN_vkReleaseSwapchainImagesEXT)glext_vkReleaseSwapchainImagesKHR;
  if (glext_vkReleaseSwapchainImagesKHR == NULL
      && glext_vkReleaseSwapchainImagesEXT != NULL)
    glext_vkReleaseSwapchainImagesKHR
      = (PFN_vkReleaseSwapchainImagesKHR)glext_vkReleaseSwapchainImagesEXT;
  if (glext_vkResetQueryPool == NULL && glext_vkResetQueryPoolEXT != NULL)
    glext_vkResetQueryPool = (PFN_vkResetQueryPool)glext_vkResetQueryPoolEXT;
  if (glext_vkResetQueryPoolEXT == NULL && glext_vkResetQueryPool != NULL)
    glext_vkResetQueryPoolEXT
      = (PFN_vkResetQueryPoolEXT)glext_vkResetQueryPool;
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)

#endif
  if (glext_vkSetPrivateData == NULL && glext_vkSetPrivateDataEXT != NULL)
    glext_vkSetPrivateData = (PFN_vkSetPrivateData)glext_vkSetPrivateDataEXT;
  if (glext_vkSetPrivateDataEXT == NULL && glext_vkSetPrivateData != NULL)
    glext_vkSetPrivateDataEXT
      = (PFN_vkSetPrivateDataEXT)glext_vkSetPrivateData;
  if (glext_vkSignalSemaphore == NULL && glext_vkSignalSemaphoreKHR != NULL)
    glext_vkSignalSemaphore
      = (PFN_vkSignalSemaphore)glext_vkSignalSemaphoreKHR;
  if (glext_vkSignalSemaphoreKHR == NULL && glext_vkSignalSemaphore != NULL)
    glext_vkSignalSemaphoreKHR
      = (PFN_vkSignalSemaphoreKHR)glext_vkSignalSemaphore;
  if (glext_vkTransitionImageLayout == NULL
      && glext_vkTransitionImageLayoutEXT != NULL)
    glext_vkTransitionImageLayout
      = (PFN_vkTransitionImageLayout)glext_vkTransitionImageLayoutEXT;
  if (glext_vkTransitionImageLayoutEXT == NULL
      && glext_vkTransitionImageLayout != NULL)
    glext_vkTransitionImageLayoutEXT
      = (PFN_vkTransitionImageLayoutEXT)glext_vkTransitionImageLayout;
  if (glext_vkTrimCommandPool == NULL && glext_vkTrimCommandPoolKHR != NULL)
    glext_vkTrimCommandPool
      = (PFN_vkTrimCommandPool)glext_vkTrimCommandPoolKHR;
  if (glext_vkTrimCommandPoolKHR == NULL && glext_vkTrimCommandPool != NULL)
    glext_vkTrimCommandPoolKHR
      = (PFN_vkTrimCommandPoolKHR)glext_vkTrimCommandPool;
  if (glext_vkUnmapMemory2 == NULL && glext_vkUnmapMemory2KHR != NULL)
    glext_vkUnmapMemory2 = (PFN_vkUnmapMemory2)glext_vkUnmapMemory2KHR;
  if (glext_vkUnmapMemory2KHR == NULL && glext_vkUnmapMemory2 != NULL)
    glext_vkUnmapMemory2KHR = (PFN_vkUnmapMemory2KHR)glext_vkUnmapMemory2;
  if (glext_vkUpdateDescriptorSetWithTemplate == NULL
      && glext_vkUpdateDescriptorSetWithTemplateKHR != NULL)
    glext_vkUpdateDescriptorSetWithTemplate
      = (PFN_vkUpdateDescriptorSetWithTemplate)
        glext_vkUpdateDescriptorSetWithTemplateKHR;
  if (glext_vkUpdateDescriptorSetWithTemplateKHR == NULL
      && glext_vkUpdateDescriptorSetWithTemplate != NULL)
    glext_vkUpdateDescriptorSetWithTemplateKHR
      = (PFN_vkUpdateDescriptorSetWithTemplateKHR)
        glext_vkUpdateDescriptorSetWithTemplate;
  if (glext_vkWaitSemaphores == NULL && glext_vkWaitSemaphoresKHR != NULL)
    glext_vkWaitSemaphores = (PFN_vkWaitSemaphores)glext_vkWaitSemaphoresKHR;
  if (glext_vkWaitSemaphoresKHR == NULL && glext_vkWaitSemaphores != NULL)
    glext_vkWaitSemaphoresKHR
      = (PFN_vkWaitSemaphoresKHR)glext_vkWaitSemaphores;
}

static int
glext_vk_get_extensions (VkPhysicalDevice physical_device,
                         uint32_t* out_extension_count,
                         char*** out_extensions) {
  uint32_t i;
  uint32_t instance_extension_count = 0;
  uint32_t device_extension_count = 0;
  uint32_t max_extension_count = 0;
  uint32_t total_extension_count = 0;
  char** extensions = NULL;
  VkExtensionProperties* ext_properties = NULL;
  VkResult result;

  if (glext_vkEnumerateInstanceExtensionProperties == NULL
      || (physical_device != NULL
          && glext_vkEnumerateDeviceExtensionProperties == NULL)) {
    return 0;
  }

  result = glext_vkEnumerateInstanceExtensionProperties (
    NULL, &instance_extension_count, NULL);
  if (result != VK_SUCCESS) {
    return 0;
  }

  if (physical_device != NULL) {
    result = glext_vkEnumerateDeviceExtensionProperties (
      physical_device, NULL, &device_extension_count, NULL);
    if (result != VK_SUCCESS) {
      return 0;
    }
  }

  total_extension_count = instance_extension_count + device_extension_count;
  if (total_extension_count <= 0) {
    return 0;
  }

  max_extension_count = instance_extension_count > device_extension_count
                          ? instance_extension_count
                          : device_extension_count;

  ext_properties = (VkExtensionProperties*)malloc (
    max_extension_count * sizeof (VkExtensionProperties));
  if (ext_properties == NULL) {
    goto glext_vk_get_extensions_error;
  }

  result = glext_vkEnumerateInstanceExtensionProperties (
    NULL, &instance_extension_count, ext_properties);
  if (result != VK_SUCCESS) {
    goto glext_vk_get_extensions_error;
  }

  extensions = (char**)calloc (total_extension_count, sizeof (char*));
  if (extensions == NULL) {
    goto glext_vk_get_extensions_error;
  }

  for (i = 0; i < instance_extension_count; ++i) {
    VkExtensionProperties ext = ext_properties[i];

    size_t extension_name_length = strlen (ext.extensionName) + 1;
    extensions[i] = (char*)malloc (extension_name_length * sizeof (char));
    if (extensions[i] == NULL) {
      goto glext_vk_get_extensions_error;
    }
    memcpy (extensions[i], ext.extensionName,
            extension_name_length * sizeof (char));
  }

  if (physical_device != NULL) {
    result = glext_vkEnumerateDeviceExtensionProperties (
      physical_device, NULL, &device_extension_count, ext_properties);
    if (result != VK_SUCCESS) {
      goto glext_vk_get_extensions_error;
    }

    for (i = 0; i < device_extension_count; ++i) {
      VkExtensionProperties ext = ext_properties[i];

      size_t extension_name_length = strlen (ext.extensionName) + 1;
      extensions[instance_extension_count + i]
        = (char*)malloc (extension_name_length * sizeof (char));
      if (extensions[instance_extension_count + i] == NULL) {
        goto glext_vk_get_extensions_error;
      }
      memcpy (extensions[instance_extension_count + i], ext.extensionName,
              extension_name_length * sizeof (char));
    }
  }

  free ((void*)ext_properties);

  *out_extension_count = total_extension_count;
  *out_extensions = extensions;

  return 1;

glext_vk_get_extensions_error:
  free ((void*)ext_properties);
  if (extensions != NULL) {
    for (i = 0; i < total_extension_count; ++i) {
      free ((void*)extensions[i]);
    }
    free (extensions);
  }
  return 0;
}

static void
glext_vk_free_extensions (uint32_t extension_count, char** extensions) {
  uint32_t i;

  for (i = 0; i < extension_count; ++i) {
    free ((void*)(extensions[i]));
  }

  free ((void*)extensions);
}

static int
glext_vk_has_extension (const char* name, uint32_t extension_count,
                        char** extensions) {
  uint32_t i;

  for (i = 0; i < extension_count; ++i) {
    if (extensions[i] != NULL && strcmp (name, extensions[i]) == 0) {
      return 1;
    }
  }

  return 0;
}

static GLADapiproc
glext_vk_get_proc_from_userptr (void* userptr, const char* name) {
  return (GLEXT_GNUC_EXTENSION (GLADapiproc (*) (const char* name))
            userptr) (name);
}

static int
glext_vk_find_extensions_vulkan (VkPhysicalDevice physical_device) {
  uint32_t extension_count = 0;
  char** extensions = NULL;
  if (!glext_vk_get_extensions (physical_device, &extension_count,
                                &extensions))
    return 0;

#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEXT_VK_AMDX_dense_geometry_format = glext_vk_has_extension (
    "VK_AMDX_dense_geometry_format", extension_count, extensions);

#endif
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEXT_VK_AMDX_shader_enqueue = glext_vk_has_extension (
    "VK_AMDX_shader_enqueue", extension_count, extensions);

#endif
  GLEXT_VK_AMD_anti_lag
    = glext_vk_has_extension ("VK_AMD_anti_lag", extension_count, extensions);
  GLEXT_VK_AMD_buffer_marker = glext_vk_has_extension (
    "VK_AMD_buffer_marker", extension_count, extensions);
  GLEXT_VK_AMD_device_coherent_memory = glext_vk_has_extension (
    "VK_AMD_device_coherent_memory", extension_count, extensions);
  GLEXT_VK_AMD_display_native_hdr = glext_vk_has_extension (
    "VK_AMD_display_native_hdr", extension_count, extensions);
  GLEXT_VK_AMD_draw_indirect_count = glext_vk_has_extension (
    "VK_AMD_draw_indirect_count", extension_count, extensions);
  GLEXT_VK_AMD_gcn_shader = glext_vk_has_extension (
    "VK_AMD_gcn_shader", extension_count, extensions);
  GLEXT_VK_AMD_gpu_shader_half_float = glext_vk_has_extension (
    "VK_AMD_gpu_shader_half_float", extension_count, extensions);
  GLEXT_VK_AMD_gpu_shader_int16 = glext_vk_has_extension (
    "VK_AMD_gpu_shader_int16", extension_count, extensions);
  GLEXT_VK_AMD_memory_overallocation_behavior = glext_vk_has_extension (
    "VK_AMD_memory_overallocation_behavior", extension_count, extensions);
  GLEXT_VK_AMD_mixed_attachment_samples = glext_vk_has_extension (
    "VK_AMD_mixed_attachment_samples", extension_count, extensions);
  GLEXT_VK_AMD_negative_viewport_height = glext_vk_has_extension (
    "VK_AMD_negative_viewport_height", extension_count, extensions);
  GLEXT_VK_AMD_pipeline_compiler_control = glext_vk_has_extension (
    "VK_AMD_pipeline_compiler_control", extension_count, extensions);
  GLEXT_VK_AMD_rasterization_order = glext_vk_has_extension (
    "VK_AMD_rasterization_order", extension_count, extensions);
  GLEXT_VK_AMD_shader_ballot = glext_vk_has_extension (
    "VK_AMD_shader_ballot", extension_count, extensions);
  GLEXT_VK_AMD_shader_core_properties = glext_vk_has_extension (
    "VK_AMD_shader_core_properties", extension_count, extensions);
  GLEXT_VK_AMD_shader_core_properties2 = glext_vk_has_extension (
    "VK_AMD_shader_core_properties2", extension_count, extensions);
  GLEXT_VK_AMD_shader_early_and_late_fragment_tests
    = glext_vk_has_extension ("VK_AMD_shader_early_and_late_fragment_tests",
                              extension_count, extensions);
  GLEXT_VK_AMD_shader_explicit_vertex_parameter = glext_vk_has_extension (
    "VK_AMD_shader_explicit_vertex_parameter", extension_count, extensions);
  GLEXT_VK_AMD_shader_fragment_mask = glext_vk_has_extension (
    "VK_AMD_shader_fragment_mask", extension_count, extensions);
  GLEXT_VK_AMD_shader_image_load_store_lod = glext_vk_has_extension (
    "VK_AMD_shader_image_load_store_lod", extension_count, extensions);
  GLEXT_VK_AMD_shader_info = glext_vk_has_extension (
    "VK_AMD_shader_info", extension_count, extensions);
  GLEXT_VK_AMD_shader_trinary_minmax = glext_vk_has_extension (
    "VK_AMD_shader_trinary_minmax", extension_count, extensions);
  GLEXT_VK_AMD_texture_gather_bias_lod = glext_vk_has_extension (
    "VK_AMD_texture_gather_bias_lod", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  GLEXT_VK_ANDROID_external_format_resolve = glext_vk_has_extension (
    "VK_ANDROID_external_format_resolve", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  GLEXT_VK_ANDROID_external_memory_android_hardware_buffer
    = glext_vk_has_extension (
      "VK_ANDROID_external_memory_android_hardware_buffer", extension_count,
      extensions);

#endif
  GLEXT_VK_ARM_data_graph = glext_vk_has_extension (
    "VK_ARM_data_graph", extension_count, extensions);
  GLEXT_VK_ARM_format_pack = glext_vk_has_extension (
    "VK_ARM_format_pack", extension_count, extensions);
  GLEXT_VK_ARM_pipeline_opacity_micromap = glext_vk_has_extension (
    "VK_ARM_pipeline_opacity_micromap", extension_count, extensions);
  GLEXT_VK_ARM_rasterization_order_attachment_access
    = glext_vk_has_extension ("VK_ARM_rasterization_order_attachment_access",
                              extension_count, extensions);
  GLEXT_VK_ARM_render_pass_striped = glext_vk_has_extension (
    "VK_ARM_render_pass_striped", extension_count, extensions);
  GLEXT_VK_ARM_scheduling_controls = glext_vk_has_extension (
    "VK_ARM_scheduling_controls", extension_count, extensions);
  GLEXT_VK_ARM_shader_core_builtins = glext_vk_has_extension (
    "VK_ARM_shader_core_builtins", extension_count, extensions);
  GLEXT_VK_ARM_shader_core_properties = glext_vk_has_extension (
    "VK_ARM_shader_core_properties", extension_count, extensions);
  GLEXT_VK_ARM_tensors
    = glext_vk_has_extension ("VK_ARM_tensors", extension_count, extensions);
  GLEXT_VK_EXT_4444_formats = glext_vk_has_extension (
    "VK_EXT_4444_formats", extension_count, extensions);
  GLEXT_VK_EXT_acquire_drm_display = glext_vk_has_extension (
    "VK_EXT_acquire_drm_display", extension_count, extensions);
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
  GLEXT_VK_EXT_acquire_xlib_display = glext_vk_has_extension (
    "VK_EXT_acquire_xlib_display", extension_count, extensions);

#endif
  GLEXT_VK_EXT_astc_decode_mode = glext_vk_has_extension (
    "VK_EXT_astc_decode_mode", extension_count, extensions);
  GLEXT_VK_EXT_attachment_feedback_loop_dynamic_state
    = glext_vk_has_extension ("VK_EXT_attachment_feedback_loop_dynamic_state",
                              extension_count, extensions);
  GLEXT_VK_EXT_attachment_feedback_loop_layout = glext_vk_has_extension (
    "VK_EXT_attachment_feedback_loop_layout", extension_count, extensions);
  GLEXT_VK_EXT_blend_operation_advanced = glext_vk_has_extension (
    "VK_EXT_blend_operation_advanced", extension_count, extensions);
  GLEXT_VK_EXT_border_color_swizzle = glext_vk_has_extension (
    "VK_EXT_border_color_swizzle", extension_count, extensions);
  GLEXT_VK_EXT_buffer_device_address = glext_vk_has_extension (
    "VK_EXT_buffer_device_address", extension_count, extensions);
  GLEXT_VK_EXT_calibrated_timestamps = glext_vk_has_extension (
    "VK_EXT_calibrated_timestamps", extension_count, extensions);
  GLEXT_VK_EXT_color_write_enable = glext_vk_has_extension (
    "VK_EXT_color_write_enable", extension_count, extensions);
  GLEXT_VK_EXT_conditional_rendering = glext_vk_has_extension (
    "VK_EXT_conditional_rendering", extension_count, extensions);
  GLEXT_VK_EXT_conservative_rasterization = glext_vk_has_extension (
    "VK_EXT_conservative_rasterization", extension_count, extensions);
  GLEXT_VK_EXT_custom_border_color = glext_vk_has_extension (
    "VK_EXT_custom_border_color", extension_count, extensions);
  GLEXT_VK_EXT_debug_marker = glext_vk_has_extension (
    "VK_EXT_debug_marker", extension_count, extensions);
  GLEXT_VK_EXT_debug_report = glext_vk_has_extension (
    "VK_EXT_debug_report", extension_count, extensions);
  GLEXT_VK_EXT_debug_utils = glext_vk_has_extension (
    "VK_EXT_debug_utils", extension_count, extensions);
  GLEXT_VK_EXT_depth_bias_control = glext_vk_has_extension (
    "VK_EXT_depth_bias_control", extension_count, extensions);
  GLEXT_VK_EXT_depth_clamp_control = glext_vk_has_extension (
    "VK_EXT_depth_clamp_control", extension_count, extensions);
  GLEXT_VK_EXT_depth_clamp_zero_one = glext_vk_has_extension (
    "VK_EXT_depth_clamp_zero_one", extension_count, extensions);
  GLEXT_VK_EXT_depth_clip_control = glext_vk_has_extension (
    "VK_EXT_depth_clip_control", extension_count, extensions);
  GLEXT_VK_EXT_depth_clip_enable = glext_vk_has_extension (
    "VK_EXT_depth_clip_enable", extension_count, extensions);
  GLEXT_VK_EXT_depth_range_unrestricted = glext_vk_has_extension (
    "VK_EXT_depth_range_unrestricted", extension_count, extensions);
  GLEXT_VK_EXT_descriptor_buffer = glext_vk_has_extension (
    "VK_EXT_descriptor_buffer", extension_count, extensions);
  GLEXT_VK_EXT_descriptor_indexing = glext_vk_has_extension (
    "VK_EXT_descriptor_indexing", extension_count, extensions);
  GLEXT_VK_EXT_device_address_binding_report = glext_vk_has_extension (
    "VK_EXT_device_address_binding_report", extension_count, extensions);
  GLEXT_VK_EXT_device_fault = glext_vk_has_extension (
    "VK_EXT_device_fault", extension_count, extensions);
  GLEXT_VK_EXT_device_generated_commands = glext_vk_has_extension (
    "VK_EXT_device_generated_commands", extension_count, extensions);
  GLEXT_VK_EXT_device_memory_report = glext_vk_has_extension (
    "VK_EXT_device_memory_report", extension_count, extensions);
  GLEXT_VK_EXT_direct_mode_display = glext_vk_has_extension (
    "VK_EXT_direct_mode_display", extension_count, extensions);
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
  GLEXT_VK_EXT_directfb_surface = glext_vk_has_extension (
    "VK_EXT_directfb_surface", extension_count, extensions);

#endif
  GLEXT_VK_EXT_discard_rectangles = glext_vk_has_extension (
    "VK_EXT_discard_rectangles", extension_count, extensions);
  GLEXT_VK_EXT_display_control = glext_vk_has_extension (
    "VK_EXT_display_control", extension_count, extensions);
  GLEXT_VK_EXT_display_surface_counter = glext_vk_has_extension (
    "VK_EXT_display_surface_counter", extension_count, extensions);
  GLEXT_VK_EXT_dynamic_rendering_unused_attachments
    = glext_vk_has_extension ("VK_EXT_dynamic_rendering_unused_attachments",
                              extension_count, extensions);
  GLEXT_VK_EXT_extended_dynamic_state = glext_vk_has_extension (
    "VK_EXT_extended_dynamic_state", extension_count, extensions);
  GLEXT_VK_EXT_extended_dynamic_state2 = glext_vk_has_extension (
    "VK_EXT_extended_dynamic_state2", extension_count, extensions);
  GLEXT_VK_EXT_extended_dynamic_state3 = glext_vk_has_extension (
    "VK_EXT_extended_dynamic_state3", extension_count, extensions);
  GLEXT_VK_EXT_external_memory_acquire_unmodified = glext_vk_has_extension (
    "VK_EXT_external_memory_acquire_unmodified", extension_count, extensions);
  GLEXT_VK_EXT_external_memory_dma_buf = glext_vk_has_extension (
    "VK_EXT_external_memory_dma_buf", extension_count, extensions);
  GLEXT_VK_EXT_external_memory_host = glext_vk_has_extension (
    "VK_EXT_external_memory_host", extension_count, extensions);
#if defined(VK_USE_PLATFORM_METAL_EXT)
  GLEXT_VK_EXT_external_memory_metal = glext_vk_has_extension (
    "VK_EXT_external_memory_metal", extension_count, extensions);

#endif
  GLEXT_VK_EXT_filter_cubic = glext_vk_has_extension (
    "VK_EXT_filter_cubic", extension_count, extensions);
  GLEXT_VK_EXT_fragment_density_map = glext_vk_has_extension (
    "VK_EXT_fragment_density_map", extension_count, extensions);
  GLEXT_VK_EXT_fragment_density_map2 = glext_vk_has_extension (
    "VK_EXT_fragment_density_map2", extension_count, extensions);
  GLEXT_VK_EXT_fragment_density_map_offset = glext_vk_has_extension (
    "VK_EXT_fragment_density_map_offset", extension_count, extensions);
  GLEXT_VK_EXT_fragment_shader_interlock = glext_vk_has_extension (
    "VK_EXT_fragment_shader_interlock", extension_count, extensions);
  GLEXT_VK_EXT_frame_boundary = glext_vk_has_extension (
    "VK_EXT_frame_boundary", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_EXT_full_screen_exclusive = glext_vk_has_extension (
    "VK_EXT_full_screen_exclusive", extension_count, extensions);

#endif
  GLEXT_VK_EXT_global_priority = glext_vk_has_extension (
    "VK_EXT_global_priority", extension_count, extensions);
  GLEXT_VK_EXT_global_priority_query = glext_vk_has_extension (
    "VK_EXT_global_priority_query", extension_count, extensions);
  GLEXT_VK_EXT_graphics_pipeline_library = glext_vk_has_extension (
    "VK_EXT_graphics_pipeline_library", extension_count, extensions);
  GLEXT_VK_EXT_hdr_metadata = glext_vk_has_extension (
    "VK_EXT_hdr_metadata", extension_count, extensions);
  GLEXT_VK_EXT_headless_surface = glext_vk_has_extension (
    "VK_EXT_headless_surface", extension_count, extensions);
  GLEXT_VK_EXT_host_image_copy = glext_vk_has_extension (
    "VK_EXT_host_image_copy", extension_count, extensions);
  GLEXT_VK_EXT_host_query_reset = glext_vk_has_extension (
    "VK_EXT_host_query_reset", extension_count, extensions);
  GLEXT_VK_EXT_image_2d_view_of_3d = glext_vk_has_extension (
    "VK_EXT_image_2d_view_of_3d", extension_count, extensions);
  GLEXT_VK_EXT_image_compression_control = glext_vk_has_extension (
    "VK_EXT_image_compression_control", extension_count, extensions);
  GLEXT_VK_EXT_image_compression_control_swapchain = glext_vk_has_extension (
    "VK_EXT_image_compression_control_swapchain", extension_count, extensions);
  GLEXT_VK_EXT_image_drm_format_modifier = glext_vk_has_extension (
    "VK_EXT_image_drm_format_modifier", extension_count, extensions);
  GLEXT_VK_EXT_image_robustness = glext_vk_has_extension (
    "VK_EXT_image_robustness", extension_count, extensions);
  GLEXT_VK_EXT_image_sliced_view_of_3d = glext_vk_has_extension (
    "VK_EXT_image_sliced_view_of_3d", extension_count, extensions);
  GLEXT_VK_EXT_image_view_min_lod = glext_vk_has_extension (
    "VK_EXT_image_view_min_lod", extension_count, extensions);
  GLEXT_VK_EXT_index_type_uint8 = glext_vk_has_extension (
    "VK_EXT_index_type_uint8", extension_count, extensions);
  GLEXT_VK_EXT_inline_uniform_block = glext_vk_has_extension (
    "VK_EXT_inline_uniform_block", extension_count, extensions);
  GLEXT_VK_EXT_layer_settings = glext_vk_has_extension (
    "VK_EXT_layer_settings", extension_count, extensions);
  GLEXT_VK_EXT_legacy_dithering = glext_vk_has_extension (
    "VK_EXT_legacy_dithering", extension_count, extensions);
  GLEXT_VK_EXT_legacy_vertex_attributes = glext_vk_has_extension (
    "VK_EXT_legacy_vertex_attributes", extension_count, extensions);
  GLEXT_VK_EXT_line_rasterization = glext_vk_has_extension (
    "VK_EXT_line_rasterization", extension_count, extensions);
  GLEXT_VK_EXT_load_store_op_none = glext_vk_has_extension (
    "VK_EXT_load_store_op_none", extension_count, extensions);
  GLEXT_VK_EXT_map_memory_placed = glext_vk_has_extension (
    "VK_EXT_map_memory_placed", extension_count, extensions);
  GLEXT_VK_EXT_memory_budget = glext_vk_has_extension (
    "VK_EXT_memory_budget", extension_count, extensions);
  GLEXT_VK_EXT_memory_priority = glext_vk_has_extension (
    "VK_EXT_memory_priority", extension_count, extensions);
  GLEXT_VK_EXT_mesh_shader = glext_vk_has_extension (
    "VK_EXT_mesh_shader", extension_count, extensions);
#if defined(VK_USE_PLATFORM_METAL_EXT)
  GLEXT_VK_EXT_metal_objects = glext_vk_has_extension (
    "VK_EXT_metal_objects", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
  GLEXT_VK_EXT_metal_surface = glext_vk_has_extension (
    "VK_EXT_metal_surface", extension_count, extensions);

#endif
  GLEXT_VK_EXT_multi_draw = glext_vk_has_extension (
    "VK_EXT_multi_draw", extension_count, extensions);
  GLEXT_VK_EXT_multisampled_render_to_single_sampled
    = glext_vk_has_extension ("VK_EXT_multisampled_render_to_single_sampled",
                              extension_count, extensions);
  GLEXT_VK_EXT_mutable_descriptor_type = glext_vk_has_extension (
    "VK_EXT_mutable_descriptor_type", extension_count, extensions);
  GLEXT_VK_EXT_nested_command_buffer = glext_vk_has_extension (
    "VK_EXT_nested_command_buffer", extension_count, extensions);
  GLEXT_VK_EXT_non_seamless_cube_map = glext_vk_has_extension (
    "VK_EXT_non_seamless_cube_map", extension_count, extensions);
  GLEXT_VK_EXT_opacity_micromap = glext_vk_has_extension (
    "VK_EXT_opacity_micromap", extension_count, extensions);
  GLEXT_VK_EXT_pageable_device_local_memory = glext_vk_has_extension (
    "VK_EXT_pageable_device_local_memory", extension_count, extensions);
  GLEXT_VK_EXT_pci_bus_info = glext_vk_has_extension (
    "VK_EXT_pci_bus_info", extension_count, extensions);
  GLEXT_VK_EXT_physical_device_drm = glext_vk_has_extension (
    "VK_EXT_physical_device_drm", extension_count, extensions);
  GLEXT_VK_EXT_pipeline_creation_cache_control = glext_vk_has_extension (
    "VK_EXT_pipeline_creation_cache_control", extension_count, extensions);
  GLEXT_VK_EXT_pipeline_creation_feedback = glext_vk_has_extension (
    "VK_EXT_pipeline_creation_feedback", extension_count, extensions);
  GLEXT_VK_EXT_pipeline_library_group_handles = glext_vk_has_extension (
    "VK_EXT_pipeline_library_group_handles", extension_count, extensions);
  GLEXT_VK_EXT_pipeline_properties = glext_vk_has_extension (
    "VK_EXT_pipeline_properties", extension_count, extensions);
  GLEXT_VK_EXT_pipeline_protected_access = glext_vk_has_extension (
    "VK_EXT_pipeline_protected_access", extension_count, extensions);
  GLEXT_VK_EXT_pipeline_robustness = glext_vk_has_extension (
    "VK_EXT_pipeline_robustness", extension_count, extensions);
  GLEXT_VK_EXT_post_depth_coverage = glext_vk_has_extension (
    "VK_EXT_post_depth_coverage", extension_count, extensions);
  GLEXT_VK_EXT_present_mode_fifo_latest_ready = glext_vk_has_extension (
    "VK_EXT_present_mode_fifo_latest_ready", extension_count, extensions);
  GLEXT_VK_EXT_primitive_topology_list_restart = glext_vk_has_extension (
    "VK_EXT_primitive_topology_list_restart", extension_count, extensions);
  GLEXT_VK_EXT_primitives_generated_query = glext_vk_has_extension (
    "VK_EXT_primitives_generated_query", extension_count, extensions);
  GLEXT_VK_EXT_private_data = glext_vk_has_extension (
    "VK_EXT_private_data", extension_count, extensions);
  GLEXT_VK_EXT_provoking_vertex = glext_vk_has_extension (
    "VK_EXT_provoking_vertex", extension_count, extensions);
  GLEXT_VK_EXT_queue_family_foreign = glext_vk_has_extension (
    "VK_EXT_queue_family_foreign", extension_count, extensions);
  GLEXT_VK_EXT_rasterization_order_attachment_access
    = glext_vk_has_extension ("VK_EXT_rasterization_order_attachment_access",
                              extension_count, extensions);
  GLEXT_VK_EXT_rgba10x6_formats = glext_vk_has_extension (
    "VK_EXT_rgba10x6_formats", extension_count, extensions);
  GLEXT_VK_EXT_robustness2 = glext_vk_has_extension (
    "VK_EXT_robustness2", extension_count, extensions);
  GLEXT_VK_EXT_sample_locations = glext_vk_has_extension (
    "VK_EXT_sample_locations", extension_count, extensions);
  GLEXT_VK_EXT_sampler_filter_minmax = glext_vk_has_extension (
    "VK_EXT_sampler_filter_minmax", extension_count, extensions);
  GLEXT_VK_EXT_scalar_block_layout = glext_vk_has_extension (
    "VK_EXT_scalar_block_layout", extension_count, extensions);
  GLEXT_VK_EXT_separate_stencil_usage = glext_vk_has_extension (
    "VK_EXT_separate_stencil_usage", extension_count, extensions);
  GLEXT_VK_EXT_shader_atomic_float = glext_vk_has_extension (
    "VK_EXT_shader_atomic_float", extension_count, extensions);
  GLEXT_VK_EXT_shader_atomic_float2 = glext_vk_has_extension (
    "VK_EXT_shader_atomic_float2", extension_count, extensions);
  GLEXT_VK_EXT_shader_demote_to_helper_invocation = glext_vk_has_extension (
    "VK_EXT_shader_demote_to_helper_invocation", extension_count, extensions);
  GLEXT_VK_EXT_shader_float8 = glext_vk_has_extension (
    "VK_EXT_shader_float8", extension_count, extensions);
  GLEXT_VK_EXT_shader_image_atomic_int64 = glext_vk_has_extension (
    "VK_EXT_shader_image_atomic_int64", extension_count, extensions);
  GLEXT_VK_EXT_shader_module_identifier = glext_vk_has_extension (
    "VK_EXT_shader_module_identifier", extension_count, extensions);
  GLEXT_VK_EXT_shader_object = glext_vk_has_extension (
    "VK_EXT_shader_object", extension_count, extensions);
  GLEXT_VK_EXT_shader_replicated_composites = glext_vk_has_extension (
    "VK_EXT_shader_replicated_composites", extension_count, extensions);
  GLEXT_VK_EXT_shader_stencil_export = glext_vk_has_extension (
    "VK_EXT_shader_stencil_export", extension_count, extensions);
  GLEXT_VK_EXT_shader_subgroup_ballot = glext_vk_has_extension (
    "VK_EXT_shader_subgroup_ballot", extension_count, extensions);
  GLEXT_VK_EXT_shader_subgroup_vote = glext_vk_has_extension (
    "VK_EXT_shader_subgroup_vote", extension_count, extensions);
  GLEXT_VK_EXT_shader_tile_image = glext_vk_has_extension (
    "VK_EXT_shader_tile_image", extension_count, extensions);
  GLEXT_VK_EXT_shader_viewport_index_layer = glext_vk_has_extension (
    "VK_EXT_shader_viewport_index_layer", extension_count, extensions);
  GLEXT_VK_EXT_subgroup_size_control = glext_vk_has_extension (
    "VK_EXT_subgroup_size_control", extension_count, extensions);
  GLEXT_VK_EXT_subpass_merge_feedback = glext_vk_has_extension (
    "VK_EXT_subpass_merge_feedback", extension_count, extensions);
  GLEXT_VK_EXT_surface_maintenance1 = glext_vk_has_extension (
    "VK_EXT_surface_maintenance1", extension_count, extensions);
  GLEXT_VK_EXT_swapchain_colorspace = glext_vk_has_extension (
    "VK_EXT_swapchain_colorspace", extension_count, extensions);
  GLEXT_VK_EXT_swapchain_maintenance1 = glext_vk_has_extension (
    "VK_EXT_swapchain_maintenance1", extension_count, extensions);
  GLEXT_VK_EXT_texel_buffer_alignment = glext_vk_has_extension (
    "VK_EXT_texel_buffer_alignment", extension_count, extensions);
  GLEXT_VK_EXT_texture_compression_astc_hdr = glext_vk_has_extension (
    "VK_EXT_texture_compression_astc_hdr", extension_count, extensions);
  GLEXT_VK_EXT_tooling_info = glext_vk_has_extension (
    "VK_EXT_tooling_info", extension_count, extensions);
  GLEXT_VK_EXT_transform_feedback = glext_vk_has_extension (
    "VK_EXT_transform_feedback", extension_count, extensions);
  GLEXT_VK_EXT_validation_cache = glext_vk_has_extension (
    "VK_EXT_validation_cache", extension_count, extensions);
  GLEXT_VK_EXT_validation_features = glext_vk_has_extension (
    "VK_EXT_validation_features", extension_count, extensions);
  GLEXT_VK_EXT_validation_flags = glext_vk_has_extension (
    "VK_EXT_validation_flags", extension_count, extensions);
  GLEXT_VK_EXT_vertex_attribute_divisor = glext_vk_has_extension (
    "VK_EXT_vertex_attribute_divisor", extension_count, extensions);
  GLEXT_VK_EXT_vertex_attribute_robustness = glext_vk_has_extension (
    "VK_EXT_vertex_attribute_robustness", extension_count, extensions);
  GLEXT_VK_EXT_vertex_input_dynamic_state = glext_vk_has_extension (
    "VK_EXT_vertex_input_dynamic_state", extension_count, extensions);
  GLEXT_VK_EXT_ycbcr_2plane_444_formats = glext_vk_has_extension (
    "VK_EXT_ycbcr_2plane_444_formats", extension_count, extensions);
  GLEXT_VK_EXT_ycbcr_image_arrays = glext_vk_has_extension (
    "VK_EXT_ycbcr_image_arrays", extension_count, extensions);
  GLEXT_VK_EXT_zero_initialize_device_memory = glext_vk_has_extension (
    "VK_EXT_zero_initialize_device_memory", extension_count, extensions);
#if defined(VK_USE_PLATFORM_FUCHSIA)
  GLEXT_VK_FUCHSIA_buffer_collection = glext_vk_has_extension (
    "VK_FUCHSIA_buffer_collection", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  GLEXT_VK_FUCHSIA_external_memory = glext_vk_has_extension (
    "VK_FUCHSIA_external_memory", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  GLEXT_VK_FUCHSIA_external_semaphore = glext_vk_has_extension (
    "VK_FUCHSIA_external_semaphore", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  GLEXT_VK_FUCHSIA_imagepipe_surface = glext_vk_has_extension (
    "VK_FUCHSIA_imagepipe_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_GGP)
  GLEXT_VK_GGP_frame_token = glext_vk_has_extension (
    "VK_GGP_frame_token", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_GGP)
  GLEXT_VK_GGP_stream_descriptor_surface = glext_vk_has_extension (
    "VK_GGP_stream_descriptor_surface", extension_count, extensions);

#endif
  GLEXT_VK_GOOGLE_decorate_string = glext_vk_has_extension (
    "VK_GOOGLE_decorate_string", extension_count, extensions);
  GLEXT_VK_GOOGLE_display_timing = glext_vk_has_extension (
    "VK_GOOGLE_display_timing", extension_count, extensions);
  GLEXT_VK_GOOGLE_hlsl_functionality1 = glext_vk_has_extension (
    "VK_GOOGLE_hlsl_functionality1", extension_count, extensions);
  GLEXT_VK_GOOGLE_surfaceless_query = glext_vk_has_extension (
    "VK_GOOGLE_surfaceless_query", extension_count, extensions);
  GLEXT_VK_GOOGLE_user_type = glext_vk_has_extension (
    "VK_GOOGLE_user_type", extension_count, extensions);
  GLEXT_VK_HUAWEI_cluster_culling_shader = glext_vk_has_extension (
    "VK_HUAWEI_cluster_culling_shader", extension_count, extensions);
  GLEXT_VK_HUAWEI_hdr_vivid = glext_vk_has_extension (
    "VK_HUAWEI_hdr_vivid", extension_count, extensions);
  GLEXT_VK_HUAWEI_invocation_mask = glext_vk_has_extension (
    "VK_HUAWEI_invocation_mask", extension_count, extensions);
  GLEXT_VK_HUAWEI_subpass_shading = glext_vk_has_extension (
    "VK_HUAWEI_subpass_shading", extension_count, extensions);
  GLEXT_VK_IMG_filter_cubic = glext_vk_has_extension (
    "VK_IMG_filter_cubic", extension_count, extensions);
  GLEXT_VK_IMG_format_pvrtc = glext_vk_has_extension (
    "VK_IMG_format_pvrtc", extension_count, extensions);
  GLEXT_VK_IMG_relaxed_line_rasterization = glext_vk_has_extension (
    "VK_IMG_relaxed_line_rasterization", extension_count, extensions);
  GLEXT_VK_INTEL_performance_query = glext_vk_has_extension (
    "VK_INTEL_performance_query", extension_count, extensions);
  GLEXT_VK_INTEL_shader_integer_functions2 = glext_vk_has_extension (
    "VK_INTEL_shader_integer_functions2", extension_count, extensions);
  GLEXT_VK_KHR_16bit_storage = glext_vk_has_extension (
    "VK_KHR_16bit_storage", extension_count, extensions);
  GLEXT_VK_KHR_8bit_storage = glext_vk_has_extension (
    "VK_KHR_8bit_storage", extension_count, extensions);
  GLEXT_VK_KHR_acceleration_structure = glext_vk_has_extension (
    "VK_KHR_acceleration_structure", extension_count, extensions);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  GLEXT_VK_KHR_android_surface = glext_vk_has_extension (
    "VK_KHR_android_surface", extension_count, extensions);

#endif
  GLEXT_VK_KHR_bind_memory2 = glext_vk_has_extension (
    "VK_KHR_bind_memory2", extension_count, extensions);
  GLEXT_VK_KHR_buffer_device_address = glext_vk_has_extension (
    "VK_KHR_buffer_device_address", extension_count, extensions);
  GLEXT_VK_KHR_calibrated_timestamps = glext_vk_has_extension (
    "VK_KHR_calibrated_timestamps", extension_count, extensions);
  GLEXT_VK_KHR_compute_shader_derivatives = glext_vk_has_extension (
    "VK_KHR_compute_shader_derivatives", extension_count, extensions);
  GLEXT_VK_KHR_cooperative_matrix = glext_vk_has_extension (
    "VK_KHR_cooperative_matrix", extension_count, extensions);
  GLEXT_VK_KHR_copy_commands2 = glext_vk_has_extension (
    "VK_KHR_copy_commands2", extension_count, extensions);
  GLEXT_VK_KHR_copy_memory_indirect = glext_vk_has_extension (
    "VK_KHR_copy_memory_indirect", extension_count, extensions);
  GLEXT_VK_KHR_create_renderpass2 = glext_vk_has_extension (
    "VK_KHR_create_renderpass2", extension_count, extensions);
  GLEXT_VK_KHR_dedicated_allocation = glext_vk_has_extension (
    "VK_KHR_dedicated_allocation", extension_count, extensions);
  GLEXT_VK_KHR_deferred_host_operations = glext_vk_has_extension (
    "VK_KHR_deferred_host_operations", extension_count, extensions);
  GLEXT_VK_KHR_depth_clamp_zero_one = glext_vk_has_extension (
    "VK_KHR_depth_clamp_zero_one", extension_count, extensions);
  GLEXT_VK_KHR_depth_stencil_resolve = glext_vk_has_extension (
    "VK_KHR_depth_stencil_resolve", extension_count, extensions);
  GLEXT_VK_KHR_descriptor_update_template = glext_vk_has_extension (
    "VK_KHR_descriptor_update_template", extension_count, extensions);
  GLEXT_VK_KHR_device_group = glext_vk_has_extension (
    "VK_KHR_device_group", extension_count, extensions);
  GLEXT_VK_KHR_device_group_creation = glext_vk_has_extension (
    "VK_KHR_device_group_creation", extension_count, extensions);
  GLEXT_VK_KHR_display
    = glext_vk_has_extension ("VK_KHR_display", extension_count, extensions);
  GLEXT_VK_KHR_display_swapchain = glext_vk_has_extension (
    "VK_KHR_display_swapchain", extension_count, extensions);
  GLEXT_VK_KHR_draw_indirect_count = glext_vk_has_extension (
    "VK_KHR_draw_indirect_count", extension_count, extensions);
  GLEXT_VK_KHR_driver_properties = glext_vk_has_extension (
    "VK_KHR_driver_properties", extension_count, extensions);
  GLEXT_VK_KHR_dynamic_rendering = glext_vk_has_extension (
    "VK_KHR_dynamic_rendering", extension_count, extensions);
  GLEXT_VK_KHR_dynamic_rendering_local_read = glext_vk_has_extension (
    "VK_KHR_dynamic_rendering_local_read", extension_count, extensions);
  GLEXT_VK_KHR_external_fence = glext_vk_has_extension (
    "VK_KHR_external_fence", extension_count, extensions);
  GLEXT_VK_KHR_external_fence_capabilities = glext_vk_has_extension (
    "VK_KHR_external_fence_capabilities", extension_count, extensions);
  GLEXT_VK_KHR_external_fence_fd = glext_vk_has_extension (
    "VK_KHR_external_fence_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_KHR_external_fence_win32 = glext_vk_has_extension (
    "VK_KHR_external_fence_win32", extension_count, extensions);

#endif
  GLEXT_VK_KHR_external_memory = glext_vk_has_extension (
    "VK_KHR_external_memory", extension_count, extensions);
  GLEXT_VK_KHR_external_memory_capabilities = glext_vk_has_extension (
    "VK_KHR_external_memory_capabilities", extension_count, extensions);
  GLEXT_VK_KHR_external_memory_fd = glext_vk_has_extension (
    "VK_KHR_external_memory_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_KHR_external_memory_win32 = glext_vk_has_extension (
    "VK_KHR_external_memory_win32", extension_count, extensions);

#endif
  GLEXT_VK_KHR_external_semaphore = glext_vk_has_extension (
    "VK_KHR_external_semaphore", extension_count, extensions);
  GLEXT_VK_KHR_external_semaphore_capabilities = glext_vk_has_extension (
    "VK_KHR_external_semaphore_capabilities", extension_count, extensions);
  GLEXT_VK_KHR_external_semaphore_fd = glext_vk_has_extension (
    "VK_KHR_external_semaphore_fd", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_KHR_external_semaphore_win32 = glext_vk_has_extension (
    "VK_KHR_external_semaphore_win32", extension_count, extensions);

#endif
  GLEXT_VK_KHR_format_feature_flags2 = glext_vk_has_extension (
    "VK_KHR_format_feature_flags2", extension_count, extensions);
  GLEXT_VK_KHR_fragment_shader_barycentric = glext_vk_has_extension (
    "VK_KHR_fragment_shader_barycentric", extension_count, extensions);
  GLEXT_VK_KHR_fragment_shading_rate = glext_vk_has_extension (
    "VK_KHR_fragment_shading_rate", extension_count, extensions);
  GLEXT_VK_KHR_get_display_properties2 = glext_vk_has_extension (
    "VK_KHR_get_display_properties2", extension_count, extensions);
  GLEXT_VK_KHR_get_memory_requirements2 = glext_vk_has_extension (
    "VK_KHR_get_memory_requirements2", extension_count, extensions);
  GLEXT_VK_KHR_get_physical_device_properties2 = glext_vk_has_extension (
    "VK_KHR_get_physical_device_properties2", extension_count, extensions);
  GLEXT_VK_KHR_get_surface_capabilities2 = glext_vk_has_extension (
    "VK_KHR_get_surface_capabilities2", extension_count, extensions);
  GLEXT_VK_KHR_global_priority = glext_vk_has_extension (
    "VK_KHR_global_priority", extension_count, extensions);
  GLEXT_VK_KHR_image_format_list = glext_vk_has_extension (
    "VK_KHR_image_format_list", extension_count, extensions);
  GLEXT_VK_KHR_imageless_framebuffer = glext_vk_has_extension (
    "VK_KHR_imageless_framebuffer", extension_count, extensions);
  GLEXT_VK_KHR_incremental_present = glext_vk_has_extension (
    "VK_KHR_incremental_present", extension_count, extensions);
  GLEXT_VK_KHR_index_type_uint8 = glext_vk_has_extension (
    "VK_KHR_index_type_uint8", extension_count, extensions);
  GLEXT_VK_KHR_line_rasterization = glext_vk_has_extension (
    "VK_KHR_line_rasterization", extension_count, extensions);
  GLEXT_VK_KHR_load_store_op_none = glext_vk_has_extension (
    "VK_KHR_load_store_op_none", extension_count, extensions);
  GLEXT_VK_KHR_maintenance1 = glext_vk_has_extension (
    "VK_KHR_maintenance1", extension_count, extensions);
  GLEXT_VK_KHR_maintenance2 = glext_vk_has_extension (
    "VK_KHR_maintenance2", extension_count, extensions);
  GLEXT_VK_KHR_maintenance3 = glext_vk_has_extension (
    "VK_KHR_maintenance3", extension_count, extensions);
  GLEXT_VK_KHR_maintenance4 = glext_vk_has_extension (
    "VK_KHR_maintenance4", extension_count, extensions);
  GLEXT_VK_KHR_maintenance5 = glext_vk_has_extension (
    "VK_KHR_maintenance5", extension_count, extensions);
  GLEXT_VK_KHR_maintenance6 = glext_vk_has_extension (
    "VK_KHR_maintenance6", extension_count, extensions);
  GLEXT_VK_KHR_maintenance7 = glext_vk_has_extension (
    "VK_KHR_maintenance7", extension_count, extensions);
  GLEXT_VK_KHR_maintenance8 = glext_vk_has_extension (
    "VK_KHR_maintenance8", extension_count, extensions);
  GLEXT_VK_KHR_maintenance9 = glext_vk_has_extension (
    "VK_KHR_maintenance9", extension_count, extensions);
  GLEXT_VK_KHR_map_memory2 = glext_vk_has_extension (
    "VK_KHR_map_memory2", extension_count, extensions);
  GLEXT_VK_KHR_multiview
    = glext_vk_has_extension ("VK_KHR_multiview", extension_count, extensions);
  GLEXT_VK_KHR_performance_query = glext_vk_has_extension (
    "VK_KHR_performance_query", extension_count, extensions);
  GLEXT_VK_KHR_pipeline_binary = glext_vk_has_extension (
    "VK_KHR_pipeline_binary", extension_count, extensions);
  GLEXT_VK_KHR_pipeline_executable_properties = glext_vk_has_extension (
    "VK_KHR_pipeline_executable_properties", extension_count, extensions);
  GLEXT_VK_KHR_pipeline_library = glext_vk_has_extension (
    "VK_KHR_pipeline_library", extension_count, extensions);
  GLEXT_VK_KHR_portability_enumeration = glext_vk_has_extension (
    "VK_KHR_portability_enumeration", extension_count, extensions);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEXT_VK_KHR_portability_subset = glext_vk_has_extension (
    "VK_KHR_portability_subset", extension_count, extensions);

#endif
  GLEXT_VK_KHR_present_id = glext_vk_has_extension (
    "VK_KHR_present_id", extension_count, extensions);
  GLEXT_VK_KHR_present_id2 = glext_vk_has_extension (
    "VK_KHR_present_id2", extension_count, extensions);
  GLEXT_VK_KHR_present_mode_fifo_latest_ready = glext_vk_has_extension (
    "VK_KHR_present_mode_fifo_latest_ready", extension_count, extensions);
  GLEXT_VK_KHR_present_wait = glext_vk_has_extension (
    "VK_KHR_present_wait", extension_count, extensions);
  GLEXT_VK_KHR_present_wait2 = glext_vk_has_extension (
    "VK_KHR_present_wait2", extension_count, extensions);
  GLEXT_VK_KHR_push_descriptor = glext_vk_has_extension (
    "VK_KHR_push_descriptor", extension_count, extensions);
  GLEXT_VK_KHR_ray_query
    = glext_vk_has_extension ("VK_KHR_ray_query", extension_count, extensions);
  GLEXT_VK_KHR_ray_tracing_maintenance1 = glext_vk_has_extension (
    "VK_KHR_ray_tracing_maintenance1", extension_count, extensions);
  GLEXT_VK_KHR_ray_tracing_pipeline = glext_vk_has_extension (
    "VK_KHR_ray_tracing_pipeline", extension_count, extensions);
  GLEXT_VK_KHR_ray_tracing_position_fetch = glext_vk_has_extension (
    "VK_KHR_ray_tracing_position_fetch", extension_count, extensions);
  GLEXT_VK_KHR_relaxed_block_layout = glext_vk_has_extension (
    "VK_KHR_relaxed_block_layout", extension_count, extensions);
  GLEXT_VK_KHR_robustness2 = glext_vk_has_extension (
    "VK_KHR_robustness2", extension_count, extensions);
  GLEXT_VK_KHR_sampler_mirror_clamp_to_edge = glext_vk_has_extension (
    "VK_KHR_sampler_mirror_clamp_to_edge", extension_count, extensions);
  GLEXT_VK_KHR_sampler_ycbcr_conversion = glext_vk_has_extension (
    "VK_KHR_sampler_ycbcr_conversion", extension_count, extensions);
  GLEXT_VK_KHR_separate_depth_stencil_layouts = glext_vk_has_extension (
    "VK_KHR_separate_depth_stencil_layouts", extension_count, extensions);
  GLEXT_VK_KHR_shader_atomic_int64 = glext_vk_has_extension (
    "VK_KHR_shader_atomic_int64", extension_count, extensions);
  GLEXT_VK_KHR_shader_bfloat16 = glext_vk_has_extension (
    "VK_KHR_shader_bfloat16", extension_count, extensions);
  GLEXT_VK_KHR_shader_clock = glext_vk_has_extension (
    "VK_KHR_shader_clock", extension_count, extensions);
  GLEXT_VK_KHR_shader_draw_parameters = glext_vk_has_extension (
    "VK_KHR_shader_draw_parameters", extension_count, extensions);
  GLEXT_VK_KHR_shader_expect_assume = glext_vk_has_extension (
    "VK_KHR_shader_expect_assume", extension_count, extensions);
  GLEXT_VK_KHR_shader_float16_int8 = glext_vk_has_extension (
    "VK_KHR_shader_float16_int8", extension_count, extensions);
  GLEXT_VK_KHR_shader_float_controls = glext_vk_has_extension (
    "VK_KHR_shader_float_controls", extension_count, extensions);
  GLEXT_VK_KHR_shader_float_controls2 = glext_vk_has_extension (
    "VK_KHR_shader_float_controls2", extension_count, extensions);
  GLEXT_VK_KHR_shader_fma = glext_vk_has_extension (
    "VK_KHR_shader_fma", extension_count, extensions);
  GLEXT_VK_KHR_shader_integer_dot_product = glext_vk_has_extension (
    "VK_KHR_shader_integer_dot_product", extension_count, extensions);
  GLEXT_VK_KHR_shader_maximal_reconvergence = glext_vk_has_extension (
    "VK_KHR_shader_maximal_reconvergence", extension_count, extensions);
  GLEXT_VK_KHR_shader_non_semantic_info = glext_vk_has_extension (
    "VK_KHR_shader_non_semantic_info", extension_count, extensions);
  GLEXT_VK_KHR_shader_quad_control = glext_vk_has_extension (
    "VK_KHR_shader_quad_control", extension_count, extensions);
  GLEXT_VK_KHR_shader_relaxed_extended_instruction = glext_vk_has_extension (
    "VK_KHR_shader_relaxed_extended_instruction", extension_count, extensions);
  GLEXT_VK_KHR_shader_subgroup_extended_types = glext_vk_has_extension (
    "VK_KHR_shader_subgroup_extended_types", extension_count, extensions);
  GLEXT_VK_KHR_shader_subgroup_rotate = glext_vk_has_extension (
    "VK_KHR_shader_subgroup_rotate", extension_count, extensions);
  GLEXT_VK_KHR_shader_subgroup_uniform_control_flow
    = glext_vk_has_extension ("VK_KHR_shader_subgroup_uniform_control_flow",
                              extension_count, extensions);
  GLEXT_VK_KHR_shader_terminate_invocation = glext_vk_has_extension (
    "VK_KHR_shader_terminate_invocation", extension_count, extensions);
  GLEXT_VK_KHR_shader_untyped_pointers = glext_vk_has_extension (
    "VK_KHR_shader_untyped_pointers", extension_count, extensions);
  GLEXT_VK_KHR_shared_presentable_image = glext_vk_has_extension (
    "VK_KHR_shared_presentable_image", extension_count, extensions);
  GLEXT_VK_KHR_spirv_1_4
    = glext_vk_has_extension ("VK_KHR_spirv_1_4", extension_count, extensions);
  GLEXT_VK_KHR_storage_buffer_storage_class = glext_vk_has_extension (
    "VK_KHR_storage_buffer_storage_class", extension_count, extensions);
  GLEXT_VK_KHR_surface
    = glext_vk_has_extension ("VK_KHR_surface", extension_count, extensions);
  GLEXT_VK_KHR_surface_maintenance1 = glext_vk_has_extension (
    "VK_KHR_surface_maintenance1", extension_count, extensions);
  GLEXT_VK_KHR_surface_protected_capabilities = glext_vk_has_extension (
    "VK_KHR_surface_protected_capabilities", extension_count, extensions);
  GLEXT_VK_KHR_swapchain
    = glext_vk_has_extension ("VK_KHR_swapchain", extension_count, extensions);
  GLEXT_VK_KHR_swapchain_maintenance1 = glext_vk_has_extension (
    "VK_KHR_swapchain_maintenance1", extension_count, extensions);
  GLEXT_VK_KHR_swapchain_mutable_format = glext_vk_has_extension (
    "VK_KHR_swapchain_mutable_format", extension_count, extensions);
  GLEXT_VK_KHR_synchronization2 = glext_vk_has_extension (
    "VK_KHR_synchronization2", extension_count, extensions);
  GLEXT_VK_KHR_timeline_semaphore = glext_vk_has_extension (
    "VK_KHR_timeline_semaphore", extension_count, extensions);
  GLEXT_VK_KHR_unified_image_layouts = glext_vk_has_extension (
    "VK_KHR_unified_image_layouts", extension_count, extensions);
  GLEXT_VK_KHR_uniform_buffer_standard_layout = glext_vk_has_extension (
    "VK_KHR_uniform_buffer_standard_layout", extension_count, extensions);
  GLEXT_VK_KHR_variable_pointers = glext_vk_has_extension (
    "VK_KHR_variable_pointers", extension_count, extensions);
  GLEXT_VK_KHR_vertex_attribute_divisor = glext_vk_has_extension (
    "VK_KHR_vertex_attribute_divisor", extension_count, extensions);
  GLEXT_VK_KHR_vulkan_memory_model = glext_vk_has_extension (
    "VK_KHR_vulkan_memory_model", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
  GLEXT_VK_KHR_wayland_surface = glext_vk_has_extension (
    "VK_KHR_wayland_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_KHR_win32_keyed_mutex = glext_vk_has_extension (
    "VK_KHR_win32_keyed_mutex", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_KHR_win32_surface = glext_vk_has_extension (
    "VK_KHR_win32_surface", extension_count, extensions);

#endif
  GLEXT_VK_KHR_workgroup_memory_explicit_layout = glext_vk_has_extension (
    "VK_KHR_workgroup_memory_explicit_layout", extension_count, extensions);
#if defined(VK_USE_PLATFORM_XCB_KHR)
  GLEXT_VK_KHR_xcb_surface = glext_vk_has_extension (
    "VK_KHR_xcb_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
  GLEXT_VK_KHR_xlib_surface = glext_vk_has_extension (
    "VK_KHR_xlib_surface", extension_count, extensions);

#endif
  GLEXT_VK_KHR_zero_initialize_workgroup_memory = glext_vk_has_extension (
    "VK_KHR_zero_initialize_workgroup_memory", extension_count, extensions);
  GLEXT_VK_LUNARG_direct_driver_loading = glext_vk_has_extension (
    "VK_LUNARG_direct_driver_loading", extension_count, extensions);
  GLEXT_VK_MESA_image_alignment_control = glext_vk_has_extension (
    "VK_MESA_image_alignment_control", extension_count, extensions);
  GLEXT_VK_MSFT_layered_driver = glext_vk_has_extension (
    "VK_MSFT_layered_driver", extension_count, extensions);
#if defined(VK_USE_PLATFORM_IOS_MVK)
  GLEXT_VK_MVK_ios_surface = glext_vk_has_extension (
    "VK_MVK_ios_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
  GLEXT_VK_MVK_macos_surface = glext_vk_has_extension (
    "VK_MVK_macos_surface", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
  GLEXT_VK_NN_vi_surface
    = glext_vk_has_extension ("VK_NN_vi_surface", extension_count, extensions);

#endif
  GLEXT_VK_NVX_binary_import = glext_vk_has_extension (
    "VK_NVX_binary_import", extension_count, extensions);
  GLEXT_VK_NVX_image_view_handle = glext_vk_has_extension (
    "VK_NVX_image_view_handle", extension_count, extensions);
  GLEXT_VK_NVX_multiview_per_view_attributes = glext_vk_has_extension (
    "VK_NVX_multiview_per_view_attributes", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_NV_acquire_winrt_display = glext_vk_has_extension (
    "VK_NV_acquire_winrt_display", extension_count, extensions);

#endif
  GLEXT_VK_NV_clip_space_w_scaling = glext_vk_has_extension (
    "VK_NV_clip_space_w_scaling", extension_count, extensions);
  GLEXT_VK_NV_cluster_acceleration_structure = glext_vk_has_extension (
    "VK_NV_cluster_acceleration_structure", extension_count, extensions);
  GLEXT_VK_NV_command_buffer_inheritance = glext_vk_has_extension (
    "VK_NV_command_buffer_inheritance", extension_count, extensions);
  GLEXT_VK_NV_compute_shader_derivatives = glext_vk_has_extension (
    "VK_NV_compute_shader_derivatives", extension_count, extensions);
  GLEXT_VK_NV_cooperative_matrix = glext_vk_has_extension (
    "VK_NV_cooperative_matrix", extension_count, extensions);
  GLEXT_VK_NV_cooperative_matrix2 = glext_vk_has_extension (
    "VK_NV_cooperative_matrix2", extension_count, extensions);
  GLEXT_VK_NV_cooperative_vector = glext_vk_has_extension (
    "VK_NV_cooperative_vector", extension_count, extensions);
  GLEXT_VK_NV_copy_memory_indirect = glext_vk_has_extension (
    "VK_NV_copy_memory_indirect", extension_count, extensions);
  GLEXT_VK_NV_corner_sampled_image = glext_vk_has_extension (
    "VK_NV_corner_sampled_image", extension_count, extensions);
  GLEXT_VK_NV_coverage_reduction_mode = glext_vk_has_extension (
    "VK_NV_coverage_reduction_mode", extension_count, extensions);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEXT_VK_NV_cuda_kernel_launch = glext_vk_has_extension (
    "VK_NV_cuda_kernel_launch", extension_count, extensions);

#endif
  GLEXT_VK_NV_dedicated_allocation = glext_vk_has_extension (
    "VK_NV_dedicated_allocation", extension_count, extensions);
  GLEXT_VK_NV_dedicated_allocation_image_aliasing = glext_vk_has_extension (
    "VK_NV_dedicated_allocation_image_aliasing", extension_count, extensions);
  GLEXT_VK_NV_descriptor_pool_overallocation = glext_vk_has_extension (
    "VK_NV_descriptor_pool_overallocation", extension_count, extensions);
  GLEXT_VK_NV_device_diagnostic_checkpoints = glext_vk_has_extension (
    "VK_NV_device_diagnostic_checkpoints", extension_count, extensions);
  GLEXT_VK_NV_device_diagnostics_config = glext_vk_has_extension (
    "VK_NV_device_diagnostics_config", extension_count, extensions);
  GLEXT_VK_NV_device_generated_commands = glext_vk_has_extension (
    "VK_NV_device_generated_commands", extension_count, extensions);
  GLEXT_VK_NV_device_generated_commands_compute = glext_vk_has_extension (
    "VK_NV_device_generated_commands_compute", extension_count, extensions);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEXT_VK_NV_displacement_micromap = glext_vk_has_extension (
    "VK_NV_displacement_micromap", extension_count, extensions);

#endif
  GLEXT_VK_NV_display_stereo = glext_vk_has_extension (
    "VK_NV_display_stereo", extension_count, extensions);
  GLEXT_VK_NV_extended_sparse_address_space = glext_vk_has_extension (
    "VK_NV_extended_sparse_address_space", extension_count, extensions);
  GLEXT_VK_NV_external_compute_queue = glext_vk_has_extension (
    "VK_NV_external_compute_queue", extension_count, extensions);
  GLEXT_VK_NV_external_memory = glext_vk_has_extension (
    "VK_NV_external_memory", extension_count, extensions);
  GLEXT_VK_NV_external_memory_capabilities = glext_vk_has_extension (
    "VK_NV_external_memory_capabilities", extension_count, extensions);
  GLEXT_VK_NV_external_memory_rdma = glext_vk_has_extension (
    "VK_NV_external_memory_rdma", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_NV_external_memory_win32 = glext_vk_has_extension (
    "VK_NV_external_memory_win32", extension_count, extensions);

#endif
  GLEXT_VK_NV_fill_rectangle = glext_vk_has_extension (
    "VK_NV_fill_rectangle", extension_count, extensions);
  GLEXT_VK_NV_fragment_coverage_to_color = glext_vk_has_extension (
    "VK_NV_fragment_coverage_to_color", extension_count, extensions);
  GLEXT_VK_NV_fragment_shader_barycentric = glext_vk_has_extension (
    "VK_NV_fragment_shader_barycentric", extension_count, extensions);
  GLEXT_VK_NV_fragment_shading_rate_enums = glext_vk_has_extension (
    "VK_NV_fragment_shading_rate_enums", extension_count, extensions);
  GLEXT_VK_NV_framebuffer_mixed_samples = glext_vk_has_extension (
    "VK_NV_framebuffer_mixed_samples", extension_count, extensions);
  GLEXT_VK_NV_geometry_shader_passthrough = glext_vk_has_extension (
    "VK_NV_geometry_shader_passthrough", extension_count, extensions);
  GLEXT_VK_NV_glsl_shader = glext_vk_has_extension (
    "VK_NV_glsl_shader", extension_count, extensions);
  GLEXT_VK_NV_inherited_viewport_scissor = glext_vk_has_extension (
    "VK_NV_inherited_viewport_scissor", extension_count, extensions);
  GLEXT_VK_NV_linear_color_attachment = glext_vk_has_extension (
    "VK_NV_linear_color_attachment", extension_count, extensions);
  GLEXT_VK_NV_low_latency = glext_vk_has_extension (
    "VK_NV_low_latency", extension_count, extensions);
  GLEXT_VK_NV_low_latency2 = glext_vk_has_extension (
    "VK_NV_low_latency2", extension_count, extensions);
  GLEXT_VK_NV_memory_decompression = glext_vk_has_extension (
    "VK_NV_memory_decompression", extension_count, extensions);
  GLEXT_VK_NV_mesh_shader = glext_vk_has_extension (
    "VK_NV_mesh_shader", extension_count, extensions);
  GLEXT_VK_NV_optical_flow = glext_vk_has_extension (
    "VK_NV_optical_flow", extension_count, extensions);
  GLEXT_VK_NV_partitioned_acceleration_structure = glext_vk_has_extension (
    "VK_NV_partitioned_acceleration_structure", extension_count, extensions);
  GLEXT_VK_NV_per_stage_descriptor_set = glext_vk_has_extension (
    "VK_NV_per_stage_descriptor_set", extension_count, extensions);
  GLEXT_VK_NV_present_barrier = glext_vk_has_extension (
    "VK_NV_present_barrier", extension_count, extensions);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  GLEXT_VK_NV_present_metering = glext_vk_has_extension (
    "VK_NV_present_metering", extension_count, extensions);

#endif
  GLEXT_VK_NV_raw_access_chains = glext_vk_has_extension (
    "VK_NV_raw_access_chains", extension_count, extensions);
  GLEXT_VK_NV_ray_tracing = glext_vk_has_extension (
    "VK_NV_ray_tracing", extension_count, extensions);
  GLEXT_VK_NV_ray_tracing_invocation_reorder = glext_vk_has_extension (
    "VK_NV_ray_tracing_invocation_reorder", extension_count, extensions);
  GLEXT_VK_NV_ray_tracing_linear_swept_spheres = glext_vk_has_extension (
    "VK_NV_ray_tracing_linear_swept_spheres", extension_count, extensions);
  GLEXT_VK_NV_ray_tracing_motion_blur = glext_vk_has_extension (
    "VK_NV_ray_tracing_motion_blur", extension_count, extensions);
  GLEXT_VK_NV_ray_tracing_validation = glext_vk_has_extension (
    "VK_NV_ray_tracing_validation", extension_count, extensions);
  GLEXT_VK_NV_representative_fragment_test = glext_vk_has_extension (
    "VK_NV_representative_fragment_test", extension_count, extensions);
  GLEXT_VK_NV_sample_mask_override_coverage = glext_vk_has_extension (
    "VK_NV_sample_mask_override_coverage", extension_count, extensions);
  GLEXT_VK_NV_scissor_exclusive = glext_vk_has_extension (
    "VK_NV_scissor_exclusive", extension_count, extensions);
  GLEXT_VK_NV_shader_atomic_float16_vector = glext_vk_has_extension (
    "VK_NV_shader_atomic_float16_vector", extension_count, extensions);
  GLEXT_VK_NV_shader_image_footprint = glext_vk_has_extension (
    "VK_NV_shader_image_footprint", extension_count, extensions);
  GLEXT_VK_NV_shader_sm_builtins = glext_vk_has_extension (
    "VK_NV_shader_sm_builtins", extension_count, extensions);
  GLEXT_VK_NV_shader_subgroup_partitioned = glext_vk_has_extension (
    "VK_NV_shader_subgroup_partitioned", extension_count, extensions);
  GLEXT_VK_NV_shading_rate_image = glext_vk_has_extension (
    "VK_NV_shading_rate_image", extension_count, extensions);
  GLEXT_VK_NV_viewport_array2 = glext_vk_has_extension (
    "VK_NV_viewport_array2", extension_count, extensions);
  GLEXT_VK_NV_viewport_swizzle = glext_vk_has_extension (
    "VK_NV_viewport_swizzle", extension_count, extensions);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  GLEXT_VK_NV_win32_keyed_mutex = glext_vk_has_extension (
    "VK_NV_win32_keyed_mutex", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_OHOS)
  GLEXT_VK_OHOS_surface
    = glext_vk_has_extension ("VK_OHOS_surface", extension_count, extensions);

#endif
  GLEXT_VK_QCOM_filter_cubic_clamp = glext_vk_has_extension (
    "VK_QCOM_filter_cubic_clamp", extension_count, extensions);
  GLEXT_VK_QCOM_filter_cubic_weights = glext_vk_has_extension (
    "VK_QCOM_filter_cubic_weights", extension_count, extensions);
  GLEXT_VK_QCOM_fragment_density_map_offset = glext_vk_has_extension (
    "VK_QCOM_fragment_density_map_offset", extension_count, extensions);
  GLEXT_VK_QCOM_image_processing = glext_vk_has_extension (
    "VK_QCOM_image_processing", extension_count, extensions);
  GLEXT_VK_QCOM_image_processing2 = glext_vk_has_extension (
    "VK_QCOM_image_processing2", extension_count, extensions);
  GLEXT_VK_QCOM_multiview_per_view_render_areas = glext_vk_has_extension (
    "VK_QCOM_multiview_per_view_render_areas", extension_count, extensions);
  GLEXT_VK_QCOM_multiview_per_view_viewports = glext_vk_has_extension (
    "VK_QCOM_multiview_per_view_viewports", extension_count, extensions);
  GLEXT_VK_QCOM_render_pass_shader_resolve = glext_vk_has_extension (
    "VK_QCOM_render_pass_shader_resolve", extension_count, extensions);
  GLEXT_VK_QCOM_render_pass_store_ops = glext_vk_has_extension (
    "VK_QCOM_render_pass_store_ops", extension_count, extensions);
  GLEXT_VK_QCOM_render_pass_transform = glext_vk_has_extension (
    "VK_QCOM_render_pass_transform", extension_count, extensions);
  GLEXT_VK_QCOM_rotated_copy_commands = glext_vk_has_extension (
    "VK_QCOM_rotated_copy_commands", extension_count, extensions);
  GLEXT_VK_QCOM_tile_memory_heap = glext_vk_has_extension (
    "VK_QCOM_tile_memory_heap", extension_count, extensions);
  GLEXT_VK_QCOM_tile_properties = glext_vk_has_extension (
    "VK_QCOM_tile_properties", extension_count, extensions);
  GLEXT_VK_QCOM_tile_shading = glext_vk_has_extension (
    "VK_QCOM_tile_shading", extension_count, extensions);
  GLEXT_VK_QCOM_ycbcr_degamma = glext_vk_has_extension (
    "VK_QCOM_ycbcr_degamma", extension_count, extensions);
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
  GLEXT_VK_QNX_external_memory_screen_buffer = glext_vk_has_extension (
    "VK_QNX_external_memory_screen_buffer", extension_count, extensions);

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
  GLEXT_VK_QNX_screen_surface = glext_vk_has_extension (
    "VK_QNX_screen_surface", extension_count, extensions);

#endif
  GLEXT_VK_SEC_amigo_profiling = glext_vk_has_extension (
    "VK_SEC_amigo_profiling", extension_count, extensions);
  GLEXT_VK_SEC_pipeline_cache_incremental_mode = glext_vk_has_extension (
    "VK_SEC_pipeline_cache_incremental_mode", extension_count, extensions);
  GLEXT_VK_VALVE_descriptor_set_host_mapping = glext_vk_has_extension (
    "VK_VALVE_descriptor_set_host_mapping", extension_count, extensions);
  GLEXT_VK_VALVE_fragment_density_map_layered = glext_vk_has_extension (
    "VK_VALVE_fragment_density_map_layered", extension_count, extensions);
  GLEXT_VK_VALVE_mutable_descriptor_type = glext_vk_has_extension (
    "VK_VALVE_mutable_descriptor_type", extension_count, extensions);

  GLEXT_UNUSED (&glext_vk_has_extension);

  glext_vk_free_extensions (extension_count, extensions);

  return 1;
}

static int
glext_vk_find_core_vulkan (VkPhysicalDevice physical_device) {
  int major = 1;
  int minor = 0;

#ifdef VK_VERSION_1_1
  if (glext_vkEnumerateInstanceVersion != NULL) {
    uint32_t version;
    VkResult result;

    result = glext_vkEnumerateInstanceVersion (&version);
    if (result == VK_SUCCESS) {
      major = (int)VK_VERSION_MAJOR (version);
      minor = (int)VK_VERSION_MINOR (version);
    }
  }
#endif

  if (physical_device != NULL && glext_vkGetPhysicalDeviceProperties != NULL) {
    VkPhysicalDeviceProperties properties;
    glext_vkGetPhysicalDeviceProperties (physical_device, &properties);

    major = (int)VK_VERSION_MAJOR (properties.apiVersion);
    minor = (int)VK_VERSION_MINOR (properties.apiVersion);
  }

  GLEXT_VK_VERSION_1_0 = (major == 1 && minor >= 0) || major > 1;
  GLEXT_VK_VERSION_1_1 = (major == 1 && minor >= 1) || major > 1;
  GLEXT_VK_VERSION_1_2 = (major == 1 && minor >= 2) || major > 1;
  GLEXT_VK_VERSION_1_3 = (major == 1 && minor >= 3) || major > 1;
  GLEXT_VK_VERSION_1_4 = (major == 1 && minor >= 4) || major > 1;

  return GLEXT_MAKE_VERSION (major, minor);
}

int
glext_LoadVulkanUserPtr (VkPhysicalDevice physical_device,
                         GLADuserptrloadfunc load, void* userptr) {
  int version;

#ifdef VK_VERSION_1_1
  glext_vkEnumerateInstanceVersion = (PFN_vkEnumerateInstanceVersion)load (
    userptr, "vkEnumerateInstanceVersion");
#endif
  version = glext_vk_find_core_vulkan (physical_device);
  if (!version) {
    return 0;
  }

  glext_vk_load_VK_VERSION_1_0 (load, userptr);
  glext_vk_load_VK_VERSION_1_1 (load, userptr);
  glext_vk_load_VK_VERSION_1_2 (load, userptr);
  glext_vk_load_VK_VERSION_1_3 (load, userptr);
  glext_vk_load_VK_VERSION_1_4 (load, userptr);

  if (!glext_vk_find_extensions_vulkan (physical_device))
    return 0;
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  glext_vk_load_VK_AMDX_shader_enqueue (load, userptr);

#endif
  glext_vk_load_VK_AMD_anti_lag (load, userptr);
  glext_vk_load_VK_AMD_buffer_marker (load, userptr);
  glext_vk_load_VK_AMD_display_native_hdr (load, userptr);
  glext_vk_load_VK_AMD_draw_indirect_count (load, userptr);
  glext_vk_load_VK_AMD_shader_info (load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  glext_vk_load_VK_ANDROID_external_memory_android_hardware_buffer (load,
                                                                    userptr);

#endif
  glext_vk_load_VK_ARM_data_graph (load, userptr);
  glext_vk_load_VK_ARM_tensors (load, userptr);
  glext_vk_load_VK_EXT_acquire_drm_display (load, userptr);
#if defined(VK_USE_PLATFORM_XLIB_XRANDR_EXT)
  glext_vk_load_VK_EXT_acquire_xlib_display (load, userptr);

#endif
  glext_vk_load_VK_EXT_attachment_feedback_loop_dynamic_state (load, userptr);
  glext_vk_load_VK_EXT_buffer_device_address (load, userptr);
  glext_vk_load_VK_EXT_calibrated_timestamps (load, userptr);
  glext_vk_load_VK_EXT_color_write_enable (load, userptr);
  glext_vk_load_VK_EXT_conditional_rendering (load, userptr);
  glext_vk_load_VK_EXT_debug_marker (load, userptr);
  glext_vk_load_VK_EXT_debug_report (load, userptr);
  glext_vk_load_VK_EXT_debug_utils (load, userptr);
  glext_vk_load_VK_EXT_depth_bias_control (load, userptr);
  glext_vk_load_VK_EXT_depth_clamp_control (load, userptr);
  glext_vk_load_VK_EXT_descriptor_buffer (load, userptr);
  glext_vk_load_VK_EXT_device_fault (load, userptr);
  glext_vk_load_VK_EXT_device_generated_commands (load, userptr);
  glext_vk_load_VK_EXT_direct_mode_display (load, userptr);
#if defined(VK_USE_PLATFORM_DIRECTFB_EXT)
  glext_vk_load_VK_EXT_directfb_surface (load, userptr);

#endif
  glext_vk_load_VK_EXT_discard_rectangles (load, userptr);
  glext_vk_load_VK_EXT_display_control (load, userptr);
  glext_vk_load_VK_EXT_display_surface_counter (load, userptr);
  glext_vk_load_VK_EXT_extended_dynamic_state (load, userptr);
  glext_vk_load_VK_EXT_extended_dynamic_state2 (load, userptr);
  glext_vk_load_VK_EXT_extended_dynamic_state3 (load, userptr);
  glext_vk_load_VK_EXT_external_memory_host (load, userptr);
#if defined(VK_USE_PLATFORM_METAL_EXT)
  glext_vk_load_VK_EXT_external_memory_metal (load, userptr);

#endif
  glext_vk_load_VK_EXT_fragment_density_map_offset (load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_EXT_full_screen_exclusive (load, userptr);

#endif
  glext_vk_load_VK_EXT_hdr_metadata (load, userptr);
  glext_vk_load_VK_EXT_headless_surface (load, userptr);
  glext_vk_load_VK_EXT_host_image_copy (load, userptr);
  glext_vk_load_VK_EXT_host_query_reset (load, userptr);
  glext_vk_load_VK_EXT_image_compression_control (load, userptr);
  glext_vk_load_VK_EXT_image_drm_format_modifier (load, userptr);
  glext_vk_load_VK_EXT_line_rasterization (load, userptr);
  glext_vk_load_VK_EXT_mesh_shader (load, userptr);
#if defined(VK_USE_PLATFORM_METAL_EXT)
  glext_vk_load_VK_EXT_metal_objects (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_METAL_EXT)
  glext_vk_load_VK_EXT_metal_surface (load, userptr);

#endif
  glext_vk_load_VK_EXT_multi_draw (load, userptr);
  glext_vk_load_VK_EXT_opacity_micromap (load, userptr);
  glext_vk_load_VK_EXT_pageable_device_local_memory (load, userptr);
  glext_vk_load_VK_EXT_pipeline_properties (load, userptr);
  glext_vk_load_VK_EXT_private_data (load, userptr);
  glext_vk_load_VK_EXT_sample_locations (load, userptr);
  glext_vk_load_VK_EXT_shader_module_identifier (load, userptr);
  glext_vk_load_VK_EXT_shader_object (load, userptr);
  glext_vk_load_VK_EXT_swapchain_maintenance1 (load, userptr);
  glext_vk_load_VK_EXT_tooling_info (load, userptr);
  glext_vk_load_VK_EXT_transform_feedback (load, userptr);
  glext_vk_load_VK_EXT_validation_cache (load, userptr);
  glext_vk_load_VK_EXT_vertex_input_dynamic_state (load, userptr);
#if defined(VK_USE_PLATFORM_FUCHSIA)
  glext_vk_load_VK_FUCHSIA_buffer_collection (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  glext_vk_load_VK_FUCHSIA_external_memory (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  glext_vk_load_VK_FUCHSIA_external_semaphore (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_FUCHSIA)
  glext_vk_load_VK_FUCHSIA_imagepipe_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_GGP)
  glext_vk_load_VK_GGP_stream_descriptor_surface (load, userptr);

#endif
  glext_vk_load_VK_GOOGLE_display_timing (load, userptr);
  glext_vk_load_VK_HUAWEI_cluster_culling_shader (load, userptr);
  glext_vk_load_VK_HUAWEI_invocation_mask (load, userptr);
  glext_vk_load_VK_HUAWEI_subpass_shading (load, userptr);
  glext_vk_load_VK_INTEL_performance_query (load, userptr);
  glext_vk_load_VK_KHR_acceleration_structure (load, userptr);
#if defined(VK_USE_PLATFORM_ANDROID_KHR)
  glext_vk_load_VK_KHR_android_surface (load, userptr);

#endif
  glext_vk_load_VK_KHR_bind_memory2 (load, userptr);
  glext_vk_load_VK_KHR_buffer_device_address (load, userptr);
  glext_vk_load_VK_KHR_calibrated_timestamps (load, userptr);
  glext_vk_load_VK_KHR_cooperative_matrix (load, userptr);
  glext_vk_load_VK_KHR_copy_commands2 (load, userptr);
  glext_vk_load_VK_KHR_copy_memory_indirect (load, userptr);
  glext_vk_load_VK_KHR_create_renderpass2 (load, userptr);
  glext_vk_load_VK_KHR_deferred_host_operations (load, userptr);
  glext_vk_load_VK_KHR_descriptor_update_template (load, userptr);
  glext_vk_load_VK_KHR_device_group (load, userptr);
  glext_vk_load_VK_KHR_device_group_creation (load, userptr);
  glext_vk_load_VK_KHR_display (load, userptr);
  glext_vk_load_VK_KHR_display_swapchain (load, userptr);
  glext_vk_load_VK_KHR_draw_indirect_count (load, userptr);
  glext_vk_load_VK_KHR_dynamic_rendering (load, userptr);
  glext_vk_load_VK_KHR_dynamic_rendering_local_read (load, userptr);
  glext_vk_load_VK_KHR_external_fence_capabilities (load, userptr);
  glext_vk_load_VK_KHR_external_fence_fd (load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_KHR_external_fence_win32 (load, userptr);

#endif
  glext_vk_load_VK_KHR_external_memory_capabilities (load, userptr);
  glext_vk_load_VK_KHR_external_memory_fd (load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_KHR_external_memory_win32 (load, userptr);

#endif
  glext_vk_load_VK_KHR_external_semaphore_capabilities (load, userptr);
  glext_vk_load_VK_KHR_external_semaphore_fd (load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_KHR_external_semaphore_win32 (load, userptr);

#endif
  glext_vk_load_VK_KHR_fragment_shading_rate (load, userptr);
  glext_vk_load_VK_KHR_get_display_properties2 (load, userptr);
  glext_vk_load_VK_KHR_get_memory_requirements2 (load, userptr);
  glext_vk_load_VK_KHR_get_physical_device_properties2 (load, userptr);
  glext_vk_load_VK_KHR_get_surface_capabilities2 (load, userptr);
  glext_vk_load_VK_KHR_line_rasterization (load, userptr);
  glext_vk_load_VK_KHR_maintenance1 (load, userptr);
  glext_vk_load_VK_KHR_maintenance3 (load, userptr);
  glext_vk_load_VK_KHR_maintenance4 (load, userptr);
  glext_vk_load_VK_KHR_maintenance5 (load, userptr);
  glext_vk_load_VK_KHR_maintenance6 (load, userptr);
  glext_vk_load_VK_KHR_map_memory2 (load, userptr);
  glext_vk_load_VK_KHR_performance_query (load, userptr);
  glext_vk_load_VK_KHR_pipeline_binary (load, userptr);
  glext_vk_load_VK_KHR_pipeline_executable_properties (load, userptr);
  glext_vk_load_VK_KHR_present_wait (load, userptr);
  glext_vk_load_VK_KHR_present_wait2 (load, userptr);
  glext_vk_load_VK_KHR_push_descriptor (load, userptr);
  glext_vk_load_VK_KHR_ray_tracing_maintenance1 (load, userptr);
  glext_vk_load_VK_KHR_ray_tracing_pipeline (load, userptr);
  glext_vk_load_VK_KHR_sampler_ycbcr_conversion (load, userptr);
  glext_vk_load_VK_KHR_shared_presentable_image (load, userptr);
  glext_vk_load_VK_KHR_surface (load, userptr);
  glext_vk_load_VK_KHR_swapchain (load, userptr);
  glext_vk_load_VK_KHR_swapchain_maintenance1 (load, userptr);
  glext_vk_load_VK_KHR_synchronization2 (load, userptr);
  glext_vk_load_VK_KHR_timeline_semaphore (load, userptr);
#if defined(VK_USE_PLATFORM_WAYLAND_KHR)
  glext_vk_load_VK_KHR_wayland_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_KHR_win32_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XCB_KHR)
  glext_vk_load_VK_KHR_xcb_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_XLIB_KHR)
  glext_vk_load_VK_KHR_xlib_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_IOS_MVK)
  glext_vk_load_VK_MVK_ios_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_MACOS_MVK)
  glext_vk_load_VK_MVK_macos_surface (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_VI_NN)
  glext_vk_load_VK_NN_vi_surface (load, userptr);

#endif
  glext_vk_load_VK_NVX_binary_import (load, userptr);
  glext_vk_load_VK_NVX_image_view_handle (load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_NV_acquire_winrt_display (load, userptr);

#endif
  glext_vk_load_VK_NV_clip_space_w_scaling (load, userptr);
  glext_vk_load_VK_NV_cluster_acceleration_structure (load, userptr);
  glext_vk_load_VK_NV_cooperative_matrix (load, userptr);
  glext_vk_load_VK_NV_cooperative_matrix2 (load, userptr);
  glext_vk_load_VK_NV_cooperative_vector (load, userptr);
  glext_vk_load_VK_NV_copy_memory_indirect (load, userptr);
  glext_vk_load_VK_NV_coverage_reduction_mode (load, userptr);
#if defined(VK_ENABLE_BETA_EXTENSIONS)
  glext_vk_load_VK_NV_cuda_kernel_launch (load, userptr);

#endif
  glext_vk_load_VK_NV_device_diagnostic_checkpoints (load, userptr);
  glext_vk_load_VK_NV_device_generated_commands (load, userptr);
  glext_vk_load_VK_NV_device_generated_commands_compute (load, userptr);
  glext_vk_load_VK_NV_external_compute_queue (load, userptr);
  glext_vk_load_VK_NV_external_memory_capabilities (load, userptr);
  glext_vk_load_VK_NV_external_memory_rdma (load, userptr);
#if defined(VK_USE_PLATFORM_WIN32_KHR)
  glext_vk_load_VK_NV_external_memory_win32 (load, userptr);

#endif
  glext_vk_load_VK_NV_fragment_shading_rate_enums (load, userptr);
  glext_vk_load_VK_NV_low_latency2 (load, userptr);
  glext_vk_load_VK_NV_memory_decompression (load, userptr);
  glext_vk_load_VK_NV_mesh_shader (load, userptr);
  glext_vk_load_VK_NV_optical_flow (load, userptr);
  glext_vk_load_VK_NV_partitioned_acceleration_structure (load, userptr);
  glext_vk_load_VK_NV_ray_tracing (load, userptr);
  glext_vk_load_VK_NV_scissor_exclusive (load, userptr);
  glext_vk_load_VK_NV_shading_rate_image (load, userptr);
#if defined(VK_USE_PLATFORM_OHOS)
  glext_vk_load_VK_OHOS_surface (load, userptr);

#endif
  glext_vk_load_VK_QCOM_tile_memory_heap (load, userptr);
  glext_vk_load_VK_QCOM_tile_properties (load, userptr);
  glext_vk_load_VK_QCOM_tile_shading (load, userptr);
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
  glext_vk_load_VK_QNX_external_memory_screen_buffer (load, userptr);

#endif
#if defined(VK_USE_PLATFORM_SCREEN_QNX)
  glext_vk_load_VK_QNX_screen_surface (load, userptr);

#endif
  glext_vk_load_VK_VALVE_descriptor_set_host_mapping (load, userptr);

  glext_vk_resolve_aliases ();

  return version;
}

int
glext_LoadVulkan (VkPhysicalDevice physical_device, GLADloadfunc load) {
  return glext_LoadVulkanUserPtr (physical_device,
                                  glext_vk_get_proc_from_userptr,
                                  GLEXT_GNUC_EXTENSION (void*) load);
}

#ifdef GLEXT_VULKAN

#ifndef GLEXT_LOADER_LIBRARY_C_
#define GLEXT_LOADER_LIBRARY_C_

#include <stddef.h>
#include <stdlib.h>

#if GLEXT_PLATFORM_WIN32
#include <windows.h>
#else
#include <dlfcn.h>
#endif

static void*
glext_get_dlopen_handle (const char* lib_names[], int length) {
  void* handle = NULL;
  int i;

  for (i = 0; i < length; ++i) {
#if GLEXT_PLATFORM_WIN32
#if GLEXT_PLATFORM_UWP
    size_t buffer_size = (strlen (lib_names[i]) + 1) * sizeof (WCHAR);
    LPWSTR buffer = (LPWSTR)malloc (buffer_size);
    if (buffer != NULL) {
      int ret = MultiByteToWideChar (CP_ACP, 0, lib_names[i], -1, buffer,
                                     buffer_size);
      if (ret != 0) {
        handle = (void*)LoadPackagedLibrary (buffer, 0);
      }
      free ((void*)buffer);
    }
#else
    handle = (void*)LoadLibraryA (lib_names[i]);
#endif
#else
    handle = dlopen (lib_names[i], RTLD_LAZY | RTLD_LOCAL);
#endif
    if (handle != NULL) {
      return handle;
    }
  }

  return NULL;
}

static void
glext_close_dlopen_handle (void* handle) {
  if (handle != NULL) {
#if GLEXT_PLATFORM_WIN32
    FreeLibrary ((HMODULE)handle);
#else
    dlclose (handle);
#endif
  }
}

static GLADapiproc
glext_dlsym_handle (void* handle, const char* name) {
  if (handle == NULL) {
    return NULL;
  }

#if GLEXT_PLATFORM_WIN32
  return (GLADapiproc)GetProcAddress ((HMODULE)handle, name);
#else
  return GLEXT_GNUC_EXTENSION (GLADapiproc) dlsym (handle, name);
#endif
}

#endif /* GLEXT_LOADER_LIBRARY_C_ */

static const char* DEVICE_FUNCTIONS[] = {
  "vkAcquireFullScreenExclusiveModeEXT",
  "vkAcquireNextImage2KHR",
  "vkAcquireNextImageKHR",
  "vkAcquirePerformanceConfigurationINTEL",
  "vkAcquireProfilingLockKHR",
  "vkAllocateCommandBuffers",
  "vkAllocateDescriptorSets",
  "vkAllocateMemory",
  "vkAntiLagUpdateAMD",
  "vkBeginCommandBuffer",
  "vkBindAccelerationStructureMemoryNV",
  "vkBindBufferMemory",
  "vkBindBufferMemory2",
  "vkBindBufferMemory2KHR",
  "vkBindDataGraphPipelineSessionMemoryARM",
  "vkBindImageMemory",
  "vkBindImageMemory2",
  "vkBindImageMemory2KHR",
  "vkBindOpticalFlowSessionImageNV",
  "vkBindTensorMemoryARM",
  "vkBuildAccelerationStructuresKHR",
  "vkBuildMicromapsEXT",
  "vkCmdBeginConditionalRenderingEXT",
  "vkCmdBeginDebugUtilsLabelEXT",
  "vkCmdBeginPerTileExecutionQCOM",
  "vkCmdBeginQuery",
  "vkCmdBeginQueryIndexedEXT",
  "vkCmdBeginRenderPass",
  "vkCmdBeginRenderPass2",
  "vkCmdBeginRenderPass2KHR",
  "vkCmdBeginRendering",
  "vkCmdBeginRenderingKHR",
  "vkCmdBeginTransformFeedbackEXT",
  "vkCmdBindDescriptorBufferEmbeddedSamplers2EXT",
  "vkCmdBindDescriptorBufferEmbeddedSamplersEXT",
  "vkCmdBindDescriptorBuffersEXT",
  "vkCmdBindDescriptorSets",
  "vkCmdBindDescriptorSets2",
  "vkCmdBindDescriptorSets2KHR",
  "vkCmdBindIndexBuffer",
  "vkCmdBindIndexBuffer2",
  "vkCmdBindIndexBuffer2KHR",
  "vkCmdBindInvocationMaskHUAWEI",
  "vkCmdBindPipeline",
  "vkCmdBindPipelineShaderGroupNV",
  "vkCmdBindShadersEXT",
  "vkCmdBindShadingRateImageNV",
  "vkCmdBindTileMemoryQCOM",
  "vkCmdBindTransformFeedbackBuffersEXT",
  "vkCmdBindVertexBuffers",
  "vkCmdBindVertexBuffers2",
  "vkCmdBindVertexBuffers2EXT",
  "vkCmdBlitImage",
  "vkCmdBlitImage2",
  "vkCmdBlitImage2KHR",
  "vkCmdBuildAccelerationStructureNV",
  "vkCmdBuildAccelerationStructuresIndirectKHR",
  "vkCmdBuildAccelerationStructuresKHR",
  "vkCmdBuildClusterAccelerationStructureIndirectNV",
  "vkCmdBuildMicromapsEXT",
  "vkCmdBuildPartitionedAccelerationStructuresNV",
  "vkCmdClearAttachments",
  "vkCmdClearColorImage",
  "vkCmdClearDepthStencilImage",
  "vkCmdConvertCooperativeVectorMatrixNV",
  "vkCmdCopyAccelerationStructureKHR",
  "vkCmdCopyAccelerationStructureNV",
  "vkCmdCopyAccelerationStructureToMemoryKHR",
  "vkCmdCopyBuffer",
  "vkCmdCopyBuffer2",
  "vkCmdCopyBuffer2KHR",
  "vkCmdCopyBufferToImage",
  "vkCmdCopyBufferToImage2",
  "vkCmdCopyBufferToImage2KHR",
  "vkCmdCopyImage",
  "vkCmdCopyImage2",
  "vkCmdCopyImage2KHR",
  "vkCmdCopyImageToBuffer",
  "vkCmdCopyImageToBuffer2",
  "vkCmdCopyImageToBuffer2KHR",
  "vkCmdCopyMemoryIndirectKHR",
  "vkCmdCopyMemoryIndirectNV",
  "vkCmdCopyMemoryToAccelerationStructureKHR",
  "vkCmdCopyMemoryToImageIndirectKHR",
  "vkCmdCopyMemoryToImageIndirectNV",
  "vkCmdCopyMemoryToMicromapEXT",
  "vkCmdCopyMicromapEXT",
  "vkCmdCopyMicromapToMemoryEXT",
  "vkCmdCopyQueryPoolResults",
  "vkCmdCopyTensorARM",
  "vkCmdCuLaunchKernelNVX",
  "vkCmdCudaLaunchKernelNV",
  "vkCmdDebugMarkerBeginEXT",
  "vkCmdDebugMarkerEndEXT",
  "vkCmdDebugMarkerInsertEXT",
  "vkCmdDecompressMemoryIndirectCountNV",
  "vkCmdDecompressMemoryNV",
  "vkCmdDispatch",
  "vkCmdDispatchBase",
  "vkCmdDispatchBaseKHR",
  "vkCmdDispatchDataGraphARM",
  "vkCmdDispatchGraphAMDX",
  "vkCmdDispatchGraphIndirectAMDX",
  "vkCmdDispatchGraphIndirectCountAMDX",
  "vkCmdDispatchIndirect",
  "vkCmdDispatchTileQCOM",
  "vkCmdDraw",
  "vkCmdDrawClusterHUAWEI",
  "vkCmdDrawClusterIndirectHUAWEI",
  "vkCmdDrawIndexed",
  "vkCmdDrawIndexedIndirect",
  "vkCmdDrawIndexedIndirectCount",
  "vkCmdDrawIndexedIndirectCountAMD",
  "vkCmdDrawIndexedIndirectCountKHR",
  "vkCmdDrawIndirect",
  "vkCmdDrawIndirectByteCountEXT",
  "vkCmdDrawIndirectCount",
  "vkCmdDrawIndirectCountAMD",
  "vkCmdDrawIndirectCountKHR",
  "vkCmdDrawMeshTasksEXT",
  "vkCmdDrawMeshTasksIndirectCountEXT",
  "vkCmdDrawMeshTasksIndirectCountNV",
  "vkCmdDrawMeshTasksIndirectEXT",
  "vkCmdDrawMeshTasksIndirectNV",
  "vkCmdDrawMeshTasksNV",
  "vkCmdDrawMultiEXT",
  "vkCmdDrawMultiIndexedEXT",
  "vkCmdEndConditionalRenderingEXT",
  "vkCmdEndDebugUtilsLabelEXT",
  "vkCmdEndPerTileExecutionQCOM",
  "vkCmdEndQuery",
  "vkCmdEndQueryIndexedEXT",
  "vkCmdEndRenderPass",
  "vkCmdEndRenderPass2",
  "vkCmdEndRenderPass2KHR",
  "vkCmdEndRendering",
  "vkCmdEndRendering2EXT",
  "vkCmdEndRenderingKHR",
  "vkCmdEndTransformFeedbackEXT",
  "vkCmdExecuteCommands",
  "vkCmdExecuteGeneratedCommandsEXT",
  "vkCmdExecuteGeneratedCommandsNV",
  "vkCmdFillBuffer",
  "vkCmdInitializeGraphScratchMemoryAMDX",
  "vkCmdInsertDebugUtilsLabelEXT",
  "vkCmdNextSubpass",
  "vkCmdNextSubpass2",
  "vkCmdNextSubpass2KHR",
  "vkCmdOpticalFlowExecuteNV",
  "vkCmdPipelineBarrier",
  "vkCmdPipelineBarrier2",
  "vkCmdPipelineBarrier2KHR",
  "vkCmdPreprocessGeneratedCommandsEXT",
  "vkCmdPreprocessGeneratedCommandsNV",
  "vkCmdPushConstants",
  "vkCmdPushConstants2",
  "vkCmdPushConstants2KHR",
  "vkCmdPushDescriptorSet",
  "vkCmdPushDescriptorSet2",
  "vkCmdPushDescriptorSet2KHR",
  "vkCmdPushDescriptorSetKHR",
  "vkCmdPushDescriptorSetWithTemplate",
  "vkCmdPushDescriptorSetWithTemplate2",
  "vkCmdPushDescriptorSetWithTemplate2KHR",
  "vkCmdPushDescriptorSetWithTemplateKHR",
  "vkCmdResetEvent",
  "vkCmdResetEvent2",
  "vkCmdResetEvent2KHR",
  "vkCmdResetQueryPool",
  "vkCmdResolveImage",
  "vkCmdResolveImage2",
  "vkCmdResolveImage2KHR",
  "vkCmdSetAlphaToCoverageEnableEXT",
  "vkCmdSetAlphaToOneEnableEXT",
  "vkCmdSetAttachmentFeedbackLoopEnableEXT",
  "vkCmdSetBlendConstants",
  "vkCmdSetCheckpointNV",
  "vkCmdSetCoarseSampleOrderNV",
  "vkCmdSetColorBlendAdvancedEXT",
  "vkCmdSetColorBlendEnableEXT",
  "vkCmdSetColorBlendEquationEXT",
  "vkCmdSetColorWriteEnableEXT",
  "vkCmdSetColorWriteMaskEXT",
  "vkCmdSetConservativeRasterizationModeEXT",
  "vkCmdSetCoverageModulationModeNV",
  "vkCmdSetCoverageModulationTableEnableNV",
  "vkCmdSetCoverageModulationTableNV",
  "vkCmdSetCoverageReductionModeNV",
  "vkCmdSetCoverageToColorEnableNV",
  "vkCmdSetCoverageToColorLocationNV",
  "vkCmdSetCullMode",
  "vkCmdSetCullModeEXT",
  "vkCmdSetDepthBias",
  "vkCmdSetDepthBias2EXT",
  "vkCmdSetDepthBiasEnable",
  "vkCmdSetDepthBiasEnableEXT",
  "vkCmdSetDepthBounds",
  "vkCmdSetDepthBoundsTestEnable",
  "vkCmdSetDepthBoundsTestEnableEXT",
  "vkCmdSetDepthClampEnableEXT",
  "vkCmdSetDepthClampRangeEXT",
  "vkCmdSetDepthClipEnableEXT",
  "vkCmdSetDepthClipNegativeOneToOneEXT",
  "vkCmdSetDepthCompareOp",
  "vkCmdSetDepthCompareOpEXT",
  "vkCmdSetDepthTestEnable",
  "vkCmdSetDepthTestEnableEXT",
  "vkCmdSetDepthWriteEnable",
  "vkCmdSetDepthWriteEnableEXT",
  "vkCmdSetDescriptorBufferOffsets2EXT",
  "vkCmdSetDescriptorBufferOffsetsEXT",
  "vkCmdSetDeviceMask",
  "vkCmdSetDeviceMaskKHR",
  "vkCmdSetDiscardRectangleEXT",
  "vkCmdSetDiscardRectangleEnableEXT",
  "vkCmdSetDiscardRectangleModeEXT",
  "vkCmdSetEvent",
  "vkCmdSetEvent2",
  "vkCmdSetEvent2KHR",
  "vkCmdSetExclusiveScissorEnableNV",
  "vkCmdSetExclusiveScissorNV",
  "vkCmdSetExtraPrimitiveOverestimationSizeEXT",
  "vkCmdSetFragmentShadingRateEnumNV",
  "vkCmdSetFragmentShadingRateKHR",
  "vkCmdSetFrontFace",
  "vkCmdSetFrontFaceEXT",
  "vkCmdSetLineRasterizationModeEXT",
  "vkCmdSetLineStipple",
  "vkCmdSetLineStippleEXT",
  "vkCmdSetLineStippleEnableEXT",
  "vkCmdSetLineStippleKHR",
  "vkCmdSetLineWidth",
  "vkCmdSetLogicOpEXT",
  "vkCmdSetLogicOpEnableEXT",
  "vkCmdSetPatchControlPointsEXT",
  "vkCmdSetPerformanceMarkerINTEL",
  "vkCmdSetPerformanceOverrideINTEL",
  "vkCmdSetPerformanceStreamMarkerINTEL",
  "vkCmdSetPolygonModeEXT",
  "vkCmdSetPrimitiveRestartEnable",
  "vkCmdSetPrimitiveRestartEnableEXT",
  "vkCmdSetPrimitiveTopology",
  "vkCmdSetPrimitiveTopologyEXT",
  "vkCmdSetProvokingVertexModeEXT",
  "vkCmdSetRasterizationSamplesEXT",
  "vkCmdSetRasterizationStreamEXT",
  "vkCmdSetRasterizerDiscardEnable",
  "vkCmdSetRasterizerDiscardEnableEXT",
  "vkCmdSetRayTracingPipelineStackSizeKHR",
  "vkCmdSetRenderingAttachmentLocations",
  "vkCmdSetRenderingAttachmentLocationsKHR",
  "vkCmdSetRenderingInputAttachmentIndices",
  "vkCmdSetRenderingInputAttachmentIndicesKHR",
  "vkCmdSetRepresentativeFragmentTestEnableNV",
  "vkCmdSetSampleLocationsEXT",
  "vkCmdSetSampleLocationsEnableEXT",
  "vkCmdSetSampleMaskEXT",
  "vkCmdSetScissor",
  "vkCmdSetScissorWithCount",
  "vkCmdSetScissorWithCountEXT",
  "vkCmdSetShadingRateImageEnableNV",
  "vkCmdSetStencilCompareMask",
  "vkCmdSetStencilOp",
  "vkCmdSetStencilOpEXT",
  "vkCmdSetStencilReference",
  "vkCmdSetStencilTestEnable",
  "vkCmdSetStencilTestEnableEXT",
  "vkCmdSetStencilWriteMask",
  "vkCmdSetTessellationDomainOriginEXT",
  "vkCmdSetVertexInputEXT",
  "vkCmdSetViewport",
  "vkCmdSetViewportShadingRatePaletteNV",
  "vkCmdSetViewportSwizzleNV",
  "vkCmdSetViewportWScalingEnableNV",
  "vkCmdSetViewportWScalingNV",
  "vkCmdSetViewportWithCount",
  "vkCmdSetViewportWithCountEXT",
  "vkCmdSubpassShadingHUAWEI",
  "vkCmdTraceRaysIndirect2KHR",
  "vkCmdTraceRaysIndirectKHR",
  "vkCmdTraceRaysKHR",
  "vkCmdTraceRaysNV",
  "vkCmdUpdateBuffer",
  "vkCmdUpdatePipelineIndirectBufferNV",
  "vkCmdWaitEvents",
  "vkCmdWaitEvents2",
  "vkCmdWaitEvents2KHR",
  "vkCmdWriteAccelerationStructuresPropertiesKHR",
  "vkCmdWriteAccelerationStructuresPropertiesNV",
  "vkCmdWriteBufferMarker2AMD",
  "vkCmdWriteBufferMarkerAMD",
  "vkCmdWriteMicromapsPropertiesEXT",
  "vkCmdWriteTimestamp",
  "vkCmdWriteTimestamp2",
  "vkCmdWriteTimestamp2KHR",
  "vkCompileDeferredNV",
  "vkConvertCooperativeVectorMatrixNV",
  "vkCopyAccelerationStructureKHR",
  "vkCopyAccelerationStructureToMemoryKHR",
  "vkCopyImageToImage",
  "vkCopyImageToImageEXT",
  "vkCopyImageToMemory",
  "vkCopyImageToMemoryEXT",
  "vkCopyMemoryToAccelerationStructureKHR",
  "vkCopyMemoryToImage",
  "vkCopyMemoryToImageEXT",
  "vkCopyMemoryToMicromapEXT",
  "vkCopyMicromapEXT",
  "vkCopyMicromapToMemoryEXT",
  "vkCreateAccelerationStructureKHR",
  "vkCreateAccelerationStructureNV",
  "vkCreateBuffer",
  "vkCreateBufferCollectionFUCHSIA",
  "vkCreateBufferView",
  "vkCreateCommandPool",
  "vkCreateComputePipelines",
  "vkCreateCuFunctionNVX",
  "vkCreateCuModuleNVX",
  "vkCreateCudaFunctionNV",
  "vkCreateCudaModuleNV",
  "vkCreateDataGraphPipelineSessionARM",
  "vkCreateDataGraphPipelinesARM",
  "vkCreateDeferredOperationKHR",
  "vkCreateDescriptorPool",
  "vkCreateDescriptorSetLayout",
  "vkCreateDescriptorUpdateTemplate",
  "vkCreateDescriptorUpdateTemplateKHR",
  "vkCreateEvent",
  "vkCreateExecutionGraphPipelinesAMDX",
  "vkCreateExternalComputeQueueNV",
  "vkCreateFence",
  "vkCreateFramebuffer",
  "vkCreateGraphicsPipelines",
  "vkCreateImage",
  "vkCreateImageView",
  "vkCreateIndirectCommandsLayoutEXT",
  "vkCreateIndirectCommandsLayoutNV",
  "vkCreateIndirectExecutionSetEXT",
  "vkCreateMicromapEXT",
  "vkCreateOpticalFlowSessionNV",
  "vkCreatePipelineBinariesKHR",
  "vkCreatePipelineCache",
  "vkCreatePipelineLayout",
  "vkCreatePrivateDataSlot",
  "vkCreatePrivateDataSlotEXT",
  "vkCreateQueryPool",
  "vkCreateRayTracingPipelinesKHR",
  "vkCreateRayTracingPipelinesNV",
  "vkCreateRenderPass",
  "vkCreateRenderPass2",
  "vkCreateRenderPass2KHR",
  "vkCreateSampler",
  "vkCreateSamplerYcbcrConversion",
  "vkCreateSamplerYcbcrConversionKHR",
  "vkCreateSemaphore",
  "vkCreateShaderModule",
  "vkCreateShadersEXT",
  "vkCreateSharedSwapchainsKHR",
  "vkCreateSwapchainKHR",
  "vkCreateTensorARM",
  "vkCreateTensorViewARM",
  "vkCreateValidationCacheEXT",
  "vkDebugMarkerSetObjectNameEXT",
  "vkDebugMarkerSetObjectTagEXT",
  "vkDeferredOperationJoinKHR",
  "vkDestroyAccelerationStructureKHR",
  "vkDestroyAccelerationStructureNV",
  "vkDestroyBuffer",
  "vkDestroyBufferCollectionFUCHSIA",
  "vkDestroyBufferView",
  "vkDestroyCommandPool",
  "vkDestroyCuFunctionNVX",
  "vkDestroyCuModuleNVX",
  "vkDestroyCudaFunctionNV",
  "vkDestroyCudaModuleNV",
  "vkDestroyDataGraphPipelineSessionARM",
  "vkDestroyDeferredOperationKHR",
  "vkDestroyDescriptorPool",
  "vkDestroyDescriptorSetLayout",
  "vkDestroyDescriptorUpdateTemplate",
  "vkDestroyDescriptorUpdateTemplateKHR",
  "vkDestroyDevice",
  "vkDestroyEvent",
  "vkDestroyExternalComputeQueueNV",
  "vkDestroyFence",
  "vkDestroyFramebuffer",
  "vkDestroyImage",
  "vkDestroyImageView",
  "vkDestroyIndirectCommandsLayoutEXT",
  "vkDestroyIndirectCommandsLayoutNV",
  "vkDestroyIndirectExecutionSetEXT",
  "vkDestroyMicromapEXT",
  "vkDestroyOpticalFlowSessionNV",
  "vkDestroyPipeline",
  "vkDestroyPipelineBinaryKHR",
  "vkDestroyPipelineCache",
  "vkDestroyPipelineLayout",
  "vkDestroyPrivateDataSlot",
  "vkDestroyPrivateDataSlotEXT",
  "vkDestroyQueryPool",
  "vkDestroyRenderPass",
  "vkDestroySampler",
  "vkDestroySamplerYcbcrConversion",
  "vkDestroySamplerYcbcrConversionKHR",
  "vkDestroySemaphore",
  "vkDestroyShaderEXT",
  "vkDestroyShaderModule",
  "vkDestroySwapchainKHR",
  "vkDestroyTensorARM",
  "vkDestroyTensorViewARM",
  "vkDestroyValidationCacheEXT",
  "vkDeviceWaitIdle",
  "vkDisplayPowerControlEXT",
  "vkEndCommandBuffer",
  "vkExportMetalObjectsEXT",
  "vkFlushMappedMemoryRanges",
  "vkFreeCommandBuffers",
  "vkFreeDescriptorSets",
  "vkFreeMemory",
  "vkGetAccelerationStructureBuildSizesKHR",
  "vkGetAccelerationStructureDeviceAddressKHR",
  "vkGetAccelerationStructureHandleNV",
  "vkGetAccelerationStructureMemoryRequirementsNV",
  "vkGetAccelerationStructureOpaqueCaptureDescriptorDataEXT",
  "vkGetAndroidHardwareBufferPropertiesANDROID",
  "vkGetBufferCollectionPropertiesFUCHSIA",
  "vkGetBufferDeviceAddress",
  "vkGetBufferDeviceAddressEXT",
  "vkGetBufferDeviceAddressKHR",
  "vkGetBufferMemoryRequirements",
  "vkGetBufferMemoryRequirements2",
  "vkGetBufferMemoryRequirements2KHR",
  "vkGetBufferOpaqueCaptureAddress",
  "vkGetBufferOpaqueCaptureAddressKHR",
  "vkGetBufferOpaqueCaptureDescriptorDataEXT",
  "vkGetCalibratedTimestampsEXT",
  "vkGetCalibratedTimestampsKHR",
  "vkGetClusterAccelerationStructureBuildSizesNV",
  "vkGetCudaModuleCacheNV",
  "vkGetDataGraphPipelineAvailablePropertiesARM",
  "vkGetDataGraphPipelinePropertiesARM",
  "vkGetDataGraphPipelineSessionBindPointRequirementsARM",
  "vkGetDataGraphPipelineSessionMemoryRequirementsARM",
  "vkGetDeferredOperationMaxConcurrencyKHR",
  "vkGetDeferredOperationResultKHR",
  "vkGetDescriptorEXT",
  "vkGetDescriptorSetHostMappingVALVE",
  "vkGetDescriptorSetLayoutBindingOffsetEXT",
  "vkGetDescriptorSetLayoutHostMappingInfoVALVE",
  "vkGetDescriptorSetLayoutSizeEXT",
  "vkGetDescriptorSetLayoutSupport",
  "vkGetDescriptorSetLayoutSupportKHR",
  "vkGetDeviceAccelerationStructureCompatibilityKHR",
  "vkGetDeviceBufferMemoryRequirements",
  "vkGetDeviceBufferMemoryRequirementsKHR",
  "vkGetDeviceFaultInfoEXT",
  "vkGetDeviceGroupPeerMemoryFeatures",
  "vkGetDeviceGroupPeerMemoryFeaturesKHR",
  "vkGetDeviceGroupPresentCapabilitiesKHR",
  "vkGetDeviceGroupSurfacePresentModes2EXT",
  "vkGetDeviceGroupSurfacePresentModesKHR",
  "vkGetDeviceImageMemoryRequirements",
  "vkGetDeviceImageMemoryRequirementsKHR",
  "vkGetDeviceImageSparseMemoryRequirements",
  "vkGetDeviceImageSparseMemoryRequirementsKHR",
  "vkGetDeviceImageSubresourceLayout",
  "vkGetDeviceImageSubresourceLayoutKHR",
  "vkGetDeviceMemoryCommitment",
  "vkGetDeviceMemoryOpaqueCaptureAddress",
  "vkGetDeviceMemoryOpaqueCaptureAddressKHR",
  "vkGetDeviceMicromapCompatibilityEXT",
  "vkGetDeviceProcAddr",
  "vkGetDeviceQueue",
  "vkGetDeviceQueue2",
  "vkGetDeviceSubpassShadingMaxWorkgroupSizeHUAWEI",
  "vkGetDeviceTensorMemoryRequirementsARM",
  "vkGetDynamicRenderingTilePropertiesQCOM",
  "vkGetEventStatus",
  "vkGetExecutionGraphPipelineNodeIndexAMDX",
  "vkGetExecutionGraphPipelineScratchSizeAMDX",
  "vkGetFenceFdKHR",
  "vkGetFenceStatus",
  "vkGetFenceWin32HandleKHR",
  "vkGetFramebufferTilePropertiesQCOM",
  "vkGetGeneratedCommandsMemoryRequirementsEXT",
  "vkGetGeneratedCommandsMemoryRequirementsNV",
  "vkGetImageDrmFormatModifierPropertiesEXT",
  "vkGetImageMemoryRequirements",
  "vkGetImageMemoryRequirements2",
  "vkGetImageMemoryRequirements2KHR",
  "vkGetImageOpaqueCaptureDescriptorDataEXT",
  "vkGetImageSparseMemoryRequirements",
  "vkGetImageSparseMemoryRequirements2",
  "vkGetImageSparseMemoryRequirements2KHR",
  "vkGetImageSubresourceLayout",
  "vkGetImageSubresourceLayout2",
  "vkGetImageSubresourceLayout2EXT",
  "vkGetImageSubresourceLayout2KHR",
  "vkGetImageViewAddressNVX",
  "vkGetImageViewHandle64NVX",
  "vkGetImageViewHandleNVX",
  "vkGetImageViewOpaqueCaptureDescriptorDataEXT",
  "vkGetLatencyTimingsNV",
  "vkGetMemoryAndroidHardwareBufferANDROID",
  "vkGetMemoryFdKHR",
  "vkGetMemoryFdPropertiesKHR",
  "vkGetMemoryHostPointerPropertiesEXT",
  "vkGetMemoryMetalHandleEXT",
  "vkGetMemoryMetalHandlePropertiesEXT",
  "vkGetMemoryRemoteAddressNV",
  "vkGetMemoryWin32HandleKHR",
  "vkGetMemoryWin32HandleNV",
  "vkGetMemoryWin32HandlePropertiesKHR",
  "vkGetMemoryZirconHandleFUCHSIA",
  "vkGetMemoryZirconHandlePropertiesFUCHSIA",
  "vkGetMicromapBuildSizesEXT",
  "vkGetPartitionedAccelerationStructuresBuildSizesNV",
  "vkGetPastPresentationTimingGOOGLE",
  "vkGetPerformanceParameterINTEL",
  "vkGetPipelineBinaryDataKHR",
  "vkGetPipelineCacheData",
  "vkGetPipelineExecutableInternalRepresentationsKHR",
  "vkGetPipelineExecutablePropertiesKHR",
  "vkGetPipelineExecutableStatisticsKHR",
  "vkGetPipelineIndirectDeviceAddressNV",
  "vkGetPipelineIndirectMemoryRequirementsNV",
  "vkGetPipelineKeyKHR",
  "vkGetPipelinePropertiesEXT",
  "vkGetPrivateData",
  "vkGetPrivateDataEXT",
  "vkGetQueryPoolResults",
  "vkGetQueueCheckpointData2NV",
  "vkGetQueueCheckpointDataNV",
  "vkGetRayTracingCaptureReplayShaderGroupHandlesKHR",
  "vkGetRayTracingShaderGroupHandlesKHR",
  "vkGetRayTracingShaderGroupHandlesNV",
  "vkGetRayTracingShaderGroupStackSizeKHR",
  "vkGetRefreshCycleDurationGOOGLE",
  "vkGetRenderAreaGranularity",
  "vkGetRenderingAreaGranularity",
  "vkGetRenderingAreaGranularityKHR",
  "vkGetSamplerOpaqueCaptureDescriptorDataEXT",
  "vkGetScreenBufferPropertiesQNX",
  "vkGetSemaphoreCounterValue",
  "vkGetSemaphoreCounterValueKHR",
  "vkGetSemaphoreFdKHR",
  "vkGetSemaphoreWin32HandleKHR",
  "vkGetSemaphoreZirconHandleFUCHSIA",
  "vkGetShaderBinaryDataEXT",
  "vkGetShaderInfoAMD",
  "vkGetShaderModuleCreateInfoIdentifierEXT",
  "vkGetShaderModuleIdentifierEXT",
  "vkGetSwapchainCounterEXT",
  "vkGetSwapchainImagesKHR",
  "vkGetSwapchainStatusKHR",
  "vkGetTensorMemoryRequirementsARM",
  "vkGetTensorOpaqueCaptureDescriptorDataARM",
  "vkGetTensorViewOpaqueCaptureDescriptorDataARM",
  "vkGetValidationCacheDataEXT",
  "vkImportFenceFdKHR",
  "vkImportFenceWin32HandleKHR",
  "vkImportSemaphoreFdKHR",
  "vkImportSemaphoreWin32HandleKHR",
  "vkImportSemaphoreZirconHandleFUCHSIA",
  "vkInitializePerformanceApiINTEL",
  "vkInvalidateMappedMemoryRanges",
  "vkLatencySleepNV",
  "vkMapMemory",
  "vkMapMemory2",
  "vkMapMemory2KHR",
  "vkMergePipelineCaches",
  "vkMergeValidationCachesEXT",
  "vkQueueBeginDebugUtilsLabelEXT",
  "vkQueueBindSparse",
  "vkQueueEndDebugUtilsLabelEXT",
  "vkQueueInsertDebugUtilsLabelEXT",
  "vkQueueNotifyOutOfBandNV",
  "vkQueuePresentKHR",
  "vkQueueSetPerformanceConfigurationINTEL",
  "vkQueueSubmit",
  "vkQueueSubmit2",
  "vkQueueSubmit2KHR",
  "vkQueueWaitIdle",
  "vkRegisterDeviceEventEXT",
  "vkRegisterDisplayEventEXT",
  "vkReleaseCapturedPipelineDataKHR",
  "vkReleaseFullScreenExclusiveModeEXT",
  "vkReleasePerformanceConfigurationINTEL",
  "vkReleaseProfilingLockKHR",
  "vkReleaseSwapchainImagesEXT",
  "vkReleaseSwapchainImagesKHR",
  "vkResetCommandBuffer",
  "vkResetCommandPool",
  "vkResetDescriptorPool",
  "vkResetEvent",
  "vkResetFences",
  "vkResetQueryPool",
  "vkResetQueryPoolEXT",
  "vkSetBufferCollectionBufferConstraintsFUCHSIA",
  "vkSetBufferCollectionImageConstraintsFUCHSIA",
  "vkSetDebugUtilsObjectNameEXT",
  "vkSetDebugUtilsObjectTagEXT",
  "vkSetDeviceMemoryPriorityEXT",
  "vkSetEvent",
  "vkSetHdrMetadataEXT",
  "vkSetLatencyMarkerNV",
  "vkSetLatencySleepModeNV",
  "vkSetLocalDimmingAMD",
  "vkSetPrivateData",
  "vkSetPrivateDataEXT",
  "vkSignalSemaphore",
  "vkSignalSemaphoreKHR",
  "vkTransitionImageLayout",
  "vkTransitionImageLayoutEXT",
  "vkTrimCommandPool",
  "vkTrimCommandPoolKHR",
  "vkUninitializePerformanceApiINTEL",
  "vkUnmapMemory",
  "vkUnmapMemory2",
  "vkUnmapMemory2KHR",
  "vkUpdateDescriptorSetWithTemplate",
  "vkUpdateDescriptorSetWithTemplateKHR",
  "vkUpdateDescriptorSets",
  "vkUpdateIndirectExecutionSetPipelineEXT",
  "vkUpdateIndirectExecutionSetShaderEXT",
  "vkWaitForFences",
  "vkWaitForPresent2KHR",
  "vkWaitForPresentKHR",
  "vkWaitSemaphores",
  "vkWaitSemaphoresKHR",
  "vkWriteAccelerationStructuresPropertiesKHR",
  "vkWriteMicromapsPropertiesEXT",
};

static int
glext_vulkan_is_device_function (const char* name) {
  /* Exists as a workaround for:
   * https://github.com/KhronosGroup/Vulkan-LoaderAndValidationLayers/issues/2323
   *
   * `vkGetDeviceProcAddr` does not return NULL for non-device functions.
   */
  int i;
  int length = sizeof (DEVICE_FUNCTIONS) / sizeof (DEVICE_FUNCTIONS[0]);

  for (i = 0; i < length; ++i) {
    if (strcmp (DEVICE_FUNCTIONS[i], name) == 0) {
      return 1;
    }
  }

  return 0;
}

struct _glext_vulkan_userptr {
  void* vk_handle;
  VkInstance vk_instance;
  VkDevice vk_device;
  PFN_vkGetInstanceProcAddr get_instance_proc_addr;
  PFN_vkGetDeviceProcAddr get_device_proc_addr;
};

static GLADapiproc
glext_vulkan_get_proc (void* vuserptr, const char* name) {
  struct _glext_vulkan_userptr userptr
    = *(struct _glext_vulkan_userptr*)vuserptr;
  PFN_vkVoidFunction result = NULL;

  if (userptr.vk_device != NULL && glext_vulkan_is_device_function (name)) {
    result = userptr.get_device_proc_addr (userptr.vk_device, name);
  }

  if (result == NULL && userptr.vk_instance != NULL) {
    result = userptr.get_instance_proc_addr (userptr.vk_instance, name);
  }

  if (result == NULL) {
    result = (PFN_vkVoidFunction)glext_dlsym_handle (userptr.vk_handle, name);
  }

  return (GLADapiproc)result;
}

static void* _glext_Vulkan_loader_handle = NULL;

static void*
glext_vulkan_dlopen_handle (void) {
  static const char* NAMES[] = {
#if GLEXT_PLATFORM_APPLE
    "libvulkan.1.dylib",
#elif GLEXT_PLATFORM_WIN32
    "vulkan-1.dll",
    "vulkan.dll",
#else
    "libvulkan.so.1",
    "libvulkan.so",
#endif
  };

  if (_glext_Vulkan_loader_handle == NULL) {
    _glext_Vulkan_loader_handle
      = glext_get_dlopen_handle (NAMES, sizeof (NAMES) / sizeof (NAMES[0]));
  }

  return _glext_Vulkan_loader_handle;
}

static struct _glext_vulkan_userptr
glext_vulkan_build_userptr (void* handle, VkInstance instance,
                            VkDevice device) {
  struct _glext_vulkan_userptr userptr;
  userptr.vk_handle = handle;
  userptr.vk_instance = instance;
  userptr.vk_device = device;
  userptr.get_instance_proc_addr
    = (PFN_vkGetInstanceProcAddr)glext_dlsym_handle (handle,
                                                     "vkGetInstanceProcAddr");
  userptr.get_device_proc_addr = (PFN_vkGetDeviceProcAddr)glext_dlsym_handle (
    handle, "vkGetDeviceProcAddr");
  return userptr;
}

int
glext_LoaderLoadVulkan (VkInstance instance, VkPhysicalDevice physical_device,
                        VkDevice device) {
  int version = 0;
  void* handle = NULL;
  int did_load = 0;
  struct _glext_vulkan_userptr userptr;

  did_load = _glext_Vulkan_loader_handle == NULL;
  handle = glext_vulkan_dlopen_handle ();
  if (handle != NULL) {
    userptr = glext_vulkan_build_userptr (handle, instance, device);

    if (userptr.get_instance_proc_addr != NULL
        && userptr.get_device_proc_addr != NULL) {
      version = glext_LoadVulkanUserPtr (physical_device,
                                         glext_vulkan_get_proc, &userptr);
    }

    if (!version && did_load) {
      glext_LoaderUnloadVulkan ();
    }
  }

  return version;
}

void
glext_LoaderUnloadVulkan (void) {
  if (_glext_Vulkan_loader_handle != NULL) {
    glext_close_dlopen_handle (_glext_Vulkan_loader_handle);
    _glext_Vulkan_loader_handle = NULL;
  }
}

#endif /* GLEXT_VULKAN */

#ifdef __cplusplus
}
#endif
