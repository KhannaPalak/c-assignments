#include<stdio.h>
struct emp
{
    int empid;
    char empname;
    float empsalary;
    char empdepartment;
};


int main ()
{
    struct emp emp1[5];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Provide empid\n");
        scanf("%d",&emp1[i].empid);
        printf("Provide empname\n");
        scanf("%s",&emp1[i].empname);
        printf("provide empsalary\n");
        scanf("%f",&emp1[i].empsalary);
        printf("provide empdepartment\n");
        scanf("%s",&emp1[i].empdepartment);
    }
    return 0;
}