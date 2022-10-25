#include "main.h"
/**
  *rev_string - Reverses a string
  *@s: stirng to be reversed
  */
void rev_string(char *s)
{
	int a = 0, len = 0;
	char tmp;

	while (s[a++])
		len++;

	for (a = len - 1; a >= len / 2; a--)
	{
		tmp = s[a];
		s[a] = s[len - a - 1];
		s[len - a - 1] = tmp;
	}
}
