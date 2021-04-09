#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);
int main()
{
   int number, digit, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("Enter the digit: \n");
   scanf("%d", &digit);
   printf("digitPos1(): %d\n", digitPos1(number, digit));
   digitPos2(number, digit, &result);
   printf("digitPos2(): %d\n", result);
   return 0;
}
int digitPos1(int num, int digit)
{
   /* Write your program code here */
   int count,lastDigit;
   count = 0;
   while (1){
       lastDigit = num % 10;
       num = num / 10;
       count++;
       if (lastDigit == digit){
           return count;
       }
       else if (num == 0){
           return 0;
       }
   }
}
void digitPos2(int num, int digit, int *result)
{
   /* Write your program code here */
   int lastDigit;
   while (1){
       lastDigit = num % 10;
       num = num / 10;
       (*result)++;
       if (lastDigit == digit){
           break;
       }
       else if (num == 0){
           *result = 0;
           break;
       }
   }
}
