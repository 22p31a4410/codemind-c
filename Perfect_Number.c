#include<stdio.h>
int main()
{
    int n,i,sum=0,b;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        b=n%i;
        if(b==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}