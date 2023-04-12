#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if insufficient memory
 * was available or if str is NULL.
 */
char *_strdup(char *str)
{
	size_t len;
	char *dup;

	if (str == NULL) /* Check if the input string is NULL */
		return (NULL);

	len = strlen(str);
	dup = malloc((len + 1) * sizeof(char));

	if (dup == NULL) /* Check if memory allocation was successful */
		return (NULL);

	strcpy(dup, str); /* Copy the input string to the new memory block */

	return (dup); /* Return a pointer to the new memory block */
}

