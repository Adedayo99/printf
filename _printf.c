/**
* _printf - function print some input types
*@format: format specifiers
*@...: variable number of args
* Return: int value
*/
#include "main.h"
#include <stdarg.h>

int _printf(char *format, ...)
{	
	int i = 0;
	int return_val = 0;
	int flag3 = 0;
	int flag2 = 0;
	va_list args;
	char *ptr;
	va_start(args, format);


	if (format == NULL || args == NULL)
	return(0);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			write(1,&format[i], 1);
			return_val += 1;
		}

		else
		{
			ptr = &format[i];

		/*	flag3 = ___format_print(ptr, args);
			return_val += flag3;		
			if (flag3 != 0)	
			i += 2;		*/

			if (flag3 == 0)
			{		
				flag2 = __format_print(ptr, args);
				return_val += flag2;
				if (flag2 != 0)
				i += 1;
			}

		/*	if (flag2 == 0)
			{
			}	*/
			

		}


		i++;
	}

	va_end(args);
	return (return_val);
}





