/*
source code		hprechner_2.c
author			Marc-Andri Fuchs
date			25.11.2020


desc:
- HP Rechner Funktionen
- Switch-Case

Eingabe 1
Eingabe 2
Operator
--------
Resultat

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void) {
	float number1;
	float number2;
	float result;
	char operator;

	//Abfrage Nummer 1
	printf("Enter the first number: ");
	scanf("%f", &number1);
	getchar();

	//Abfrage Nummer 2
	printf("Enter the second number: ");
	scanf("%f", &number2);
	getchar();

	//Abfrage Operator
	printf("Enter the operator you wish to use: ");
	scanf("%c", &operator);
	getchar();


	// Operator Abfrage

	switch (operator)
	{
	case '+':
		result = number1 + number2;
		break;
	case '-':
		result = number1 - number2;
		break;
	case '*':
		result = number1 * number2;
		break;
	case '/':
		result = number1 / number2;
		break;
	}

	printf("Your result is: %f", result);


	return 0;
}
