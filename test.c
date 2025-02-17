#include <SDL3/SDL.h>
#include <SDL3/SDL_vulkan.h>
#include <vulkan/vulkan.h>
#include <vulkan/vulkan_core.h>
#include <stdio.h>
#include <stdlib.h> // Include this for malloc and free

int main(int argc, char *argv[]) {
    if (SDL_Init(SDL_INIT_VIDEO) < 0) {
        printf("SDL could not initialize! SDL_Error: %s\n", SDL_GetError());
        return 1;
    }

    SDL_Window *window = SDL_CreateWindow("SDL3 Vulkan Example", 800, 600, SDL_WINDOW_VULKAN);
    if (window == NULL) {
        printf("Window could not be created! SDL_Error: %s\n", SDL_GetError());
        SDL_Quit();
        return 1;
    }

    // Check if Vulkan is supported
    uint32_t instanceExtensionCount = 0;
    SDL_Vulkan_GetInstanceExtensions(&instanceExtensionCount); // Correct call
    const char **instanceExtensions = malloc(instanceExtensionCount * sizeof(const char*));
    if (instanceExtensions == NULL) {
        printf("Failed to allocate memory for extensions!\n");
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    SDL_Vulkan_GetInstanceExtensions(&instanceExtensionCount); // Correct call

    VkInstanceCreateInfo createInfo = {};
    createInfo.sType = VK_STRUCTURE_TYPE_INSTANCE_CREATE_INFO;
    createInfo.enabledExtensionCount = instanceExtensionCount;
    createInfo.ppEnabledExtensionNames = instanceExtensions;

    VkInstance instance;
    if (vkCreateInstance(&createInfo, NULL, &instance) != VK_SUCCESS) {
        printf("Failed to create Vulkan instance!");
        free(instanceExtensions);
        SDL_DestroyWindow(window);
        SDL_Quit();
        return 1;
    }

    free(instanceExtensions);

    // Main loop flag
    int done = 0;
    SDL_Event event;

    while (!done) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_EVENT_QUIT) {
                done = 1;
            }
        }
        // Here you would typically set up your Vulkan rendering pipeline
    }

    vkDestroyInstance(instance, NULL);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
