#include <iostream>
#include "controller.h"
#include "game.h"
#include "menu.h"
#include "renderer.h"
#include "barrier.h"
int main() {
  constexpr std::size_t kFramesPerSecond{60};
  constexpr std::size_t kMsPerFrame{1000 / kFramesPerSecond};
  constexpr std::size_t kScreenWidth{640};
  constexpr std::size_t kScreenHeight{640};
  constexpr std::size_t kGridWidth{32};
  constexpr std::size_t kGridHeight{32};

  bool restart = false;
  do{

  Renderer renderer(kScreenWidth, kScreenHeight, kGridWidth, kGridHeight);
  Controller controller;
  Game game(kGridWidth, kGridHeight);
  Menu menu(kGridWidth, kGridHeight);

  menu.Run(controller, renderer, kMsPerFrame);
  restart = game.Run(controller, renderer, kMsPerFrame);
  }while(restart);

  std::cout << "Game has terminated successfully!\n";
  return 0;
}