#include<stdio.h>
int main()
{
    int a,b,i,j,k=0,c,count=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
      count=0;
      k=0;
      for(j=i;j>0;j=j/10)
      {
          c=j%10;
          k++;
          if(c!=0)
          {
              if(i%c==0)
              {
                  count++;
              }
          }
      }
      if(count==k)
    {
        printf("%d ",i);
    }
  }
    
}