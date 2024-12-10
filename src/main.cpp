#include "Player.hpp"
#include "game.hpp"
#include <iostream>

// void demarage ()
// {
//     std::cout << "Bienvenue dans le jeu du morpion"<< std::endl;
//     create_player();

// }

int main()
{

    char game_board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

    std::cout << "Bienvenue dans le jeu du morpion"<< std::endl;

    Player player1 = create_player();
    Player player2;
    std::cout << "Entrez le nom du second joueur" << std::endl;
    std::cin >> player2.name ;
    player2.symbol = (player1.symbol == 'X') ? 'O' : 'X';

    draw_board(game_board);

    Player current_player = player1;
    bool game_over = false;

    while (!game_over)
    {
        int position;
        std::cout << current_player.name << " (" << current_player.symbol << "), choisissez une case (1-9) : ";
        std::cin >> position;

        if (position < 1 || position > 9 || game_board[position - 1] == 'X' || game_board[position - 1] == 'O')
        {
            std::cout << "Position invalide ou déjà occupée. Essayez à nouveau.\n";
            continue;
        }

        game_board[position - 1] = current_player.symbol;
        draw_board(game_board);

        if (un_gagnant(game_board, current_player.symbol))
        {
            std::cout << "Félicitations, " << current_player.name << "! Vous avez gagné !\n";
            game_over = true;
        } 
        else if (tableau_plein(game_board)) 
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


