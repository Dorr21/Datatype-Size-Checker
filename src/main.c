// Prints the size of all primitive datatypes in C
#include <stdio.h>

int main(){
	printf("Int: ");
	printf("%lu\n", sizeof(int));
	printf("Short Int: ");
	printf("%lu\n", sizeof(short int));
	printf("Long Int: ");
	printf("%lu\n", sizeof(long int));
	printf("Long Long Int: ");
	printf("%lu\n", sizeof(long long int));
	printf("Unsigned Int: ");
	printf("%lu\n", sizeof(unsigned int));
	printf("Char: ");
	printf("%lu\n", sizeof(char));
	printf("Unsigned Long Long Int: ");
	printf("%lu\n", sizeof(unsigned long long int));
	printf("Float: ");
	printf("%lu\n", sizeof(float));
	printf("Double: ");
	printf("%lu\n", sizeof(double));
	printf("Long Double: ");
	printf("%lu\n", sizeof(long double));
	printf("Signed Char: ");
	printf("%lu\n", sizeof(signed char));
	printf("Unsigned Char: ");
	printf("%lu", sizeof(unsigned char));
}