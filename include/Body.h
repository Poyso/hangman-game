#ifndef Body_h
#define Body_h

#include <iostream>
#include <SFML/Graphics.hpp>

// head settings
const float head_dim = 50.f;
const float head_offset_x = 400;
const float head_offset_y = 250;
const float head_thickness = 10.f;

class body
{
public:
    body(sf::CircleShape head, sf::RectangleShape dx_arm, sf::RectangleShape sx_arm, sf::RectangleShape chest, sf::RectangleShape dx_leg, sf::RectangleShape sx_leg)
    {
        this->head = head;
        this->dx_arm = dx_arm;
        this->sx_arm = sx_arm;
        this->chest = chest;
        this->sx_leg = sx_leg;
        this->dx_leg = dx_leg;
    }
    void Display();
    void setHead();
    void setDx_arm();
    void setSx_arm();
    void setChest();
    void setSx_leg();
    void setDx_leg();

private:
    sf::CircleShape head;
    sf::RectangleShape dx_arm;
    sf::RectangleShape sx_arm;
    sf::RectangleShape chest;
    sf::RectangleShape dx_leg;
    sf::RectangleShape sx_leg;
};

#endif
