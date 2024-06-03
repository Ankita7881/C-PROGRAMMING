#include<stdio.h>
int main()
{
	int a;
	printf("Enter the bar code :");
	scanf("%d",&a);
	
	if(a>18){
		printf("eligible");
	}
	else{
		printf("error");
	}
	
	return 0;
	
}
