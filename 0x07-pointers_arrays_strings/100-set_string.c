#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "string_operations.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: The pointer.
 * @to: The char.
 */
void set_string(char **s, char *to);
{
	*s = to;
}
