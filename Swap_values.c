#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Swap the values of a and b using c\n");
    scanf("%d %d", &a, &b);
    c=a;
    a=b;
    b=c;
    printf("Value of a=%d, b=%d", a, b);

    return 0;
}