#include <stdio.h>
#include <string.h>
struct employee
{
    int emp_id;
    char name[20];
    float sal;
}emp1;
int main()
{
    emp1.emp_id=102;
    strcpy(emp1.name,"amith");
    emp1.sal=15000;
    printf("%d\n",emp1.rollno);
    printf("%s\n",emp1.name);
    printf("%f\n",emp1.marks);
    return 0;
}
