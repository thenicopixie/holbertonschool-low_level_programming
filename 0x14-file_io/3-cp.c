#include "holberton.h"

#define BUFF 1024
/**
 * main - function that copies contents from one file into another file.
 * @argc: number of arguments (file_from)
 * @argv: list of arguments (file_to)
 * Return: 0, or exit status
 * 1 - check if correct amount of arguments given
 * 2 - open and read file_from (first file)
 * 3 - check if file can be read, if not give error and exit
 * 4 - create file_to or truncate existing file with read/write permissions
 * 5 - check if file was successfully created
 * 6 - read from file_from (first file), if success,
 * write to file_to (second file). Check for success/failure
 * 7 - check if files can be closed, if not give error and exit
 */
int main(int argc, char **argv)
{
	int fd1, fd2, reader, writer;
	char buffer[BUFF];

	if (argc != 3) /*1*/
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY); /*2*/

	if (fd1 == -1) /*3*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664); /*4*/

	if (fd2 == -1) /*5*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}
	/*6*/
	do {
		reader = read(fd1, buffer, BUFF);

		if (reader == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		if (reader)
		{
			writer = write(fd2, buffer, reader);
			if (writer == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
				exit(99);
			}
		}
	} while (reader);
	/*7*/
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	close(fd1);
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}
	close(fd2);

	return (0);
}
