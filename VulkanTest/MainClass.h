#pragma once
#define GLFW_INCLUDE_VULKAN
#include <GLFW/glfw3.h>
#include <vector>

class MainClass
{
public:
    void run();

private:
    struct QueueFamilyIndices
    {
        uint32_t graphicsFamily;
    };
    
    void initVulkan();

    void initWindow();
    void createInstance();
    void mainLoop();
    void cleanup();
    bool checkValidationLayerSupport();
    void pickPhysicalDevice();
    bool isDeviceSuitable(VkPhysicalDevice device);
   // QueueFamilyIndices findQueueFamilies(VkPhysicalDevice device);

    std::vector<const char*> getRequiredExtensions();

    GLFWwindow* m_window = nullptr;
    uint32_t m_windowWidth = 800;
    uint32_t m_windowHeight = 600;
    VkInstance m_vulkanInstance;
    VkPhysicalDevice m_physicalDevice = VK_NULL_HANDLE;
};

