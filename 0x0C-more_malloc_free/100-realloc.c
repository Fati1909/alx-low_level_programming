#include "main.h"

/**
 * *_realloc - function that reallocates a memory
 * @ptr: pointer
 * @old_size: size
 * @new_size: size
 * Return: null
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *m;
	unsigned int n;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		return (m);
	}
	if (new_size > old_size)
	{
		m = malloc(new_size);
		if (m == NULL)
			return (NULL);
		for (n = 0; n < old_size && n < new_size; n++)
			*((char *)m + n) = *((char *)ptr + n);
		free(ptr);
	}
		return (m);
}
