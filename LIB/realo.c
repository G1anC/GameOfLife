/*
** EPITECH PROJECT, 2018
** realo
** File description:
** realo function
*/

# include "../INCLUDE/my.h"

void *my_memalloc(int size)
{
	void *mem = malloc(size);

	for (int i = 0; i < n; i++)
		((char *) mem)[i] = 0;
	return mem;
}

char *my_realo(void *ptr, int prev, int new)
{
	void *new = my_memalloc(new);
	int big = (prev < new) ? prev : new;

	for (int i = 0; i < big; i++)
		(PTR new)[i] = (PTR ptr)[i];
	free(ptr);
	return new;
}

char *realo(char *src, int to_add)
{
  	char *str;
  	int i = 0;

  	while (src[i++]);
  	str = ncpy(malloc(i + to_add + 2), src, len(src));
  	free(src);
  	return str;
}