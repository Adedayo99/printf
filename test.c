#include "main.h"
#include <stdio.h>

int main(void)
{
	int count;
	int res = 15489;
	count = _printf("%b\n", res);
	_printf("\n%d\n",count);	
	return (0);
}

