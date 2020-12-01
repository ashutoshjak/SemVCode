#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	 
	return(log10(x)-cos(x));
}
float f1(float x1)
{
	return(exp(-x1)-x1);
}
float f2(float x2)
{
	return(x2*exp(x2)-cos(x2));
}
float f3(float x3)
{
	return(x3*log10(x3)-1.2);    //1.2
}
int main()
{
	float start,end;
	printf("Enter start and end value\n");
    scanf("%f%f",&start,&end);
	printf("\nx\tf(x)\n");
    
    for(int i=start;i<=end;i++)
	{
	
		printf("%d\t%.4f\n",i,f3(i));
	}
	

    float xo,x1,x2,fxo,fx1,error;
	printf("\nEnter value for xo and x1 from interation table\n");
	scanf("%f%f",&xo,&x1);
	printf("\nThe iterartion table:\n");
    
	printf("\ni\txo\tx1\tf(xo)\tf(x1)\tx2\t\terror\n");
	/*fxo=f(xo);
	fx1=f(x1);
	x2=(xo*fx1-x1*fxo)/(fx1-fxo);
	error=fabs(x2-x1);*/
	
	int j=1;
	do
	{
		
		fxo=f3(xo);
		fx1=f3(x1);
		x2=(xo*fx1-x1*fxo)/(fx1-fxo);
		error=fabs(x2-x1);
	    printf("\n%d\t%.4f\t%.4f\t%.4f\t%.4f\t%.4f\t\t%.9f\n",j,xo,x1,fxo,fx1,x2,error);
        
        xo=x1;
        x1=x2;
        j++;
   }while(error>=0.000001);


printf("\n\tThe real root is--->  %.4f",x2);
float fu=f(x2);
printf("\n\tThe functional value is ---> %.4f",fu);
getch();
return 0;
}

