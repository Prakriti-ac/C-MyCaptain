#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[30];
    char number[10];
    char department[30];
    int salary;
 
} Emp;
 
int main()
{
    int i,n=20;
    Emp emps[n];
    printf("Enter %d Employee Details \n \n",n);
    for(i=0; i<n; i++)
    {
        printf("Employee %d:- \n",i+1);
        printf("Name: ");
        scanf("%s",emps[i].name);
        printf("Contact Number: ");
        scanf("%s",emps[i].number);
        printf("Department: ");
        scanf("%s",emps[i].department);
        printf("Salary: ");
        scanf("%d",&emps[i].salary);
 
        printf("\n");
    }

 
    printf("---------------------------- --------------\n");
 
    for(i=0; i<n; i++)
    {
      printf("Name \t: ");
      printf("%s \n",emps[i].name);
      printf("Number \t: ");
      printf("%s \n",emps[i].number);
      printf("Department \t: ");
      printf("%s \n",emps[i].department);
        printf("Salary \t: ");
        printf("%d \n",emps[i].salary);
 
        printf("\n");
    }
 
    return 0;
 
}
