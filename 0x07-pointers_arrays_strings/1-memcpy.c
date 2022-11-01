#include "main.h"

/**
  * _memcpy - prints buffer in hexa
  * @dest: the array to copy over
  * @src: the source to cpy
  * @n: unsigned int variable
  *
  * Return: Nothing.
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
