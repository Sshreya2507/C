#include<stdio.h>
int main()
{
    int i,n;
    int even=0, odd=0;
    
    printf("enter value of N\n");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        if (i%2==0) {
            even=even+i;
        }
        else {
            odd=odd+i;
        }
    }
    printf("sum of even numbers = %d\n", even);
    printf("sum of odd numbers = %d\n", odd);

    return 0;
}