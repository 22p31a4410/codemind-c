#include<stdio.h>
int main(){
    int n,i,j,s,temp,cons,b;
    scanf("%d",&n);
    for(i=n+1;i>0;i++){
        s=0;
        for(j=i;j>0;j=j/10){
            b=j%10;s=s*10+b;
        }
        if(s==i){
            temp=i;
            break;
        }
        }
        for(i=n-1;i>0;i--){
            s=0;
            for(j=i;j>0;j=j/10){
                b=j%10;
                s=s*10+b;
            }
            if(s==i){
                cons=i;
                break;
            }
        }
        if(temp-n>n-cons)
        printf("%d",cons);
        else
        if(temp-n<n-cons)
        printf("%d",temp);
        else if(temp-n==n-cons)
        printf("%d %d",cons,temp);
        }
    
    
