#include<stdio.h>
#include<math.h>

int main()
{
    float C,F;
    printf("Enter the value of temperature in Celsius\n");
    scanf("%f", &C);

    F=(9.0/5.0)*C + 32;
    printf("Value of temperature in Fahrenheit = %.2f F\n",F);

    return 0;
}