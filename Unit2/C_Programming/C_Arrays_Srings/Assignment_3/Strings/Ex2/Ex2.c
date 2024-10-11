/*
 * Ex2.c
 *
 *  Created on: Oct 10, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>


int main(void){

	char text[100];
	int ctr=0;

	setbuf(stdout,NULL);

	printf("Enter text: ");
	gets(text);

	int i=0;
	while(text[i]!='\0'){
		ctr++;
		i++;
	}

	printf("The length = %d", ctr);

	return 0;
}
