/*
 * Ex4.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

/*
 * Ex3.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(void){

	float num;

	setbuf(stdout,NULL);

	printf("Enter the number: ");
	scanf("%f",&num);

	printf("\n");

	if(num>0){
		printf("%0.2f is positive", num); /* The 0.2 means 2 digits only*/
	}
	else if(num<0){
		printf("%0.2f is negative", num);
	}
	else{
		printf("You entered zero.");
	}

	return 0;
}

