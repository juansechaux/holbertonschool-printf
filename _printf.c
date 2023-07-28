#include "main.h"

/**
 * _printf - funtion
 * @format: string to print
 * Return: return the size of the bufer or str to print
 */

int _printf(const char *format, ...)
{
	int i = 0, x;
	char m = 'f';
	int loop = 0;
	char *str = malloc(4000 * sizeof(char));
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
	while (format[i] != '\0' && loop == 0)
	{
		if (format[i] == '%')
		{
			m = 'f';
			for (x = 0; cases[x].ptr != NULL; x++)
			{
				if (format[i + 1] == *(cases[x].ptr))
				{
					loop = cases[x].function(str, arguments);
					i++;
					m = 't';
				}
			}
			if (m == 'f')
			{
				add(str, format[i]);
			}
		}
		else
		{
			add(str, format[i]);
		}
		i++;
	}
	i = _strlen(str);
	if (loop == 1)
		i++;
	write(1, str, i);
	va_end(arguments);
	free(str);
	return (i);
}

