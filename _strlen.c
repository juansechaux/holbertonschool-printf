#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string
 *
 * Return: length in characters
 */
int _strlen(char *s)
{
	int r = 0;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		r = r + 1;
	}
	return (r);
}
/**
 * powr - returns the power y of base x
 * @base: base number
 * @expo: exponential
 *
 * Return: Result
 */
int powr(int base, int expo)
{
	int res = 1;
	int i;

	for (i = 0; i < expo; i++)
	{
		res = res * base;
	}
	return (res);
}
