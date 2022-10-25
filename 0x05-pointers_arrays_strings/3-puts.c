#include "main.h"

/**
  * _puts - prints character strings
  * @str : to input string
  * Return: Always 0.
  */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}

