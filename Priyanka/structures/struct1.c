struct Student
{
    int id;
    short age;
    char name[5];
}student1;
int main()
{
    student1.id=2;
    student1.age=21;
    strcpy(student1.name,"priya");
    printf("%p\n",&student1.id);
    printf("%p\n",&student1.name);
    printf("%p\n",&student1.age);
    printf("%ld\n",sizeof(student1.id));
    printf("%ld\n",sizeof(student1.name));
    printf("%ld\n",sizeof(student1.age));
    return 0;
}
