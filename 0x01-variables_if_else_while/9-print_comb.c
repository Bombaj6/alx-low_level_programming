#include <stdio.h>
/**
 * main - Print numbers with commas
 *
 * Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	char c;

	for (c = '0' ; c <= '9' ; c++)
	{
		putchar(c);

		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
