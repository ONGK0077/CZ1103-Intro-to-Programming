#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
   int ar[10];
   int size, i;

   printf("Enter array size: \n");
   scanf("%d", &size);
   printf("Enter %d data: \n", size);
   for (i=0; i <= size-1; i++)
      scanf("%d", &ar[i]);
   printReverse1(ar, size);
   printReverse2(ar, size);
   reverseAr1D(ar, size);
   printf("reverseAr1D(): ");
   if (size > 0) {
      for (i=0; i<size; i++)
         printf("%d ", ar[i]);
   }
   return 0;
}
void printReverse1(int ar[], int size)
{
   /* using index – Write your program code here */
   int i, oppSize;
   oppSize = size - 1;

   printf("printReverse1():");
   for (i=0;i<size;i++){
       printf(" %d",ar[oppSize]);
       oppSize--;
   }
   printf("\n");
}
void printReverse2(int ar[], int size)
{
	/* using pointer – Write your program code here */
	int i;

	printf("printReverse2():");
	for(i=size;i>0;i--){
	    printf(" %d",*(ar+(i-1)));
	}
	printf("\n");
}
void reverseAr1D(int ar[ ], int size)
{
   /* Write your program code here */
   int i,j,tmp;

   for(i=size;i>0;i--){
       for(j=0;j<(i-1);j++){
           tmp = ar[j];
           ar[j] = ar[j+1];
           ar[j+1]=tmp;
       }
   }
}
