#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - function that concatenates all the arguments
  * @ac: arguments number
  * @av: argument variables
  * Return: Always 0.
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, l;
	char *s;
	
	if (ac == 0)
		return (NULL);
	if (av == 0)
		return (NULL);
	i = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
			i++;
		i++;
	}
	i++;
	s = malloc(i * sizeof(char));
	if (s == 0)
		return (NULL);
	l = 0;
	for (j = 0; j < ac; j++)
	{
		for (k = 0; av[j][k] != '\0'; k++)
		{
			s[l++] = av[j][k];
		}
		s[l++] = '\n';
	}
	s[l] = '\0';
	return (s);
}
