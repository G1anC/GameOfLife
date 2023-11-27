/*
** EPITECH PROJECT, 2022
** putFloat
** File description:
** description
*/

#include "../../INCLUDE/my.h"

void positiv(double f, int x)
{
    int i = 0;

    putNbr(x);
    putChar('.');
    f = f - x;
    while (i < 5) {
        f = f * 10;
        x = (int) f;
        putNbr(x);
        f = f - x;
        i++;
    }
    putNbr(x);
}

void negativ(double f, int x)
{
    int i = 0;

    if (x == 0)
        putChar('-');
    putNbr(x);
    f = f - x;
    f = f * -1;
    putChar('.');
    while (i < 5) {
        f = f * 10;
        x = (int) f;
        putNbr(x);
        f = f - x;
        i++;
    }
    putNbr(x);
}

double putFloat(double nbr)
{
    int x = (int)nbr;
    int i = 0;

    if (nbr == x) {
        my_printf("%d.000000", x);
        return nbr;
    }
    if (nbr > 0) {
        positiv(nbr, x);
        return nbr;
    }
    if (nbr < 0) {
        negativ(nbr, x);
        return nbr;
    }
}

void flag_f(va_list list)
{
    putFloat(va_arg(list, double));
}
