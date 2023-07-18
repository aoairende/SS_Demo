#include <stdio.h>
#include <unistd.h>

/**
 *main - Entry point.
 *
 * Description: Child process.
 *
 * Return: 0 if successful, -1 if unsuccessful.
 */

int main(void)
{
	pid_t pid;

	printf("Before fork i was one\n");

		pid = fork();

		if (pid == -1)
		{
			perror("Unsuccessful");
			return (1);
		}

		printf("After fork i became two\n");

		return (0);
}
