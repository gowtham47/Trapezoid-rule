#include <stdio.h>
#include<math.h>
#define f(x) (x*x)
int main()
{
    int i,n;
    float a,b,deltax,T=0,f=0;
    printf("\n\nEnter the number of terms n:");
    scanf("%d" ,&n);
    printf("enter the upper limit:");
    scanf("%f" ,&b);
    printf("enter the lower limit:");
    scanf("%f" ,&a);
    deltax = (b-a)/n;
    printf("vaule for delatax: %f",deltax); 
    f = f + f(b)+f(a);
    
    for(i=(a+deltax); i<=b; i++)
    {
        f = f + 2*f(i); 
    }
    printf("\n\n%f",f);
    T = deltax*(T+f);  
    printf("\n\nThe Trapezoidal Rule formula for area approximating the definite integral: %f",T);
    return 0;
}
