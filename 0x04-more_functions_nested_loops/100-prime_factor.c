#include <stdio.h>
/**
  *main - printing factors of number
  *
  *Return: Always
  */
int main(void)
{
	long a;
	long b = 612852475143;

	for (a = 2; a < b; a++)
	{
		if (b % a == 0)
			b = b / a;
	}
	printf("%li\n", b);
	return (0);
}
