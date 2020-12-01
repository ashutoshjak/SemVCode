#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int at[5],bt[5],ct[5],tat[5],wt[5];

int main()    //FCFS
{
	int i,n;
	
    printf("Enter the no of terms\n");
	scanf("%d",&n);
	
	printf("Enter five value for at\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	
	printf("Enter five value for bt\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
	int a =0;
   printf("\n Tabular form\n");
   
   for(i=0;i<n;i++)
   {
   	   
	   ct[i]=a+bt[i];
	   
	   a=ct[i];
	   
	   tat[i]=ct[i]-at[i];
	   
	   wt[i]=tat[i]-bt[i];
	   
   }
   
   printf("\n|  AT\t|  BT\t|  CT\t|  TAT\t|  WT\t|\n");
   for(int i=0; i<n;i++)
   {
     printf("|  %d\t|  %d\t|  %d\t|  %d\t|  %d\t|\n",at[i],bt[i],ct[i],tat[i],wt[i]);
   }
   
getch();
return 0;	
}
