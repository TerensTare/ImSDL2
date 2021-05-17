#pragma once
#include "imgui.h"

// Macros for the supported backends:
// * IMSDL2_USE_DX11
// * IMSDL2_USE_OPENGL2
// * IMSDL2_USE_OPENGL3
// * IMSDL2_USE_VULKAN
// The DirectX11 backend is only available for Windows. If you instruct
// ImSDL2 to use this backend on Linux by using `#define IMSDL2_USE_DX11`
// a compile-time error will be shown.

// TODO:
// SDL2 + DirectX12
// SDL2 + Metal
// support for multiple viewports
// separate Clear from Render
// handle cases of multiple dedicated GPUs on Vulkan
// uniform way (across backends) of handling vsync
// vcpkg/conan port
// font-related functions (vulkan needs them?)
// merge NewFrame with Clear?

struct SDL_Window;
typedef union SDL_Event SDL_Event;

namespace ImSDL2
{
    // Special function wrapping SDL_Init and doing some "preparations" for OpenGL backends.
    // Please call this instead of SDL_Init.
    IMGUI_IMPL_API int InitSDL(ImU32 flags);

    IMGUI_IMPL_API bool CreateContext(SDL_Window *window);

    IMGUI_IMPL_API bool ProcessEvent(SDL_Window *window, const SDL_Event *event);

    IMGUI_IMPL_API void NewFrame(SDL_Window *window);
    IMGUI_IMPL_API void Render(SDL_Window *window, ImVec4 clear_color = ImVec4(0.45f, 0.55f, 0.60f, 1.00f),
                               bool vsync = false);

    IMGUI_IMPL_API void DestroyContext();
} // namespace ImSDL2