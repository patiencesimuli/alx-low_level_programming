#include <stdio.h>
/**
  * print_alphabet - prints alphabet
  * Return: always 0;
  */
void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
