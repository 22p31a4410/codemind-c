#include<stdio.h>
int main()
{
    int t,s,b;
    scanf("%d%d%d",&t,&s,&b);
    int c;
    c=(2*t*s*b*512)/1024;
    printf("%d KB",c);
}