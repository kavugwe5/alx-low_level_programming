#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
long int d;
char c;
float f;
long long int b;

printf("The size of a int is: %lu. \n", (unsigned long)sizeof(i));
printf("The size of a long int is: %lu. \n", (unsigned long)sizeof(d));
printf("The size of a char is: %lu. \n",(unsigned long)sizeof(c));
printf("The size of a float is: %lu. \n",(unsigned long)sizeof(f));
printf("the size of a long long int is: %lu. \n",(unsigned long)sizeof(b));
	return(0);
}

