#include "Buttons.h"
#include <SFML/Window/Event.hpp>
#include <SFML/Window/Mouse.hpp>

static sf::Font ttf(font_name);

myButton CreateButton(const float x, const float y, sf::String letter) {
  sf::RectangleShape rect;
  sf::Text button_text(ttf);
  myButton btn(button_text, rect);
  btn.SetSize();
  btn.SetPos({x, y}, {x + text_offset_x, y + text_offset_y});
  btn.SetText(letter);
  btn.SetColor(sf::Color::White, sf::Color::Black);

  return btn;
}

void Render(sf::RenderWindow *window, std::vector<myButton> k) {
  for (int i = 0; i < k.size(); i++) {
    if (k[i].isVisible()) {
      window->draw(k[i].GetShape());
      window->draw(k[i].GetText());
    }
  }
}

void ButtonClicked(sf::RenderWindow *window, myButton *b, std::string *ch) {
  if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left) && b->isVisible()) {
    sf::FloatRect bounds = b->GetShape().getGlobalBounds();
    sf::Vector2f mouse_pos =
        window->mapPixelToCoords(sf::Mouse::getPosition(*window));
    if (bounds.contains(mouse_pos)) {
      b->Clicked();
      *ch = b->GetString();
    }
  }
}

std::vector<myButton> CreateKeyboard() {
  std::vector<myButton> keyboard;
  myButton button_a = CreateButton(150, 800, "A");
  myButton button_b = CreateButton(250, 800, "B");
  myButton button_c = CreateButton(350, 800, "C");
  myButton button_d = CreateButton(450, 800, "D");
  myButton button_e = CreateButton(550, 800, "E");
  myButton button_f = CreateButton(650, 800, "F");
  myButton button_g = CreateButton(750, 800, "G");
  myButton button_h = CreateButton(850, 800, "H");
  myButton button_i = CreateButton(950, 800, "I");
  myButton button_j = CreateButton(1050, 800, "J");
  myButton button_k = CreateButton(1150, 800, "K");
  myButton button_l = CreateButton(1250, 800, "L");
  myButton button_m = CreateButton(1350, 800, "M");
  myButton button_n = CreateButton(1450, 800, "N");
  myButton button_o = CreateButton(1550, 800, "O");
  myButton button_p = CreateButton(1650, 800, "P");
  myButton button_q = CreateButton(1750, 800, "Q");
  myButton button_r = CreateButton(550, 900, "R");
  myButton button_s = CreateButton(650, 900, "S");
  myButton button_t = CreateButton(750, 900, "T");
  myButton button_u = CreateButton(850, 900, "U");
  myButton button_v = CreateButton(950, 900, "V");
  myButton button_w = CreateButton(1050, 900, "W");
  myButton button_x = CreateButton(1150, 900, "X");
  myButton button_y = CreateButton(1250, 900, "Y");
  myButton button_z = CreateButton(1350, 900, "Z");
  keyboard.push_back(button_a);
  keyboard.push_back(button_b);
  keyboard.push_back(button_c);
  keyboard.push_back(button_d);
  keyboard.push_back(button_e);
  keyboard.push_back(button_f);
  keyboard.push_back(button_g);
  keyboard.push_back(button_h);
  keyboard.push_back(button_i);
  keyboard.push_back(button_j);
  keyboard.push_back(button_k);
  keyboard.push_back(button_l);
  keyboard.push_back(button_m);
  keyboard.push_back(button_n);
  keyboard.push_back(button_o);
  keyboard.push_back(button_p);
  keyboard.push_back(button_r);
  keyboard.push_back(button_q);
  keyboard.push_back(button_s);
  keyboard.push_back(button_t);
  keyboard.push_back(button_u);
  keyboard.push_back(button_v);
  keyboard.push_back(button_w);
  keyboard.push_back(button_x);
  keyboard.push_back(button_y);
  keyboard.push_back(button_z);
  return keyboard;
}
