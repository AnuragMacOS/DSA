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

Node* insertHead(Node* head, int val) {
    Node* temp = new Node(val, head);
    return temp;
}

int main() {
    vector<int> arr = {12, 5, 8, 7};
    Node* head = convert2LL(arr);
    head = insertHead(head, 115);
    print(head);
    return 0;
}
