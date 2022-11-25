/**
* _printf - function print some input types
*@format: format specifiers
*@...: variable number of args
* Return: int value
*/
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

int __format_print(char *format, va_list args)
{
	int x;
	char  *ch;
	int return_val = 0;
	int (*func)(char *);
	int (*func1)(int);

		if (*format == '%' && *(format + 1)  == 'c')
		{
			x = va_arg(args, int);
			func = action_func('c');
			return_val += (*func)((char *) &x);
		}

		if (*format == '%' && *(format + 1) == 's')
		{	
			ch = va_arg(args, char *);
			func = action_func('s');
			return_val += (*func)(ch);
		}

		if (*format == '%' && *(format + 1) == '%')
		{
			write(1, "%", 1);
			return_val += 1;
		}

		if ((*format == '%' && *(format + 1) == 'd') 
			|| (*format == '%' && *(format + 1) == 'i'))
		{
			char str[20];

			x = va_arg(args, int);
			sprintf(str, "%d", x);
			func = action_func('d');
			return_val += (*func)(str);
		}
			

		if (*format == '%' && *(format + 1) == 'b')
		{
			x = va_arg(args, int);
			func1 = action_func1('b');
			return_val += (*func1)(x);
		}

		if (*format == '%' && *(format + 1) == 'S')
		{
			ch = va_arg(args, char *);
			func = action_func('S');
			return_val += (*func)(ch);
		}

		if (*format == '%' && *(format + 1)  == 'p')
		{
			x = va_arg(args, int);
			func1 = action_func1('p');
			return_val += (*func1)(x);
		}

		if (*format == '%' && *(format + 1) == 'r')
		{	
			ch = va_arg(args, char *);
			func = action_func('r');
			return_val += (*func)(ch);
		}




	return (return_val);
}

