#include "main.h"

/**
 * create_file - funct to create file.
 * @filename: Pointer to name of file to be created.
 * @text_content: pointer to the string to write into file.
 *
 * Return: -1 if function fails.
 *         if otherwise - 1.
 */


int create_file(const char *filename, char *text_content)
{
	int op, wt, length = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{

		for (length = 0; text_content[length];)
		{
			length++;
		}
	}

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(op, text_content, length);

	if (op == -1 || wt == -1)
	{
		return (-1);
	}

	close(op);

	return (1);

}
