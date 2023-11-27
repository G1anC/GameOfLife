/*
** EPITECH PROJECT, 2022
** cat
** File description:
** description
*/

#include "../INCLUDE/my.h"

char *cat(char *dest, char const *src)
{
    int len = len(dest)
    int i = 0;

    while (src[i++])
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
