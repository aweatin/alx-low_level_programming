#include "main.h"
/**
  * print_line - printing line
  *@n : character to determine print times
  *Return: 0.
  */
void print_line(int n)
{
	int a;

	while (n != 0)
	{
		for (a = 0; a < n; a++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
