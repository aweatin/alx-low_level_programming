#include <stdio.h>
/**
  *main-printing single digits separated by comma
  *Return:success 0
 */
int main(void)
{
	int a;
	int b;

	for (a = 0; a < 100; a++)
		for (b = 1; 1 < 9; b++)
			while ((a < b) && (a != b))
			{
				putchar((a % 10) + '0');
				putchar((b % 10) + '0');
				putchar(',');
				putchar(' ');
			}
	putchar('\n');
	return (0);
}
