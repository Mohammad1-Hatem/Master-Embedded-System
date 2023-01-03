/*
 * Ex8.c
 *
 *  Created on: Jan 3, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(void){

	char op; /* operator*/
	float num1, num2;

	setbuf(stdout,NULL);

	printf("Enter operator either + or - or * or / : ");
	scanf(" %c",&op);

	printf("Enter first operand: ");
	scanf(" %f",&num1);

	printf("Enter second operand: ");
	scanf(" %f",&num2);

	printf("\n");

	switch(op){
	case '+':
		printf("%0.2f + %0.2f = %0.2f", num1, num2, num1+num2);
		break;

	case '-':
		printf("%0.2f - %0.2f = %0.2f", num1, num2, num1-num2);
		break;

	case '*':
		printf("%0.2f * %0.2f = %0.2f", num1, num2, num1*num2);
		break;

	case '/':
		printf("%0.2f / %0.2f = %0.2f", num1, num2, num1/num2);
		break;

		/* In case the operator isn't correct */
	default:
		printf("Error! The operator is not correct");
	}

	return 0;
}
