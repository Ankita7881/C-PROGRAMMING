#include<stdio.h>

int main()
{
	
	int a,b;
	int max;
	
	
	printf("Enter the value of a and b :");
	scanf("%d %d",&a,&b);
	
	// using ternary operators 
	
	max= (a>b)?a:b;

	printf("%d",max);
	printf("greater value",max);
	
	
	return 0;
}
