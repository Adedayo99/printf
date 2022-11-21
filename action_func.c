/**
* action func - function to recieve input and decide action
*@s: input address
*
* Return: Appropriate function
*/

void (*action_func(char s))(char *)
{

	int i = 0;

	op_t ops[] = {
		{'c',      },
		{'s',      },
		{'d',      },
		{'i',      }
		{NULL, NULL}
		};

	while (ops[i].op != NULL)
	{
		if(ops[i].op == s)
		return(ops[i].f);
	i++;
	}

	return (NULL);
}

	
