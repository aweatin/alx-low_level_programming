#include "main.h"

/**
  * _strncat - continates two strings
  * @dest: the string to append
  * @src: the string to append dest
  * @n: the number of bytes from src
  *
  *Return: a ponter to the resulting string dest
  */
char *_strncat(char *dest, char src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
