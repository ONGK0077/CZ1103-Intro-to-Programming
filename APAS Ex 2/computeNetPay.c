#include <stdio.h>
int main()
{
   int hours;
   float tax, grossPay, netPay;

   printf("Enter hours of work: \n");
   scanf("%d", &hours);

   /* Write your program code here */
   float basicPay,overtimePay;
   basicPay = 6.00;
   overtimePay = basicPay * 1.5;

   if (hours < 40){
       grossPay = basicPay * hours;
   }
   else {
       grossPay = (basicPay*40)+(overtimePay*(hours-40));
   }

   if (grossPay <= 1000){
       tax = grossPay * 0.10;
       netPay = grossPay - tax;
   }
   else if (grossPay <= 1500){
       tax = (1000 * 0.1) + ((grossPay - 1000) * 0.2);
       netPay = grossPay - tax;
   }
   else {
       tax = (1000 * 0.1) + (500 * 0.2) + ((grossPay - 1500) * 0.3);
       netPay = grossPay - tax;
   }

   printf("Gross pay = %.2f\n", grossPay);
   printf("Tax = %.2f\n", tax);
   printf("Net pay = %.2f\n", netPay);
   return 0;
}
