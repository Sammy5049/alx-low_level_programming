#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *make_buffer(char *doc_file);
void file_close(int cld);

/**
 * make_buffer - make 1024 bytes for a buffer.
 * @doc_file: name of file buffer is storing chars for.
 *
 * Return: pointer to newly-allocated buffer.
 */
char *make_buffer(char *doc_file)
{
	char *buf;

	buf = (char *) malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can not Write to %s\n", doc_file);
		exit(98);
	}

	return (buf);
}


/**
 * file_close - func Close the file descriptors.
 * @cld: file descriptor to be closed.
 */
void file_close(int cld)
{
	int cl;

	cl = close(cld);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not close cld");
		exit(99);
	}
}



/**
 * main - Copy the contents ofone file to another file.
 * @argc: The number of argumentsprovided  to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: when the argument count is incorrect - exit code 98.
 * when file_in does not exist or cannot be read - exit code 99.
 * when file_out cannot be created or written to - exit code 100.
 * when file_out or file_from cannot be closed - exit code 101.
 */
int main(int argc, char **argv)
{
	int rd, in, out;
	char *buff;
	int wt;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_in file_out\n");
		exit(98);
	}

	buff = make_buffer(argv[2]);
	in = open(argv[1], O_RDONLY);
	rd = read(in, buff, 1024);

	out = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (in == -1 || out == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can not read file%s\n", argv[1]);
			free(buff);
			exit(99);
		}

		wt = write(out, buff, rd);
		if (out == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can not write to %s\n", argv[2]);
			free(buff);
			exit(100);
		}

		rd = read(in, buff, 1024);
		out = open(argv[2], O_WRONLY | O_APPEND);
	} while (rd > 0);

	free(buff);
	file_close(in);
	file_close(out);

	return (0);

}
