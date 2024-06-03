// pointer(variable ke value ke address ko store krta hai)

#include<stdio.h>

int main(){
	
	int var =10;
	
	// pointer  declaration 
	
	int* ptr;
	ptr=&var;
	printf("value of ptr=%p\n",ptr);
	
	printf("value of pointer %d",*ptr);
	
	
	return 0;
} 
