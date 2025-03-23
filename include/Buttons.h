#ifndef Button_h
#define Button_h
#include <SFML/Graphics.hpp>

const std::string font_name = "JetBrainsMono-Regular.ttf";
const int default_size_char = 10;
const float default_side = 20;

sf::Font font(font_name);

class myButton {

public:
  myButton(sf::Text text(font), sf::RectangleShape rectangle) {
    _rectangle = rectangle;
  }
  void SetColor(sf::Color rect_color, sf::Color text_color) {
    _text.setFillColor(text_color);
    _rectangle.setFillColor(rect_color);
  }
  void SetSize(float h, float w) {
    _rectangle.setSize(sf::Vector2<float>(default_side, default_side));
    _text.setCharacterSize(default_size_char);
  }
  void SetPos(sf::Vector2f pos) {
    _rectangle.setPosition(pos);
    _text.setPosition(pos);
  }
  void SetText(const sf::String &string) { _text.setString(string); }
  sf::String GetString() { return _text.getString(); }
  sf::Text GetText() { return _text; }
  sf::RectangleShape GetShape() { return _rectangle; }

private:
  sf::Text _text;
  sf::RectangleShape _rectangle;
};

myButton CreateButton(const float x, const float y, const std::string font_name,
                      sf::String letter, sf::Color text = sf::Color::White,
                      sf::Color shape = sf::Color::Black);

#endif
