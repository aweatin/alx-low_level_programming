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
	while (b <= 10)
	{
		for (a = 0; a <= 14; a++)
			_putchar(a);
		_putchar('\n');
		b++;
	}
}
