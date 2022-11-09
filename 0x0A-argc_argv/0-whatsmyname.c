#include <stdio.h>

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: arguments
 *
 * Return: always 0 (success)
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
