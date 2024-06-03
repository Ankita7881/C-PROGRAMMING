#include<stdio.h>

int main(){

char grade='B';

	
	
	switch(grade){
		
		case 'A':
		printf("Good");
		break;
			
		case 'B':
		printf("Not bad");
		break;
		
		case 'C':
		printf("bad");
		break;
			
		case 'D':
		printf("Very bad");
		break;
		
		default:
		printf("Not matched");
		
				
	}
	
	return 0;
}
