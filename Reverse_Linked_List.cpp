LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) 
{
    if(head==NULL || head->next==NULL) return head;
    LinkedListNode<int> *prev=NULL,*next=head,*curr=head;
    while(curr ){
     next=curr->next;
     curr->next=prev;
     prev=curr;
     curr=next;
    }
    return prev;
}
