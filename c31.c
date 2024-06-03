#include<stdio.h>

int main(){

// print triangle pattern

int rows, i ,j;


printf("Enter the rows :");
scanf("%d",&rows);


// print the triangle pattern

for (i=0; i<=rows; i++){
	
	// print space
	
	for(j=0; j<=rows-i; j++){
		printf("");
	}
	
	// print star 
	for(j=0; j<i; j++){
		
		printf("*");
	}
	printf("\n");
		
}



	
	return 0;
}
