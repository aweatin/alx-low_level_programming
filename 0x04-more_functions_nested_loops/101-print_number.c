#include "main.h"
/**
  *print_number - print integer
  *@n : integer value
  *Return: Always 0.
  */
void print_number(int n)
{
	unsigned int i, j, cont, tmp, pw;

	i = n;
	pw = j = 1;

	if (n < 0)
	{
		i = i * -1;
		_putchar('_');
	}
	tmp = i;

	while (tmp > 9)
	{
		j++;
		tmp = tmp / 10;
	}
	for (cont = 1; cont < j; cont++)
		pw = pw * 10;

	while (pw > 1)
	{
		_putchar((i / pw) % 10 + '0');
		pw = pw / 10;
	}
	_putchar(i % 10 + '0');
}
