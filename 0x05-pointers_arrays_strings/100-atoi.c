#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The integer value of the converted string.
 */
int _atoi(char *s)
{
	int decl = 1;
	unsigned int a = 0;

	do {
		if (*s == '-')
			decl *= -1;

		else if (*s >= '0' && *s <= '9')
			a = (a * 10) + (*s - '0');

		else if (a > 0)
			break;
	} while (*s++);

	return (a * decl);
}
