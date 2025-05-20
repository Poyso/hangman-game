#include "Buttons.h"
#include "Game.h"
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
  sf::String letter;
  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    letter = "0";
    window.clear();
    ButtonClicked(&window, &keyboard[0], &letter);
    ButtonClicked(&window, &keyboard[1], &letter);
    ButtonClicked(&window, &keyboard[2], &letter);
    ButtonClicked(&window, &keyboard[3], &letter);
    ButtonClicked(&window, &keyboard[4], &letter);
    ButtonClicked(&window, &keyboard[5], &letter);
    ButtonClicked(&window, &keyboard[6], &letter);
    ButtonClicked(&window, &keyboard[7], &letter);
    ButtonClicked(&window, &keyboard[8], &letter);
    ButtonClicked(&window, &keyboard[9], &letter);
    ButtonClicked(&window, &keyboard[10], &letter);
    ButtonClicked(&window, &keyboard[11], &letter);
    ButtonClicked(&window, &keyboard[12], &letter);
    ButtonClicked(&window, &keyboard[13], &letter);
    ButtonClicked(&window, &keyboard[14], &letter);
    ButtonClicked(&window, &keyboard[15], &letter);
    ButtonClicked(&window, &keyboard[16], &letter);
    ButtonClicked(&window, &keyboard[17], &letter);
    ButtonClicked(&window, &keyboard[18], &letter);
    ButtonClicked(&window, &keyboard[19], &letter);
    ButtonClicked(&window, &keyboard[20], &letter);
    ButtonClicked(&window, &keyboard[21], &letter);
    ButtonClicked(&window, &keyboard[22], &letter);
    ButtonClicked(&window, &keyboard[23], &letter);
    ButtonClicked(&window, &keyboard[24], &letter);
    game_loop(word_to_guess, stickman, keyboard, letter);
    RenderTxt(&window, word_to_guess);
    Render(&window, keyboard);
    RenderStickman(&window, stickman);
    render_stand(&window, st);
    window.display();
  }
}
