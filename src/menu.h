#ifndef MENU_H
#define MENU_H

#include "SDL.h"
#include "controller.h"
#include "renderer.h"

class Menu {
 public:
  Menu(std::size_t grid_width, std::size_t grid_height);
  void Run(Controller const &controller, Renderer &renderer,
           std::size_t target_frame_duration);

 private:
  void Update();
};

#endif