#include "holberton.h"

/**
 * create_file - function that creates a file
 * @filename: file to create
 * @text_content: content to put into created file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fdes, writer, length;

	if (!filename)
		return (-1);

	if (!text_content)
		text_content = "";
	/* open file, create if is doesn't exist, */
	/* otherwise truncate existing file with read/write permissions */
	fdes = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fdes == -1)
		return (0);

	/* get length of string in text_content */
	for (length = 0; text_content[length] != '\0'; length++)
	;

	/* write contents of test_content into new file */
	writer = write(fdes, text_content, length);

	if (writer == -1)
	{
		return (-1);
	}

	close(fdes);

	return (1);
}
