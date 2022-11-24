#include "main.h"

/**
* _print - Prints an argument based on its type
* @fmt: Formatted string in which to print the arguments.
* @list: List of arguments to be printed.
* @ind: index.
* Return: 1 or 2;
*/

int _print(const char *fmt, int *ind, va_list list)
{
int i, unknow_len = 0, printed_chars = -1;

fmt_t fmt_types[] = {
{'c', print_char}, {'s', print_string}, {'%', print_percent},
{'\0', NULL}
};

for (i = 0; fmt_types[i].fmt != '\0'; i++)
if (fmt[*ind] == fmt_types[i].fmt)
return (fmt_types[i].fn(list));

if (fmt_types[i].fmt == '\0')
{
if (fmt[*ind] == '\0')
return (-1);

unknow_len += write(1, "%%", 1);

if (fmt[*ind - 1] == ' ')
unknow_len += write(1, " ", 1);

unknow_len += write(1, &fmt[*ind], 1);
return (unknow_len);
}
return (printed_chars);
}
