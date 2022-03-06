void delallnodes()
{
    struct node*temp;
    while(head!=NULL)
    {
        temp=head;
        head=head->next;
        free(temp);
    }
    printf("all nodes deleted\n");
}
