#include<stdio.h>
#include<math.h>
int main(){
   int n,r,i;
   scanf("%d%d",&n,&r);
   for(i=1;i<=r;i++){
       if(i%2!=0){
           int c;
           c=n*i;
           printf("%d x %d = %d
",n,i,c);
       }
   }
}