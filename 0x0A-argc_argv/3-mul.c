#include <stdio.h>
#include <stdlib.h>
/**
 * main - mul 2 nums
 * @argc: num of args passed
 * @argv: arr of strings hold the arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{int cnt, mul = 1;
	if (argc > 1)
	{
		for (cnt = 1; cnt < argc; cnt++)
			mul *= atoi(argv[cnt]);
		printf("%d\n", mul);
	}
	else
		printf("Error\n");
	return (0);
}
