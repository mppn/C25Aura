struct Student {
        int id;
        int age;
}s1;

int main()
{

    s1.id=15;
    s1.age=10;
    printf("%ld",sizeof(s1));
    printf("%ld",sizeof(s1.id));
    printf("%ld",sizeof(s1.age));
}
