//Given node to be deleted will never be the head

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
    Node* deleteHead(Node* head){
        if(head==NULL || head->next == NULL){
            return NULL;
        }
        Node * prev = head;
        head = head->next;
        
        head->back=nullptr;
        prev->next=nullptr;

        delete prev;
        return head;
    }
     
    Node* deleteTail(Node* head){
        if(head==NULL || head->next == NULL){
            return NULL;
        }
        Node* tail = head;
        while(tail->next != NULL){
            tail = tail->next;
        }
        Node* newTail = tail->back;
        newTail->next = nullptr;
        tail->back = nullptr;
        delete tail;
        return head;
    }
    Node* removeKthEle(Node* head, int k){
        if(head == NULL){
            return NULL;
        }
        int cnt = 0;
        Node* kNode = head;
        while(kNode != NULL){
            cnt++;
            if(cnt==k) break;
            kNode=kNode->next;
        }
        Node* prev= kNode->back;
        Node* front = kNode->next;

        if(prev == NULL && front ==NULL){
            return NULL;
        }
        else if(prev == NULL){
            return deleteHead(head);
        }
        else if (front ==NULL){
            return deleteTail(head);
        }
        prev->next = front;
        front->back= prev;

        kNode->next =nullptr;
        kNode->back =nullptr;
        delete kNode;
        return head;
    }

    void deleteNode(Node* temp){
        Node* prev = temp->back;
        Node* front = temp->next;

        if(front==NULL){
            prev->next = nullptr;
            temp->back = nullptr;
            free(temp);
            return;
        }
        prev->next = front;
        front->back = prev;

        temp->next = temp->back = nullptr;
        free(temp);//since its avoid fn so we dont delete
    }

    int main(){
      vector<int> arr= {12,5,8,7};
      Node* head= converArr2DLL(arr);
      deleteNode(head->next); //deletes 5
      print(head);
      return 0;
   }
    
