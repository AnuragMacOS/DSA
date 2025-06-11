#include <bits/stdc++.h>
using namespace std;

//structure of Node
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

// Fn to convert vector to Linked List
Node* convert2LL(const vector<int>& arr) {
    if (arr.empty()) return NULL;
    Node* head = new Node(arr[0]);
    Node* temp = head;
    for (int i = 1; i < arr.size(); ++i) {
        temp->next = new Node(arr[i]);
        temp = temp->next;
    }
    return head;
}

// Fn to print Linked List
void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* removeElement(Node* head,int el){
    if(head==NULL) return head;
    if(head->data==el){
        Node*temp=head;
        head=head->next;
        free (temp);
        return head;  
    }
    int cnt=0;
    Node* temp=head;
    Node* prev=NULL;
    while(temp!=NULL){
       if(temp->data=el){
          prev->next=prev->next->next;
          free (temp);
          break;
    }
      prev=temp;
      temp=temp->next;
   }
   return head;
 }
int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convert2LL(arr);
    head = removeElement(head,12);
    print(head);
    return 0;
}

