#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    float x[100],y[100],Y[100],a,xs[100],ys[100],mul[100];
    int n,i,j,d=1;
    printf("\t\t\t\t\t\tUSING Exponential Curve\n");
    printf("\t\t\t\t\t\t-----------------------\n");
	printf("\n\n Enter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\n Enter the respective values of the variables x and  y : \n");
    
	for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    
    for(i=0;i<n;i++)
    {
    	Y[i]=log10(y[i]);
	}
	
	float sx=0,sy=0,mu=0,xss=0,yss=0;
	for(i=0;i<n;i++)
	{
		//sx=sx+x[i];
		//c=x[i];
		
		//sy=sy+y[i];
		//d=y[i];
		
		mul[i]=x[i]*Y[i];
		
        xs[i]=x[i]*x[i];
		
		ys[i]=Y[i]*Y[i];  	
		
	}
	printf("\n\n The table you entered is as follows :\n\n");
    printf("x\t\ty\t\txy\t\tx2\t\ty2\n");
	for(i=0; i<n; i++)
    {
        printf("%0.3f\t\t%0.3f\t\t%0.3f\t\t%0.3f\t\t%0.3f",x[i],Y[i],mul[i],xs[i],ys[i]);
        printf("\n");
    }
    
    for(i=0;i<n;i++)
	{
		sx=sx+x[i];
		//c=x[i];
		
		sy=sy+Y[i];
		//d=y[i];
		
		mu=mu+mul[i];
		
		xss=xss+xs[i];
		
		yss=yss+ys[i];
    }
   
   printf("Ex=%0.3f\tEy=%0.3f\t\Exy=%0.3f\tEx2=%0.3f\tEy2=%0.3f",sx,sy,mu,xss,yss);
   
   float b,a1,ao;
   b=a1=(n*mu-sx*sy)/(n*xss-sx*sx);
   a=exp(ao=(xss*sy-mu*sx)/(n*xss-sx*sx));
   
   printf("\n\ny=%0.3f*e^%0.3f*x",a,b);
getch();
return 0;
}
