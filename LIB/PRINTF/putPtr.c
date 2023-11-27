/*
** EPITECH PROJECT, 2022
** flag_pointeur.c
** File description:
** sus
*/

#include "../../INCLUDE/my.h"

void flag_p(va_list list)
{
    int i = va_arg(list, void*);
    int *a = &i;

    putStr(1, "Ox");
    argx(*a);
}
