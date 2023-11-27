
#include "../INCLUDE/my.h"

// _____________________________________________________________________________________________________________________ //

int main(int ac, char **av)
{
    game_t *game = malloc(sizeof(game_t));

    if (ac != 3 || initStruct(game = &(game_t *){0}), atoi(av[2]))
        exitError("You need to provide a valid _map.\n");
    core(game);
    return 0;
}
