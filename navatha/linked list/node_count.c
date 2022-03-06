void dump_list()
{
    struct node* t=head;
    int count=0;
    for(t=head;t!=NULL;t=t->next)
        {
            printf("Data = %d\n", t->data); 
            count++; 
        }
}
