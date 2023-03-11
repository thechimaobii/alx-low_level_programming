#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	/* Iterate over the string and print each character to stdout */
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}

	/* Print a newline character at the end of the string */
	putchar('\n');
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	/* Call the puts function to print a message to stdout */
	puts("\"Programming is like building a multilingual puzzle");

	/* Return 0 to indicate that the program executed successfully */
	return (0);
}
