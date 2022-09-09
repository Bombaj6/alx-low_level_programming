#include <stdio.h>
/**
 * main - Hexadecimal Numbers
 *
 * Return: Always 0 (Return)
 *
 */
int main(void)

{
	char c;

	for (c = '1' ; c <= '9' ; c++)
	{
		putchar(c);
	}

	for (c = 'a' ; c < 'g' ; c++)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}

