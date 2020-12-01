#include<stdio.h>
#include<conio.h>
#include<math.h>

float f(float x)
{
	 
	return(sin(x));
}

int main()
{
    float start,end,a,b=3.14/2.0,h,n,i1,i2,i3;
	printf("Enter the value for number of terms\n");
	scanf("%f",&n);
	printf("Enter the value for a \n");
	scanf("%f",&a);
	h=(b-a)/n;
          
	for(float i=a;i<=b;i=i+h)
	{
	
		printf("%f\t%.4f\n",i,f(i));
	}
    
    float fo,f1,f2,f3,f4,f5,f6;
	int f[7];
	printf("Enter the fo,f1,f2,f3,f4,f5,f6\n");
	scanf("%f%f%f%f%f%f%f",&fo,&f1,&f2,&f3,&f4,&f5,&f6);
	
	printf("\t\tTrapezoidal Rule\n");
	printf("\t\t---------------------\n\n");
	
	i1=((fo+f6)+2*(f1+f2+f3+f4+f5))*h/2;
	
	printf("The trapizodial rule value is  %f\t",i1);
	
	printf("\t\tSimpsons 1/3 Rule\n");
	printf("\t\t---------------------\n\n");
	
	i2=((fo+f6)+2*(f2+f4)+4*(f1+f3+f5))*h/3;
	
	printf("The simpsons 1/3 rule value is  %f\t",i2);
	
	i3=((fo+f6)+2*f3+3*(f1+f2+f4+f5))*3*h/8; 

getch();
return 0;	
}
