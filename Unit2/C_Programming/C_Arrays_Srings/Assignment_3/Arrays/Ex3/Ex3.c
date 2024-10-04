/*
 * Ex3.c
 *
 *  Created on: Oct 4, 2024
 *      Author: Mo_7atem
 */

#include <stdio.h>

int main(void){

	int rows,cols;
	setbuf(stdout,NULL);

	printf("Enter number of rows: ");
	scanf("%d",&rows);

	printf("Enter number of columns: ");
	scanf("%d",&cols);

	int arr[rows][cols];

	printf("\n");

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("Enter element a%d%d: ",i+1,j+1);
			scanf("%d",&arr[i][j]);
		}
	}

	printf("\n");
	printf("Entered Matrix: \n");
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d   ",arr[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	printf("Transposed Matrix: \n");
	for(int j=0;j<cols;j++){
		for(int i=0;i<rows;i++){
			printf("%d   ",arr[i][j]);
		}
		printf("\n");
	}

	return 0;
}

