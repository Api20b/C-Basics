/*
source code		rechnen.c
author			Alyssa Heimlicher
date			25.11.2020

decription:
- Literal ausgeben
- Rechnen mit Literalen
- Rechnen mit Variablen
- Werte einlesen
- Werte ausgeben
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int wert1 = 13;
	int wert2 = 56;
	int resultat = 0;

	//Zahlen-Literal ausgeben
	printf("%d\n", 420);

	//Rechnen mit Zahlen-Literalen
	printf("%d\n",  23 * 3);

	//Variable ausgeben
	printf("%d\n", wert1);

	//Rechnen mit Variablen
	printf("%d\n", wert1 + wert2);
	resultat = wert1 - wert2;
	printf("%d\n", resultat);

	//Werte einlesen
	printf("Gib die erste Zahl ein: ");
	scanf("%d", &wert1);
	printf("Gib die zweite Zahl ein: ");
	scanf("%d", &wert2);

	//Rechnen mit den eingelesenen Werten
	resultat = wert1 + wert2;
	printf("%d\n", resultat);

	return 0;
}