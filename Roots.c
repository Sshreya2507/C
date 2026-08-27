#include<stdio.h>
#include<math.h>

int main()
{
    float a,b,c,D,x,y;
    printf("Enter the value of a,b,c\n");
    scanf("%f %f %f", &a, &b, &c);

    D=sqrt(pow(b,2)-4*a*c);
    x=(-b+D)/2*a;
    y=(-b-D)/2*a;

    printf("The roots of the equation are : %.2f and %.2f\n", x, y);
    
    return 0;
}