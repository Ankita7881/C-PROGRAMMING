#include<stdio.h>

int main(){
	
	int n,sum=0,i,marks[10];
	
	double avrg;
	printf("Enter the number of element 1 to 10 : ");
	scanf("%d",&n);
	
	for(i=0; i<n; ++i){
		
		printf("Enter the number array[%d]:",i+1 );
		scanf("%d",&marks[i]);
		sum=sum+marks[i];	
	}
	avrg=(double)sum/n;
	printf("result = %lf",avrg);
	
	return 0;
}
