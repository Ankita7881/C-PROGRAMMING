#include <stdio.h>

int main() {
    int n1,n2;
    printf("enter the number");
    scanf("%d",&n1);
    printf("enter the number");
    scanf("%d",&n2);
    
    int hcf = 1;
    
    while (n1 != n2)
    {
        if (n1 > n2){
            n1= n1- n2;}
        else
            n2=n2-n1;
    }
    
    printf("The HCF : %d", n1);
    
    return 0;
}
