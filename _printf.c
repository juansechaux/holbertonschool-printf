#include "main.h"

/**
 * _printf - funtion
 * @format: string to print
 * Return: return the size of the bufer or str to print
 */

int _printf(const char *format, ...)
{
	int i = 0, x, loop;
	char m = 'f', *str = malloc(4000 * sizeof(char));
	va_list arguments;
	type_cases *cases = get_cases();

	if (str == NULL || format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		va_end(arguments);
		free(str);
		return (-1);
	}
	str[0] = '\0';
	va_start(arguments, format);

	loop = format_handler(format, str, arguments, cases);

	i = _strlen(str);
	if (loop == 1)
		i++;
	write(1, str, i);
	va_end(arguments);
	free(str);
	return (i);
}

