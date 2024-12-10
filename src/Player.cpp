#include "Player.hpp"
#include <iostream>

    Player create_player()
    {
        Player player;
        std::cout << "Entrez le nom du premier joueur" << std::endl;
        std::cin >> player.name ;
        char choice {};
        bool symbole_valide = false;
        while (!symbole_valide)
        {
            std::cout << "Choisir un symbole pour ce joueur (X ou O)" << std::endl;
            std::cin >> choice ;
            if (choice == 'x'|| choice == 'X')
            {
                player.symbol= 'X';
                symbole_valide = true;
            }
            else if (choice == 'o' || choice == 'O')
            {
                player.symbol = 'O';
                symbole_valide = true;
            }
            else
            {
                std::cout << "Symbole invalide. Essayez à nouveau.\n";
            }
        }
        
        
        return player;
    }

