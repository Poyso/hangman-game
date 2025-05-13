#include "Body.h"
#include <SFML/Graphics.hpp>
#include <vector>

void render(sf::RenderWindow *window, std::vector<body> stickman, char ch) {
  for (int i = 0; i < 6; i++) {
    if (stickman[i].isVisible() && ch == 'h') {
      window->draw(stickman[i].getCircle());
    } else if (stickman[i].isVisible() && ch == 'r') {
      window->draw(stickman[i].getrect());
    }
  }
}

void render_stand(sf::RenderWindow *window,
                  std::vector<sf::RectangleShape> stand) {
  for (int i = 0; i < 4; i++) {
    window->draw(stand[i]);
  }
}

sf::CircleShape createHead() {

  sf::CircleShape head(head_dim);
  head.setFillColor(sf::Color::Black);
  head.setOutlineThickness(head_thickness);
  head.setOutlineColor(sf::Color::White);
  head.setPosition({head_offset_x, head_offset_y});
  return head;
}

sf::RectangleShape createDx_arm() {
  sf::RectangleShape Dx_arm;
  Dx_arm.setSize(sf::Vector2f(Dx_arm_h, Dx_arm_base));
  Dx_arm.setOutlineThickness(Dx_arm_thickness);
  Dx_arm.setRotation(sf::degrees(Dx_arm_degrees));
  Dx_arm.setOutlineColor(sf::Color::White);
  Dx_arm.setPosition({Dx_arm_offset_x, Dx_arm_offset_y});
  return Dx_arm;
}

sf::RectangleShape createSx_arm() {
  sf::RectangleShape Sx_arm;
  Sx_arm.setSize(sf::Vector2f(Sx_arm_h, Sx_arm_base));
  Sx_arm.setOutlineThickness(Sx_arm_thickness);
  Sx_arm.setRotation(sf::degrees(Sx_arm_degrees));
  Sx_arm.setOutlineColor(sf::Color::White);
  Sx_arm.setPosition({Sx_arm_offset_x, Sx_arm_offset_y});
  return Sx_arm;
}

sf::RectangleShape createBody() {
  sf::RectangleShape Body;
  Body.setSize(sf::Vector2f(Body_height, Body_base));
  Body.setOutlineThickness(Body_thickness);
  Body.setOutlineColor(sf::Color::White);
  Body.setPosition({Body_offset_x, Body_offset_y});
  return Body;
}

sf::RectangleShape createSx_leg() {
  sf::RectangleShape Sx_leg;
  Sx_leg.setSize(sf::Vector2f(Sx_leg_h, Sx_leg_base));
  Sx_leg.setOutlineThickness(Sx_leg_thickness);
  Sx_leg.setRotation(sf::degrees(Sx_leg_degrees));
  Sx_leg.setOutlineColor(sf::Color::White);
  Sx_leg.setPosition({Sx_leg_offset_x, Sx_leg_offset_y});
  return Sx_leg;
}

sf::RectangleShape createDx_leg() {
  sf::RectangleShape Dx_leg;
  Dx_leg.setSize(sf::Vector2f(Dx_leg_h, Dx_leg_base));
  Dx_leg.setOutlineThickness(Dx_leg_thickness);
  Dx_leg.setRotation(sf::degrees(Dx_leg_degrees));
  Dx_leg.setOutlineColor(sf::Color::White);
  Dx_leg.setPosition({Dx_leg_offset_x, Dx_leg_offset_y});
  return Dx_leg;
}

std::vector<sf::RectangleShape> stand() {
  sf::RectangleShape base;
  base.setSize(sf::Vector2f(base_h, base_base));
  base.setOutlineThickness(base_thickness);
  base.setRotation(sf::degrees(base_degrees));
  base.setOutlineColor(sf::Color::White);
  base.setPosition({base_offset_x, base_offset_y});

  sf::RectangleShape bodys;
  bodys.setSize(sf::Vector2f(bodys_h, bodys_base));
  bodys.setOutlineThickness(bodys_thickness);
  bodys.setOutlineColor(sf::Color::White);
  bodys.setPosition({bodys_offset_x, bodys_offset_y});

  sf::RectangleShape rect2;
  rect2.setSize(sf::Vector2f(rect2_h, rect2_base));
  rect2.setOutlineThickness(rect2_thickness);
  rect2.setRotation(sf::degrees(rect2_degrees));
  rect2.setOutlineColor(sf::Color::White);
  rect2.setPosition({rect2_offset_x, rect2_offset_y});

  sf::RectangleShape rect3;
  rect3.setSize(sf::Vector2f(rect3_h, rect3_base));
  rect3.setOutlineThickness(rect3_thickness);
  rect3.setOutlineColor(sf::Color::White);
  rect3.setPosition({rect3_offset_x, rect3_offset_y});

  std::vector<sf::RectangleShape> stand = {base, bodys, rect2, rect3};
  return stand;
}

std::vector<body> Create_stickman() {
  sf::CircleShape circle = createHead();
  body head = body(circle);
  sf::RectangleShape part = createBody();
  body stick = body(part);
  sf::RectangleShape part2 = createDx_arm();
  body Dx_arm = body(part2);
  sf::RectangleShape part3 = createSx_arm();
  body Sx_arm = body(part3);
  sf::RectangleShape part4 = createDx_leg();
  body Dx_leg = body(part4);
  sf::RectangleShape part5 = createSx_leg();
  body Sx_leg = body(part5);
  std::vector<body> Stickman = {head, stick, Dx_arm, Sx_arm, Dx_leg, Sx_leg};
  return Stickman;
}
