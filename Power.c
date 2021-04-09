#include <stdio.h>
int main()
{
   /* Write your program code here */
   double current, resistance, power;

   printf("Enter the current:\n");
   scanf("%lf",&current);
   printf("Enter the resistance:\n");
   scanf("%lf",&resistance);

   power = (current*current)*(resistance);

   printf("The power loss: %.2f",power);

   return 0;
}
