#include "main.h"
/**
  * print_times_table -print multiplication to input num
  *@n: character to be used
  *
  *Return : Success table
  */
void print_times_table(int n)
{
	int x, y, mt;

	if ( n >= 0 && n < 16)
	{
		for (x = 0; x <= n; x++)
		{
			_putchar(48);
			for (y = 1; y <= n; y++)
			{
				mt = x * y;
				_putchar(44);
				_putchar(32);
				if (mt <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(mt +48);
				}
				else if (mt <= 99)
				{
					_putchar(32);
					_putchar((mt / 10) + 48);
					_putchar((mt % 10) + 48);
				}
				else
				{
					_putchar(((mt / 100) % 10) + 48);
					_putchar(((mt / 10) % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
