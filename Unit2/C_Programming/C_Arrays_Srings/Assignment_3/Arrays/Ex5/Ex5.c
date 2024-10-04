/*
 * Ex5.c
 *
 *  Created on: Oct 5, 2024
 *      Author: Mo_7atem
 */


#include <stdio.h>

int main(void){

	int n, num;

	setbuf(stdout,NULL);

	printf("Enter number of elements: ");
	scanf("%d", &n);

	int arr[n];

	printf("Enter elements: ");
	for(int i=0; i<n;i++){
		scanf("%d", &arr[i]);
	}

	int j=0;
	while(j<n){
		printf("%d ",arr[j]);
		j++;
	}

	printf("\nEnter the number to be searshed: ");
	scanf("%d", &num);

	for(int i=0; i<n;i++){
		if(arr[i]==num){
			printf("Number found at location = %d",i+1);
			return 1;
		}
	}
	printf("Number does not found!");

	return 0;

}
