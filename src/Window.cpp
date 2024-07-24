#include "Window.hpp"

namespace DadorEngine{
    Window::Window(
        const std::string windowTitle,
        int width,
        int height
        ) {
            m_window = SDL_CreateWindow(
            windowTitle.c_str(), // string representation as an c string (char array)
            width,
            height,
            0 //no flags for now
            );
        };
    
}