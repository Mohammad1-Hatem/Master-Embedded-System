/*
 * Ex4.c
 *
 *  Created on: ٢٢‏/٠٩‏/٢٠٢٤
 *      Author: Mo_7atem
 */


#include <stdio.h>

int main(void){


	int rows;

	setbuf(stdout,NULL);

	printf("Enter number of rows: ");
	scanf(" %d",&rows);
	printf("\n");

	for(int i=1; i<rows+1;i++){
		for(int j=0; j<i;j++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}
