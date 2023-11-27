/*
** EPITECH PROJECT, 2022
** putNbr
** File description:
** description
*/

#include "../../INCLUDE/my.h"

int putNbr(int nb)
{
    int compt = 0;

    if (nb < 0) {
        putChar('-');
        nb = -nb;
        compt++;
    }
    if (nb >= 10) {
        putNbr(nb / 10);
        putNbr(nb % 10);
        compt++;
    } else {
        putChar(nb + '0');
        compt++;
    }
    return compt;
}

void flag_d(va_list list)
{
    putNbr(va_arg(list, int));
}
