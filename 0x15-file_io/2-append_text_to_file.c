#include "main.h"

/**
 * append_text_to_file - writes to the end of a file
 * @filename: string
 * @text_content: text appended to the fiel
 * Return: 1 on Success, -1 on Failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, var;

	if (!filename)
		return (-1);
	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		var = write(fd, text_content, _strlen(text_content));
		if (var == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
/**
 * _strlen - calculates the length of a string
 * @text: string
 * Return: length of the string text
 */
int _strlen(char *text)
{
	int i = 0;

	while (text[i])
		i++;
	return (i);
}
