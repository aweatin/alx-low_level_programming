#include <stdio.h>
/**
  *main-printing all nmbers less than 10 with putchar
  *Return:success 0
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 10; dig++)
	{
		putchar((dig % 10) + '0');
	}
	for (low = 'a'; low < 'g'; low++);
	{
		putchar(low);
	}
	putchar('\n');
	return (0);
}
