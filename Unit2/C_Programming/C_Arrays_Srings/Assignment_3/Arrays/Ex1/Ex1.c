/*
 * Ex1.c
 *
 *  Created on: Sep 30, 2024
 *      Author: Mo_7atem
 */


#include <stdio.h>

int main(void){


	float a1[2][2],a2[2][2],sum[2][2];

	setbuf(stdout,NULL);

	printf("Enter the element of the 1st element: \n");
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			scanf(" %f",&a1[i][j]);
		}
	}


	printf("\nEnter the element of the 2nd element: \n");
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			printf("Enter a%d%d: ",i+1,j+1);
			scanf(" %f",&a2[i][j]);
		}
	}

	for(int i=0; i<2;i++){
		for(int j=0;j<2;j++){
			sum[i][j]=a1[i][j]+a2[i][j];
		}
	}

	printf("\n");
	for(int i=0; i<2;i++){
		for(int j=0; j<2;j++){
			printf("%.2f\t", sum[i][j]);
		}
		printf("\n");
	}

	return 0;

}
