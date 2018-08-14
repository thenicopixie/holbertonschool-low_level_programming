#include "holberton.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: name of file
 * @letters: the number of letters read and printed
 * Return: number of letters read and printed or 0 if failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fdes, reader, writer;

	/* read */

	if (!filename)
		return (0);

	fdes = open(filename, O_RDONLY);

	if (fdes == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (!buffer)
		return (0);

	reader = read(fdes, buffer, letters);

	if (reader == -1)
	{
		free(buffer);
		return (0);
	}

	close(fdes);

	/* write */

	writer = write(STDOUT_FILENO, buffer, reader);

	if (writer == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (writer);
}
