#include <stdio.h>
char *stringncpy(char *s1, char *s2, int n);
int main()
{
   char sourceStr[40], targetStr[40], *target;
   int length;
   printf("Enter the string: \n");
   gets(sourceStr);
   printf("Enter the number of characters: \n");
   scanf("%d", &length);
   target = stringncpy(targetStr, sourceStr, length);
   printf("stringncpy(): %s\n", target);
   return 0;
}
char *stringncpy(char *s1, char *s2, int n)
{
   /* Write your program code here */
    int k, h;

    for (k = 0; k < n; k++)   {
        if (s2[k] != '\0')
        s1[k] = s2[k];
        else
            break;
   }
   s1[k] = '\0';
   for (h = k; h < n; h++)
      s1[h] = '\0';
   return s1;
}
