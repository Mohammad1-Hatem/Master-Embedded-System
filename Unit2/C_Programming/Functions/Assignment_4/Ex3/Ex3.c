/*
 * Ex3.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Mo_7atem
 */
/*
#include <stdio.h>


int main(void){

	char text[30];

	setbuf(stdout, NULL);


	printf("Enter a text: ");
	gets(text);

	printf("%s",text);


	return 0;
}
*/


#include <stdio.h>
void reverseSentence();

int main() {

	setbuf(stdout, NULL);

	printf("Enter a sentence: ");
    reverseSentence();
    return 0;
}

void reverseSentence() {
    char c;
    scanf("%c", &c);
    if (c != '\n') {
        reverseSentence();
        printf("%c", c);
    }
}
