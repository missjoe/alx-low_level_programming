#include "main.h"
/**
 * _islower - Entry point
 * @c: the integer value it receives
 *
 * Return: 0
 */
int _islower(int c)
{
	int i = 'a';

	for (i = 'a'; i <= 'z'; i++)
	{
		/* refer int c */
		if (c == i)
		{
			return (1);
		}
	}
	return (0);
}
