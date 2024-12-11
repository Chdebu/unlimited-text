#include<stdio.h>
void main(){
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    int sum=0;
    for(int i=1;i<=a;i++)
        {
        sum=sum+i;
        }
    printf("the sum is%d",sum);
}