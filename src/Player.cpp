#include "Player.hpp"
#include <iostream>

    Player create_player()
    {
        Player player;
        std::cout << "Entrez le nom du joueur" << std::endl;
        std::cin >> player.name ;
        std::cout << "Choisir un symbole pour ce joueur parmi X et O" << std::endl;
        
        std::cin >> player.symbol ;
        return player;
    }
