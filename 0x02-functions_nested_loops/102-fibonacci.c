#include <stdio.h>
/**
  *main -print first 50 fibonacci numbers,
  *starting with 1 and 2
  *Return: Always 0 success
  */
int main(void)
{
	long int a, b, c, d;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		d = b + c;
		b = c;
		c = d;
	}
	return (0);
}
