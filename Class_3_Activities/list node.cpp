#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct node {
	int data;
	struct node *next;
};
struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList(){
	struct node *p = head;
	printf("\n[");
	
	//start from the beginning 
	while(p != NULL) {
		printf(" %d ",p->data);
		p = p->next;
	}
	printf("]");
}

//insertion at the beginning
void insertatbegin(int data){
	
	//create a link
	struct node *lk = (struct node*) malloc(sizeof(struct node));
	lk->data = data;
	
	//point it to old first node 
	lk->next = head;
	
	//point first to new first node
	head = lk;
}
void instertatend(int data){
	
	//create a link 
	struct node *lk = (struct node*) malloc(sizeof(struct node));
	lk->data = data;
	struct node *linkedlist = head;
	
	//point it to old first node
	while(linkedlist->next != NULL)
		linkedlist = linkedlist->next;
		
		//point first to new first node
	linkedlist->next = lk;
}

int main(){
	int k=0;
	insertatbegin(12);
	insertatbegin(22);
	insertatbegin(30);
	insertatbegin(44);
	insertatbegin(50);
	printf("Linked List: ");
	
	//print list
	printList();
}
