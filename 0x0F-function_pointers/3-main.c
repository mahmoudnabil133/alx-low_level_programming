#include "3-calc.h"
/**
 * main - do oper
 * @argc: argc
 * @argv: argv
 * Return: return an int
 */
int main(int argc, int *argv)
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	int a, b, res;
	a = atoi(argv[1]);
	b = argv(argv[3]);
	res = get_op_func(argv[2])(a, b);
	if (res == -1)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}
