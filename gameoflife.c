#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



// _____________________________________________________________________________________________________________________ //


typedef struct game_s {
    char **map;
    int occurences;
} game_t;


// _____________________________________________________________________________________________________________________ //


#define N game->map[row - 1][col]
#define S game->map[row + 1][col]
#define NW game->map[row - 1][col - 1]
#define NE game->map[row - 1][col + 1]
#define W game->map[row][col - 1]
#define E game->map[row][col + 1]
#define SW game->map[row + 1][col - 1]
#define SE game->map[row + 1][col + 1]


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
        putarray(game->map);

        // pour toutes les lignes
        for (int row = 1; game->map[row + 1]; row++) {

            // et toutes les colonnes de chaques lignes
            for (int col = 1; game->map[row][col + 1] != '\0'; col++) {

                // compteur des surroundings
                int n = 0;

                // pour chaques cellules on boucle pour les 8 cellules adjacentes
                for (int i = 0; i < 8; i++)

                    // si l'adjacent est occupé: += 1 sinon 0
                    n += (outerCells[i] == '#');
                
                // changement de la cellule en fonction du résultat
                game->map[row][col] = (n < 3 || n > 5) ? '.' : '#';
            }
        }

        // waiting 0.5s before showing the map with +1 occurence
        sleep(0.5);
    }
}

void core(game_t *game)
{
    int x = 0, outerCells[8] = {N, S, NW, NE, W, E, SW, SE};
    while (x++ < game->occurences) {
        putarray(game->map);
        for (int row = 1; game->map[row + 1]; row++) {
            for (int col = 1; game->map[row][col + 1] != '\0'; col++) {
                int n = 0;
                for (int i = 0; i < 8; i++)
                    n += (outerCells[i] == '#');
                game->map[row][col] = (n < 3 || n > 5) ? '.' : '#';

            }
        }
        sleep(0.5);
    } 
}


// _____________________________________________________________________________________________________________________ //


char *readFile(char *fileName)
{
    struct stat st;
    char *str = NULL;
    int fd = open(fileName, O_RDONLY);

    if (stat(&st, fileName) == -1 || fd == -1) return NULL;
    str = malloc(st.st_size + 1);
    read(fd, &str, st.st_size);
    str[st.st_size] = '\0';
    return str;
}

int arrlen(char **map)
{
    int i = 0;
    for (; map[i]; i++);
    return i;
}

int initStruct(game_t *game, int occurences)
{
    game->map = strToArray(readFile(av[1]));
    game->occurences = occurences;
    if (!game->map || game->occurences < 2) {
        putStr(2, "provide valid arguments\n");
        return 84;
    }
    return 0;
}

int main(int ac, char **av)
{
    game_t *game = malloc(sizeof(game_t));

    if (ac != 3 || initStruct(game = &(game_t *){0}), atoi(av[2]))
        exitError("You need to provide a valid map.\n");
    core(game);
    return 0;
}