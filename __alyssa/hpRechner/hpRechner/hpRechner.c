/*
source code		hpRechner.c
author			Alyssa Heimlicher
date			25.11.2020

desc:
-HP Rechner 
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int zahl1;
	int zahl2;
	char operator;
	int result;

	printf("Enter the first number: ");
	scanf("%d", &zahl1);
	getchar();

	printf("Enter the second number: ");
	scanf("%d", &zahl2);
	getchar();

	printf("Enter the operator you wish to use: ");
	scanf("%c", &operator);
	getchar();

	if (operator == '+') {
		result = zahl1 + zahl2;
	}
	else if (operator == '-'){
		result = zahl1 - zahl2;
	}
	else if (operator == '*'){
		result = zahl1 * zahl2;
	}
	else if (operator == '/'){
		result = zahl1 / zahl2;
	}
	else {
		printf("st00pid");
	}

	printf("Your result is: %d", result);

	return 0;
}
