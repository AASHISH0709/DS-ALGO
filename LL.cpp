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

traversal(head);

return 0;
}
