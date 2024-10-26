/*
 * Ex1.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int flag=0;

void intervalPrime(int num1, int num2){

	while(num1<=num2){
		flag = 0;

		for(int i=2;i<num1/2;i++){
			if(num1%i==0){
				flag=1;
				break;
			}
		}

		if(flag==0){
			printf("%d ",num1);
		}
		num1++;

	}


}

int main(void){

	int num1,num2;

	setbuf(stdout,NULL);

	printf("Enter 1st number: ");
	scanf("%d", &num1);


	printf("Enter 2nd number: ");
	scanf("%d", &num2);

	if(num1>num2){
		printf("Prime numbers between %d and %d are: ",num2,num1);
		intervalPrime(num2,num1);
	}

	else{
		printf("Prime numbers between %d and %d are: ",num1,num2);
		intervalPrime(num1,num2);
	}

	return 0;
}
