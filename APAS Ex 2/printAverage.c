#include <stdio.h>
int main()
{
   int total, count, lines, input;
   double average;
   int i;

   printf("Enter number of lines: \n");
   scanf("%d", &lines);

   /* Write your program code here */
    count = 0;
    total = 0;

    for (i=0;i<lines;i++){
        printf("Enter line %d (end with -1):\n",(i+1));
        scanf("%d",&input);
        while (input != -1){
            total = total + input;
            count+=1;
            scanf("%d",&input);
        }
        average = (double)total/(double)count;
        printf("Average = %.2f\n",average);
    }
   return 0;
}
