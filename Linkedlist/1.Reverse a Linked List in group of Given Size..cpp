class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *pre=NULL;
        node *curr=head;
        node *next;
        int count =0;
        while(curr!=NULL && count<k){
            next=curr->next;
            curr->next=pre;
            pre=curr;
            curr=next;
            count++;
        }
        if(next!=NULL){
            head->next=reverse(next,k);
        }
        return pre;
        
    }
};

