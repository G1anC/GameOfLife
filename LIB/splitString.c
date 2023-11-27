/*
** EPITECH PROJECT, 2023
** splitString.c
** File description:
** splitString
*/



#define PTR sizeof(char *)

static char **algo(char *str, char **arr, char *sep, int pos)
{
    int i = 0;

    for (; !isExisting(sep, str[i]) && str[i]; i++);
    arr[pos] = malloc(i + 1);
    if (( i > 0 && !isExisting(sep, str[i - 1])) && isExisting(sep, str[i])) {
        ncpy(arr[pos], str, i);
        pos += (len(arr[pos]));
    }
    if (!str[i]) {
        if (i > 0 && !isExisting(sep, str[i - 1]))
            ncpy(arr[pos++], str, i);
        arr[pos] = (char *) 0;
        return arr;
    }
    return algo(&str[i + 1], arr, sep, pos);
}

char** splitString(char *str, char *sep)
{
    int count = 1;

    for (int i = 0; str[i++]; count += (isExisting(sep, str[i])));
    return algo(str, malloc(PTR * (count + 1)), sep, 0);
}
