#include "main.h"
int _strlen(char *str);
/**
 * append_text_to_file - A function that appends text at the end of a file
 * @filename: File name
 * @text_content: String to add at the end of the file
 * Return: ! on success ad -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
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

	fd = open(filename, O_APPEND | O_WRONLY);
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
