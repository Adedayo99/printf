/**
* printf_1 - writes char to screen
*@c: pointer to char
*
* Return: int val
*/
#include "main.h"
#include <unistd.h>
int printf_1(char *c)
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

int printf_2(char *c)
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
