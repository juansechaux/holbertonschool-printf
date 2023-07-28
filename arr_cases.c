#include "main.h"

type_cases cases[] = {
	{"%", perfunct},
	{"c", cfunct},
	{"s", sfunct},
	{"d", dfunct},
	{"i", dfunct},
	{NULL, NULL}
};

type_cases *get_cases()
{
	return (cases);
}

