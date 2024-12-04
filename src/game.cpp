#include "game.hpp"
#include <iostream>

void draw_board(const char board[9])
{
    for (int i = 0; i < 9; ++i)
    {
        if (i % 3 == 0)
        {
            std::cout << "| ";
        }

        std::cout << board[i] << " | ";

        if ((i + 1) % 3 == 0)
        {
            std::cout << "\n";
        }
    }
}

bool un_gagnant(const char board[9], char symbol) 
{

    for (int i = 0; i < 9; i += 3) {
        if (board[i] == symbol && board[i + 1] == symbol && board[i + 2] == symbol) {
            return true;
        }
    }


    for (int i = 0; i < 3; ++i) {
        if (board[i] == symbol && board[i + 3] == symbol && board[i + 6] == symbol) {
            return true;
        }
    }

 
    if (board[0] == symbol && board[4] == symbol && board[8] == symbol) {
        return true;
    }

    if (board[2] == symbol && board[4] == symbol && board[6] == symbol) {
        return true;
    }

    return false;
}



bool tableau_plein(const char board[9]) {
    for (int i = 0; i < 9; ++i) {
        if (board[i] == ' ') {
            return false;
        }
    }
    return true;
}