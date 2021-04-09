#include <stdio.h>
int square1(int num);
void square2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("square1(): %d\n", square1(number));
   square2(number, &result);
   printf("square2(): %d\n", result);
   return 0;
}
int square1(int num)
{
   /* Write your program code here */
   int result,i,oddValueInt;
   result = 0;
   oddValueInt = 1;

   for (i=0;i<num;i++){
       result += oddValueInt;
       oddValueInt += 2;
   }

   return result;

}
void square2(int num, int *result)
{
   /* Write your program code here */
   int i,oddValueInt;
   oddValueInt = 1;

   for (i=0;i<num;i++){
       (*result) += oddValueInt;
       oddValueInt += 2;
   }
}
