#include "main.h"

/**
 * form_h - process the format string and update the output buffer
 * @format: the format string to process
 * @str: the output buffer to update
 * @arguments: the va_list of arguments
 * @cases: the array of type_cases
 * Return: return 1 if the loop needs to be broken, 0 otherwise
 */

int form_h(const char *format, char *str, va_list arguments, type_cases *cases)
{
	int i = 0;
	int loop = 0;
	char m = 'f';
	int x;

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
				if (m == 't')
					break;
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
	return (loop);
}

