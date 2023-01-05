#include<stdio.h>
int main()
{
    int m,n,i,gcd,lcm;
    scanf("%d%d",&m,&n);
    for(i=1;i<=m&&i<=n;++i)
    {
        if(m%i==0&&n%i==0)
        {
            gcd=i;
        }
    }
    lcm=(m*n)/gcd;
        printf("%d",lcm);
}