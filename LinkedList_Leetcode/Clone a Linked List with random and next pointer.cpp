class Solution {
public:

  void insertCopyInBetween(Node* head){
    Node* temp = head;
    while(temp!= NULL){
        Node* copyNode = new Node(temp->val);
        Node* nextElement = temp->next;
        copyNode->next = temp->next;
        temp->next = copyNode;
        temp= nextElement;
    }
  }
  void connectRandomPointer(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        Node* copyNode = temp->next;
        if(temp->random){
         copyNode->random =temp->random->next;
         }
         else copyNode->random = NULL;
         temp= temp->next->next;
    }
  }
  Node* getDeepCopyList(Node* head){
    Node * dNode = new Node(-1);
    Node* res = dNode;
    Node* temp = head;
    while(temp!=NULL){
        res->next = temp->next;
        temp->next = temp->next->next;
        res = res->next;
        temp = temp->next;
    }
    return dNode->next;
  }
 Node* copyRandomList(Node* head) {
        insertCopyInBetween(head);
        connectRandomPointer(head);
        return getDeepCopyList(head);
    }
};