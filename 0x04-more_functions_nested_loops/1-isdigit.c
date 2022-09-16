#include "main.h"
/**
 * _isdigit - checks whether a number passed as an argument is digit number
 * @c: argument to be checked
 * Return: returns 1 if sucessful or 0 if otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	else
		return (0);
	}
