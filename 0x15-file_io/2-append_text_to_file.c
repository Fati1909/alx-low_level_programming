#include "main.h"

/**
 * _strlen - description
 * @s: string
 * Return: int
 */

int _strlen(char *s)
{
	int n = 0;

	if (!s)
		return (0);

	while (*s++)
		n++;
	return (n);
}

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int flnm;
	ssize_t numbers = 0, len = _strlen(text_content);

	if (!filename)
		return (-1);
	flnm = open(filename, O_WRONLY | O_APPEND);
	if (flnm == -1)
		return (-1);
	if (len)
		numbers = write(flnm, text_content, len);
	close(flnm);
	return (numbers == len ? 1 : -1);
}
