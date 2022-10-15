#include <stdio.h>
/**
  *main-printing all small alphabets in reverse
  *Return:success 0
 */
int main(void)
{
	char pla;

	for (pla = 'z'; pla >= 'a'; pla--)
	{
		putchar(pla);
	}
	putchar('\n');
	return (0);
}
