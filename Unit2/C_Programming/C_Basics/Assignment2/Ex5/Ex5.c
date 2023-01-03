/*
 * Ex5.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

#include <stdio.h>

int main(void){

	char ch;

	setbuf(stdout,NULL);

	printf("Enter the character: ");
	scanf(" %c",&ch);

	//printf("\n");

	if((ch>=65 && ch<=90) || (ch>97 && ch<122)){
		printf("%c is an alphabet", ch);
	}
	else{
		printf("%c is not an alphabet", ch);
	}


	return 0;
}



