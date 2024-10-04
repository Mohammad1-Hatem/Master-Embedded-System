/*
 * Ex1.c
 *
 *  Created on: Oct 5, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int main(void){

	char text[100],ch;
	int ctr=0;

	setbuf(stdout,NULL);

	printf("Enter string: ");
	gets(text);

	printf("Enter a char: ");
	scanf("%c", &ch);

	for(int i=0; text[i]!='\0';i++){
		if(text[i]==ch){
			ctr++;
		}
	}

	printf("Frequency of %c = %d",ch,ctr);
	return 0;
}

