#ifndef Body_h
#define Body_h

#include <SFML/Graphics.hpp>
#include <cstring>
#include <iostream>
#include <vector>

// head settings
const float head_dim = 50.f;
const float head_offset_x = 500;
const float head_offset_y = 200;
const float head_thickness = 10.f;
//
// Dx_arm settings
const float Dx_arm_h = 5;
const float Dx_arm_base = 150;
const float Dx_arm_degrees = -30;
const float Dx_arm_thickness = 5;
const float Dx_arm_offset_x = 547;
const float Dx_arm_offset_y = 330;
//
// Sx_Arm settings
const float Sx_arm_h = 5;
const float Sx_arm_base = 150;
const float Sx_arm_degrees = 30;
const float Sx_arm_thickness = 5;
const float Sx_arm_offset_x = 547;
const float Sx_arm_offset_y = 330;
//
// body settings
const float Body_height = 5;
const float Body_base = 250;
const float Body_thickness = 5;
const float Body_offset_x = 547;
const float Body_offset_y = 310;
//
// Dx_leg settings
const float Dx_leg_h = 5;
const float Dx_leg_base = 150;
const float Dx_leg_degrees = 30;
const float Dx_leg_thickness = 5;
const float Dx_leg_offset_x = 547;
const float Dx_leg_offset_y = 560;
//
// Sx_leg settings
const float Sx_leg_h = 5;
const float Sx_leg_base = 150;
const float Sx_leg_degrees = -30;
const float Sx_leg_thickness = 5;
const float Sx_leg_offset_x = 547;
const float Sx_leg_offset_y = 560;
//
// stand settings

// base
const float base_h = 15;
const float base_base = 250;
const float base_degrees = 90;
const float base_thickness = 5;
const float base_offset_x = 347;
const float base_offset_y = 680;

// bodys
const float bodys_h = 15;
const float bodys_base = 650;
const float bodys_thickness = 5;
const float bodys_offset_x = 220;
const float bodys_offset_y = 40;

// rect2
const float rect2_h = 15;
const float rect2_base = 320;
const float rect2_degrees = 90;
const float rect2_thickness = 5;
const float rect2_offset_x = 550;
const float rect2_offset_y = 40;

// rect3
const float rect3_h = 5;
const float rect3_base = 150;
const float rect3_thickness = 5;
const float rect3_offset_x = 547;
const float rect3_offset_y = 40;
// end

class body {
public:
  body(sf::CircleShape head) {
    this->head = head;
    this->visible = true;
  }
  body(sf::RectangleShape body_part) {
    this->body_part = body_part;
    this->visible = true;
  }

  bool isVisible() { return this->visible; }

  void setVisible(bool visible) { this->visible = visible; }

  sf::CircleShape getCircle() { return this->head; }

  sf::RectangleShape getrect() { return this->body_part; }

private:
  sf::CircleShape head;
  sf::RectangleShape body_part;
  bool visible;
};

void RenderStickman(sf::RenderWindow *, std::vector<body>);
void render_stand(sf::RenderWindow *, std::vector<sf::RectangleShape>);
sf::CircleShape createHead();
sf::RectangleShape createDx_arm();
sf::RectangleShape createSx_arm();
sf::RectangleShape createBody();
sf::RectangleShape createSx_leg();
sf::RectangleShape createDx_leg();
std::vector<body> Create_stickman();
std::vector<sf::RectangleShape> stand();

#endif
