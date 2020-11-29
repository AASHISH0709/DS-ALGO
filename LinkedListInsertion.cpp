#include<iostream>
#include <stdlib.h>
using namespace std;

struct node{
	int data;
	struct node *next;
};

void traversal(struct node *ptr)
{
	while(ptr != NULL){
	cout<<ptr->data<<endl;
	ptr = ptr ->next;
	}
}

struct node * insertatend(struct node * head, int data){
	struct node * ptr= (struct node *) malloc(sizeof(struct node));
	ptr->data=data;
	struct node * p = head;
	while(p->next!=NULL){
		p = p->next;
	}
	p->next=ptr;
	ptr->next = NULL;
	return head;	
}

struct node * insertatfirst(struct node * head, int data){
	struct node * ptr= (struct node *) malloc(sizeof(struct node));
	ptr->next = head;
	ptr->data=data;
}

struct node * insertatindex(struct node * head, int data, int index){
	struct node * ptr= (struct node *) malloc(sizeof(struct node));
	struct node * p = head;
	int i =0;
	while(i!=index-1){
		p = p->next;
		i++;
	}
	ptr ->data= data;
	ptr ->next = p->next;
	p->next = ptr;
	return head;	
}

struct node * insertafterNode(struct node * head, struct node * prevNode, int data){
	struct node * ptr= (struct node *) malloc(sizeof(struct node));
	ptr->data=data;
	ptr->next=prevNode->next;
	prevNode->next=ptr;
	return head;	
}
int main()
{
struct node * head;
struct node * sec;
struct node * thr;
head = (struct node *) malloc(sizeof(struct node));
sec = (struct node *) malloc(sizeof(struct node));
thr = (struct node *) malloc(sizeof(struct node));

head->data = 7;
head->next = sec;

sec->data = 70;
sec->next = thr;

thr->data = 90;
thr->next = NULL;
cout<<"Linked list before insertion"<<endl;
traversal(head);
int choice;
cout<<"Press 1 for insert at begning"<<endl<<"Press 2 for insert in between at any index"<<endl<<"Press 3 for insert at end"<<endl<<"Press 4 for insert after node"<<endl;
cout<<"Enter Your choice"<<endl;
cin>>choice;
if(choice==1){
	cout<<"inserting at begning"<<endl;
	cout<<"Linked list after insertion"<<endl;
	head = insertatfirst(head,60);
	traversal(head);
	}	 
else if(choice == 2){
	cout<<"inserting in between at any index"<<endl;
	cout<<"Linked list after insertion"<<endl;
	head = insertatindex(head,60,2);
	traversal(head);
	}
else if(choice==3){
	cout<<"inserting at end"<<endl;
	cout<<"Linked list after insertion"<<endl;
	head = insertatend(head,997);
	traversal(head);
	}
else if(choice== 4){
	cout<<"inserting in after node"<<endl;
	cout<<"Linked list after insertion"<<endl;
	head = insertafterNode(head,sec,997);
	traversal(head);
}
else{
	cout<<"Wrong Input"<<endl;
}
return 0;
}
