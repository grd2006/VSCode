#include <stdio.h>

int main() {
	printf("Write a program to print the smaller between two numbers \n");
	int a, b;
	printf("Enter first number ");
	scanf("%d", &a);
	printf("Enter second number ");
	scanf("%d", &b);
	if (a<b) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}
	return 0;
}