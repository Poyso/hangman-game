#ifndef Game_h
#define Game_h

#include <Body.h>
#include <Buttons.h>
#include <outputtext.h>

void game_loop(std::vector<Output> word_to_guess, std::vector<body> stickman,
               std::vector<myButton> keyboard);

#endif
