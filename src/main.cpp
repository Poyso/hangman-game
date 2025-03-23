#include "Buttons.h"
#include <SFML/Graphics.hpp>

int main() {
  sf::Font ttf(font_name);
  sf::RectangleShape rect(sf::Vector2<float> x = {50.f, 50.f});
  sf::Text text(ttf);
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  myButton test_btn(text, rect);
  test_btn.SetSize(50.f, 50.f);
  test_btn.SetText("A");
  test_btn.SetColor(sf::Color::White, sf::Color::Black);

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }

    window.clear();
    window.display();
  }
}
