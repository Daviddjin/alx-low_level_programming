#include "main.h"

/**
 * create_file - Create  file.
 * @filename: pointer to file name
 * @text_content: pointer to string to write to the file.
 * Return: function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content)
{
	int ffd, wrt, ledn = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (ledn = 0; text_content[ledn];)
			ledn++;
	}

	ffd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wrt = write(ffd, text_content, ledn);

	if (ffd == -1 || wrt == -1)
		return (-1);

	close(ffd);

	return (1);
}




