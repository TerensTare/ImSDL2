# ImSDL2

ImSDL2 is an open source "wrapper" of [imgui](https://github.com/ocornut/imgui) backends available for SDL2. It aims to provide a backend-independent yet simple interface for integrating ImGui on projects using SDL2 for rendering. The library code is designed to compile with the same compilers ImGui is tested (even old ones). At the time of writing, the library is highly experimental, so the API may (and probably will) break continuously.

### FAQ
**Q**: What backends are supported?

**A**: By now there are 4 backends supported: DirectX11, OpenGL2/3 and Vulkan, but other backends are planed to be supported on the future.

**Q**: How can/should I build the library?

**A**: You can to add `ImSDL2.cpp` to your project and that's it, just like you do with ImGui.