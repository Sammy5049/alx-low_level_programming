#include <stdio.h>
#include <stdlib.h>
#include "main.h"


#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file and printout to STDOUT.
 * @filename: text file to be read
 * @letters: the number of letters to be read
 * Return: wt - actual number of bytes read then printed
 *        0 when the function fails or filename == NULL.
 */



ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ptt;
	ssize_t wt;
	ssize_t rd;
	char *bufer;


	ptt = open(filename, O_RDONLY);

	if (ptt == -1)
	{
		return (0);

	}
	bufer = malloc(sizeof(char) * letters);
	rd = read(ptt, bufer, letters);

	wt = write(STDOUT_FILENO, bufer, rd);

	free(bufer);
	close(ptt);
	return (wt);
}
