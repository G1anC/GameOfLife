/*
** EPITECH PROJECT, 2023
** strToArr.C
** File description:
** strToArr
*/

// appel de fonction
// strToArr(str, mallocWork(str));

#include "../INCLUDE/my.h"

#define PTR sizeof(char *)
#define START_NOALPHA (i == 0 && str[i] != ALPHA) // if there is a no_alphanumeric character at the start of the string
#define NEW_LINE (str[i] != ALPHA && str[i - 1] == ALPHA) // if we end a word and the next character isn't alphanumeric
#define IN_NOALPHA_PART (str[i - 1] != ALPHA && str[i] != ALPHA) // if we already are in a non alphanumeric part of the string

int nbrOfLigns(char *tmp)
{
    int ligns = 0;

    for (; *tmp++; ligns += (PTR * (*tmp != ALPHA && *(tmp - 1) == ALPHA)));
    return ligns;
}

char **mallocWork(char *str)
{
    char **arr = malloc(nbrOfLigns(dup(str)) + PTR);
    int wordSize = 0;

    for (int i = 0; str[i]; i++) {
        if (START_NOALPHA || IN_NOALPHA_PART)
            continue;
        if (NEW_LINE) {
            *(arr++) = malloc(wordSize + 1);
            wordSize = 0;
        } else
            wordSize++;
    }
    return arr;
}

void strToArr(char *str, char **arr)
{
    int col = 0;

    for (int i = 0; str[i]; i++) {
        if (START_NOALPHA || IN_NOALPHA_PART)
            continue;
        if (NEW_LINE) {
            *(arr++)[col] = '\0';
            col = 0;
        } else
            (*arr)[col++] = str[i];
    }
    *arr[col] = '\0';
    *(++arr) = NULL;
}