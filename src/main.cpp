#include "Buttons.h"
#include "outputtext.h"

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  // std::vector<Output> word = createWordToGuess("TA");
  sf::String word = RandomWord();
  std::vector<Output> word_to_guess = createWordToGuess(word);

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    RenderTxt(&window, word_to_guess);
    window.display();
  }
}
