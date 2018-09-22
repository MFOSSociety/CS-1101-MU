/*
Author      : Arihant Awasthi
Synopsis    : Prints a flag
How2Compile : gcc -o pattern pattern.c
Usage       : ./pattern
gcc version : 5.4.0
*/

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	int j;
	int k;
	int l;

	for (i = 0; i <= 5; i++) {
		printf("      ");
		for (j = 0; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i <= 5; i++) {
		printf("      ");
		for (j = 5; j >= i; j--) {
			printf("*");
		}
		printf("\n");
	}

	for (i = 0; i <= 6; i++) {
		printf("      ");
		printf("*\n");
	}

	for (i = 0; i <= 5; i++) {
		for (j = 5; j >= i; j--) {
			printf(" ");
		}
		for (k = 0; k <= i; k++) {
			printf("*");
		}
		for (l = 0; l <= i; l++) {
			printf("*");
		}
		printf("\n");
	}
}