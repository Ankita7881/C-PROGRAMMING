#include<stdio.h>
// if ... else ladder   < = >
int main(){
	
int a,b;
printf("Enter the value of a and b :");
scanf("%d %d",&a,&b);

if(a==b)	{
printf("Result is %d=%d",a,b)	;
}

else if(a>b){
	printf("a is greater than b %d>%d",a,b);
	
}

else{
	printf("b is greater than a %d<%d",a,b);
	
}

	return 0;
	
}
