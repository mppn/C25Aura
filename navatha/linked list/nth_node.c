int search(int element, struct node *head, int index)
{
    if (head==NULL)               
        return -1;
    else if (head->data==element)   
        return index;
    else                                
        return search(element, head->next, index+1);
}