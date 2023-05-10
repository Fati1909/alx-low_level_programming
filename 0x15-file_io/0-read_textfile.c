#include "main.h"

/**
 * read_textfile - function that reads a text file and prints it
 *@filename: name of the file
 *@letters: number of letters
 *Return: num of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int flnm;
	ssize_t numbers;
	char buf[READ_BUF_SIZE * 8];

	if (!filename || !letters)
		return (0);
	flnm = open(filename, O_RDONLY);
	if (flnm == -1)
		return (0);
	numbers = read(flnm, &buf[0], letters);
	numbers = write(STDOUT_FILENO, &buf[0], numbers);
	close(flnm);
	return (numbers);
}
