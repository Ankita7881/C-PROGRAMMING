// number positive or negative
//using brute force
#include<stdio.h>
int main()
{
	int num;
	printf("enter a number :");
	scanf("%d",&num);
	if(num>0)
		printf("the number is positive");
	else if(num<0)
		printf("the number is negative");
	else
		printf("zero");
		return 0;
}
