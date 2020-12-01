#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int at[5],bt[5],ct[5],tat[5],wt[5],p[5],temp,pos,pr[20],total=0;

int main()    //premetive priority scheduling
{
	int i,n,j;
	
    printf("Enter the no of terms\n");
	scanf("%d",&n);
	
	
	
	printf("Enter value for at\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&at[i]);
	}
	
	printf("Enter value for bt\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&bt[i]);
	}
     
    printf("Enter value for priority\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&pr[i]);
	} 
	
	p[i]=i+1;
	
	for(i=0;i<n;i++)
	{
	   pos=i;
	   
	    for(j=i+1;j<n;j++)
		{
	       if(pr[j]<pr[pos])
		     {
		       pos=j; 	
			 }		
		}
		
		temp=pr[i];
		pr[i]=pr[pos];
		pr[pos]=temp;
		temp=bt[i];
		bt[i]=bt[pos];
		bt[pos]=temp;
		temp=p[i];
		p[i]=p[pos];
		p[pos]=temp;
	}
      wt[0]=0;
      
      for(i=0;i<n;i++)
      {
      	wt[i]=0;
      	for(j=0;j<i;j++)
      	  wt[i]+=bt[j];
      	  
      	  total+=wt[i];
	  }
	  
     int avgwt=total/n;
     
     total = 0 ;
     
	 printf("\n BT \t WT \t TAT\n");
	 
	 for(i=0;i<n;i++)
     {
     	tat[i]=bt[i]+wt[i];
     	
     	total+=tat[i];
     	
     	printf("%d\t %d\t %d\n",bt[i],wt[i],tat[i]);
	 }
     
     int avgtat=total/n;
	  
   printf("Avg WT : %d\n",avgwt);
   printf("Avg TAT : %d",avgtat);
   
   getch();
   return 0;

}


