#include "main.h"
int _strlen(char *str);
/**
 * create_file - A function that creates a file
 * @filename: File name
 * @text_content: String to write to file
 * Return: 1 on success and -1 onf failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		len = 0;
		text_content = "";
	}
	else
	{
		len = _strlen(text_content);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	else
	{
		write(fd, text_content, len);
		close(fd);
		return (1);
	}
}

/**
 * _strlen - A function that return length of string
 * @str: String parameter
 * Return: Length of String
 */

int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
