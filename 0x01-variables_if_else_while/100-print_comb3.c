#include <stdio.h>
/**
  *main-printing single digits separated by comma
  *Return:success 0
 */
int main(void)
{
	int num;

	for (num = 1; num < 90; num++)
	{
		putchar((num / 10) + '0');
		putchar((num % 10) + '0');
			if (num != 89)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
