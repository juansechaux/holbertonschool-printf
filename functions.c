#include "main.h"

/**
 * cfunct - add a character to the main string
 * @str: main string
 * @arguments: the contents of the format specifier
 * Return: char
 */
char cfunct(char *str, va_list arguments)
{
	char ch = va_arg(arguments, int);

	str[_strlen(str) + 1] = '\0';
	str[_strlen(str)] = ch;
	if (ch == '\0')
		return (1);
	return (0);
}
/**
 * perfunct - add a % to the main string
 * @str:main string
 * @arguments: the contents of the format specifier
 * Return: char
 */
char perfunct(char *str, va_list arguments __attribute__((unused)))
{
	str[_strlen(str) + 1] = '\0';
	str[_strlen(str)] = '%';
	return (0);
}
/**
 * add - add to the main string
 * @str: main string
 * @format: character to add
 * Return: Void
 */
char add(char *str, char format)
{
	str[_strlen(str) + 1] = '\0';
	str[_strlen(str)] = format;
	return (0);
}
/**
 * sfunct - adds a string to the main string
 * @str: main string
 * @arguments: the contents of the format specifier
 * Return: char
 */
char sfunct(char *str, va_list arguments)
{
	char *s = va_arg(arguments, char *);
	int j = 0;

	if (s == NULL)
	{
		s = "(null)";
		while (s[j] != '\0')
		{
			str[_strlen(str)] = s[j];
			j++;
		}
	}

	else
	while (s[j] != '\0')
	{
		str[_strlen(str)] = s[j];
		j++;
	}
	return (0);
}
/**
 * dfunct - function to a number base 10 to the main string
 * @str: pointer to string
 * @arguments: integer to print
 *
 * Return: Void
 */
char dfunct(char *str, va_list arguments)
{
	int num = va_arg(arguments, int);
	int a = 0;
	int x;
	int i;
	int p;

	if (num < 0)
	{
		str[_strlen(str) + 1] = '\0';
		str[_strlen(str)] = '-';
		num = -num;
	}

	x = num;

	while (x > 10)
	{
		x = x / 10;
		a++;
	}
	x = num;
	for (i = 0; i <= a; i++)
	{
		p = x / powr(10, (a - i));
		str[_strlen(str) + 1] = '\0';
		str[_strlen(str)] = (p + '0');
		x = x - (p * powr(10, (a - i)));
	}
}

