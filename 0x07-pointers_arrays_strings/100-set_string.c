#include "main.h"
#include <stdio.h>
#include <string.h>
#include "string_operations.h"
#include <stdlib.h>

/**
 * set_string - sets the value of a pointer to a char
 * @dest: pointer to pointer
 * @src: pointer char
 */

void set_string(char **dest, const char *src)
{
	*dest = malloc(strlen(src) + 1);

	if (*dest != NULL)
	{
		strcpy(*dest, src);
	}
	else
	{
		fprintf(stderr, "memory allocation failed\n");
	}
}

