#include<stdio.h>

int main(){
	
	
	int i=1;
	int n;
	int table;
	
	printf("Enter the value of n :");
	scanf("%d",&n);
	
	for(i; i<=10; i++){
		
	table=n*i;
	printf("%d*%d=%d\n",n,i,table);
	
	
}
	
	return 0;
}
