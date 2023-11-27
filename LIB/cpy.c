/*
** EPITECH PROJECT, 2022
** cpy
** File description:
** description
*/

#include "../INCLUDE/my.h"

extern char *cpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i++] != '\0')
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}
