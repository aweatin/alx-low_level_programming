#include <stdio.h>
/**
  *main-printing all small alphabets
  *Return:success 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	putchar("\n");
	return (0);
}
