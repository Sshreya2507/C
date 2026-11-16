#include <stdio.h>
int main()
{
    int n, digit, sum, temp, count, power, j;

    printf("Armstrong numbers:\n");
    for (n = 1; n <= 100; n++)
    {
        temp = n;
        count = 0;

        while (temp > 0)
        {
            count++;
            temp = temp / 10;
        }
        temp=n;
        sum=0;
        while(temp>0)
        {
            digit=temp%10;
            power=1;
            for(j=1; j<=count; j++)
            {
                power=power*digit;
            }
            sum=sum+power;
            temp=temp/10;
        }
        if (sum == n)
        {
            printf("%d", n);
        }
    }
    return 0;
}