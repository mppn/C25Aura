
struct Student {
        int id;
        int age;
}s1;

int main()
{

    s1.id=25;
    s1.age=8;
    printf("%ld",sizeof(s1));
    printf("%ld",sizeof(s1.id));
    printf("%ld",sizeof(s1.age));
}
