Node* reverseList(Node *head)
{
 if(head==NULL){
     return NULL;
 }
 Node *current=head;
 Node *prev=NULL;
 while(current!=NULL){
     Node *next=current->next;
     current->next=prev;
     prev=current;
     current=next;
 }
 return prev;
}
