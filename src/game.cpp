#include "game.hpp"
#include <iostream>
#include "Player.hpp"

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
        if (board[i] == symbol && board[i + 1] == symbol && board[i + 2] == symbol) 
        {
            return true;
        }
    }


    for (int i = 0; i < 3; ++i) {
        if (board[i] == symbol && board[i + 3] == symbol && board[i + 6] == symbol) 
        {
            return true;
        }
    }

 
    if (board[0] == symbol && board[4] == symbol && board[8] == symbol)
    {
        return true;
    }

    if (board[2] == symbol && board[4] == symbol && board[6] == symbol) 
    {
        return true;
    }

    return false;
}



bool tableau_plein(const char board[9])
{
    for (int i = 0; i < 9; ++i) {
        if (board[i] >= '1' && board[i] <= '9') 
        {
            return false;
        }
    }
    return true;
}

void play_game(char board[9], Player player1, Player player2)
{
    draw_board(board);
    Player current_player = player1;
    bool game_over = false;

    while (!game_over)
    {
        int position;
        std::cout << current_player.name << " (" << current_player.symbol << "), choisissez une case (1-9) : ";
        std::cin >> position;

        if (position < 1 || position > 9 || board[position - 1] == 'X' || board[position - 1] == 'O')
        {
            std::cout << "Position invalide ou déjà occupée. Essayez à nouveau.\n";
            continue;
        }

        board[position - 1] = current_player.symbol;
        draw_board(board);

        if (un_gagnant(board, current_player.symbol))
        {
            std::cout << "Félicitations, " << current_player.name << " ! Vous avez gagné !\n";
            game_over = true;
        } 
        else if (tableau_plein(board)) 
        {
            std::cout << "C'est un match nul !\n";
            game_over = true;
        }
        else
        {
            current_player = (current_player.symbol == player1.symbol) ? player2 : player1;
        }

    }

}

void play_game_with_ai(char board[9], Player player, Player ai)
{
    draw_board(board);
    Player current_player = player;
    bool game_over = false;

    while (!game_over) 
    {
        int position;

        if (current_player.name == "IA") 
        {
            do {position = rand() % 9 + 1;} 
            while (board[position - 1] == 'X' || board[position - 1] == 'O');
            std::cout << "L'IA joue en position " << position << ".\n";
        } 
        else 
        {
            std::cout << current_player.name << " (" << current_player.symbol << "), choisissez une case (1-9) : ";
            std::cin >> position;

            if (position < 1 || position > 9 || board[position - 1] == 'X' || board[position - 1] == 'O') 
            {
                std::cout << "Position invalide ou déjà occupée. Essayez à nouveau.\n";
                continue;
            }
        }

        board[position - 1] = current_player.symbol;
        draw_board(board);

        if (un_gagnant(board, current_player.symbol)) 
        {
            std::cout << "Félicitations, " << current_player.name << " ! Vous avez gagné !\n";
            game_over = true;
        } 
        else if (tableau_plein(board)) 
        {
            std::cout << "C'est un match nul !\n";
            game_over = true;
        } 
        else
        {
            current_player = (current_player.name == player.name) ? ai : player;
        }
    }
}