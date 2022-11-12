#include "main.h"
/**
 * malloc_checked - cause normal process termination with a status
 * @b: allocated memory
 * Return: a ponter to the allocated memory
 */
void *malloc_checked(unsigned int b)
{

	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
