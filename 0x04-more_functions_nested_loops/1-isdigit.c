#include "main.h"
/**
 * _isdigit - checks whether a number passed as an argument is digit number
 * @c: argument to be checked
 * Return: returns 1 if sucessful, 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}
	return (0);
}
