#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: char to check
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int string = 0, n;

	while (str[string] != '\n')
		string++;
	if (string + 1 % 2 != '0')
		n = (string / 2);
	else
		n = (string / 2);
	n++;

	for (string = n; str[string] != '\0'; striing++)
	_putchar(str[string]);
	_putchar('\n');
}