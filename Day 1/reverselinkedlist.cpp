Link-https://practice.geeksforgeeks.org/problems/reverse-a-linked-list/1

Problem statement-Given a linked list of N nodes. The task is to reverse this list.

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
