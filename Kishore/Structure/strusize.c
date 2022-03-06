#include <stdio.h>
#include <string.h>
struct employee
{
    int empid;
    char name[20];
    float sal;
}emp1;
int main()
{
    emp1.empid=2;
    strcpy(emp1.name,"amith");
    emp1.sal=15000;
    printf("%ld\n",sizeof(emp1));
    printf("%ld\n",sizeof(emp1.empid));
    printf("%ld\n",sizeof(emp1.name));
    printf("%ld\n",sizeof(emp1.sal));
    return 0;
}
