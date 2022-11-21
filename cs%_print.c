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
		write(1, c, 1);
		flag++;
		i++;
	}

	return (flag);
}

