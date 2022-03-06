void dump_list()
{
    struct node* t=head;
    int count=0;
    for(t=head;t!=NULL;t=t->next)
        {
           count++; 
        }
    printf("\nTotal no. of nodes is %d\n",count);
}
