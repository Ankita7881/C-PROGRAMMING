#include<stdio.h>

int main(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    
    //swap logic
    a=a+b;
    b=a-b;
    a=a-b;
    printf("new value of a=%d, b=%d",a,b);
	return 0;
}