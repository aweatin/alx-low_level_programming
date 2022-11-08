#include <stdio.h>
#include <stdlib.h>

/**
  * main - function to print multiplied answer
  * @argc: number of count
  * @argv: arguments passed
  * Return: always 1 if < 2 arg var passed otherwise 0.
  */
int main(int argc, char **argv)
{
	int i = 2, j = 3;

	if (argc > 2)
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		printf("%d\n", i * j);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
