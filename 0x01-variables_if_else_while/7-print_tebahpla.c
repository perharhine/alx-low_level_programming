#include <stdio.h>

/**
 * main - print alphabets in revers
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');

	return (0);
}
