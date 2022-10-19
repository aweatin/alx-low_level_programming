#include "main.h"
/**
  * main - Entry point
  * without printf but _putchar
  * Return:Sucess 0
  */
int main(void)
{
	char sen[] = "_putchar";
	int a = 0;

	while (a < 8)
	{
		_putchar(sen[a++]);
	}
	_putchar('\n');
	return (0);
}
