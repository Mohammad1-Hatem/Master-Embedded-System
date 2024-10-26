/*
 * Ex2.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int factorialRec(int num){

	if(num==0){
		return 1;
	}

	if(num==1||num==2){
		return num;
	}

	return num*factorialRec(num-1);

}


int main(void){

	int num;

	setbuf(stdout,NULL);

	printf("Enter a number: ");
	scanf("%d",&num);


	printf("Factorial of %d is: %d",num,factorialRec(num));

	return 0;
}
