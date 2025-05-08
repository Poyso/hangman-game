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

void Render(sf::RenderWindow *window, myButton b) {
  if (b.isVisible()) {
    window->draw(b.GetShape());
    window->draw(b.GetText());
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

/*
 *Button creation template
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
 *
 *  Print buttons template
    window.draw(button_a.GetShape());
    window.draw(button_a.GetText());
    window.draw(button_b.GetShape());
    window.draw(button_b.GetText());
    window.draw(button_c.GetShape());
    window.draw(button_c.GetText());
    window.draw(button_d.GetShape());
    window.draw(button_d.GetText());
    window.draw(button_e.GetShape());
    window.draw(button_e.GetText());
    window.draw(button_f.GetShape());
    window.draw(button_f.GetText());
    window.draw(button_g.GetShape());
    window.draw(button_g.GetText());
    window.draw(button_h.GetShape());
    window.draw(button_h.GetText());
    window.draw(button_i.GetShape());
    window.draw(button_i.GetText());
    window.draw(button_j.GetShape());
    window.draw(button_j.GetText());
    window.draw(button_k.GetShape());
    window.draw(button_k.GetText());
    window.draw(button_l.GetShape());
    window.draw(button_l.GetText());
    window.draw(button_m.GetShape());
    window.draw(button_m.GetText());
    window.draw(button_n.GetShape());
    window.draw(button_n.GetText());
    window.draw(button_o.GetShape());
    window.draw(button_o.GetText());
    window.draw(button_p.GetShape());
    window.draw(button_p.GetText());
    window.draw(button_q.GetShape());
    window.draw(button_q.GetText());
    window.draw(button_r.GetShape());
    window.draw(button_r.GetText());
    window.draw(button_s.GetShape());
    window.draw(button_s.GetText());
    window.draw(button_t.GetShape());
    window.draw(button_t.GetText());
    window.draw(button_u.GetShape());
    window.draw(button_u.GetText());
    window.draw(button_v.GetShape());
    window.draw(button_v.GetText());
    window.draw(button_w.GetShape());
    window.draw(button_w.GetText());
    window.draw(button_x.GetShape());
    window.draw(button_x.GetText());
    window.draw(button_y.GetShape());
    window.draw(button_y.GetText());
    window.draw(button_z.GetShape());
    window.draw(button_z.GetText());
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */
