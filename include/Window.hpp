#ifndef WINDOW_HPP
#define WINDOW_HPP

#include <string>

#include "DadorEngine.hpp"

namespace DadorEngine{
    class Window{
    private:
        SDL_Window* m_window;
        std::string m_windowTitle;
        
    public:
        Window(
            const std::string windowTitle,
            int width,
            int height
            );
    };
}
#endif