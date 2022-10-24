#include "main.h"

/**
  * swap_int - swap values
  * @a : pointer value
  * @b : pointer value
  * Return: Always 0.
  */
int swap_int(int *a, int *b)
{
	int ntl;

	ntl = *a;
	*a = *b;
	*b = ntl;
}
