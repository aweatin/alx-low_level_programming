#include "main.h"
#define NULL 0

/**
  * _strstr - finds the first occurrence of the substring
  * @haystack: string to be searched & printed
  * @needle: comparison
  * Return: needle haystack comp.
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p;

	if (*needle == '\0')
		return (haystack);
	for (; *haystack != '\0'; haystack++)
	{
		i = 0;
		p = haystack;
		while (*p == needle[i])
		{
			i++;
			p++;
			if (needle[i] == '\0')
				return (haystack);
		}
	}
	return (NULL);
}
