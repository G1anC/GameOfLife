/*
** EPITECH PROJECT, 2023
** dup.c
** File description:
** dup
*/

#include "../INCLUDE/my.h"

char *dup(char const *str)
{
    return (!str) ? NULL : cpy(malloc(len(str) + 1), str);
}
