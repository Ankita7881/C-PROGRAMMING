#include<stdio.h>

int main()
{
	// switch

int choice;
printf("Enter your choice between v i b g y o r :");
scanf("%c", &choice);

switch(choice){
	case 'v': 
	printf("violet");
	break;
	
	case 'i':
	printf("indigo");
	break;
	
	case 'b': 
	printf("blue");
	break;
	
	case 'g':
	printf("green");
	break;
	
	case 'y': 
	printf("yellow");
	break;
	
	case 'o': 
	printf("orange");
	break;
	
	case 'r': 
	printf("red");
	break;
	  	
          default:
	printf("invalid number");
			
}
	
	return 0;
}
