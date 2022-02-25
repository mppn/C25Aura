#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    char name[20];
    short int marks;
}student1;
int main()
{
    student1.rollno=2;
    strcpy(student1.name,"hello");
    student1.marks=78;
    printf("%ld\n",sizeof(student1));
    printf("%ld\n",sizeof(student1.rollno));
    printf("%ld\n",sizeof(student1.name));
    printf("%ld\n",sizeof(student1.marks));
    return 0;
}
