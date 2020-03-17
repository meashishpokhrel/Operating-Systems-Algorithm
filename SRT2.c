#include<stdio.h>
#include<conio.h>
# define max 30
void main()
{
 int at[max],bt[max],x[max];
 int wt[max],tat[max],completion[max];
 int i,j,smallest,count=0,time,n;
 float awt=0,atat=0,end;
 printf("\nEnter the number of Processes: ");
 scanf("%d",&n);

 for(i=0;i<n;i++)
 {
   printf("\nEnter arrival time and burst time of process %d :  ",i+1);
   scanf("%d",&at[i],&bt[i]);
 }

 for(i=0;i<n;i++)
 x[i]=bt[i];
 
  bt[9]=9999;

 for(time=0;count!=n;time++)
 {
   smallest=9;
  for(i=0;i<n;i++)
  {
   if(at[i]<=time && bt[i]<bt[smallest] && bt[i]>0 )
   smallest=i;
  }
  bt[smallest]--;

  if(bt[smallest]==0)
  {
   count++;
   end=time+1;
   completion[smallest] = end;
   wt[smallest] = end - at[smallest] - x[smallest];
   tat[smallest] = end - at[smallest];
  }
 }
 printf("pid \t burst \t arrival \twaiting \tturnaround \tcompletion");
 for(i=0;i<n;i++)
 {
   printf("\n %d \t   %d \t %d\t\t%d   \t\t%d\t\t%d",i+1,x[i],at[i],wt[i],tat[i],completion[i]);
   awt = awt + wt[i];
   atat = atat + tat[i];
 }
 awt = awt/n;
 atat = atat/n;
 printf("\n\nAverage waiting time = %lf\n",awt);
 printf("Average Turnaround time = %lf",atat);
 getch();
}