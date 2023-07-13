#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: Sum of two integers.
 *
 * Return: 0.
 *
 */

int main(void)
{
	int a = 3;
	int b = 5;
	int sum = a + b;
	pid_t pid;

	pid = getpid();

	printf("Sum is %d\n", sum);
	printf("pid is %u\n", pid);

	return (0);
}
