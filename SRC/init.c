/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "../INCLUDE/my.h"

// _____________________________________________________________________________________________________________________ //

int initStruct(game_t *game, int occurences)
{
    game->_map = statFile(av[1]);
    game->_occurences = occurences;
    if (!game->_map || game->_occurences < 2) {
        putStr(2, "ERROR : Arguments provided are invalid.\n\n");
        return 84;
    }
    return 0;
}
