Link-https://practice.geeksforgeeks.org/problems/count-pairs-whose-sum-is-equal-to-x/1

Problem statement-Given two linked list of size N1 and N2 respectively of distinct elements, your task is to complete the function countPairs(), which returns the count of all pairs from both lists whose sum is equal to the given value X.

int countPairs(struct Node* head1, struct Node* head2, int x) {
    int count=0;
    unordered_set<int>s;
    while(head1!=NULL){
        s.insert({head1->data});
        head1=head1->next;
    }
    while(head2!=NULL){
        
            if(s.find(x-head2->data)!=s.end()){
                count++;
            }
            head2=head2->next;
        
    }
    return count;
}

