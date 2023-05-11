#include "main.h"

#define USAGE "Usage: cp file_from file_to\n"
#define ERR_NOREAD "Error; Can't read from file %s\n"
#define ERR_NOWRITE "Error: Can't write to %s\n"
#define ERR_NOCLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS (S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH)

/**
 * main - description
 * @ac: argument
 * @av: arguement
 * Return: 1 on success 0 on failure
 */

int main(int ac, char **av)
{
	int fileA = 0, fileB = 0;
	ssize_t a;
	char buf[READ_BUF_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fileA = open(av[1], o_RDONLY);
	if (fileA == -1)
		dprintf(STDERR_FILENO, ERR_NOREAD, av[1], exit(98);
	fileB = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fileB == -1)
	dprintf(STDERR_FILENO, ERR_NOWRITE, av[2], exit(99);

		while ((a = read(fileA, buf, READ_BUF_SIZE)) > 0)
		if (write(fileB, buf, a) != a)
		dprintf(STDERR_FILENO, ERR_NOWRITE, av[2], exit(99);
			if (a == -1)
			dprintf(STDERR_FILENO, ERR_NOREAD, av[1], exit(98);

				fileA = close(fileA);
				fileB = close(fileB);
				if (fileA)
				dprintf(STDERR_FILENO, ERR_NOCLOSE, fileA), exit(100);
				if (fileB)
				dprintf(STDERR_FILENO, ERR_NOCLOSE, fileA), exit(100);

				return (EXIT_SUCCESS);
				}
