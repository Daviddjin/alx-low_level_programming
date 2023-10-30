#include "main.h"

/**
 * read_textfile- Read file and print to STDOUT.
 * @filename: read text
 * @letters: number of letter to read
 * Return: w-  number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
        char *bity;
        ssize_t ffd;
        ssize_t wtd;
        ssize_t ted;

        ffd = open(filename, O_RDONLY);
        if (ffd == -1)
                return (0);
        bity = malloc(sizeof(char) * letters);
        ted = read(ffd, bity, letters);
        wtd = write(STDOUT_FILENO, bity, ted);

        free(bity);
        close(ffd);
        return (wtd);
}
