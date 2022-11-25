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
	char *list_1 = "+ #0-";
	char *list_2 = "lh";
	char *list_3 = "123456789.";
	int i = 0;
	int list_1_flag; = 0;
/*	list_2_flag, list_3_flag = 0; */
	int format_flag = 0;
	if (format == NULL || args == NULL)
	return(0);

	while (format[i] != '\0')
	{

		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			return_val += 1;
		}

		if (format[i] == '%')
		{
			for (j = 0; list_1[j] != '\0'; j++)
			{
				if(format[i + 1] == list_1[j])
				list_1_flag = 1;
				format_flag = format_spec_check(format[i + 2]);

				if (list_1_flag == 1 && format_flag == 1)
				
			}

		/*	for (j = 0; list_2[j] != '\0'; j++)
			{
				if (format[i + 1] == list_2[j])
				list_2_flag = 1;
				format_flag = format_spec_check(format[i + 2]);
			}

			for (j = 0; list_3[j] != '\0'; j++)
			{
				if (format[i + 1] == list_3[j])
				list_3_flag = 1;
				format_flag = format_spec_check(format[i + 2]);
			}  */
		}
		
}

int format_spec_check(char c)
{
	char *specs = "dif";
	int i;

	for (i = 0; specs[i] != '\0'; i++)
	{
		if(c == specs[i])
		return (1);
	}

	return (0);
}

