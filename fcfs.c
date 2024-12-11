#include<stdio.h>
#include<conio.h>
#define max 30
void main(){
    int i,n  ,at[max],bt[max],wt[max],tat[max],temp[max];
    float awt=0, atat=0;
    printf("enter the process");
    scanf("%d",&n);

    printf("enter the arrival time :");
     for ( i = 0; i <n; i++)
     {
        scanf("%d",&at[i]);
     }
     
     printf("enter the brust time :");
     for ( i = 0; i <n; i++)
     {
        scanf("%d",&bt[i]);
     }

     temp[0]=0;
     printf("process\t arrival time\t burst time\t waiting time\t turn arround time ");
       for ( i = 0; i <n; i++)
       {
        wt[0]=0;
        tat[0]=0;
        temp[i+1]=temp[i]+bt[i];
        wt[i]=temp[i]-at[i];
        tat[i]= wt[i]+bt[i];
        awt=awt+wt[i];
        atat=atat+tat[i];

        printf("\n%d\t\t%d\t\t%d\t\t%d\t\t%d",i+1,at[i],bt[i],wt[i],tat[i]);

       }
       printf("avg wt = %f",awt/n);
       printf("avd tat = %f",atat/n);
       getche();
     
}