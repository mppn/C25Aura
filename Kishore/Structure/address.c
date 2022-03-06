#include <stdio.h>
#include <string.h>
struct employee
{
    int empid;
    int age;
    char name[5];
    char gender[5];
    float sal;
     
}emp1;
int main()
{
    emp1.empid=102;
    emp1.age=27;
    strcpy(emp1.name,"amith");
    strcpy(emp1.gender,"male");
    emp1.sal=15000;
    printf("%p\n",&emp1.empid);
    printf("%p\n",&emp1.name);
    printf("%p\n",&emp1.gender);
    printf("%p\n",&emp1.age);
    printf("%p\n",&emp1.sal);
    
    return 0;
}
