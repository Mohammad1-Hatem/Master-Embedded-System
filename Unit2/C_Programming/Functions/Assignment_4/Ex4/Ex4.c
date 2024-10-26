/*
 * Ex3.c
 *
 *  Created on: Oct 26, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int mulRec(int num, int pow){

	if(pow==0){
		return 1;
	}

	return num*mulRec(num,pow-1);

}

int main() {

	int num=6, pow=2;

	setbuf(stdout, NULL);

	printf("Enter base number: ");
	scanf("%d", &num);


	printf("Enter power number: ");
	scanf("%d", &pow);

	printf("%d^%d = %d",num,pow,mulRec(num,pow));
	return 0;
}


