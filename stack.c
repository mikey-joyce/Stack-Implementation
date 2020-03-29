#include "stack.h"

int main(void){
	List *myStack=initList();

	myStack=push(myStack, 4);
	myStack=push(myStack, 3);
	myStack=push(myStack, 2);
	myStack=push(myStack, 1);

	printf("After push:\n");
	printList(myStack);

	myStack=pop(myStack);
	
	printf("After pop:\n");
	printList(myStack);
	
	freeList(myStack);
}

List *push(List *node, int data){
	List *newNode;
	newNode = createNode(data);
	newNode->next=node;

	return newNode;	
}

List *pop(List *node){
	struct liststruct *temp;
	temp=node->next;

	node->data=0;
	node->next=NULL;
	free(node);

	return temp;
}
