#include "main.h"

/**
  * print_alphabet_x10 - printing alphabets 10 times
  *
  *Return: void
  */
void print_alphabet_x10(void)
{
	char ap = 'a';
	char sl;

	while (ap < 'j')
	{
		for (sl = 'a'; sl <= 'z'; sl++)
			_putchar(sl);
		_putchar('\n');
		ap++;
	}
}
