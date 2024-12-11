#include<stdio.h>
#include<stdlib.h>
void main(){
  float a,r;
  int ch;
  printf("\nwelcome to our temparature converture:\n");

  printf("select 1 for fer and 2 for cen:");
  scanf("%d",&ch);
  printf("enter your value:");
  scanf("%f",&a);

  switch(ch){
      case 1: r=(a-32)/1.8;
          printf("centrigrade value is:%f",r);
          break;
      case 2:r=(1.8*a)+32;
          printf("the ferenhite value is %f:",r);
          break;
      case 3: exit (0);
      default: printf("invalid choice");
            

  }



  
}