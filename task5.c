#include <stdio.h>
 
int main()
{ 
 float principle, rate, sinterest;
 int time;
 
 printf("Enter Principle Amount, Rate and Time\n");
 scanf ("%f %f %d", &principle, &rate, &time);
 
 sinterest = (principle * rate * time)/ 100;
 
 printf ("Principle Amount = %f\n", principle);
 printf ("Rate %% per Annum   = %f%\n", rate);
 printf ("Time   = %d years\n", time);
 printf ("Simple Interest  = %f\n", sinterest);
}
