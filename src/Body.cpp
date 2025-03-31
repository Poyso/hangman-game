#include "Body.h"
#include <SFML/Graphics.hpp>

void setHead()
{
    this.head.setFillColor(sf::Color::Black);
    this.head.setOutlineThickness(10.f);
    this.head.setOutlineColor(sf::Color::White);
    this.head.setPosition({400, 250});
}
