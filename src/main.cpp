#include "Buttons.h"
#include <SFML/Graphics.hpp>
#include <iostream>

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  sf::Font ttf(font_name);
  sf::RectangleShape rect;
  sf::Text text(ttf);
  myButton test_btn(text, rect);
  test_btn.SetSize();
  test_btn.SetPos({50.f, 50.f}, {50.f + text_offset_x, 50.f + text_offset_y});
  test_btn.SetText("a");
  test_btn.SetColor(sf::Color::White, sf::Color::Black);
  myButton btn = CreateButton(200, 200, "b");

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    // window.draw(test_btn.GetShape());
    // window.draw(test_btn.GetText());
    std::cout << "test" << std::endl;
    window.draw(btn.GetShape());
    window.draw(btn.GetText());
    window.display();
  }
}
