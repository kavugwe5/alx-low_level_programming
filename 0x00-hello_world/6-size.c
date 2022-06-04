#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;
	int d;
	long int c;
	long long f;
	float b;
	  printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(i));
	  printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(d));
	  printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	  printf("Size of a long long int: %lubyte(s)\n", (unsigned long)sizeof(f));
	  printf("Size of a float: %lu bytes(s)\n", (unsigned long)sizeof(b));
	return (0);
}

