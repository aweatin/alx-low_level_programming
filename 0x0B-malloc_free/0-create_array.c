#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * create_array - function to create an array of chars
  * @c: character
  * @size: the size of the memory to print
  *
  * Return: NULL if 0 or fail else return ptr
  */
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int n;

	if (size == 0)
		return (NULL);
	a = malloc(size * sizeof(*a));
	if (a == NULL)
		return (NULL);
	for (n = 0; n < size; n++)
	{
		a[n] = c;
	}
	return (a);
}
