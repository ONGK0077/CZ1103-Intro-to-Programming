#include <stdio.h>
#include <string.h>
struct student{
   char name[20]; /* student name */
   double testScore; /* test score */
   double examScore; /* exam score */
   double total;  /* total = (testScore+examScore)/2 */
};
double average(struct student *studentRecords, int i);
int main()
{
    int i=0;
    char *p;
    struct student studentRecords[50];

    printf("Enter student name:\n");
    fgets(studentRecords[i].name,80,stdin);
    if (p=strchr(studentRecords[i].name,'\n')){
        *p = '\0';
    }

    while(1){
        if (strcmp(studentRecords[i].name,"END")==0){
            break;
        }
        else{
            printf("Enter test score:\n");
            scanf("%lf",&studentRecords[i].testScore);
            printf("Enter exam score:\n");
            scanf("%lf",&studentRecords[i].examScore);

            studentRecords[i].total = (studentRecords[i].testScore+studentRecords[i].examScore)/2;
            printf("Student %s total = %.2lf\n",studentRecords[i].name,studentRecords[i].total);
            i+=1;

            printf("Enter student name:\n");
            scanf("\n");
            fgets(studentRecords[i].name,80,stdin);
            if (p=strchr(studentRecords[i].name,'\n')){
                *p = '\0';
            }
        }
    }

    printf("average(): %.2f\n", average(studentRecords,i));
    return 0;
}
double average(struct student *studentRecords, int i)
{
   /* Write your program code here */
   int j = 0;
   double totalNo = 0;

   if (i==0){
       return 0.00;
   }
   else{
        for(j=0;j<i;j++){
            totalNo  += studentRecords[j].total;
        }
        return (totalNo/i);
   }

}
