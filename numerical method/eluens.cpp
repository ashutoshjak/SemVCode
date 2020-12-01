#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x,float y)
{
	 
	return((2.0*y)/x);
}

int main()
{
	int i,it,xo[4],yo[4];
	float h=0.25;
	
	printf("Enter the number of iteration\n");
	scanf("%d",&it);
	
	xo[0]=1;
	yo[0]=2;
	
	
	//printf("Enter the value for xo and yo\n");
	//scanf("%d%d",&xo,&yo)
	printf("The value are\n");
	
	for(i=0;i<4;i++)
	{
		float m=f(xo[i],yo[i]);
		
		yo[i+1]=yo[i]+(h*m);
		
		xo[i+1]=xo[i]+h;
		
		//yo[i]=y[i];
		
		printf("%.4f\t",yo[i+1]);
	}
	
	
	getch();
	return 0;
	
}
