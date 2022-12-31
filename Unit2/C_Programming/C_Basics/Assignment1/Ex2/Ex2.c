/*
 * Ex2.c
 *
 *  Created on: Dec 31, 2022
 *      Author: mohatem
 */


#include <stdio.h>

int main(){

	setbuf(stdout,NULL);

	int x;

	printf("Enter an integer: ");
	scanf("%d",&x);

	printf("You Entered: %d", x);

	return 0;

}
