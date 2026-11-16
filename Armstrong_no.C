#include<stdio.h>
int main ()
{
    int num, power, digit, sum=0, temp, count, n;

    printf("Armstrong numbers are: \n");
        for(num=1; num<=10; num++)
        {
            temp=num;
            n=0;

            while(temp>0)
            {
                n++;
                temp=temp/10;
            }
            temp=num;
            sum=0;
            while(temp>0)
            {
                digit= temp%10;
                power=1;
                for(count=1; count<=n; count++)
                {
                    power=power*digit;
                }
                sum= sum+power;
                temp= temp/10;
            }
            if(sum=num)
            {
                printf("%d is armstrong number \n", num);
            }
        }
        return 0;
}