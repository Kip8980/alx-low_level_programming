#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: 0
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			ptchar(letter);
	}

	putchar(letter);

	return (0);
}
