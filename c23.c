#include<stdio.h>

int main()
{
	
	int a,b,c;
	int max;
	
	
	printf("Enter the value of a,b and c :");
	scanf("%d %d %d",&a,&b,&c);
	
	// using ternary operators 
	
	max= (a>b)?((a>c)?a:c):((b>c)?b:c);

	printf("%d",max);
	
	
	
	return 0;
}
