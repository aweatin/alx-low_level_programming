#include "main.h"
/**
  * more_numbers - print of more numbers
  *
  * Return : void
  */
void more_numbers(void)
{
	int a;
	int b;

	b = 0;
	for (a = 0; a <= 14; a++)
	{
		while (b < 11)
		{
			_putchar(a);
			b++;
		}
		_putchar('\n');
	}
}
