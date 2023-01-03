/*
 * Ex6.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(void){

	int n, i=0, sum=0;

	setbuf(stdout,NULL);

	printf("Enter an integer: ");
	scanf(" %d",&n);

	for(i=0; i<=n;i++){
		sum = sum +i;
	}
	printf("sum = %d",sum);

	return 0;
}
