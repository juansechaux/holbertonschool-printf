#include "main.h"

int _printf(const char *format, ...)
{
	int i = 0;
	char *str = malloc(50 * sizeof(char));
	va_list arguments;

	if (str == NULL)
		return (0);

	str[0] = '\0';
	va_start(arguments, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				str[strlen(str) + 1] = '\0';
				str[strlen(str)] = va_arg(arguments, int);
			}
			else if (format[i + 1] == 's')
			{
				char *s = va_arg(arguments, char *);
				int j = 0;

				while (s[j] != '\0')
				{
					str[strlen(str)] = s[j];
					j++;
				}
			}
			else if (format[i + 1] == '%')
			{
				str[strlen(str) + 1] = '\0';
				str[strlen(str)] = '%';
			}
			else if (format[i + 1] == 'd')
			{

			}
			else if (format[i + 1] == 'i')
			{

			}
			else
			{
				str[strlen(str) + 1] = '\0';
				str[strlen(str)] = format[i];
			}
			i++;
		}
		else
		{
			str[strlen(str) + 1] = '\0';
			str[strlen(str)] = format[i];
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
		i++;
	write(1, str, i);
	va_end(arguments);
	free(str);
	return (i);
}

