#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point.
 *
 * Description: Parent process identifier (ppid).
 *
 * Return: 0.
 *
 */

int main(void)
{
	int a = 3;
	int b = 5;
	pid_t ppid;

	int sum = a + b;

	printf("Sum is %d\n", sum);

	ppid = getppid();
	printf("My ppid is %u\n", ppid);

	return (0);
}
