/*
 * Ex4.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Mo_7atem
 */


/*
 * Ex3.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int main(void){

	int n,arr[10],num, location;

	setbuf(stdout,NULL);


	printf("Enter number of elements: ");
	scanf("%d",&n);
	int i=0;

	while(i<n){
		scanf("%d",&arr[i]);
		i++;
	}


	int j=0;
	while(j<n){
		printf("%d ",arr[j]);
		j++;
	}


	printf("\nEnter the element to be inserted: ");
	scanf("%d", &num);

	printf("Enter location: ");
	scanf("%d", &location);


	for(int i=n-1;i>=location;--i){
		arr[i+1]=arr[i];
	}

	arr[location]=num;

	int k=0;
	printf("\n");

	while(k<n+1){
		printf("%d ",arr[k]);
		k++;
	}


	return 0;
}

