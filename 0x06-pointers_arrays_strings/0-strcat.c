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
	int index = 0, len_dest = 0;

	while (dest[index++])
		len_dest++;

	for (index = 0; src[index]; index++)
		dest[len_dest++] = src[index];

	return (dest);
}
