// bowling_game_test.c
// - from https://www.slideshare.net/amritayan/test-driven-development-in-c 

# include "bowling_game.h"

# include <assert.h>
# include <stdbool.h>
# include <stdlib.h>

static void make_game_rolls(int iterations, int pins) {
    for (int i=0; i<iterations; i++) {
        bowling_game_roll(pins);
    }
}

static void test_gutter_game() {
    bowling_game_init();
    make_game_rolls(20, 0);
    assert(bowling_game_score() == 0
           && "test_gutter_game()");
}

static void test_all_ones() {
    bowling_game_init();
    make_game_rolls(20, 1);
    assert(bowling_game_score() == 20
           && "test_all_ones()");
}

static void test_one_spare() {
    bowling_game_init();
    bowling_game_roll(5);
    bowling_game_roll(5);  // spare
    bowling_game_roll(3);  // spare
    make_game_rolls(17, 0);
    int score = bowling_game_score();
    assert(score == 16
           && "test_one_spare()");
}

static void assert_error(void) {
}

static void test_no_more_throws_allowed() {
    bowling_game_init();
    atexit(assert_error);
    make_game_rolls(21, 1);
}

int main() {
    test_gutter_game(); 
    test_all_ones();
    test_one_spare();
    // test_no_more_throws_allowed();
}
