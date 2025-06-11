//LL with 1 element-->delete that one element
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

Node* removeTail(Node* head){
    if(head==NULL || head->next==NULL) return NULL;
    Node* temp=head;
    while(temp->next->next !=NULL){
        temp=temp->next;
    }
    delete temp->next;
    temp->next=nullptr;

    return head;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convert2LL(arr);
    head = removeTail(head);
    print(head);
    return 0;
}

