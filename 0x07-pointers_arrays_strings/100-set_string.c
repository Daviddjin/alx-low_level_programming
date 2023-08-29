#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_operations.h"

/**
 * set_string - sets the value of a pointer to a char
 * @dest: pointer to pointer
 * @src: pointer char
 */

void set_string(char **dest, const char *src)
{
	*dest = (char *)malloc(strlen(src) + 1);

	if (*dest != NULL)
	{
		strcpy(*dest, src);
	}
	else
	{
		_printf(stderr, "Memory allocation failed\n");
	}
}
