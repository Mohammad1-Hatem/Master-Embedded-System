/*
 * Ex5.c
 *
 *  Created on: Jan 1, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(){

	setbuf(stdout,NULL);

	char x;

	printf("Enter a character: ");
	scanf("%c",&x);

	printf("ASCII value of %c = %d", x, x);

	return 0;

}

