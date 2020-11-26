/*
source code		tannenbaum.c
author			Marc-Andri Fuchs
date:			25.11.2020

desc:
- Tannenbaum ausgeben
*/

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


int main(void) {
	int width = 0;
	int top;
	int add = 0;
	int stars;
	int height = 0;
	int trunk;


	do {
		printf("Enter a Number between 5-50: ");
		scanf("%d", &width);
		getchar();
	} while (width > 69 || width < 5);

	if (width % 2 == 0) {
		width += 1;
		printf("As your number wasn't odd, we changed it to: %d \n", width);
	}

	top = (width-1) / 2;
	stars = 1;



	for (int i = width; i > 0; i -= 2) {
		height++;
	}

	for (int j = 0; j < height; j++) {
		for (int i = 0; i < top; i++) {
			printf(" ");
		}
		for (int k = 0; k < stars; k++) {
			printf("*");
		}
		printf("\n");
		top--;
		stars += 2;
	}

	trunk = width / 3;

	for (int i = 0; i < (height/3); i++) {
		for (int o = 0; o < trunk; o++) {
			printf(" ");
		}

		for (int f = 0; f < trunk; f++) {
			printf("*");
		}
		printf("\n");
	}
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	printf("\n");
	main();
	return 0;
}