#include "main.h"
/**
 * *_memset - fills memory with a constant byte.
 * @s: character poniter/string
 * @b: constant byte to file
 * @n: number of bytes to fill
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
	s[i] = b;
	i++;
	}
	return (s);
}
