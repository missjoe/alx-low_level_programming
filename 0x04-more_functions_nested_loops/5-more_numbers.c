#include "main.h"
/**
 * more_numbers - This is the function name
 * Description: funtion that prints 10xthe numbers,
 * from0to 14, followedby a new line.
 * Return: 0
 */
void more_numbers(void)
		{
			int i, j;

			for (i = 0; i < 10; i++)
			{
				for (j = 0; j < 15; j++)
				{
					if (j >= 10)
						_putchar(j / 10 + '0');
					_putchar(j % 10 + '0');
				}
				_putchar('\n');
			}
		}

