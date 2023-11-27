/*
** EPITECH PROJECT, 2023
** putStr.c
** File description:
** putStr
*/

#include "../../INCLUDE/my.h"

int putStr(int fd, char *str)
{
    char *err_mess = "Write failed -> invalid arguments";

    if (write(fd, str, len(str)) == -1) {
        putStr(2, err_mess);
        return 84;
    }
    return 0;
}

void flag_s(va_list list)
{
    putStr(1, va_arg(list, char*));
}
