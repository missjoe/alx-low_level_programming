#include "main.h"
/**
 * _isupper - function that verifies an upper case letter
 * @c: character
 * Description: Prints the alphabet with _putchar
 *
 * Return: return 1 if uppercase or 0 if otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
