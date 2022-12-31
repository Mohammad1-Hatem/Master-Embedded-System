/*
 * Ex3.c
 *
 *  Created on: Dec 31, 2022
 *      Author: mohatem
 */

#include <stdio.h>
#include "sum.h"

int main(){

	setbuf(stdout,NULL);

	int x, y, z;

	printf("Enter the first integer: ");
	scanf("%d",&x);

	printf("Enter the second integer: ");
	scanf("%d",&y);

	z = sum(x,y);

	printf("Sum: %d", z);

	return 0;

}
