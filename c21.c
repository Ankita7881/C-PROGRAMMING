#include<stdio.h>

// while loop
int main(){
	
int i=1,n,table;

printf("Enter the value of n :");
scanf("%d",&n);

while(i<=10){
	table=n*i;
	printf("%d\n",table);
	i++;
}



	return 0;
}
