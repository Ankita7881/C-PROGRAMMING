#include<stdio.h>

int main(){

char grade;

	printf("Enter your choice :");
	scanf("%c",&grade);
	
	switch(grade){
		
		case 'A':
		case 'a':
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
