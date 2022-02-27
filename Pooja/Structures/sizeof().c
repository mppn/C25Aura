#include <stdio.h>
#include <string.h>
struct employee
{
    
    char emp_name[5];
    char emp_gender[6];
    int emp_id;
    int emp_age;
    int  emp_salary;
    
}employee1;
int main()
{
    
    strcpy(employee1.emp_name,"Pooja");
    employee1.emp_id=5;
    strcpy(employee1.emp_gender,"Female");
    employee1.emp_age=23;
    employee1.emp_salary=78000;
    printf("%ld\n",sizeof(employee1));
    printf("%ld\n",sizeof(employee1.emp_name));
    printf("%ld\n",sizeof(employee1.emp_gender));
    printf("%ld\n",sizeof(employee1.emp_id));
    printf("%ld\n",sizeof(employee1.emp_age));
    printf("%ld\n",sizeof(employee1.emp_salary));
    
    
    //return 0;
}

/*************output************/
24
5
6
4
4
4
