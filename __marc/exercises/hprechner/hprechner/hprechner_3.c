/*
source code		hprechner.c
author			Marc-Andri Fuchs
date			25.11.2020


desc:
- HP Rechner Funktionen

Eingabe 1
Eingabe 2
Operator
--------
Resultat

*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



/*int main(void) {
	int error;
	float number1;
	float number2;
	float result;
	char operator;
	char again;

	do
	{
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
		if (operator == '+') {
			result = number1 + number2;
		}

		else if (operator == '-') {
			result = number1 - number2;
		}

		else if (operator == '*') {
			result = number1 * number2;
		}

		else if (operator == '/') {
			while (number2 == 0) {
				printf("You can't divide with 0! Try agoin: ");
				scanf("%f", &number2);
				getchar();
			}
			result = number1 / number2;
		}

		else {
			printf("NO!");
		}

		printf("Your result is: %f\n", result);

		printf("Do you want to calculate something else: (y/n) ");
		scanf("%c", &again);
		getchar();

	} while (again == 'y');

	


	return 0;
}*/


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
	int error;
	float number1;
	float number2;
	float result;
	char operator;
	char again;

	do {

		error = 0;

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

		switch (operator) {
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
			while (number2 == 0) {
				printf("You can't divide with 0! Try agoin: ");
				scanf("%f", &number2);
				getchar();
			}
			result = number1 / number2;
			break;
		default:
			error = 1;
		}


		if (error == 0) {
			printf("Your result is: %f\n", result);
		}

		else {
			printf("ERROR\n");
		}

		printf("Do you want to calculate something else: (y/n) ");
		scanf("%c", &again);
		getchar();

	} while (again == 'y');

	return 0;
}