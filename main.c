#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
double x,y,dy,f,x1,k;
int n=0;
//x = x, y = f(x) function , dy = derivative of f(x), f = absolute (fabs) of |x1 - x0|,
 printf("Newton's Iterate method Calculator\n");

    printf("Enter x0 value : ");
    scanf("%g", &x);
    printf("\nEnter tolerance value : ");
    scanf("%g", &k);
    printf("\n");
//equation
do{
y= x* exp(x) - 2 ;
dy = (x + 1) * exp(x);//derivative of function y
x1 = x - y/dy;
f = fabs(x1 - x);
printf("%d\t%g\t%g\t%g\t%g\t%g\t%g\n",n,x,y,dy,y/dy,x1,f);
n = n + 1;
x = x1;
} while (f>k);
printf("\n \n YOUR ANSWER IS =  %g \n \n", x1);
}
