#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	 
	return(x*sin(x)+cos(x));
}
float f2(float x2)
{
	 
	return(sin(x2)+x2*cos(x2)-sin(x2));
}

float f3(float x3)
{
	 
	return(x3*exp(x3)-cos(x3));
}
float f4(float x4)
{
	 
	return(exp(x4)+x4*exp(x4)+sin(x4));
} 

float f5(float x5)
{
	 
	return(x5*x5*x5-3*x5+5);
}
float f6(float x6)
{
	 
	return(3*x6*x6-3);
}

float f7(float x7)
{
	 
	return(log10(x7)-cos(x7));
}
float f8(float x8)
{
	 
	return((1/x8)+sin(x8));
}


int main()
{
	float start,end;
	printf("Enter start and end value\n");
    scanf("%f%f",&start,&end);
	printf("\nx\tf(x)\n");
    
    for(int i=start;i<=end;i++)
	{
	
		printf("%d\t%.4f\n",i,f5(i));
	}
	
	float xo,x1,fxo,fdxo,error;
	printf("\nEnter vlaue for xo from interation table\n");
	scanf("%f",&xo);
	printf("\nThe iterartion table:\n");
    
	printf("\ni\txo\tf(xo)\tf'(xo)\tx1\t\terror\n");
	error=fabs(x1-xo);
	
	int j=1;
	do
	{
		
		fxo=f5(xo);
		fdxo=f6(xo);
		x1=xo-(fxo/fdxo);
		error=fabs(x1-xo);
	    printf("\n%d\t%.4f\t%.4f\t%.4f\t%.4f\t\t%.9f\n",j,xo,fxo,fdxo,x1,error);
        
        xo=x1;
        j++;
   }while(error>=0.000001);
	
	printf("\n\tThe real root is--->  %.4f",x1);
getch();
return 0;
}

