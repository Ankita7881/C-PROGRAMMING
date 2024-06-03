#include<stdio.h>

/// add matrix

int main(){
	
	float a[2][2], b[2][2], sum [2][2];
	int i,j;
	
	//taking input using nested for loop
	
	printf("Enter the elements of first matrix :\n");
	for (i=0; i<2; ++i){
		for (j=0; j<2; ++j){
			printf("Enter A%d%d :",i+1,j+1);
			scanf("%f",&a[i][j]);
		}
	}
	
	// second matrix(element)
	
	printf("Enter the elements of second matrix :\n");
	for (i=0; i<2; ++i){
		for (j=0; j<2; ++j){
			printf("Enter B%d%d :",i+1,j+1);
			scanf("%f",&b[i][j]);
		}
	}
	
	// sum of 2 matrix
	
	for(i=0; i<2; ++i){
		for(j=0; j<2; ++j){
		          sum[i][j]=a[i][j]+b[i][j];	
		
		}
	}
	
	/// display result 
	
		for(i=0; i<2; ++i){
		for(j=0; j<2; ++j){
		          printf("print the sum %f\n",sum[i][j]);	
		
		}
	}
	
	
	return 0;
}
