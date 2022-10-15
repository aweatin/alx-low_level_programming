#include <stdio.h>
/**
  *main-printing all uppercase alphabets
  *Return:success 0
 */
int main(void)
{
	char alp;
	char ALP;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		putchar(alp);
	}
	for (ALP = 'A'; ALP <= 'Z'; ALP++)
	{
		putchar(ALP);
	}
	putchar('\n');
	return (0);
}
