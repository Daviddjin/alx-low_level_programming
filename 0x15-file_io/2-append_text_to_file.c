#include "main.h"

/**
 * append_text_to_file - changes text at the end of a file.
 * @filename:  pointer to name of a file.
 * @text_content: string to add to end of the file.
 * Return: function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int lon, wrt, ledn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ledn = 0; text_content[ledn];)
			ledn++;
	}

	lon = open(filename, O_WRONLY | O_APPEND);
	wrt = write(lon, text_content, ledn);

	if (lon == -1 || wrt == -1)
		return (-1);

	close(lon);

	return (1);
}




