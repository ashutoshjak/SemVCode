#include<stdio.h>
#include<conio.h>
#include<math.h>

float x[10],xx,x1,x2,fx2,fx1,fx;
float y[10];
	
int n;
/*void fun()
{
	
}
*/

int main()
{
	
	printf("Enter no of data points\n");
    scanf("%d",&n);
	
	printf("\nEnter the valuer for x\n");
	for(int i=0;i<n;i++)
	{
		scanf("%f",&x[i]);
	}
	
	printf("\nEnter the valuer for y or f(x)\n");
	for(int j=0;j<n;j++)
	{
		scanf("%f",&y[j]);
	}
	
	printf("\nx\t\tf(x)\n");
    for(int k=0;k<n;k++)
	{
	    printf("%f\t%.4f\n",x[k],y[k]);
	}

    printf("\nEnter the value for x,x1,x2,fx1,fx2\n");
	scanf("%f%f%f%f%F",&xx,&x1,&x2,&fx1,&fx2);
	
	fx=fx1+(xx-x1)*((fx2-fx1)/(x2-x1));
	printf("\nThe required value is --->%.4f",fx);
     	
   	
	getch();
	return 0;
}
