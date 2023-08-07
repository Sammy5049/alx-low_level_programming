#include "main.h"

/**
 * append_text_to_file - func to append text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: string to add to the end of the file.
 *
 * Return: -1 if function fails or filename is NULL.
 *         -1 if file does not exist the user lacks write permissions.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wt, op, count;

	if (filename == NULL)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		count = 0;

		while (text_content[count])
		{
			count++;
		}
	}

	op = open(filename, O_WRONLY | O_APPEND);
	wt = write(op, text_content, count);

	if (wt == -1 || op == -1)
	{
		return (-1);
	}

	close(op);

	return (1);
}
