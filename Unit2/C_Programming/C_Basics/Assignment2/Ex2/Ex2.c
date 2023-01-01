/*
 * Ex2.c
 *
 *  Created on: Jan 2, 2023
 *      Author: mohatem
 */

int isVowel(char input){
	if(input == 'a' || input == 'u'||input == 'i'||
			input =='o'|| input =='e' || input =='A'||
			input =='U'||input =='I'||input =='O'||input =='E'){
		return 1;
	}
	else{
		return 0;
	}
}

#include <stdio.h>

int main(){

	char input, z;

	setbuf(stdout,NULL);

	printf("Enter an alphabet: ");
	scanf(" %c",&input);

	z = isVowel(input);
	if(z == 1){
		printf("%c is a vowel", input);
	}
	else{
		printf("%c is a consonant", input);
	}

	return 0;

}
