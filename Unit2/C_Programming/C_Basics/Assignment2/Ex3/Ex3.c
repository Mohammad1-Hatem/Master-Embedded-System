/*
 * Ex3.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(void){

	float num1, num2, num3;

	setbuf(stdout,NULL);

	printf("Enter the first number: ");
	scanf("%f",&num1);

	printf("Enter the second number: ");
	scanf("%f",&num2);

	printf("Enter the third number: ");
	scanf("%f",&num3);

	printf("\n");

	if(num1>num2 && num1>num3){
		printf("The largest number is: %f", num1);
	}

	if(num2>num1 && num2>num3){
		printf("The largest number is: %f", num2);
	}

	if(num3>num2 && num3>num1){
		printf("The largest number is: %f", num3);
	}

	return 0;
}
