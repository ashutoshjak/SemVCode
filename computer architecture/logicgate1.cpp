#include<stdio.h>
#include<conio.h>
#include<math.h>
int And(int a, int b);
int Or(int a, int b);
int Not(int a);
int main()
{
	int x,y,z,ad,orr,no;
	printf("Enter value of x and y\n");
	scanf("%d",&x);
	scanf("%d",&y);
	
	
	And(x,y);
	Or(x,y);
	Not(x);  
	  
	
	getch();
	return 0;
	  
}

int And(int a, int b)
{
	int z;
	printf("For and\n");
	if(a==1&&b==1)
	  printf("z=1\n");
	else
	  printf("z=0\n");
	return(z);
}

int Or(int a, int b)
{
	int z;
	printf("For or\n");
	if(a==0&&b==0)
	  printf("z=0\n");
	else
	  printf("z=1\n");
	  
	  return(z);
	
}

int Not(int a)
{
	int z;
	printf("For not\n");

	if(a==0)
	  printf("z=1");
	else
	  printf("z=0");
	
	return(z);
}
