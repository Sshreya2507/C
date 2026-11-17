#include <stdio.h>
int factorial(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}
int recursiveFact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    else
        return n * recursiveFact(n - 1);
}
int main()
{
    int n;
    printf("enter a number\n");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("not defined");
    }
    else
    {
        printf("Factorial (normal function) = %d\n", factorial(n));
        printf("Factorial (recursive function) = %d", recursiveFact(n));
    }
    return 0;
}