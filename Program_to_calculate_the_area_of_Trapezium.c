#include<stdio.h>
int main()
{
    float b1,b2,h;
    scanf("%f%f%f",&b1,&b2,&h);
    float a;
    a=((b1+b2)/2)*h;
    printf("%.4f",a);
}