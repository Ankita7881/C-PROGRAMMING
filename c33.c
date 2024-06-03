#include<stdio.h>

int main(){
	

int rows=5;
int i,j;

// first loop for printing rows

for(i=1; i<=rows; i++){
	
	// second for loop for printing character each rows
	
	for(j=1; j<=i; j++){
		
		printf("*");
	}
	
	printf("\n");
	
}

return 0;
	
}
