#include<stdio.h>


int main(){

int a,b,c;	
	
	printf("Enter the value of a :");
	scanf("%d",&a);
	
	
	printf("Enter the value of b :");
	scanf("%d",&b);
	
	// addition
	
           c=a+b; 
	 printf("sum of %d and %d :%d",a,b,c);
	
	
	// subtraction
	
	c=a-b;
	 printf("\nsub of %d and %d :%d",a,b,c);
	
	// multiplication
	
	c=a*b; 
	 printf("\nmult of %d and %d :%d",a,b,c);
	 
	 // division 
	 
	 
	 c=a/b;
	  printf("\ndiv of %d and %d :%d",a,b,c);
	  
	  
	  // remainder
	  
	  c=a%b;
	printf("\nremain of %d and %d :%d",a,b,c);
	
	
	return 0;
	
}

