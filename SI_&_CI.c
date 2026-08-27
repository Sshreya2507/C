#include<stdio.h>
#include<math.h>

int main ()
{
    float P,R,T,S,C;
    printf("Enter the value of P,R,T\n");
    scanf("%f %f %f", &P,&R,&T);

    S=(P*R*T)/100;
    printf("Simple interest = %.2f\n", S);

    C=P*pow((1+ R/100),T)-P;
    printf("Compound interest = %.2f\n", C);

    return 0;
}