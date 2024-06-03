#include<stdio.h>

int main(){
    int a,b;
    int c;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b :");
    scanf("%d",&b);
    
    //swap logic
    c=a;
    a=b;
    b=c;
    printf("new value of a=%d, b=%d",a,b);
	return 0;
}