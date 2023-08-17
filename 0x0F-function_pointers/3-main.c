#include "3-calc.h"
/**
 * main - do oper
 * @argc: argc
 * @argv: argv
 * Return: return an int
 */
int main(int argc, char **argv)
{int a, b, res;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(argv[1]);
	op = argv[2];
	b = atoi(argv[3]);
	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' || *op == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(op)(a, b);
	printf("%d\n", res);
	return (0);
}
