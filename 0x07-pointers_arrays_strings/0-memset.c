#include "main.h"

/**
 * _memset - copies data
 * @s: the source to copy it to
 * @b: the number of bytes to be overwritten
 * @n: integer variable
 *
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
