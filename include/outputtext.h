#ifndef output_h
#define output_h

#include <SFML/Graphics.hpp>
#include <vector>

const float default_offset_value = 120;
const int char_output_size = 90;
const float underline_width = 100.f;
const float underline_height = 5.f;

const sf::Vector2f default_pos = {700.f, 500.f};
const float offset_text_output_y = -100;
const float offset_text_output_x = 25;

class Output {
public:
  Output(sf::RectangleShape underline, sf::Text t) : txt(t) {
    this->underline = underline;
  }
  void setString(const sf::String str) { txt.setString(str); }
  void setSize() {
    this->underline.setSize({underline_width, underline_height});
    txt.setCharacterSize(char_output_size);
  }
  void SetPos(float offset_x) {
    this->underline.setPosition({default_pos.x + offset_x, default_pos.y});
    txt.setPosition({default_pos.x + offset_text_output_x + offset_x,
                     default_pos.y + offset_text_output_y});
  }
  void show() { isVisible = true; }
  sf::Text GetText() { return txt; }
  sf::RectangleShape GetUnderline() { return this->underline; }
  sf::String GetString() { return txt.getString(); }
  bool GetIsVisible() { return isVisible; }

private:
  bool isVisible = false;
  sf::RectangleShape underline;
  sf::Text txt;
};
void RenderTxt(sf::RenderWindow *, std::vector<Output>);
std::vector<Output> createWordToGuess(sf::String word);
sf::String RandomWord();
bool word_is_revelead(std::vector<Output> word);

#endif
