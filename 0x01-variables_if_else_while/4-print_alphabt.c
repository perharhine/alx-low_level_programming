#include <stdio.h>

/**
 * main - print the alphabets in lowercase
 * except q and e followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
	{
		if (k != 'e' && k != 'q')
			putchar(k);
	}
	putchar('\n');

	return (0);
}
