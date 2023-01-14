#include<stdio.h>

int fac(int i)
{
    int x ;

    int prod = 1;

    for(x=1;x<=i;x++)
    {
        prod = prod * x ;
       
    }
    return prod;

}

int main()
{
    int n,i; 
    float sum = 0,prod;

    printf("\n\ninput the no of terms:");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        printf("%d / %d! + ",i,i);

        int fact = fac(i);
        
        prod = i *1.0 / fact  ;
       
        
        sum = sum + prod ;
        
     
    }

    printf("\b\b = %.3f",sum);

}