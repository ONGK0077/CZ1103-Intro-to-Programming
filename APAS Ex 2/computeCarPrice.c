#include <stdio.h>
int main()
{
   int list, coe = 0, cat;
   double discounted, luxury = 0, gst, total;

   printf("Please enter the list price: \n");
   scanf("%d", &list);
   printf("Please enter the category: \n");
   scanf("%d", &cat);

   /* Write your program code here */
   discounted = list * 0.9;
   gst = discounted * 0.03;

   if (discounted > 100000){
       luxury = discounted * 0.1;
   }

   if (cat == 1){
       total = 70000 + discounted + gst + luxury;
   }
   else if (cat == 2){
       total = 80000 + discounted + gst + luxury;
   }
   else if (cat == 3){
       total = 23000 + discounted + gst + luxury;
   }
   else if (cat == 4){
       total = 600 + discounted + gst + luxury;
   }

   printf("Total price is $%.2lf\n", total);
   return 0;
}
