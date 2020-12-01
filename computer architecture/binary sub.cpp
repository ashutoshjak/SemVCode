#include<stdio.h>
#include<conio.h>
int s[4],c=0;
int a[4],b[4];
void add(int [],int []);
void comp(int []);
int main()
{
	
	printf("Enter the value for a\n");
	for(int i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Enter the value for b\n");
	for(int j=0;j<4;j++)
	{
		scanf("%d",&b[j]);
	}
	
	printf("The result is\n");

	comp(b);
	printf("\n two comp\n");
	for(int l=0;l<4;l++)
	printf("%d",b[l]);
	
	printf("\n");
	add(a,b);
			if(c==1)
		for(int f=0;f<4;f++)
		{
		  printf("%d\t",s[f]);
	    }
	    else
	     printf("-");
		 comp(b);
		 for(int p=0;p<4;p++)
		 {
	     	printf("%d\t",b[p]);
		 }
	     
	
	
		
	getch();
	return 0;

}

void add(int u[],int v[])
{
	int k;c=0;
	//printf("Subract \n");
	for(k=3;k>=0;k--)
	{
		s[k]=(u[k]+v[k]+c)%2;
		c=(u[k]+v[k]+c)/2;
		b[k]=s[k];
    }
    
    
    //printf("\nCarry %d\n",c);			
}

void comp(int x[])
{
	int one[4]={0,0,0,1};
	for(int i=0;i<4;i++)
	{
		x[i]=1-x[i];
    }
    
	add(x,one);    
}



