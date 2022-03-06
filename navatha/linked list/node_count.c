#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node* next;
};
struct node* head=NULL;
int main()
{
    head = NULL;
    add_node(10);
    add_node(20);
    add_node(30);
    add_node(40);
    dump_list();
}

int add_node(int data)
{
     struct node* t=(struct node*)malloc(sizeof(struct node));
     t->data=data;
     t->next=head;
     head=t;
 }
 
void dump_list()
{
    struct node* t=head;
    int count=0;
    for(t=head;t!=NULL;t=t->next)
        {
            printf("Data = %d\n", t->data); 
            count++; 
        }
    printf("\nTotal no. of nodes is %d\n",count);
    
}
