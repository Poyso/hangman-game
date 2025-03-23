#include "Buttons.h"
#include <SFML/Graphics.hpp>
const std::string font_name = "JetBrainsMono-Regular.ttf";

int main() {
  sf::Font ttf(font_name);
  sf::RectangleShape rect;
  sf::Text text(ttf);
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  myButton test_btn(text, rect);
  test_btn.SetSize();
  test_btn.SetPos(sf::Vector2f{50.f, 50.f});
  test_btn.SetText("A");
  test_btn.SetColor(sf::Color::White, sf::Color::Black);

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    window.draw(test_btn.GetShape());
    window.draw(test_btn.GetText());
    window.display();
  }
}
