/*
 * Ex3.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Mo_7atem
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
