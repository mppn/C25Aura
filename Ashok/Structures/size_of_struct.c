
#include <stdio.h>
 struct s1
    {
        int regno;
        char name;
        short age;
        
    }s1;
    struct emp
    {
        int emp_id;
        char name[10];
        short age;
        char gender;
        
    }e1;
    
    struct emp_sal
    {
        double salary;
        float deduction;
        
        
    }es1;
int main()
{
   
   
    printf("\n ------student-------\n");
    printf("%ld\n",sizeof(s1));
    printf("%ld\n",sizeof(s1.regno));
    printf("%ld\n",sizeof(s1.name));
    printf("%ld\n",sizeof(s1.age));
    
    printf("\n -------employee--------\n");
    printf("%ld\n",sizeof(e1));
    printf("%ld\n",sizeof(e1.emp_id));
    printf("%ld\n",sizeof(e1.name));
    printf("%ld\n",sizeof(e1.age));
    printf("%ld\n",sizeof(e1.gender));
    
    printf("\n -------employee ** salary--------\n");
    printf("%ld\n",sizeof(es1));
    printf("%ld\n",sizeof(es1.salary));
    printf("%ld\n",sizeof(es1.deduction));

    return 0;
}
