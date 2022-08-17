#include <stdio.h>
#include<conio.h>
#include<math.h>
#define f(x) cos(x)-x*exp(x)

void main()
{
    float x0,x1,x2,f0,f1,f2,e;
    int step=1;
    up:
    
    printf("\n enter two intial guesses: \n");
    scanf("%f%f",&x0,&x1);
    printf("enter tolerable error; \n");
    scanf("%f",&e);
    f0=f(x0);
    f1=f(x1);
    if(f0*f1>0.0)
    { 
        printf("incorrect intial guess.\n");
        goto up;
        
    } 
    printf("\n step\t\tx1\t\tx2\t\tf(f2)\n");
    do
    {
        x2=(x0+x1)/2;
        f2=f(x2);
        if(f0*f2<0)
        {
            x1=x2;
            f1=f2;
        }
        else
        {
            x0=x2;
            f0=f2;
        }
        step=step+1;
    }    
    while(fabs(f2)>e);
    { 
        printf("\nroots is: %f",x2);
    }
    getch();
}
