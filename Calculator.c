#include<stdio.h>
#include<math.h>

int main()
{
   float a,b,c,d,e,f;
   printf("Enter the value of a and b\n");
   scanf("%f %f",&a, &b);

   c=a+b;
   printf("Addition of a and b = %.2f\n", c);

   d=a-b;
   printf("Subtraction of b from a = %.2f\n", d);

   e=a*b;
   printf("Multiplication of a and b = %.2f\n", e);

   f=a/b;
   printf("Division of a by b = %.2f\n", f);

   return 0;
}