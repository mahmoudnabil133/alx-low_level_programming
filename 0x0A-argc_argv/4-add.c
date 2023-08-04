#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds 2 nums
 * @argc: num of args passed
 * @argv: arr of strings hold the arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{int cnt, sum = 0, x = 0;
	if (argc > 2)
	{
		for (cnt = 1; cnt < argc; cnt++)
		{
			sum += atoi(argv[cnt]);
			if (atoi(argv[cnt]) == 0)
					x = 1;
					}
		if (x == 0)
		{
		printf("%d\n", sum);
		}
	}
	else
	{
	printf("%d\n", 0);
	}
	if (x == 1)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
