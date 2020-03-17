#include<stdio.h>
#include<conio.h>
#define max 30
void main()
{

    int i,j,n,bt[max],b[max],wt[max],tat[max],count=0,time;
    float awt = 0, atat = 0;

    printf("Enter the number of process");
    scanf("%d",&n);
    for ( i = 0; i < n; i++)
    {
        printf("\n Enter the burst time of %d process",i+1);
        scanf("%d",&bt[i]);
        b[i] = bt[i];
    }
    
    for ( time = 0; count!=n; time++){
        while ( bt[i] == 0){
            i = (i+1)%n;
        }
        bt[i]--;
        if (bt[i]==0){
            tat[i] = time + 1;
            count++;
        }
        i = (i+1)%n;
    }

    printf("\n Process\t Burst time\t Waiting time\t Turnaround time");
    for ( i = 0; i < n; i++)
    {
       wt[i] = tat[i] - b[i];
       awt = awt + wt[i];
       atat = atat + tat[i];
       printf("%d\t\t %d\t\t %d\t\t %d",i+1,bt[i],wt[i],tat[i]);
    }

    awt = awt/n;
    atat = atat/n;
    
    printf(" \n Average waiting time is %f ", awt);
    printf("\n Average turnaround time is %f",atat);


}