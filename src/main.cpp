#include "Buttons.h"
#include "outputtext.h"
#include <Body.h>
#include <iostream>
#include <unistd.h>

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  // std::vector<Output> word = createWordToGuess("TA");
  sf::String word = RandomWord();
  std::vector<Output> word_to_guess = createWordToGuess(word);
  std::vector<myButton> keyboard = CreateKeyboard();
  std::vector<body> stickman = Create_stickman();
  std::vector<sf::RectangleShape> st = stand();
  std::string letter;
  int errors = 0;
  int test = 0;
  while (window.isOpen()) {
    letter = "0";
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
      if (event->is<sf::Event::MouseButtonPressed>()) {
        ButtonClicked(&window, &keyboard[24], &letter);
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
      }
    }
    window.clear();
    if (letter != "0") {
      bool error_found = true;
      for (int i = 0; i < word_to_guess.size(); i++) {
        if (word_to_guess[i].GetString() == letter) {
          word_to_guess[i].show();
          error_found = false;
        }
      }
      if (error_found) {
        errors++;
      }
      std::cout << "errors: " << errors << std::endl;
      if (errors == 1)
        stickman[0].show(); // head
      else if (errors == 2)
        stickman[1].show(); // body
      else if (errors == 3)
        stickman[2].show(); // braccio destro
      else if (errors == 4)
        stickman[3].show(); // braccio sinistro
      else if (errors == 5)
        stickman[4].show(); // gamba sinistra
      else if (errors == 6)
        stickman[5].show(); // gamba destra
    }
    RenderTxt(&window, word_to_guess);
    Render(&window, keyboard);
    RenderStickman(&window, stickman);
    render_stand(&window, st);
    window.display();
  }
}
