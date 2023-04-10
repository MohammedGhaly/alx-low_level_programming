#include "main.h"

/**
 * main - Entry point
 * @ac: number of arguments
 * @av: pointer to arguments
 * Return: 0 on Success, otherwise exit
 */
int main(int ac, char *av[])
{
	int from_fd, to_fd, read_n, n_write, from_closed, to_closed;
	char buffer[1024];

	if (ac != 3)
		myExit("Usage: cp file_from file_to", "", 97, 0);
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		myExit("Can't read from file ", av[1], 98, 0);
	to_fd = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (to_fd == -1)
		myExit("Can't write to ", "to.txt", 99, 0);

	while ((read_n = read(from_fd, buffer, 1024)) > 0)
	{
		n_write = write(to_fd, buffer, read_n);
		if (n_write == -1)
			myExit("Error: Can't write to ", av[2], 99, 0);
	}
	if (read_n == -1)
		myExit("Can't read from file ", av[1], 98, 0);

	to_closed = close(to_fd);
	from_closed = close(from_fd);
	if (from_closed == -1)
		myExit("", "", 101, from_fd);
	if (to_closed == -1)
		myExit("", "", 102, to_fd);
	return (0);
}

/**
 * myExit - handles process termination
 * @message: error explanation (string)
 * @filename: name of the file related to the problem (string)
 * @code: exit code
 * @fd: file descriptor
 * Return: nothing
 */
void myExit(char *message, char *filename, int code, int fd)
{
	if (code == 101 || code == 102)
	{
		dprintf(STDERR_FILENO, "%s%i\n", "Error: Can't close fd ", fd);
		exit(100);
	}
	else
	{
		dprintf(STDERR_FILENO, "%s%s\n", message, filename);
		exit(code);
	}
}
