/**
* action func - function to recieve input and decide action
*@s: input address
*
* Return: Appropriate function
*/
#include "main.h"

int (*action_func(char s))(char *)
{

	int i = 0;

	op_t ops[] = {
		{'c', printf_1},
		{'s', printf_2},
		{'d', printf_2},
		{'0', NULL}
		};


	while (ops[i].op != '0')
	{
		if(ops[i].op == s)
		return (ops[i].f);
	i++;
	}

	
	return (NULL);
}

/**
* action func1 - function to recieve input and decide action
*@s: input address
*
* Return: Appropriate function
*/

int (*action_func1(char s))(int)
{

	int i = 0;

	op_int_t funcs[] = {
		{'b', to_binary},
		{'0', NULL}
		};

	while (funcs[i].op != '0')
	{
		if(funcs[i].op == s)
		return(funcs[i].f);
	i++;
	}

	return (NULL);
}	
