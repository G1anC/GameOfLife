/*
** EPITECH PROJECT, 2023
** main.c
** File description:
** main
*/

#include "../INCLUDE/my.h"

char *cmpCharacters(char _c1, char* _cmp)
{
    for (int i = 0; _cmp[i]; i++)
        if (_c1 == _cmp[i])
            return &_c1;
    return NULL;
}

char *pbrk(char *str, char *_toFind)
{
    char *res = NULL;

    for (int i = 0; str[i]; i++)
        if ((res = cmpCharacters(str[i], _toFind)) != NULL)
            return res;
    return NULL;
}