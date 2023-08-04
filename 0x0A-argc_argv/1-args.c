#include <stdio.h>
#include <stdlib.h>
/**
 * main - print num of arguments passed into main
 * @argc: num of arg passed to main
 * @argv: array of strings that holds these arguments
 * Return: zero
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
