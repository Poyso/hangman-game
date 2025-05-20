#include "Buttons.h"
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

void ButtonClicked(sf::RenderWindow *window, myButton *b, sf::String *ch) {
  if (sf::Mouse::isButtonPressed(sf::Mouse::Button::Left)) {
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
  myButton button_a = CreateButton(150, 800, "a");
  myButton button_b = CreateButton(250, 800, "b");
  myButton button_c = CreateButton(350, 800, "c");
  myButton button_d = CreateButton(450, 800, "d");
  myButton button_e = CreateButton(550, 800, "e");
  myButton button_f = CreateButton(650, 800, "f");
  myButton button_g = CreateButton(750, 800, "g");
  myButton button_h = CreateButton(850, 800, "h");
  myButton button_i = CreateButton(950, 800, "i");
  myButton button_j = CreateButton(1050, 800, "j");
  myButton button_k = CreateButton(1150, 800, "k");
  myButton button_l = CreateButton(1250, 800, "l");
  myButton button_m = CreateButton(1350, 800, "m");
  myButton button_n = CreateButton(1450, 800, "n");
  myButton button_o = CreateButton(1550, 800, "o");
  myButton button_p = CreateButton(1650, 800, "p");
  myButton button_q = CreateButton(1750, 800, "q");
  myButton button_r = CreateButton(550, 900, "r");
  myButton button_s = CreateButton(650, 900, "s");
  myButton button_t = CreateButton(750, 900, "t");
  myButton button_u = CreateButton(850, 900, "u");
  myButton button_v = CreateButton(950, 900, "v");
  myButton button_w = CreateButton(1050, 900, "w");
  myButton button_x = CreateButton(1150, 900, "x");
  myButton button_y = CreateButton(1250, 900, "y");
  myButton button_z = CreateButton(1350, 900, "z");
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
