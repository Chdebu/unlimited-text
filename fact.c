#include<stdio.h>
#include<stdlib.h>
 int fact (x);
void main(){
    int a;
    printf ("enter the number:");
    scanf("%d",&a);
    int f =fact(a);
    printf("the factorial is :%d",f);

}
int fact(a){
    if (a==1)
    return 1;
    else
     return ( a*fact(a-1));
}