/**
* _printf - function print some input types
*@format: format specifiers
*@...: variable number of args
* Return: int value
*/
#include <stdarg.h>
#include <unistd.h>
#include "main.h"


int _printf(char *format, ...)
{
	int x;
	int i = 0;
	char  *ch;
	int return_val = 0;
	int (*func)(char *);
	va_list args;

	va_start(args, format);

	while (format[i] != '\0')
	{

		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			return_val += 1;
		}

		else if (format[i] == '%' && format[i + 1] == 'c')
		{
			x = va_arg(args, int);
			func = action_func('c');
			(*func)((char *) &x);

		}

		else if (format[i] == '%' && format[i + 1] == 's')
		{	
			ch = va_arg(args, char *);
			func = action_func('s');
			(*func)(ch);
			
		}

		else if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%", 1);
			return_val += 1;
		}

		else
		{
			exit(98);
		}
		i++;
	}


	va_end(args);
	return (return_val);
}





