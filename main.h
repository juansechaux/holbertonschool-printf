#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int _printf(const char *format, ...);

/**
 * struct cases - Struct cases
 * @ptr: points to the type of format specifier
 * @function: points to the function associated
 */

typedef struct cases
{
	char *ptr;
	char (*function)(char *str, va_list arguments);
} type_cases;



int _strlen(char *s);
char cfunct(char *str, va_list arguments);
char perfunct(char *str, __attribute__((unused)) va_list arguments);
char sfunct(char *str, va_list arguments);
char add(char *str, char format);

#endif
