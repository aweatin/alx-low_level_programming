#include "main.h"

/**
  * print_alphabet_x10 - printing alphabets 10 times
  *
  *Return: void
  */
void print_alphabet_x10(void)
{
	int ap = 11;
	int sl;

	while (ap < 11)
	{
		for (sl = 'a'; sl <= 'z'; sl++)
			_putchar(sl);
		_putchar('\n');
		ap++;
	}
}
