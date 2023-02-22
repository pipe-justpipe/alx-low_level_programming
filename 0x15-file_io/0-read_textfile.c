#include "main.h"
/**
 * read_textfile - A function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: File name
 * @letters: Number of letters to read and print
 * Return: Return the actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, result, res;
	char *buff = (char *) malloc(sizeof(char) * letters);

	if (filename == NULL)
	{
		free(buff);
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	result = read(fd, buff, letters);
	close(fd);
	if (result == -1)
	{
		free(buff);
		return (0);
	}
	else
	{
		res = write(STDOUT_FILENO, buff, result);
		free(buff);
		if ((res == -1) || (res < (int) result))
		{
			return (0);
		}
		return (res);
	}
}




