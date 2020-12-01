#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x)
{
	 
	return(x*x-4*x-10);
}
float f2(float x2)
{
	 
	return(10/(x2-4));
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
	
    float xo,x1,error;
	printf("\nEnter vlaue for xo from interation table\n");
	scanf("%f",&xo);
	printf("\nThe iterartion table:\n");
    
	printf("\ni\txo\tx1\t\terror\n");
	
	x1=f2(xo);
	error=fabs(x1-xo);
	
	int j=1;
	
   do
	{
		x1=f2(xo);
		error=fabs(x1-xo);
	    printf("\n%d\t%.4f\t%.4f\t\t%.9f\n",j,xo,x1,error);
        
        xo=x1;
        j++;
   }while(error>=0.000001);
	
	printf("\n\tThe real root is--->  %.4f",x1);
getch();
return 0;
}

