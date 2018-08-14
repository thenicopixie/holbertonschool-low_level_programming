#include "holberton.h"

/**
 * append_text_to_file - function that appends a text at the end of a file
 * @filename: name of file
 * @text_content: string of text to append
 * Return: 1 on success or -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fdes, length;

	if (!filename)
		return (-1);

	if (text_content == NULL && filename)
		return (1);
	/* open file and position to append */
	fdes = open(filename, O_WRONLY | O_APPEND, 0600);

	if (fdes == -1)
		return (-1);

	/* get length of string in text_content */
	for (length = 0; text_content[length] != '\0'; length++)
	;
	/* write test_content string into end of file */
	write(fdes, text_content, length);

	close(fdes);

	return  (1);
}
