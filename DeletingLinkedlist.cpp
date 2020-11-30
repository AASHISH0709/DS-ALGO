#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node * next;
};

void traversing(struct node * ptr){
	while(ptr!=NULL){
		cout<<ptr->data<<endl;
		ptr=ptr->next;
	}
}

struct node * deletefirst(struct node * head){
	struct node * ptr = head;
	head = head->next;
	free(ptr);
	return head;
}

struct node * deletatindex(struct node * head, int index){
	struct node * p = head;
	struct node * q = head->next;
	for(int i = 0; i<index-1 ;i++ ){
		p= p->next;
		q=q->next;
	}
	p->next=q->next;
	free(q);
	return(head);
}

struct node * deletelast(struct node * head){
	struct node * p = head;
	struct node * q = head->next;
	while(q->next != NULL){
		p=p->next;
		q=q->next;
	}
	p->next=NULL;
	free(q);
	return(head);
}

struct node * deletaftervalue(struct node * head, int value){
	struct node * p = head;
	struct node * q = head->next;
	while(q->data==!value && q->next!=NULL){
		p= p->next;
		q= q->next;
	}
	if(q->data == value){
		p->next=q->next;
		free(q);
	}
	return(head);
}

int main(){
	struct node * head = (struct node *)malloc(sizeof(struct node));
	struct node * sec = (struct node *)malloc(sizeof(struct node));
	struct node * thr = (struct node *)malloc(sizeof(struct node));
	struct node * forth =  (struct node *)malloc(sizeof(struct node));
	
	head->data= 5;
	head->next=sec;
	
	sec->data=80;
	sec->next=thr;
	
	thr->data=98;
	thr->next=forth;
	
	forth->data=1;
	forth->next=NULL;
	cout<<"Before Deletion"<<endl;
	traversing(head);
	int choice;
cout<<"Press 1 for Delet at begning"<<endl<<"Press 2 for Delete in between any index"<<endl<<"Press 3 for Delete at end"<<endl<<"Press 4 for Delete after node"<<endl;
cout<<"Enter Your choice"<<endl;
cin>>choice;
if(choice==1){
	cout<<"Deleting at begning"<<endl;
	cout<<"Linked list after Deletion"<<endl;
	head=deletefirst(head);
	traversing(head);
	}	 
else if(choice == 2){
	cout<<"inserting in between at any index"<<endl;
	cout<<"Linked list after insertion"<<endl;
	head = deletatindex(head,2);
	traversing(head);
	}
else if(choice==3){
	cout<<"Deleting at end"<<endl;
	cout<<"Linked list after Deletion"<<endl;
	head = deletelast(head);
	traversing(head);
	}
else if(choice== 4){
	cout<<"Deleting after value"<<endl;
	cout<<"Linked list after insertion"<<endl;
	head = deletaftervalue(head,5);
	traversing(head);
}
else{
	cout<<"Wrong Input"<<endl;
}
	return 0;
}
