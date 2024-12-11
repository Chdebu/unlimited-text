#include<stdio.h>
#include<stdlib.h>
int power (a,b);
void main(){
    int x,y;
    printf("enter x and y:");
    scanf("%d%d",&x ,&y);
   int p=power(x,y);
   printf("the result is :%d",p);


}
int power( x, y){
    if (y==0)
    return (1);
    else
    return (x*power(x,y-1));
}