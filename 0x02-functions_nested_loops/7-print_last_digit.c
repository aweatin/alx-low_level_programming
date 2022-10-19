#include "main.h"
/**
   * print_last_digit - a function that prints the last digit of a number
    * @ld: number's last digit result
     * Return: value of the last digit
      */
int print_last_digit(int ld)
{
	int pln;

	pln = (ld % 10);
	if (pln < 0)
	{
		pln = (-1 * pln);
	}
	_putchar(pln + '0');
	return (pln);
}
