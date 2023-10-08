class Solution{
  public:
    // Should return head of the modified linked list
    Node *sortedInsert(struct Node* head, int data) 
    {
     Node* n = new Node(data);

        if (head == nullptr || head->data >= data){
            n->next = head;
            return n;
        }

        Node* node = head;
        while (node->next != nullptr) 
        {
            if (node->data < data && node->next->data >= data) 
            {
                n->next = node->next;
                node->next = n;
                return head;
            }
            node = node->next;
        }
        node->next = n;

        return head;
    }
};
