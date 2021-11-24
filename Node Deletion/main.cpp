SinglyLinkedListNode* deleteNode(SinglyLinkedListNode* head, int position) {
SinglyLinkedListNode *p = head;
SinglyLinkedListNode *q;
int l=0;
if(position==0)
{
p=head->next;
head = p;
}
else{
while(p!=NULL && l<position)
{
    q=p;
    l++;
    p=p->next;
}
if(p==NULL)
{
    return head;
}
else
{
q->next=p->next;
}

}
return head;
}
