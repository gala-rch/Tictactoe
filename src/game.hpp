#include <iostream>
#include "Player.hpp"

void draw_board(const char board[9]);
bool un_gagnant(const char board[9], char symbol);
bool tableau_plein(const char board[9]);
void play_game(char board[9], Player player1, Player player2);
void play_game_with_ai(char board[9], Player player, Player ai);