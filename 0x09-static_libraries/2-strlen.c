#include "main.h"
/**
 * _strlen - return the lenght of a string
 * created by evansigho
 * @s: char to check
 * Description: This will return the lenght of a string
 * Return: 0 is success
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
