#include<stdio.h>
#include<math.h>
#define pi 3.14

int main ()
{
    float r,A,C;
    printf("enter the value of radius\n");
    scanf("%f", &r);

    A=pi*pow(r,2);
    printf("area of circle = %.2f cm^2\n", A);
    
    C=2*pi*r;
    printf("circumference of circle = %.2f cm\n", C);

    return 0;
}