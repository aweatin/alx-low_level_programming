#include "main.h"

/**
  * _strlen - Returns the length of a string.
  * @str: string.
  *
  * Return: Length.
  */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}
