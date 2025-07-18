class Solution {
public:
    ListNode* findKthNode(ListNode* temp , int k){
        int cnt =1;
        while(temp!= NULL){
            if(cnt ==k) return temp;
            cnt++;
            temp = temp->next;
        }
        return temp;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0) return head;
        int len =1;
        ListNode* tail = head;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        if(k%len == 0) return head;
        k = k % len;
        tail->next = head;
        
        ListNode* newLastNode = findKthNode(head, len - k);
        head = newLastNode->next;
        newLastNode->next = NULL;
        return head;
    }
};