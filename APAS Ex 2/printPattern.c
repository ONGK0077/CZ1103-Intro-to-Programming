#include <stdio.h>
int main()
{
   int row, col, height;
   int num = 0;
   printf("Enter the height: \n");
   scanf("%d", &height);
   printf("Pattern: \n");

   /* Write your program code here */
   int i;
    for (col=1;col<height+1;col++){
        num = col%3;
        if(num == 0){
            num = 3;
        }
        for (row=0;row<col;row++){
            printf("%d",num);
        }
        printf("\n");
    }
   return 0;
}
