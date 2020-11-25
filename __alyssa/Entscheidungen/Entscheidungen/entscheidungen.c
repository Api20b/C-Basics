/*
source code		entscheidungen.c
author			Alyssa Heimlicher
date			25.11.2020

decription:
-Entscheidungen mit if-else
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	
	int jahrgang;

	//Jahrgang des Users
	printf("Gib deinen Jahrgang ein: ");
	scanf("%d", &jahrgang);

	//
	if (jahrgang < 2000) {
		printf("Du bist vom letzten Jahrtausend.\n");
	}
	else {
		printf("Heres the suicide Helpline: +41 (0) 27 321 21 21\nGet help.");
	}

	return 0;
}