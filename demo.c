#include<stdio.h>
int main ()
{
    int x; 
    {
    printf("Enter the value of x");
    scanf("%d",&x);
    }
    if (x<70)
    {
    printf("Order Confirmed");
    }
    else
    {
        printf("Order Limit Reached");
        printf("\nTHANK YOU!");
    }
return 0;    
}
