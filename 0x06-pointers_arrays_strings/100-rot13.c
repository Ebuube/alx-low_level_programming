#include "main.h"
/**
 * rot13 - encodes a letter using the ROT13 principle
 * @str: the string to encode
 * Description: each letter of the alphabet is moved 13 characters up the
 * the English alphabet
 * Return: the encoded string
 */
char *rot13(char *str)
{
	int step = 0, count = 0;
	char in[] = {'A', 'B', 'C', 'D', 'E', 'F',
			     'G', 'H', 'I', 'J', 'K', 'L',
			     'M', 'N', 'O', 'P', 'Q', 'R',
			     'S', 'T', 'U', 'V', 'W', 'X',
			     'Y', 'Z', 'a', 'b', 'c', 'd',
			     'e', 'f', 'g', 'h', 'i', 'j',
			     'k', 'l', 'm', 'n', 'o', 'p',
			     'q', 'r', 's', 't', 'u', 'v',
			     'w', 'x', 'y', 'z'};
	char out[] = {'N', 'O', 'P', 'Q', 'R', 'S',
			     'T', 'U', 'V', 'W', 'X', 'Y',
			     'Z', 'A', 'B', 'C', 'D', 'E',
			     'F', 'G', 'H', 'I', 'J', 'K',
			     'L', 'M', 'n', 'o', 'p', 'q',
			     'r', 's', 't', 'u', 'v', 'w',
			     'x', 'y', 'z', 'a', 'b', 'c',
			     'd', 'e', 'f', 'g', 'h', 'i',
			     'j', 'k', 'l', 'm'};
	const int MAX = sizeof(in) / sizeof(char);

	while (str[step])
	{
		for (count = 0; count < MAX; count++)
		{
			if (str[step] == in[count])
			{
				str[step] = out[count];
				break;
			}
		}
		step++;
	}
	return (str);
}
