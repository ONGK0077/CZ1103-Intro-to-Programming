#include <stdio.h>
#include <ctype.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
   int number, result=0;

   printf("Enter the number: \n");
   scanf("%d", &number);
   printf("numDigits1(): %d\n", numDigits1(number));
   numDigits2(number, &result);
   printf("numDigits2(): %d\n", result);
   return 0;
}
int numDigits1(int num)
{
   /* Write your program code here */
    int result;
    result = 0;
    while (1){
        result++;
        num = num / 10;
        if (num == 0){
            return result;
        }
    }
}
void numDigits2(int num, int *result)
{
   /* Write your program code here */
   while (1){
        (*result)++;
        num = num / 10;
        if (num == 0){
            break;
        }
    }
}
