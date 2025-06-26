class Solution {
public:
    void deleteNode(ListNode* node){ 

       ListNode* temp =node->next; //1

       node->val =temp->val; //5 becomes 1

       node->next= temp->next;//1 connected to 9

       delete temp;  // 4--1--9

    }
};