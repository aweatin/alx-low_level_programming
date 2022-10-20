#include <stdio.h>

/**
   * main - finds and prints the first 98 Fibonacci numbers,
    * starting with 1 and 2
     * followed by a new line
      * Return: ALways 0 (Success)
       */
int main(void)
{
	int i = 1000000000;
	unsigned long int a, b, c, b1, b2, c1, c2;

	b = 1;
	c = 2;

	printf("%lu", b);
	for (a = 1; a < 91; a++)
	{

		printf(", %lu", c);
		c = c + b;
		b = c - b;
	}
	b1 = b / i;
	b2 = b % i;
	c1 = c / i;
	c2 = c % i;
	for (a = 92; a < 99; a++)
	{
		printf(", %lu", c1 + (c2 % i));
		printf("%lu", c2 % i);
		c1 = c1 + b1;
		b1 = c1 - b1;
		c2 = c2 + b2;
		b2 = c2 - b2;
	}
	printf("\n");
	return (0);
}

