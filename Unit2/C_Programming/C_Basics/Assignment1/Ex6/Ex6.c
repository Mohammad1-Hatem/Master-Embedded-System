/*
 * Ex6.c
 *
 *  Created on: Jan 1, 2023
 *      Author: mohatem
 */

#include <stdio.h>

/*
void swap(int a, int b){

	int temp = a;
	a = b;
	b = temp;
}
*/

int main(){

	setbuf(stdout,NULL);

	float a, b, temp;

	printf("Enter value of a: ");
	scanf("%f",&a);

	printf("Enter value of b: ");
	scanf("%f",&b);

	//swap(a,b);

	temp = a;
	a = b;
	b = temp;

	printf("\n");

	printf("After swapping, value of a = %f \n", a);
	printf("After swapping, value of b = %f \n", b);

	return 0;

}

