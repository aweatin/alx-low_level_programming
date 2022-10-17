#include <stdio.h>
/**
  *main-printing single digits separated by comma
  *Return:success 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 100; a++)
	{
		putchar((a / 9) + '0');
		putchar((a % 9) + '0');
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
