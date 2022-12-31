/*
 * Ex7.c
 *
 *  Created on: Jan 1, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(){

	setbuf(stdout,NULL);

	float a, b;

	printf("Enter value of a: ");
	scanf("%f",&a);

	printf("Enter value of b: ");
	scanf("%f",&b);

	a = a - b;
	b = a + b;
	a = b - a;

	printf("\n");

	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);

	return 0;

}

