#include "Buttons.h"
#include "outputtext.h"
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/Graphics/RectangleShape.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  sf::Font ttf(font_name);
  sf::Text txt(ttf);
  sf::RectangleShape line;
  Output test(line, txt);
  test.setSize();
  test.setString("A");
  test.SetPos(200);
  Output test2(line, txt);
  test2.setSize();
  test2.setString("B");
  test2.SetPos(0);

  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    window.draw(test.GetText());
    window.draw(test.GetUnderline());
    window.draw(test2.GetText());
    window.draw(test2.GetUnderline());
    window.display();
  }
}
