#include <stdio.h>
/**
  *main-printing all small alphabets and skipping e amd q
  *Return:success 0
 */
int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp != 'q' || alp != 'e')
		{
			putchar(alp);
		}
	}
	putchar('\n');
	return (0);
}
