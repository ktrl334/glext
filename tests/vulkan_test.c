#include <glext/vulkan.h>

/*
KTRL.3 | 2026-06-20
---
@todo Use more vulkan functions from `glext/vulkan.h` to test them.
*/

int
main () {
  VkInstance vk_instance = {};
  VkPhysicalDevice vk_physical_device = {};
  VkDevice vk_device = {};
  if (!glext_LoaderLoadVulkan (vk_instance, vk_physical_device, vk_device)) {
    return 1;
  }

  glext_LoaderUnloadVulkan ();
}
