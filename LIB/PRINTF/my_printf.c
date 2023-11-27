/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** sus
*/

#include "../../INCLUDE/my.h"

void tabFlag(char character, va_list list)
{
    char flags[11] = {'c', 's', 'd', 'p', 'f'};
    void (*fonctions[11])(va_list) = {flag_c, flag_s, flag_d, flag_p, flag_f};

    for (int x = 0; flags[x]; x++)
        if (character == flags[x])
            (*fonctions[x])(list);
}

int my_printf(char const *str, ...)
{
    int i = 0;
    va_list list;

    va_start(list, *str);
    for (i = 0; str[i]; i++) {
        if (str[i] == '%') {
            tabFlag(str[++i], list);
            continue;
        }
        putChar(str[i]);
    }
    va_end(list);
    return 0;
}
