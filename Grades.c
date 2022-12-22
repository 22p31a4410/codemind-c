#include<stdio.h>
int main()
{
    int p,c,b,m,s,n,x;
    scanf("%d%d%d%d%d",&p,&c,&b,&m,&s);
    n=p+c+b+m+s;
    x=n*100/500;
    if(x>=90)
    {
        printf("Grade A");
    }
    else if(x>=80)
    {
        printf("Grade B");
    }
    else if(x>=70)
    {
        printf("Grade C");
    }
    else if(x>=60)
    {
        printf("Grade D");
    }
    else 
    {
        printf("Grade F");
    }
}