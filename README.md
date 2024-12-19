(Comme je vous l'ai dit par mail, je n'avais pas bien compris le fonctionnement de Git Kraken et j'ai mis pas mal de temps à me rendre compte que je ne pushais pas les commit effectués. Je ne sais donc pas si vous pouvez les voir avec mon dernier push)
# Tictactoe

Ce programme permet de jouer au Tic Tac Toe (morpion) en mode console, soit entre deux joueurs humains, soit entre un joueur et une IA basique. Voici son fonctionnement et les problèmes rencontrés :
## Comment ça marche ?

### Configuration :
    Le plateau de jeu est représenté par un tableau board de 9 cases.
    Chaque joueur choisit son nom et un symbole (X ou O). Si le premier joueur choisit X, l’autre aura automatiquement O et inversement.

### Modes de jeu :
    Mode 1 : Deux joueurs jouent à tour de rôle en choisissant une case libre.
    Mode 2 : Le joueur joue contre une IA qui place ses coups de manière aléatoire.

### Déroulement de la partie :
    Après chaque tour, le plateau est affiché.
    Le programme vérifie si un joueur a gagné ou si le plateau est plein (match nul).
    Si un joueur aligne trois symboles, il gagne.

### Vérifications :
    Les entrées sont contrôlées : un joueur ne peut pas choisir une case déjà occupée ou une position invalide.

## Problèmes rencontrés et solutions

### Deux joueurs choisissaient le même symbole :
    Solution : Automatisation : si un joueur choisit X, l’autre reçoit O.

### L’IA jouait dans des cases occupées :
    Solution : Une boucle do-while garantit que l’IA choisisse une case libre.

### Certaines victoires n’étaient pas détectées :
    Solution : Ajout explicite des diagonales et colonnes à vérifier.

### Entrées invalides ou erreurs de saisie :
    Solution : Contrôle strict pour s’assurer que les joueurs choisissent des cases valides.

## Résumé

Le programme est simple mais fonctionne bien pour le jeu. Il affiche le plateau, contrôle les entrées, et permet deux modes de jeu. Il aurait pu être amélioré avec une IA plus intelligente ou une interface graphique, mais il est déjà fonctionnel et robuste.

