#include<stdio.h>
#include<conio.h>


int main()
{
    float x[100],y[100],a,s=1,t=1,k=0;
    int n,i,j,d=1;
    printf("\t\t\t\t\t\tUSING LAGRANGE INTERPOLATION\n");
    printf("\t\t\t\t\t\t----------------------------");
	printf("\n\n Enter the number of the terms of the table: ");
    scanf("%d",&n);
    printf("\n\n Enter the respective values of the variables x and f(x) or y : \n");
    for(i=0; i<n; i++)
    {
        scanf ("%f",&x[i]);
        scanf("%f",&y[i]);
    }
    printf("\n\n The table you entered is as follows :\n\n");
    printf("--------------------\n");
	printf("|x\t |  f(x)   |\n");
	printf("--------------------\n");
	for(i=0; i<n; i++)
    {
        printf("|%0.3f\t |  %0.3f  |",x[i],y[i]);
        printf("\n");
    }
    printf("--------------------\n");
	//while(d==1)
   // {
        printf(" \n Enter the value of the x to find the respective value of y\n");
        scanf("%f",&a);
        for(i=0; i<n; i++)
        {
            s=1;
            t=1;
            for(j=0; j<n; j++)
            {
                if(j!=i)
                {
                    s=s*(a-x[j]);
                    t=t*(x[i]-x[j]);
                }
            }
            k=k+((s/t)*y[i]);
        }
        printf("\n\n The respective value of the variable y is: %f",k);
        //printf("\n\n Do you want to continue?\n\n Press 1 to continue and any other key to exit");
        //scanf("%d",&d);
   // }
   getch();
   return 0;
}
