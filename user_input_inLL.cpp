#include<iostream>
#include<stdlib.h>
using namespace std;

struct node{
	int data;
	struct node * next;	
};

void traversal(struct node * i)
{
	while(i != NULL){
	cout<<i->data<<endl;
	i = i ->next;
	}
}


int main(){
	struct node * head;
	struct node * newnode;
	struct node * temp;
	head=NULL;
	int total;
	
	while(true){	
		newnode = (struct node *) malloc(sizeof(struct node));
		cout<<"enter data"<<endl;
		cin>>newnode->data;
		newnode->next=NULL;
		if(head==NULL){
		head=temp=newnode;
		}
		else
		{
			temp->next=newnode;
			temp=newnode;
		}
		cout<<"Do you want do again"<<endl;
		int choice;
		cin>>choice;
		if(choice==0){
			break;
		}
	}
	traversal(head);
	return 0;
}
