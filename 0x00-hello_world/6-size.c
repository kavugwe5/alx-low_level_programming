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
	  printf("The size of a char is: %lu byte(s) \n", (unsigned long)sizeof(i));
	  printf("The size of a int is: %lu byte(s) \n", (unsigned long)sizeof(d));
	  printf("The size of a long int is: %lu byte(s) \n", (unsigned long)sizeof(c));
	  printf("The size of a long long int is: %lu byte(s) \n", (unsigned long)sizeof(f));
	  printf("the size of a float is: %lu bytes(s) \n", (unsigned long)sizeof(b));
	return (0);
}

