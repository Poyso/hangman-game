#ifndef Body_h
#define Body_h

#include <iostream>
#include <SFML/Graphics.hpp>
#include <cstring>
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
const float Dx_arm_degrees = 30;
const float Dx_arm_thickness = 5;
const float Dx_arm_offset_x = 547;
const float Dx_arm_offset_y = 310;
//
// Sx_Arm settings
const float Sx_arm_h = 5;
const float Sx_arm_base = 150;
const float Sx_arm_degrees = -30;
const float Sx_arm_thickness = 5;
const float Sx_arm_offset_x = 547;
const float Sx_arm_offset_y = 310;
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
const float Dx_leg_degrees = -30;
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
// end

class body
{
public:
    body(sf::CircleShape head, std::string s)
    {
        this->head = head;
        this->visible = false;
    }
    body(sf::RectangleShape body_part, std::string s)
    {
        this->body_part = body_part;
        this->visible = false;
    }

    bool isVisible()
    {
        return this->visible;
    }

    void setVisible(bool visible)
    {
        this->visible = visible;
    }

    sf::CircleShape getShape(sf::CircleShape head)
    {
        return this->head;
    }

    sf::RectangleShape getShape(sf::RectangleShape body_part)
    {
        return this->body_part;
    }

private:
    sf::CircleShape head;
    sf::RectangleShape body_part;
    bool visible;
};

void render(sf::RenderWindow, body);
sf::CircleShape createHead();
sf::RectangleShape createDx_arm();
sf::RectangleShape createSx_arm();
sf::RectangleShape createBody();
sf::RectangleShape createSx_leg();
sf::RectangleShape createDx_leg();
std::vector<body> Create_stickman();

#endif
