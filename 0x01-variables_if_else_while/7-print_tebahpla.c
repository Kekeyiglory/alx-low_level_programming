#include <stdio.h>

/**
 * main - Print the alphabet at reverse
 *
 * Return: Always (Successful)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}

	putchar('\n');

	return (0);
}
