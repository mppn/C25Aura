#include <stdio.h>
#include <string.h>
struct student
{
    int rollno;
    int age;
    char name[5];
    char gender[5];
    short int marks;
    short int internals;
}student1;
int main()
{
    student1.rollno=2;
    student1.age=21;
    strcpy(student1.name,"Hello");
    strcpy(student1.gender,"Female");
    student1.marks=78;
    student1.internals=18;
    printf("%p\n",&student1.rollno);
    printf("%p\n",&student1.name);
    printf("%p\n",&student1.gender);
    printf("%p\n",&student1.age);
    printf("%p\n",&student1.marks);
    printf("%p\n",&student1.internals);
    return 0;
}
