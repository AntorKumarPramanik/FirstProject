#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Please enter your limit:");
    scanf("%d",&n);
    do{
        sum=sum+i;
        i++;
    }while(n>=i);
    printf("Summation value:%d",sum);
    return 0;
}

