#include<stdio.h>
#include<stdlib.h>
#define MAXSIZE 5
void push();
void pop();
void display();
int TOP=-1,data,stack[MAXSIZE];
void main (){
    char choice;
    while(1){
    
    

    printf("i\n d\n s\n");
    scanf("%c",&choice);
    if (choice >=97 && choice<=122){
    switch (choice)
    {
        case 'i' : push (); break;
        case 'd':pop();break;
        case's': display();break;
        default: exit (0);
     }
    }
    }
}
  void push(){
    if (TOP==MAXSIZE-1){
    printf("the stack is over flow");}
    else{
        printf("enter the data which you want to inserted");
        scanf("%d",&data);
        TOP++ ;
        stack[TOP]=data;
        printf("%d is inserted",data);

        


    }



    }
    void pop(){
         if (TOP==-1){
            printf("under flow");

          }
        else{
            TOP--;
            data=stack[TOP];
            printf("the data is deleted");
        }
    }
    void display(){
         printf("the stack is\n");
        for (int i=TOP;i>=1;i--){
            printf("[%d]",stack[i]);
            printf("\n      \n");
    }

  
}