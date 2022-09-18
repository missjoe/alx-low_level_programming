#include "main.h"
/**
 * print_triangle - This is the funtion name
 * @size: Tis is the function parameter
 * Description: function that prints triangle followed by a new line.
 * Return: 0
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		putchar('\n');
	} else
	{
		int i, j;

		for (i = 1; i <= size; i++)
		{
			for (j = i; j < size; j++)
			{
				_putchar(' ');
			}
			for (j = 1; j <= i; j++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
