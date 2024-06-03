#include<stdio.h>

int main(){
	// add matrix
	float a[3][2],b[3][2],sum[3][2];
	int i,j;
	// taking input using nested for loop
	printf("enter the elements of first matrix\n");
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			printf("enter A[%d][%d]=",i+1,j+1);
			scanf("%f",&a[i][j]);
			
		}
	}
	printf("enter the elements of second matrix\n");
	for(i=0;i<3;++i){
		for(j=0;j<2;++j){
			printf("enter B[%d][%d]=",i+1,j+1);
			scanf("%f",&b[i][j]);
			
		}
	}
	
	for (i=0;i<3;++i){
		for(j=0;j<2;++j){
			sum[i][j]=a[i][j]+b[i][j];
		}
	}
	//display result
	printf("result is:\n");
	for (i=0;i<3;++i){
		for(j=0;j<2;++j){
			printf("%f\n",i+1,j+1,sum[i][j]);
				if(j==2){
				printf("/n");
			}

		}
	}
	
	
}
