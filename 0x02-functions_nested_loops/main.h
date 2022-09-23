#include <unistd.h>
#include <stdio.h>
/**
  * _putchar - prints a string
  * @c: The character to print
  * Return: On success 1
  * On error, -1 is returned, and errno is set appropriately.
  */
int _putchar(char *c)
{
	return (write(1, &c, 1));
}
