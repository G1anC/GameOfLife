/*
** EPITECH PROJECT, 2022
** putChar
** File description:
** my_printf en meilleur
*/

#include "../../INCLUDE/my.h"

void putChar(char c)
{
    write(1, &c, 1);
}

void flag_c(va_list list)
{
    putChar(va_arg(list, int));
}
