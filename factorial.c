#include<stdio.h>

	// find factorial number 
	
	// function declaration

int factorial (int n);
int main(){
	
       int num;
       printf("Enter a non-negative number :");
       scanf("%d",&num);
	
	
	// call the function and print result 
	
	printf("Factorial of %d=%d\n",num,factorial(num));
	
	return 0;
}


// function definition 

int factorial (int n){
	
	if(n==0 || n==1){
		
		return 1;
	}
	else {
		return n*factorial(n-1);
	}
}
