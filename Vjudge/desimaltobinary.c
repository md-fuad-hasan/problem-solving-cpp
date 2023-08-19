#include<stdio.h>

int main(){


    int n;
    scanf("%d",&n);

    if(n==0){
        printf("0");
        
        return 0;
    }

    int mul = 1;


    int i=0;

    while(n>=mul){

        mul = mul*2;

        i++;
    

    }
    i--;
    mul = mul/2;
    int sum =0;

   for(;i>=0;i--){
     
     if(n>=sum+mul){
        printf("1");
        sum+=mul;
        
     }
     else{
        printf("0");
     }
     mul/=2;


   }

   

    return 0;
}