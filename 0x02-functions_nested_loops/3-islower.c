#include "main.h"

/**
  * _islower - checking only lower cases
  *
  * Return: 1 if c is lower otherwise 0
  *@c: character to be checked
  */
int _islower(int c)
{
	if (c >= 97 && c <= 222)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
