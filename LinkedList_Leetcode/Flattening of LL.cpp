Node* merge2list(Node* l1, Node* l2){
	Node* dummyNode= new Node(-1);
	Node* res = dummyNode;
	while(l1!=NULL && l2!=NULL){
		if(l1->data < l2->data){
			res->child = l1;
			res = l1;
			l1 = l1->child;
		}
		else{
			res->child = l2;
			res= l2;
			l2 = l2->child;
		}
		res->next= nullptr;
	}
	if(l1) res->child = l1;
	else res->child = l2;
	if(dummyNode->child) dummyNode->child->next= nullptr;
	return dummyNode->child;
}

Node* flattenLinkedList(Node* head) 
{
  if(head==NULL || head->next == NULL) return head;
  Node* mergeHead =flattenLinkedList(head->next);
	return merge2list(head,mergeHead);
	return head;
}
