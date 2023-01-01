/*
 * Ex1.c
 *
 *  Created on: Jan 1, 2023
 *      Author: mohatem
 */

int isOdd(int num){
	if(num%2 != 0){
		return -1;
	}
	else
		return 1;
}

#include <stdio.h>

int main(){

	setbuf(stdout,NULL);

	int num, z;

	printf("Enter the integer you want to check: ");
	scanf("%d",&num);

	z = isOdd(num);

	if(z == -1){
		printf("The number is odd");
	}
	else{
		printf("The number is even");
	}

	return 0;

}

