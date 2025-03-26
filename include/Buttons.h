#ifndef Button_h
#define Button_h
#include <SFML/Graphics.hpp>
#include <optional>

// Centering the text
const float text_offset_x = 25;
const float text_offset_y = 10;

// Font name
const std::string font_name = "JetBrainsMono-Regular.ttf";
// Sizes of the button
const int default_size_char = 35;
const float default_side = 70.f;

class myButton {

public:
  myButton() {}
  myButton(sf::Text t, sf::RectangleShape rectangle)
      : _text(std::make_optional(t)) {
    _rectangle = rectangle;
  }
  void SetColor(sf::Color rect_color, sf::Color text_color) {
    _text.value().setFillColor(text_color);
    _rectangle.setFillColor(rect_color);
  }
  void SetSize() {
    _rectangle.setSize({default_side, default_side});
    _text.value().setCharacterSize(default_size_char);
  }
  void SetPos(sf::Vector2f ShapePos, sf::Vector2f TextPos) {
    _rectangle.setPosition(ShapePos);
    _text.value().setPosition(TextPos);
  }
  void SetText(const sf::String string) { _text.value().setString(string); }
  sf::String GetString() { return _text.value().getString(); }
  sf::Text &GetText() { return _text.value(); }
  sf::RectangleShape &GetShape() { return _rectangle; }

private:
  std::optional<sf::Text> _text;
  sf::RectangleShape _rectangle;
};

myButton CreateButton(const float x, const float y, sf::String letter);

void template_buttons();

#endif
