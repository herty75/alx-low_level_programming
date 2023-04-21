#include <stdio.h>

/**
 * main - prints the numbers in base 16
 * Return: Always 0
 */
int main(void)
{
	int num;
	char kh;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (kh = 'a'; kh <= 'f'; kh++)
		putchar(kh);

	putchar('\n');

	return (0);
}
