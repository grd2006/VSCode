#include <stdio.h>

int main() {
	printf("Write a program \n");
	int a, b;
	printf("Enter first number :");
	scanf("%d", &a);
	printf("Enter second number :");
	scanf("%d", &b);
	if (a<b) {
		printf("%d", b);
	}
	else {
		printf("%d", a);
	}
	return 0;
}
