// bowling_game.c

# include "bowling_game.h"

# include <stdio.h> 
# include <errno.h> 
# include <stdlib.h> 

enum { max_rolls = 21 };
static int rolls[max_rolls];
static int current_roll;

void bowling_game_init() {
    for (int i=0; i < max_rolls; i++) {
        rolls[i] = 0;
    }
    current_roll = 0;
}

void bowling_game_roll(int pins) {
    if (current_roll > max_rolls) {
        // TODO: write test for validation
        // game_over_
        exit(1);
    }
    rolls[current_roll++] = pins;
}

int bowling_game_score() {
    int score = 0;
    int i = 0;
    int pins = 0;
    for (int frame=0; frame < 10; ++frame) {
        pins = rolls[i] + rolls[i + 1];
        score += pins;
        if ((pins == 10) && (i + 2 < max_rolls)) {
            // award spare frame with current roll
            score += rolls[i + 2];
        }
        i += 2;
    }
    return score;
}
