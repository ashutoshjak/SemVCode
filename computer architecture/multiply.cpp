#include<stdio.h>
#include<conio.h>

int a[4]={0,0,0,0},q[4],m[4],i,count=4,shbit[9],temp[9],s[4],c=0;
void add(int a[],int m[]);
void rshift();


int main()
{
	printf("Enter the valur for q\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&q[i]);
	}
	printf("Enter the valur for m\n");
	for(i=0;i<4;i++)
	{
		scanf("%d",&m[i]);
	}
	
	while(count>0)
	{
	   if(q[3]==1)
      {
       add(a,m);
       //printf
	   rshift();	
      }
  
       else
      {
  	    rshift();
      }
   
       count--;
   }

 
   printf("%d",c);
   
   for(i=0;i<4;i++)
   {
   	printf("%d",a[i]);
   }
   
   printf("\t");
   for(i=0;i<4;i++)
   {
   	printf("%d",q[i]);
   }
   
 
   
  getch();
  return 0; 	
	
}
void add(int a[],int m[])
{
	int k;
	//printf("Sum \n");
	for(k=3;k>=0;k--)
	{
		s[k]=(a[k]+m[k]+c)%2;
		c=(a[k]+m[k]+c)/2;
      //  printf("%d\t",s[k]);   
		
	} 
	for(i=0;i<4;i++)
	{
		a[k]=s[k];
	}
    
    //printf("\nCarry %d\n",c);			
}

void rshift()
{
	for(i=0;i<8;i++)
	{
		if(i<=4)
		{
			shbit[i]=a[i];
		}
		
		else
		{
			shbit[i]=q[i-1];
		}
	}
	
	for(i=0;i<=7;i++)
	{
       temp[i+1]=shbit[i];
	   shbit[i]=temp[i];    		
	}
     	shbit[i]=temp[i];
}

