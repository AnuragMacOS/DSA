#include <bits/stdc++.h>
using namespace std;

//structure of Node
class Node {
public:
    int data;
    Node* next;
    Node* back;
    
    public:
    Node(int data1,Node* next1,Node* back1){

        data = data1;
        next = next1;
        back = back1;
    }
    public:
    Node(int data1){
        data = data1;
        next = nullptr;
     }
   };

    Node* converArr2DLL(vector <int> &arr){
        Node* head = new Node(arr[0]);
        Node*prev = head;
        for(int i=1;i<arr.size();i++){
            Node* temp= new Node(arr[i],nullptr,prev);
                prev->next=temp;
                prev=temp;
            }
            return head;
        }
    void print(Node* head){
        while(head!=NULL){
            cout<< head->data << " ";
            head = head->next;
        }
    }  
   Node* insertbeforeHead(Node* head,int val){
    Node* newHead = new Node(val,head,nullptr);
    head->back =newHead;
     
    return newHead;
}
    
    
    int main(){
      vector<int> arr= {12,5,8,7};
      Node* head= converArr2DLL(arr);
      head= insertbeforeHead(head,90);
      print (head);
      return 0;
   }
    
