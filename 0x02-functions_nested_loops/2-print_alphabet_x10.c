#include "main.h"
/**
 * print_alphabet_10 - A function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, j;

	j = 0;

		while (j < 10)
		{
			for (n = 'a'; n <= 'z'; n++)
			{
				_putchar (n);
			}
			j++;
			_putchar('\n');
		}
}
