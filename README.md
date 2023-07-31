# custom function _printf
The following is a customized and simplified implementation of the **printf** function in the **C** programming language, which has been named **_printf** This function has been designed to allow printing of formatted output to the standard output of the program. The **_printf** function is capable of handling a variety of format specifiers, such as **%d** to print signed integers, **%s** to print strings, and more.# Files - **main.c**
- **functions.c**
- **main.h**
- **_printf**
- **sterlen.c**
- **arr_cases.c**
- **search_fs.c**
## main.h
The **main.h** file contains function declarations, structure definitions, and the inclusion of header files necessary for the operation of the program that implements the **_printf** custom function.
## _printf.c
The **printf.c** file contains the implementation of the custom function _printf, which is the function in charge of doing formatted printing.
Function description:
int _printf(const char *format, ...)
 * _printf - principal function to print the array
 * @format: string to print
 * Return: return the size of the bufer or str to print
## _strlen.c
The sterlen.c file contains the implementation of two functions: _strlen and powr. Here is a brief description of both functions:
int _strlen(char *s)
 * _strlen - checks the length of a string
 * @s: string
 * Return: length in characters
int powr(int base, int expo)
 * powr - returns the power y of base x
 * @base: base number
 * @expo: exponential
 * Return: Result
## arr_cases.c
The file **arr_casses.c** contains the variable called casses of **data** type that contains a character string of the different types of data that the **_printf**  function receives.
The following function returns the variable casses
data *get_cases()
## search_fs.c
In the file search_fs.c the function form_h validates the specifiers that are in the string pointed to by the *format pointer and modifies the positions of the string pointed to by the str pointer. It also receives a list of arguments and the string of the data types.
int form_h(const char *format, char *str, va_list arguments, data *cases)
 * form_h - process the format string and update the output buffer
 * @format: the format string to process
 * @str: the output buffer to update
 * @arguments: the va_list of arguments
 * @cases: the array of type_cases
 * Return: return 1 if the loop needs to be broken, 0 otherwise

