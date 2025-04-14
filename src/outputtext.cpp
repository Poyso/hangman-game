#include "outputtext.h"
#include <cstdio>
#include <fstream>
#include <iostream>
#include <string>

const std::string font_name = "../JetBrainsMono-Regular.ttf";
static sf::Font ttf(font_name);

void RenderTxt(sf::RenderWindow *window, std::vector<Output> o) {
  for (int i = 0; i < o.size(); i++) {
    window->draw(o[i].GetUnderline());
    if (o[i].GetIsVisible())
      window->draw(o[i].GetText());
  }
}

std::vector<Output> createWordToGuess(sf::String word) {
  std::vector<Output> v;
  sf::RectangleShape r;
  sf::Text txt(ttf);
  float offset = 0;
  for (int i = 0; i < word.getSize(); i++) {
    Output tmp(r, txt);
    tmp.setSize();
    tmp.setString(word[i]);
    tmp.SetPos(offset);
    v.push_back(tmp);
    offset += default_offset_value;
  }
  return v;
}

sf::String RandomWord() {
  char word[256];
  std::string x;
  std::ifstream file;
  int n;
  const std::string filepath = "../../words.txt"; // open file read only
  file.open(filepath);
  if (file.is_open()) {
    std::cout << "File Opened" << std::endl;
    file.getline(word, 256);
    x = word;
    n = std::stoi(x);
    std::cout << n;
    file.close();
  } else
    std::cout << "Unable to open file";

  return word;
}
