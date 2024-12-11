#include<stdio.h>
#include<conio.h>
#define max 20
void main(){
    int i ,j,n,id[max],at[max],bt[max],wt[max],tat[max],temp ,gc[max];
    float awt,atat;

    printf("enter the number of process : ");
    scanf("%d",&n);
    printf("enter the process number : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&id[i]);
    }
    

    // printf("enter the arrival time : ");
    // for ( i = 0; i < n; i++)
    // {
    //     scanf("%d",&at[i]);
    // }

     printf("enter the brust time : ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&bt[i]);
    }

    for ( j = 0; j <n-1; i++)
    {
        for ( i = 0; i < n-1-j; i++)
        {  
            temp=id[i];
            id[i]=id[i+1];
            id[i+1]=temp;


            temp = bt[i];
            bt[i]=bt[i+1];
            bt[i+1]=temp;

        }

        
    }
    gc[0]=0;
    printf("\nprocess\t arrival time\t brust time\t waiting time\t tran arround tiem\n");
    for ( i = 0; i < n; i++)
    {
        wt[0]=0;tat[0]=0;
        gc[i+1]=gc[i]+bt[i];
        wt[i]=gc[i]-at[i];
        tat[i]=wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];

         printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,at[i],bt[i],wt[i],tat[i]);
    }

        printf("\n the avarege waiting time = %f",awt/n);
        printf("\n the avarage waiting  time = %f",atat/n);
        getche();
        


       
    

    
    
}