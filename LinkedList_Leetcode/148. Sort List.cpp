class Solution {
public:
    // Merge two sorted linked lists
    ListNode* mergeTwoSortedLinkedLists(ListNode* list1, ListNode* list2) {
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                temp->next = list1;
                list1 = list1->next;
            } else {
                temp->next = list2;
                list2 = list2->next;
            }
            temp = temp->next;
        }

        if (list1 != NULL) temp->next = list1;
        else temp->next = list2;

        return dummyNode->next;
    }

    // Find middle of the linked list
    ListNode* findMiddle(ListNode* head) {
        if (head ==NULL || head->next == NULL) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        return slow;
    }

    // Merge sort on linked list
    ListNode* sortList(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;

        ListNode* middle = findMiddle(head);
        ListNode* right = middle->next;
        middle->next = NULL;
        
        ListNode* leftSorted = sortList(head);
        ListNode* rightSorted = sortList(right);

        return mergeTwoSortedLinkedLists(leftSorted, rightSorted);
    }
};