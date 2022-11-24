#include "main.h"

int main(void)
{
	int a = 456;
	int res;

	res = _printf("%#x\n", a);
	_printf("%d\n", res);

	return (0);
}
