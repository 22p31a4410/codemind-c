#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int y,w;
    y=n/365;
    w=(n%365)/7;
    printf("%d
",y);
    printf("%d",w);
}