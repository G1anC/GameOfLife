/*
** EPITECH PROJECT, 2022
** ncpy
** File description:
** description
*/

#include "../INCLUDE/my.h"

char *ncpy(char *dest, char *src, int size)
{
    int i = 0;

    for (; i < size; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
