/*
 * Ex4.c
 *
 *  Created on: Jan 1, 2023
 *      Author: mohatem
 */

#include <stdio.h>
#include "MultiplyFloat.h"

int main(){

	setbuf(stdout,NULL);

	float x, y, z;

	printf("Enter the first number: ");
	scanf("%f",&x);

	printf("Enter the second number: ");
	scanf("%f",&y);

	z = mul(x,y);

	printf("Product: %f", z);

	return 0;

}
