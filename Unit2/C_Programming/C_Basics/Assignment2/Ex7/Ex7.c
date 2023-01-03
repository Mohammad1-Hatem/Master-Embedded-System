/*
 * Ex7.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(void){

	int n, i=0, Factorial=1;

	setbuf(stdout,NULL);

	printf("Enter an integer: ");
	scanf(" %d",&n);

	if(n<0){
		printf("Error!!! Factorial of negative number doesn't exist");
	}
	else if(n>0){
		for(i=n; i>0;i--){

			Factorial = Factorial*i;
		}
		printf("Factorial = %d", Factorial);
	}
	else if(n==0){
		Factorial = 1;
		printf("Factorial of zero = 1");
	}

	return 0;
}

