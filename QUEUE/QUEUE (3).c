#include<stdio.h>
int fact(int n);
int main()
{
    int n,sum=0,num,r;
    printf("Enter your number:");
    scanf("%d",&num);
    n=num;
    while(num!=0){
        r=num%10;
        sum=sum+fact(r);
        num=num/10;
    }
    if(sum==n){
        printf("Strong Number.\n");
    }else{
        printf("Not Strong Number.\n");
    }

   // Factorial=fact(n);
    //printf("Factorial value of %d= %d",n,Factorial);
    return 0;
}
int fact(int f){
    int i,F=1;
    for(i=1;i<=f;i++)
    {
        F=F*i;
    }
    return (F);
}
