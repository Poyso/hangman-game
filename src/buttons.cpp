#include "Buttons.h"

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

std::vector<myButton> CreateKeyboard(const float x, const float y,
                                     sf::String letter) {
  std::vector<myButton> keyboard;
  myButton button_a = CreateButton(150, 700, "a");
  myButton button_b = CreateButton(250, 700, "b");
  myButton button_c = CreateButton(350, 700, "c");
  myButton button_d = CreateButton(450, 700, "d");
  myButton button_e = CreateButton(550, 700, "e");
  myButton button_f = CreateButton(650, 700, "f");
  myButton button_g = CreateButton(750, 700, "g");
  myButton button_h = CreateButton(850, 700, "h");
  myButton button_i = CreateButton(950, 700, "i");
  myButton button_j = CreateButton(1050, 700, "j");
  myButton button_k = CreateButton(1150, 700, "k");
  myButton button_l = CreateButton(1250, 700, "l");
  myButton button_m = CreateButton(1350, 700, "m");
  myButton button_n = CreateButton(1450, 700, "n");
  myButton button_o = CreateButton(1550, 700, "o");
  myButton button_p = CreateButton(1650, 700, "p");
  myButton button_q = CreateButton(1750, 700, "q");
  myButton button_r = CreateButton(550, 800, "r");
  myButton button_s = CreateButton(650, 800, "s");
  myButton button_t = CreateButton(750, 800, "t");
  myButton button_u = CreateButton(850, 800, "u");
  myButton button_v = CreateButton(950, 800, "v");
  myButton button_w = CreateButton(1050, 800, "w");
  myButton button_x = CreateButton(1150, 800, "x");
  myButton button_y = CreateButton(1250, 800, "y");
  myButton button_z = CreateButton(1350, 800, "z");
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
