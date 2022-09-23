#include <stdio.h>
/**
  * print_number - prints number
  * @n: integer to print to character
  */
void print_number(int n)
{
	int i;
	int d = 1;
	unsigned int x = n;
	unsigned int y = n;
	int c = 0;

	if (n == 0)
	{
		putchar('0');
	}
	if (n < 0)
	{
		putchar('-');
		n = n + 1;
		n = n + 1;
		n = -n;
		y = n;
		x = n;
		x += 1;
		y += 1;
	}
	while (x != 0)
	{
		
