#include<stdio.h>
#include<conio.h>
int s[4],c=0;
void add(int a[],int b[]);
int main()
{
	int a[4],b[4];
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

	add(a,b);
		
	getch();
	return 0;
}

void add(int a[],int b[])
{
	int k;
	printf("Sum \n");
	for(k=3;k>=0;k--)
	{
		s[k]=(a[k]+b[k]+c)%2;
		c=(a[k]+b[k]+c)/2;
        printf("%d\t",s[k]);
	}
    
    
    printf("\nCarry %d\n",c);			
}
