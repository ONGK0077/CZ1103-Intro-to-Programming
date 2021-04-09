#include <stdio.h>
int main()
{
   /* insert variable declarations here */
   int mark,studentNumber;
   char grade;

   printf("Enter Student ID: \n");
   scanf("%d", &studentNumber);
   while (studentNumber != -1)
   {
   	/* Write your program code here */
    printf("Enter Mark:\n");
    scanf("%d",&mark);
    switch(mark){
        case 75 ... 100:
            grade = 'A';
            break;
        case 65 ... 74:
            grade = 'B';
            break;
        case 55 ... 64:
            grade = 'C';
            break;
        case 45 ... 54:
            grade = 'D';
            break;
        case 0 ... 44:
            grade = 'F';
            break;
    }
    printf("Grade = %c\n",grade);
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);
   }
   return 0;
}
