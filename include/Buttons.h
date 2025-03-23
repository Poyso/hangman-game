#ifndef Button_h
#define Button_h
#include <SFML/Graphics.hpp>
#include <SFML/System/Vector2.hpp>

const int default_size_char = 10;
const float default_side = 20;

class myButton {

public:
  myButton(sf::Font font, sf::Text text, sf::RectangleShape rectangle) {
    _font = font;
    _text = text;
    _rectangle = rectangle;
  }
  void SetFont(const std::string font_name) {
    _font.loadFromFile(font_name);
    _text.setFont(_font);
  }
  void SetColor(sf::Color rect_color, sf::Color text_color) {
    _text.setFillColor(text_color);
    _rectangle.setFillColor(rect_color);
  }
  void SetSize(float h, float w) {
    _rectangle.setSize(sf::Vector2<float>(default_side, default_side));
    _text.setCharacterSize(default_size_char);
  }
  void SetPos(float x, float y) {
    _rectangle.setPosition(x, y);
    _text.setPosition(x, y);
  }
  void SetText(const sf::String &string) { _text.setString(string); }
  sf::String GetString() { return _text.getString(); }
  sf::Text GetText() { return _text; }
  sf::RectangleShape GetShape() { return _rectangle; }

private:
  sf::Font _font;
  sf::Text _text;
  sf::RectangleShape _rectangle;
};

// myButton CreateButton()

#endif
