/*
** EPITECH PROJECT, 2023
** array_tok.c
** File description:
** array_tok
*/

#include "../INCLUDE/my.h"

int my_toklen(char *str, char *sep)
{
    int ligns = 0;

    for (int i = 0; str[i]; i++)
        for (int x = 0; sep[x]; x++, ligns += (str[i] == sep[x]));
    return (++ligns) * PTR;
}

char **arrTok(char *str, char *sep)
{
    char **array = malloc(my_toklen(str, sep));
    char *word = strtok(str, sep);

    do {
        *(array++) = word;
    } while ((word = strtok(NULL, sep)) != NULL);
    return array;
}
