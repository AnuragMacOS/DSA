#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }

    Node(int val, Node* nextNode) {
        data = val;
        next = nextNode;
    }
};

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

void print(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

Node* insertBeforeValue(Node* head,int el,int val){
    if(head == NULL){
       return NULL;
    }
    if(head->data==val){
        return new Node(el,head);
    }

    Node* temp=head;
    while(temp->next!=NULL){
    
        if(temp->next->data==val){
            Node *x=new Node(el,temp->next);
            temp->next=x;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convert2LL(arr);
    head = insertBeforeValue(head, 100,5);
    print(head);
    return 0;
}
