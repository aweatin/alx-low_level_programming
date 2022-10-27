#include "main.h"
/**
  *reverse_array - revers the items of the array
  *@a: the array of items
  *@n: the number of items in array
  */
void reverse_array(int *a, int n)
{
	int i, index;

	for (index = n - 1; index >= n / 2; index--)
		{
			i = a[n - 1 - index];
			a[n - 1 - index] = a[index];
			a[index] = i;
		}
}
