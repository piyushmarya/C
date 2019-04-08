//Write a program to print formatted output.

#include<stdio.h>
void main()
{
    int a,b;
    float c,d;
    printf("String: %s\n", "Hello");
	printf("First number: %d\n", 12345);
	printf("Second number: %04d\n", 25);
	printf("Third number: %5d\n", 1234);
	printf("Float number: %3.2f\n", 3.14159);
	printf("Hexadecimal: %x\n", 255);
	printf("Octal: %o\n", 255);
	printf("print the percentage sign\t %%\n");
}
