struct node *search(struct node *head, int key)
{
    struct node *p;

    p = head -> next;
    while(p != NULL)
    {
       if(p -> data == key)
       {
          return p;
       }
       else
      {
          p = p -> next;
      }

    }
    return NULL;  //�����˳����򷵻�NULL��
}
