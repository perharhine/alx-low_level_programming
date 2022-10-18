#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabets 10 times
 */
void print_alphabet_x10(void)
{
	int j;
	char k;

	for (j = 0; j <= 9; j++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
	}
}
