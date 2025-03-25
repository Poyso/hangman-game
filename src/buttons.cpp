#include "Buttons.h"

myButton CreateButton(float x, float y, sf::String letter) {
  sf::Font ttf(font_name);
  sf::RectangleShape rect;
  sf::Text button_text(ttf);
  myButton btn(button_text, rect);
  btn.SetSize();
  btn.SetPos({x, y}, {x + text_offset_x, y + text_offset_y});
  btn.SetText(letter);
  btn.SetColor(sf::Color::White, sf::Color::Black);

  return btn;
}
