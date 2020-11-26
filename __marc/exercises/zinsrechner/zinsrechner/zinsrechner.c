/*
source code		zinsrechner.c
author			Marc-Andri Fuchs
date:			25.11.2020

desc:
- User gibt Guthaben, Zinssatz und Anz Jahre ein
- Zins wird ausgerechnet
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void) {
	long double money; //Amount of money on the bank account
	float interestrate; //Interest Rate
	long double result; //result
	int years; //Amount of years the user plans to have the MONEY on the bank account

	printf("Interest calculator v3.14159265358979323\n");
	printf("----------------------------------------\n\n");


	printf("Enter the amount of money on your bank account: ");
	scanf("%Lf", &money);
	getchar();

	printf("Enter your interest rate: ");
	scanf("%f", &interestrate);
	getchar();
		
	printf("Enter the amount of years you will keep the money on your account: ");
	scanf("%d", &years);
	getchar();

	result = money;

	for (int i = 0; i < years; i++) {
		result += (result * interestrate)/100;
	}

	printf("Money now: %Lf | Money in %d years: %Lf ", money, years, result);

	return 0;
}