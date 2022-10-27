#include "main.h"

/**
  *rot13 -encode a string using rot13
  *@str: the string to encode
  *Return: A pointer to encoded string
  */
char *rot13(char *str)
{
	int index1 = 0, index2;
	char alph[52] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v','q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
	char key[52] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', 'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm'};

	while (str[index1])
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (str[index1] == alph[index2])
			{
				str[index1] = key[index2];
				break;
			}
		}
		index++;
	}
	return (str);
}
