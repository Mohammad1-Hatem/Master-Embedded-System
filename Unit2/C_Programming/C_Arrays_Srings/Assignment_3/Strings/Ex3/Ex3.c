/*
 * Ex3.c
 *
 *  Created on: Oct 11, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>
#include <string.h>

int main(void){

	char text[50],copy[50];
	int length;

	setbuf(stdout,NULL);

	printf("Enter string: ");
	gets(text);

	length=strlen(text);

	for(int i=0; i<length;i++){
		copy[i]=text[length-i-1];
	}

	int j=0;
	printf("Reversed string is: ");

	while(copy[j]!='\0'){
		printf("%c",copy[j]);
		j++;
	}

	return 0;

}
