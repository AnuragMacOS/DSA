int addHelper(Node* temp){
    if(temp == NULL) return 1; //return carry=1
    int carry = addHelper(temp->next);

    temp->data += carry;

    if(temp->data < 10) return 0; //return carry=0;

    temp->data = 0;
    return 1;
}

Node *addOne(Node *head)
{
    int carry= addHelper(head);
    if(carry == 1){
        Node* newNode = new Node(1);
        newNode->next = head;
        return newNode;
    }
    return head;
}
