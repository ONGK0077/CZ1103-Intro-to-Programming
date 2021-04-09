#include <stdio.h>
int main()
{
   int salary, merit;

   printf("Enter the salary: \n");
   scanf("%d", &salary);
   printf("Enter the merit: \n");
   scanf("%d", &merit);

   /* Write your program code here */
   char grade;

   if(salary >= 500 && salary <= 649){
       if(salary >= 600 && merit < 10){
           grade = 'C';
       }
       else if (salary >= 600 && merit >= 10){
           grade = 'B';
       }
       else{
           grade = 'C';
       }
   }
   else if (salary >= 600 && salary <= 799){
       if(salary >= 700 && merit < 20){
           grade = 'B';
       }
       else if (salary >= 700 && merit >= 20){
           grade = 'A';
       }
       else{
           grade = 'B';
       }
   }
   else if (salary >= 800){
       grade = 'A';
   }
   else{
       grade = 'F';
   }

   printf("The grade: %c\n",grade);
   return 0;
}
