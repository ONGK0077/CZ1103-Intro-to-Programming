#include <stdio.h>
int main()
{
   int n, denominator = 1;
   float x, result = 1.0, numerator = 1.0;

   printf("Enter x: \n");
   scanf("%f", &x);

   /* Write your program code here */
    for(n=1;n<11;n++){
        denominator = denominator * n;
        numerator = numerator * x;
        result = result + (numerator/denominator);
    }

   printf("Result = %.2f\n",  result);
   return 0;
}
