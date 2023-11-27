
#include "INCLUDE/my.h"

// _____________________________________________________________________________________________________________________ //

void coreExplanations(game_t *game)
{
    // x permet de compter le nombre de passage dans la boucle et
    // outerCells contient toutes les cellules adjacentes
    // si l'endroit est populé ou pas si vous préférez (N = north, SW = sud-west, ...)
    int x = 0, outerCells[8] = {N, S, NW, NE, W, E, SW, SE};

    // tant qu'on est pas arrivé au nombre d'occurences maximal on boucle
    while (x++ < game->occurences) {

        // display of the map at every occurences
        putarray(game->_map);

        // pour toutes les lignes
        for (int row = 1; game->_map[row + 1]; row++) {

            // et toutes les colonnes de chaques lignes
            for (int col = 1; game->_map[row][col + 1] != '\0'; col++) {

                // compteur des surroundings
                int neighbours = 0;

                // pour chaques cellules on boucle pour les 8 cellules adjacentes
                for (int i = 0; i < 8; i++)

                    // si l'adjacent est occupé: += 1 sinon 0
                    neighbours += (outerCells[i] == '#');
                
                // changement de la cellule en fonction du résultat
                game->_map[row][col] = (n < 3 || neighbours > 5) ? ' ' : '█';
            }
        }

        // waiting 0.5s before showing the _map with +1 occurence
        sleep(1.5);
    }
}

void core(game_t *game)
{
    int x = 0, outerCells[8] = {N, S, NW, NE, W, E, SW, SE};
    while (x++ < game->_occurences) {
        putarray(game->_map);
        sleep(1.5);

        for (int row = 1; game->_map[row + 1]; row++) {
            for (int col = 1; game->_map[row][col + 1] != '\0'; col++) {
                int n = 0;
                for (int i = 0; i < 8; i++)
                    n += (outerCells[i] == '█');
                game->_map[row][col] = (n < 3 || n > 5) ? ' ' : '█';

            }
        }
    } 
}