#include "main.h"
#include <stdio.h>
/**
  * print_diagsums - printing the sum of two diagonals
  * @a: array values
  * @size: size of the matrix
  * Return: Always 0.
  */
void print_diagsums(int *a, int size)
{
	int i, j;
	int dg = 0, dg1 = 0;

	for (i = 0; i < size * size; i = i + (size + 1))
	{
		dg += a[i];
	}
	for (j = size - 1; j < size * size - 1; j = j + (size - 1))
	{
		dg1 += a[j];
	}
	printf("%d, ", dg);
	printf("%d\n", dg1);
}
