#include <stdio.h>
/**
  *main-printing single digits separated by comma
  *Return:success 0
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar((num % 10) + '0');
			if (num != 9)
			{
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
