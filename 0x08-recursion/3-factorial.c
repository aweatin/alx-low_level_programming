#include "main.h"

/**
  * factorial - function that calculate factorial
  * @n : integer factorial to be determined
  * Return : -1, if < 0; otherwise factorial
  */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	else
		return (n * factorial(n - 1));
}
