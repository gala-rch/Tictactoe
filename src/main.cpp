#include "Player.hpp"
#include "game.hpp"
#include <iostream>


int main()
{

char board[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
int mode;

std::cout << "Bienvenue dans le jeu du TicTacToe\n";
std::cout << "Veuillez choisir un mode de jeu :\n";
std::cout << "1. Deux joueurs\n";
std::cout << "2. Un joueur contre l'IA\n";
std::cin >> mode;

if (mode == 1) 
{
    Player player1 = create_player();
    Player player2;

    std::cout << "Entrez le nom du second joueur : ";
    std::cin >> player2.name;

    player2.symbol = (player1.symbol == 'X') ? 'O' : 'X';

    std::cout << player1.name << " joue avec le symbole " << player1.symbol << ".\n";
    std::cout << player2.name << " joue avec le symbole " << player2.symbol << ".\n";

    play_game(board, player1, player2);
} 

else if (mode == 2) 
{
    Player player = create_player();
    Player ai{"IA", (player.symbol == 'X') ? 'O' : 'X'};

    std::cout << player.name << " joue avec le symbole " << player.symbol << ".\n";
    std::cout << ai.name << " joue avec le symbole " << ai.symbol << ".\n";

    play_game_with_ai(board, player, ai);
} 

else 
{
    std::cout << "Mode de jeu invalide. Relancez le programme.\n";
}

return 0;
}



