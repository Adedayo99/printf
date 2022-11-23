/**
* printf_1 - writes char to screen
*@c: pointer to char
*
* Return: int val
*/
#include "main.h"
#include <unistd.h>
int printf_c(char *c)
{
	int flag = 0;

	write(1, c, 1);

	return (flag += 1);
}


/**
* printf_2 - writed char to screen
*@c: pointer to char
*
* Return: int val
*/

int printf_s(char *c)
{
	int i = 0;
	int flag = 0;
	while(c[i] != '\0')
	{
		write(1, &c[i], 1);
		flag++;
		i++;
	}

	return (flag);
}

/**
* to_binary - convert unsigned int to binary
*@a: input val
*
* Return: int val
*/


int to_binary(int a)
{
	int i, flag = 0;
	char str[200];
 


	for (i = 0; a != 0;  i++)
	{
		str[i] = a % 2;
		a = a / 2;
		sprintf(&str[i], "%d", str[i]);

        }
       

	for (--i; i >= 0; i--)
	{
		write(1, &str[i], 1);
		flag += 1;
	}
     
	return (flag);
	
}

/**
* printf_S - print custom string format
*@c: input to function
*
* Return: Int val for no of byte
*/

int printf_S(char *c)
{
	int j, temp = 0;
	int i, a;
	char str[50];
	int flag = 0;
	int flag1 = 0;
	char h;

	for (i = 0; c[i] != '\0'; i++)
	{
		if(c[i] < ' ' || c[i] > '~')
		{
			a = c[i];			

			for (j = 0; a != 0; j++)
			{
				temp = a % 16;
			
				if (temp < 10)
				{
					h = (48 + temp);
					str[j] = h;
				}

				if (temp >= 10)
				{
					h = (55 + temp);
					str[j] = h;
				}
				a = a / 16;
				flag1 += 1;	
			}

			write(1,"\\x", 2); 
			if (flag1 < 2)
			write(1, "0", 1);
			
			for (--j; j >= 0; j--)
			{
				write(1, &str[j], 1);
				flag += 1;
			}

		}

		else
		{
			write(1, &c[i], 1);
			flag += 1;
        	}

	}

	return (flag);
}

/**
* print_p - printing int with hexa base and 0x prepended
*@a: input int
*
* Return: int val
*/

int printf_p(int a)
{
	int j, temp;
	char h;
	char str[100];
	int flag = 0;

	write(1, "0x", 2);
	flag += 2;

	for (j = 0; a != 0; j++)
	{
		temp = a % 16;
			
		if (temp < 10)
		{
			h = (48 + temp);
			str[j] = h;
		}

		if (temp >= 10)
		{
			h = (55 + temp);
			str[j] = h;
		}
				
		a = a / 16;
	
	}

	for (--j; j >= 0; j--)
	{
		write(1, &str[j], 1);
		flag += 1;
	}

	return (flag);

}
