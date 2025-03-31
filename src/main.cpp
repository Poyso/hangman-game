
#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>
#include <iostream>

int main() {
  auto window =
      sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  sf::CircleShape shape(50.f);
  shape.setFillColor(sf::Color::Black);
  shape.setOutlineThickness(10.f);
  shape.setOutlineColor(sf::Color::White);
  shape.setPosition({400,250});
  while (window.isOpen()) {
    while (const std::optional event = window.pollEvent()) {
      if (event->is<sf::Event::Closed>()) {
        window.close();
      }
    }
    window.clear();
    window.draw(shape);
    window.display();
  }
}
