#include <stdio.h>
/**
 * main - Print Letters Apart from e and q
 *
 *Return: Always 0 (Sucess)
 *
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
		putchar('\n');

	return (0);
}
