#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	return(x*x*x-3*x+5);
}
int main()
{
	float start,end;
	printf("Enter start and end value\n");
    scanf("%f%f",&start,&end);
	printf("\nx\tf(x)\n");
    
    for(int i=start;i<=end;i++)
	{
	
		printf("%d\t%.4f\n",i,f(i));
	}
	
	float x1,x2,fx1,fx2,xo,fxo,mul,error;
	printf("\nEnter vlaue for x1 and x2 from interation table\n");
	scanf("%f%f",&x1,&x2);
	
	printf("\n Iterartion table:\n");
	printf("\ni\tx1\tx2\tf(x1)\t\tf(x2)\txo\tf(xo)\tf(xo)*f(x1)\terror\n");
	error=fabs(x2-x1);
	
	int j=1;
	do
	{
		fx1=f(x1);
		fx2=f(x2);
		xo=((x1*fx2-x2*fx1)/(fx2-fx1));
		fxo=f(xo);
		mul=fxo*fx1;
		error=fabs(x2-x1);
		
		printf("\n%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t\t%.4f\n",j,x1,x2,fx1,fx2,xo,fxo,mul,error);
		
		if(mul<0)
		{
			x2=xo;
		}
		
		else
	        x1=xo;
		
		j++;
	}while(error>=0.001);
	 printf("\n\tThe real root is ---> %.4f",xo);	
 getch();
 return 0;
}
