#include <stdio.h>
int main()
{
   /* Write your program code here */
    float distance,speed,time;

    printf("Enter distance (in km):\n");
    scanf("%f",&distance);
    printf("Enter time (in sec):\n");
    scanf("%f",&time);

    speed = distance/time;

    printf("The speed is %.2f km/sec\n",speed);
   return 0;
}
