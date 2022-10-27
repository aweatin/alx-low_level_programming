#include "main.h"

/**
  * _strcat - joins the strings pointed to by src
  *@dest: pointer of the string to be concatenated upon.
  *@src: stting to be append to
  *
  * Return: A point to string dest destination
  */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
