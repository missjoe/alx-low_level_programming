#include "main.h"
/**
 * print_square - This is the function name
 * @size: This is thefunction parameter
 * Description: funtion that prints square followed by a new line
 * Return: 0
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int i, j;

		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
