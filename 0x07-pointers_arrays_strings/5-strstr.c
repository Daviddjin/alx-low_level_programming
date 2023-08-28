
#include "main.h"

/**
 * _strstr -search a string for any of a set bytes
 * @haystack: the string to be searched
 * @needle:the substring to be located.
 * Return: if the substring is located - a pointer to the beinning
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}







