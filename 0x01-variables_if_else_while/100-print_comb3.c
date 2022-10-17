#include <stdio.h>
#include <unistd.h>
/**
 * main - entry point
 * Description: prints two digits combination
 * Return: Always 0 (success)
 */
int main(void)
{
	int c, i;

	for (c = '0'; i <= '9'; i++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			if (c < i)
			{
				putchar(c);
				putChar(i);
				if (c != '8' || (c == '8' && i != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
