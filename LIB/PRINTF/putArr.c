/*
** EPITECH PROJECT, 2023
** putarr.c
** File description:
** putarr
*/

#include "../INCLUDE/my.h"

void putArr(char **array)
{
    while (*(array++) != NULL)
        my_printf("%s\n", *array);
}