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

