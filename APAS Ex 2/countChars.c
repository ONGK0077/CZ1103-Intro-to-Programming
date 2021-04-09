#include <stdio.h>
#include <ctype.h>
int main()
{
   int ccount = 0, dcount = 0;
   char ch;
   printf("Enter your characters (# to end): \n");

   /* Write your program code here */
   scanf("%c",&ch);
   while (ch != '#'){
       if (isdigit(ch)){
           dcount++;
       }
       else if (isalpha(ch)){
           ccount++;
       }
       scanf("%c",&ch);
   }
   printf("The number of digits: %d\n", dcount);
   printf("The number of letters: %d\n", ccount);
   return 0;
}
