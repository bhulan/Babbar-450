class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // code here
        // just remove the loop without losing any nodes
        Node* slow= head;
       Node* fast = head;
       
       while( fast && fast->next )
       {
           slow=slow->next;
           fast=fast->next->next;
           if( !fast )
            return ;
            
            if(fast ==slow)
             break;   
       }
       if( !fast->next )
            return ;
       
       Node* temp=head, *temp1=head;
       int nodecount=1;
       while(slow->next != fast)
       {
         nodecount++;
         slow=slow->next;
       }
       while(nodecount-1)
        {
            temp=temp->next;
            nodecount--;
        }     
       while(temp1 != temp->next)
        {
            temp1=temp1->next;
            temp=temp->next;
        }
       temp->next=NULL;
       
    }
};
