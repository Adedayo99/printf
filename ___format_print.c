/**
* ___format_print - function print some input types
*@format: pointer to a '%' a user format string
*@args: variable number of args
* Return: int value
*/
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <string.h>

int ___format_print(char *format, va_list args)
{
	int x;

	char *list_1 = "+ #0-";
	char *match_1 = "difoxX";

	char *list_2 = "lh";

	char *list_3 = "123456789.";

	int i = 0;
	int list_1_flag; = 0;
/*	list_2_flag, list_3_flag = 0; */
	int format_flag = 0;

			
	for (j = 0; list_1[j] != '\0'; j++)
	{
		if(*(format + 1) == list_1[j])
		list_1_flag = 1;
				
		if (list_1_flag == 1)
		{
			for (i = 0; match_1[i] != '\0'; i++)
			{
				if (*(format + 2) == match_1[i])
				format_flag = 1;
			}
		}
					
				
	}


	if (list_1_flag == 1 && format_flag == 1)
	list1_print(format, args);

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

int list1_print(char *format, va_list args)
{
	int i;
	char str[100];

	if (*(format + 1) == '+')
	{
		return_val += write(1, "+", 1);
		x = va_arg(args, int);

		if (*(format + 2) == 'd' || *(format + 2) == 'i')
		sprintf(str, "%d", x);

		else
		sprintf(str, "%f", x);

		for (i = 0; str[i] != '\0'; i++)
		return_val += write(1, &str[i], 1);

	}


	if (*(format + 1) == ' ')
	{
		return_val += write(1, " ", 1);
		x = va_arg(args, int);

		if (*(format + 2) == 'd')
		sprintf(str, "%d", x);

		else
		sprintf(str, "%f", x);

		for (i = 0; str[i] != '\0'; i++)
		returm_val += write(1, &str[i], 1);
	}

	if (*(format + 1) == '#' && (*(format + 2) == 'o'))
	{
		char st[100];
		int temp;
		int i = 0;
		x = va_arg(args, int);

		while (x != 0)
		{
			st[i]  = x % 8;
			temp = x / 8;
			sprintf(&st[i], "%d", st[i]);
			x = temp;

			i++;
		}

		return_val += write(1, "0", 1);
		
		for (--i; i >= 0; i--)
		return_val += write(1, &st[i], 1);
	}

	if (*(format + 1) == '#' && (*(format + 2) == 'x'))
	{
		char st[100];
		int temp;
		int i = 0;
		x = va_args(args, int);

		while (x != 0)
		{
			temp = x % 16;

			if (temp < 10)
			st[i] = 48 + temp;

			if (temp >= 10)
			st[i] = 55 + temp;

			x = x / 16;

			i++;
		}

		return_val += write(1, "0x", 2);

		for (--i; i>= 0; i--)
		return_val += write(1, &st[i], 1);
	}

	if (*(format + 1) == '#' && (*(format + 2) == 'X'))
	{
		char st[100];
		int temp;
		int i = 0;
		x = va_args(args, int);

		while (x != 0)
		{
			temp = x % 16;

			if (temp < 10)
			st[i] = 48 + temp;

			if (temp >= 10)
			st[i] = 55 + temp;

			x = x / 16;

			i++;
		}

		return_val += write(1, "0X", 2);

		for (--i; i>= 0; i--)
		return_val += write(1, &st[i], 1);
	}

	if (*(format + 2) == '-')
	{
		char st[100];
		int i = 0;

		x = va_arg(args, int);
		sprintf(st, "%d", x);
		write(1, &st, 1);
	}


