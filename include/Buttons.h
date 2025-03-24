#ifndef Button_h
#define Button_h
#include <SFML/Graphics.hpp>

const int default_size_char = 35;
const float default_side = 70;

class myButton {

public:
  myButton(sf::Text t, sf::RectangleShape rectangle) : _text(t) {
    _text = t;
    _rectangle = rectangle;
  }
  void SetColor(sf::Color rect_color, sf::Color text_color) {
    _text.setFillColor(text_color);
    _rectangle.setFillColor(rect_color);
  }
  void SetSize() {
    _rectangle.setSize(sf::Vector2<float>(default_side, default_side));
    _text.setCharacterSize(default_size_char);
  }
  void SetPos(sf::Vector2f ShapePos, sf::Vector2f TextPos) {
    _rectangle.setPosition(ShapePos);
    _text.setPosition(TextPos);
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
