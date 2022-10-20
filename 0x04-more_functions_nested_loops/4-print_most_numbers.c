#include "main.h"
/**
  *print_numbers - printing of numbers less than 10
  *
  *Return: print numbers
  */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		while ((i != 2) && (i != 4))
		{
			_putchar(i);
		}
	}
	_putchar('\n');
}
