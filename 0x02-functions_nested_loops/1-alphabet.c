#include "main.h"

/**
  *print_alphabet - printing lowercase of letters
  *
  * Return:Success 0
  */
void print_alphabet(void)
{
	char sl;

	for (sl = 'a'; sl <= 'z'; sl++)
		_putchar(sl);
	_putchar('\n');
}
