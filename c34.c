#include<stdio.h>

int main(){
	
	int rows,i,j,k;
	
	printf("Enter the rows :");
	scanf("%d",&rows);
	
	// first loop for printing the rows
	
	for(i=0; i<rows; i++){	
	
		// loop for printing leading space
		
		for(k=0; k<2*(rows-i)-1;k++){	
			printf(" ");
		}
		
		// loop for printing char each rows
		
		for(j=0; j<=i;j++){	
			printf("%c ",'A'+j);
		}
		
		printf("\n");
	}
	
	
	return 0;
}
