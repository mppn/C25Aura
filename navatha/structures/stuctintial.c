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
    printf("%d\n",student1.rollno);
    printf("%s\n",student1.name);
    printf("%d\n",student1.marks);
    return 0;
}
