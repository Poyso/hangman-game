#include <SFML/Graphics.hpp>
#include <SFML/Graphics/Rect.hpp>
#include <SFML/System/Vector2.hpp>
#include <SFML/Window/Mouse.hpp>
#include "Body.h"
#include <iostream>

int main()
{
  auto window = sf::RenderWindow(sf::VideoMode({1920u, 1080u}), "CMake SFML Project");
  // head settings
  sf::CircleShape shape(50.f);
  shape.setFillColor(sf::Color::Black);
  shape.setOutlineThickness(10.f);
  shape.setOutlineColor(sf::Color::White);
  shape.setPosition({500, 200});
  // rect body
  sf::RectangleShape rect;
  rect.setSize(sf::Vector2f(5, 250));
  rect.setOutlineThickness(5);
  rect.setOutlineColor(sf::Color::White);
  rect.setPosition({547, 310});
  // dx arm
  sf::RectangleShape Dx_arm;
  Dx_arm.setSize(sf::Vector2f(5, 150));
  Dx_arm.setOutlineThickness(5);
  Dx_arm.setRotation(sf::degrees(-30));
  Dx_arm.setOutlineColor(sf::Color::White);
  Dx_arm.setPosition({547, 330});
  // sx arm
  sf::RectangleShape Sx_arm;
  Sx_arm.setSize(sf::Vector2f(5, 150));
  Sx_arm.setOutlineThickness(5);
  Sx_arm.setRotation(sf::degrees(30));
  Sx_arm.setOutlineColor(sf::Color::White);
  Sx_arm.setPosition({547, 330});
  // dx leg
  sf::RectangleShape Dx_leg;
  Dx_leg.setSize(sf::Vector2f(5, 150));
  Dx_leg.setOutlineThickness(5);
  Dx_leg.setRotation(sf::degrees(30));
  Dx_leg.setOutlineColor(sf::Color::White);
  Dx_leg.setPosition({547, 560});
  // sx leg
  sf::RectangleShape Sx_leg;
  Sx_leg.setSize(sf::Vector2f(5, 150));
  Sx_leg.setOutlineThickness(5);
  Sx_leg.setRotation(sf::degrees(-30));
  Sx_leg.setOutlineColor(sf::Color::White);
  Sx_leg.setPosition({547, 560});
  // stand
  sf::RectangleShape base;
  base.setSize(sf::Vector2f(15, 250));
  base.setOutlineThickness(5);
  base.setRotation(sf::degrees(90));
  base.setOutlineColor(sf::Color::White);
  base.setPosition({347, 680});

  sf::RectangleShape bodys;
  bodys.setSize(sf::Vector2f(15, 650));
  bodys.setOutlineThickness(5);
  bodys.setOutlineColor(sf::Color::White);
  bodys.setPosition({220, 40});

  sf::RectangleShape rect2;
  rect2.setSize(sf::Vector2f(15, 320));
  rect2.setOutlineThickness(5);
  rect2.setRotation(sf::degrees(90));
  rect2.setOutlineColor(sf::Color::White);
  rect2.setPosition({550, 40});

  sf::RectangleShape rect3;
  rect3.setSize(sf::Vector2f(5, 150));
  rect3.setOutlineThickness(5);
  rect3.setOutlineColor(sf::Color::White);
  rect3.setPosition({547, 40});

  while (window.isOpen())
  {
    while (const std::optional event = window.pollEvent())
    {
      if (event->is<sf::Event::Closed>())
      {
        window.close();
      }
    }
    window.clear();
    /*
    window.draw(base);
    window.draw(bodys);
    window.draw(rect2);
    window.draw(rect3);
    window.draw(rect);
    window.draw(Sx_arm);
    window.draw(Dx_arm);
    window.draw(Dx_leg);
    window.draw(Sx_leg);*/
    std::vector<body> stickman = Create_stickman();
    std::vector<sf::RectangleShape> stands = stand();
    render_stand(&window, stands);
    render(&window, stickman, 'h');
    render(&window, stickman, 'r');
    window.display();
  }
}
