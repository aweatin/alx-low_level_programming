#include "main.h"
#define NULL 0

/**
 * _strpbrk - function that searches a string for any of a set of bytes
 * @s: string to search
 * @accept: bytes to look for
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	if (accept[j] == '\0')
		continue;
	}
	return (NULL);
}
