/*
 * Ex3.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int main(void){

	int n;
	float avg, num, sum=0;


	setbuf(stdout,NULL);

	printf("Enter number of elements: ");
	scanf("%d", &n);


	int i=0;
	while(i<n){
		printf("Enter number: ");
		scanf("%f",&num);
		sum+=num;
		i++;
	}

	avg=sum/n;
	printf("The average: %f",avg);

	return 0;

}

