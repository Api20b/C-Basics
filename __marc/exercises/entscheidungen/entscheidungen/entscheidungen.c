/*
source code		entscheidungen.c
author			Marc-Andri Fuchs
date			25.11.2020

description:
- Entscheidung mit if-else
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {

	int jahrgang;

	//Jahrgang des Users
	printf("Gib deinen Jahrgang ein: ");
	scanf("%d", &jahrgang);

	if (jahrgang < 2000) {
		printf("Du bist vom letzten Jahrtausend!\n");
	}

	else {
		printf("You have depression!\n");
	}

	return 0;
}