Node * deleteAllOccurrences(Node* head, int k) {
     Node* temp = head;
     while(temp != NULL){
         if(temp->data == k){
             if(temp == head){
                 head= temp->next;
             }
             Node* prevNode = temp->prev;
             Node* nextNode = temp->next;
             if(nextNode!=NULL) nextNode->prev = prevNode;
             if(prevNode!=NULL) prevNode->next = nextNode;

             free(temp);
             temp = nextNode;
         }
         else temp= temp->next;
     }
     return head;
}
