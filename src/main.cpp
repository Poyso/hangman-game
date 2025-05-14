#include "Buttons.h"
#include "outputtext.h"
#include <Body.h>

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  // std::vector<Output> word = createWordToGuess("TA");
  sf::String word = RandomWord();
  std::vector<Output> word_to_guess = createWordToGuess(word);
  std::vector<myButton> keyboard = CreateKeyboard();
  std::vector<body> stickman = Create_stickman();
  std::vector<sf::RectangleShape> st = stand();
  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    RenderTxt(&window, word_to_guess);
    Render(&window, keyboard);
    RenderStickman(&window, stickman);
    render_stand(&window, st);
    window.display();
  }
}
