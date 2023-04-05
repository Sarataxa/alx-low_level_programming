#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the paramete string.
 */
int _strlen_recursion(char *s)
{
	int long_string = 0;

	if (*s)
	{
		long_string++;
		long_string += _strlen_recursion(s + 1);
	}

	return (long_string);
}

