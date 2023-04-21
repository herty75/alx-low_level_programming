#include <stdio.h>

/**
 * main - prints the alphabet in reverse
 * Return: Always 0
 */
int main(void)
{
	char kh;

	for (kh = 'z'; kh >= 'a'; kh--)
		putchar(kh);

	putchar('\n');

	return (0);

}
