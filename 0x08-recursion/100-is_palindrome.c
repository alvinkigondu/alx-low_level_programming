#include "main.h"
#include <string.h>

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if string is palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int i, j;


	i = 0;
	j = strlen(s) - 1;

	while (i < j)
	{
		if (s[i] != s[j])
			return (0);

		i++;
		j--;
	}

	return (1);
}
