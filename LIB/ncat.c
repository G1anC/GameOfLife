/*
** EPITECH PROJECT, 2022
** ncat
** File description:
** description
*/

#include "INCLUDE/my.h"

extern char *ncat(char *dest, char const *src, int nb)
{
    int len = len(dest)
    int i = 0;

    for (; i < nb && src[i] != '\0'; i++)
        dest[len + i] = src[i];
    dest[len + i] = '\0';
    return dest;
}
