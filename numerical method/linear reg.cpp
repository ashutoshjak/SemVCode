#include<stdio.h>
#include<conio.h>

int main()
{
    float x[100],y[100],a,xs[100],ys[100],mul[100];
    int n,i;
    printf("\t\t\t\t\t\tUSING Linear Regression\n");
    printf("\t\t\t\t\t\t-----------------------\n");
	printf("\n\n Enter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\n Enter the respective values of the variables x and  y : \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    float sx=0,sy=0,mu=0,xss=0,yss=0;
	for(i=0;i<n;i++)
	{
		
		mul[i]=x[i]*y[i];
		
        xs[i]=x[i]*x[i];
		
		ys[i]=y[i]*y[i];  	
		
	}
	
	
	printf("\n\n The table you entered is as follows :\n\n");
    printf("x\t\ty\t\txy\t\tx^2\t\ty^2\n");
	for(i=0; i<n; i++)
    {
        printf("%0.3f\t\t%0.3f\t\t%0.3f\t\t%0.3f\t\t%0.3f",x[i],y[i],mul[i],xs[i],ys[i]);
        printf("\n");
    }
   for(i=0;i<n;i++)
	{
		sx=sx+x[i];
		
		sy=sy+y[i];
		
		mu=mu+mul[i];
		
		xss=xss+xs[i];
		
		yss=yss+ys[i];
    }
   
   printf("Ex=%0.3f\tEy=%0.3f\tExy=%0.3f\tEx^2=%0.3f\tEy^2=%0.3f",sx,sy,mu,xss,yss);
  
   
   float a1,ao,b1,bo;
   a1=(n*mu-sx*sy)/(n*xss-sx*sx);
   ao=(xss*sy-mu*sx)/(n*xss-sx*sx);
   
   b1=(n*mu-sx*sy)/(n*yss-sy*sy);
   bo=(yss*sx-mu*sy)/(n*yss-sy*sy);

   printf("\n\ny=%0.3f*x+%0.3f",a1,ao);
   
   printf("\n\nx=%0.3f*y+%0.3f",b1,bo);
   
   getch();
   return 0;
}
