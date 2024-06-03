
// strcpy
// s2=s1 (s2 content copy  s1)

  //strcat
  // s2=s1 (s2 and s1 content join)
  
  // strcmp (string comparision function compare the string)
  
  // strlen (calculate the length of string )

#include<stdio.h>
#include<string.h>

int main(){
	
	char str1[12]="Hello ";
	
	int len ;
	
	len=strlen(str1);
	
	printf("length is here : %d",len);
}
