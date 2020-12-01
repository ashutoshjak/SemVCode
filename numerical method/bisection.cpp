#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	 
	return((x*x)-(4*x)-10);
}
float f2(float x2)
{
	 
	return(x2*log10(x2)-1.2);
}
float f3(float x3)
{
	 
	return(x3*exp(x3)-cos(x3));
}
int main()
{
    //float fu;
    //float xu;
	float start,end;
	printf("Enter start and end value\n");
    scanf("%f%f",&start,&end);
	printf("\nx\tf(x)\n");
    
    for(int i=start;i<=end;i++)
	{
	
		//fu=f(i);
		printf("%d\t%.4f\n",i,f3(i));
	}
	
	float x1,x2,xm,fx1,fxm,mul,error;
	printf("\nEnter vlaue for x1 and x2 from interation table\n");
	scanf("%f%f",&x1,&x2);
	printf("\nThe iterartion table:\n");
	printf("\ni\tx1\tx2\txm\tf(x1)\tf(xm)\tf(x1)*f(xm)\terror\n");
	error=fabs(x2-x1);
	int j=1;
	do
	{
		
		xm=(x1+x2)/2;
		fx1=f3(x1);
		fxm=f3(xm);
		mul=fx1*fxm;
		error=fabs(x2-x1);
		
		printf("\n%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t\t%.4f\n",j,x1,x2,xm,fx1,fxm,mul,error);

		if(mul<0)
		{
			x2=xm;
		}
		else
		    x1=xm;
	 
	 	j++; 
	}while(error>=0.001);
	 printf("\n\tThe real root is ---> %.4f",xm);
	return 0;
	getch();
}

