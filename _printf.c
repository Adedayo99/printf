
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

int _printf(char *format, ...)
{
	int x;
	int i = 0;
	char  *ch;
	int return_val = 0;
	int (*func)(char *);
	int (*func1)(int);
	va_list args;
	va_start(args, format);

	if (format == NULL || args == NULL)
	return(0);

	while (format[i] != '\0')
	{

		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			return_val += 1;
		}

		if (format[i] == '%' && format[i + 1] == 'c')
		{
			x = va_arg(args, int);
			func = action_func('c');
			return_val += (*func)((char *) &x);
			i++;
		}

		if (format[i] == '%' && format[i + 1] == 's')
		{	
			ch = va_arg(args, char *);
			func = action_func('s');
			return_val += (*func)(ch);
			i++;
		}

		if (format[i] == '%' && format[i + 1] == '%')
		{
			write(1, "%", 1);
			return_val += 1;
			i++;
		}

		if ((format[i] == '%' && format[i + 1] == 'd') 
			|| (format[i] == '%' && format[i + 1] == 'i'))
		{
			char str[20];

			x = va_arg(args, int);
			sprintf(str, "%d", x);
			func = action_func('d');
			return_val += (*func)(str);
			i++;
		}
			

		if (format[i] == '%' && format[i + 1] == 'b')
		{
			x = va_arg(args, int);
			func1 = action_func1('b');
			return_val += (*func1)(x);
			i++;
		}

		if (format[i] == '%' && format[i + 1] == 'S')
		{
			ch = va_arg(args, char *);
			func = action_func('S');
			return_val += (*func)(ch);
			i++;
		}

		if (format[i] == '%' && format[i + 1] == 'p')
		{
			x = va_arg(args, int);
			func1 = action_func1('p');
			return_val += (*func1)(x);
			i++;
		}

		i++;
	}


	va_end(args);
	return (return_val);
}
