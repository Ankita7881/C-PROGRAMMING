#include<stdio.h>

int main(){
	
	int n1=10,n2=12;
	
	int small=(n1<n2)?n1:n2;
	int hcf=1;
	int i;
	
	for(i=1; i<=small; i++){
	
	     if(n1%i==0 && n2%i==0){
		
		hcf=i;
	}	
		
		
	}
	
	printf("%d",hcf);
	return 0;
}
