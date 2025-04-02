#include "outputtext.h"

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  std::vector<Output> word = createWordToGuess("TA");
  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    RenderTxt(&window, word);
    window.display();
  }
}
