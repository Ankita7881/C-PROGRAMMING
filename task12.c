#include<stdio.h>
#include<stdlib.h>

int hcf(int m,int n)
{
        int numm;
        while(n!=0)
        {
                numm=m%n;
                m=n;
                n=numm;
        }
        return(m);
}

int main()
{
        int num1,num2,num3,hcf1,hcf2;

        printf("\nEnter 1st positive integer : ");
        scanf("%d",&num1);
        printf("\nEnter 2nd positive integer : ");
        scanf("%d",&num2);
        printf("\nEnter 3rd positive integer : ");
        scanf("%d",&num3);

        if(num1==0 && num2==0 && num3==0)
        {
                printf("\nInvalid number");
                exit(0);
        }

        hcf1=hcf(num1,num2);
        hcf2=hcf(num3,hcf1);

        printf("\nhcf of [ %d, %d, %d ] is : [ %d ]\n",num1,num2,num3,hcf2);

        return 0;
}
