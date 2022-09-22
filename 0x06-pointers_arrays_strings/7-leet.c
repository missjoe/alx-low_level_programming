#include "main.h"
/**
 * leet - leet
 * @s: string
 * Return: char value
 */
char *leet(char *s)
{
	char alpha[] = "a4A4e3E3o0O0t7T7l1L1";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; alpha[j] != '\0'; j++)
		{
			if (s[i] == alpha[j])
			{
				s[i] = alpha[j + 1];
				break;
			}
		}
	}
	return (s);
}
