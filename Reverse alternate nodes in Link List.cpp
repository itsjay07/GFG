class Solution {
public:
    void rearrange(Node* odd) {
        if(!odd || !odd->next){
            return;
        }
        Node* a =odd;
        Node* b =odd->next;
        Node* c =a, *d = b;

        while(d && d->next)
        {
            c->next = c->next->next;
            c = c->next;
            d->next = d->next->next;
            d = d->next;
        }
        c->next = nullptr;
        d->next = nullptr;
        c->next = reverse(b);
    }
    Node* reverse(Node* head){
        Node* prev = nullptr;
        while(head) {
            Node* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
         return prev;
    }
};
