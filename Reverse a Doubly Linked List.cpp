class Solution
{
    public:
    Node* reverseDLL(Node * head)
    {
         if(head == NULL || head->next == NULL)
         {
            return head;
        }
        Node* temp = NULL;
        Node* curr = head;
        Node* forw = head;
        
        while(forw != NULL)
        {
            forw = curr->next;
            curr->next = temp;
            curr->prev = forw;
            temp = curr;
            curr = forw;
        }
        return temp;
    }
};