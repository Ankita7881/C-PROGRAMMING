#include<stdio.h>
//function to calculate square of number
float squareOfNumber(float num)
{
    return (num*num);
}
int main()
{
    float number, square;
    printf("Please Enter any integer Value : ");
    scanf("%f", &number);
    square = squareOfNumber(number);
    printf("square of a given number %f is  =  %f", number, square);
    return 0;
}
