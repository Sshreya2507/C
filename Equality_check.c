#include<stdio.h>

int main ()
{
    float a,b;
    printf("Enter the two numbers to check their equality\n");
    scanf("%f %f",&a, &b);

    if (a==b) {
        printf("a and b are equal\n");
    } else {
        printf("a and b are not equal\n");
    }

    return 0;

}