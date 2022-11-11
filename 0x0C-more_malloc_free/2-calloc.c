#include "mian.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * _calloc - function that allocates memory for an array
  * @nmemb: number
  * @size: size of
  * Return: NULL if failed.
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int n;
	void *hol;

	if (nmemb <= 0 || size <= 0)
		return (NULL);
	p = malloc(nmemb * size);
	hol = p;
	if (p == 0)
	{
		return (NULL);
	}
	for (n = 0; n < (nmemb * size); n++)
		p[n] = 0;
	return (hol);
}
