#include "main.h"
#include <stdio.h>
/**
  *print_to_98 - printing numbers to 98
  *@n:interger to start printing from
  *Return: Success 0.
  */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n--;
		}
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
