/*
** EPITECH PROJECT, 2023
** free_arr.c
** File description:
** getNbr
*/

#include "../INCLUDE/my.h"

void freeArr(char **array)
{
    for (int i = 0; array[i] != NULL; i++)
        free(array[i]);
    free(array);
}
