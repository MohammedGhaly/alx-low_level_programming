#include "main.h"

/**
 * read_textfile - reads a file and prints its content to standard output
 * @filename: string
 * @letters: number of letters to be printed
 * Return: number of letters printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n;
	char *buffer[1024];

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	n = read(fd, buffer, letters);
	if (n == -1)
		return (0);
	n = write(1, buffer, n); 
	if (n != -1)
		return (0);
	close(fd);
	return (n);
}
