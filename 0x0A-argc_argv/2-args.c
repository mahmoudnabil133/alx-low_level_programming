#include <stdio.h>
#include <stdlib.h>
/**
 * main - print args passed to it
 * @argc: num of arg passed to main
 * @argv: array of strings that holds these arguments
 * Return: zero
 */
int main(int argc, char *argv[])
{int cnt;
	for (cnt = 0; cnt < argc; cnt++)
	{
		printf("%s\n", argv[cnt]);
	}
	return (0);
}
