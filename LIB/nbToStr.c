/*
** EPITECH PROJECT, 2022
** int to str
** File description:
** int to str
*/

#include "../INCLUDE/my.h"

char *nbToStr(int nb)
{
    char *str = "";
    int tmp = nb * (-(nb < 0) + (nb >= 0));

    if (nb == 0)
        return "0";
    for (; (tmp / 10) < 10; tmp /= 10) {
        ncat(str, (char *) &(tmp % 10 + '0'), 1);
        tmp -= (tmp % 10);
    } 
    return (nb < 0) ? cat("-", str) : str;
}
