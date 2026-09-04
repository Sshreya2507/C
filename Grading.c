#include<stdio.h>

int main()
{
    float a,b,c,d,e,f;
    printf("Enter the marks of the five subjects\n");
    scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);

    f=(a+b+c+d+e)/5;
    printf("Percentage=%.2f\n", f);

    if (f>=90) {
        printf("Grade:A\n");
    }
    else if (f>=80) {
        printf("Grade:B\n");
    }
    else if (f>=70) {
        printf("Grade:C\n");
    }
    else if (f>=55) {
        printf("Grade:D\n");
    }
    else if (f>=33) {
        printf("Grade:E\n");
    }
    else {
        printf("Grade:F (Fail)\n");
    }

    return 0;
}