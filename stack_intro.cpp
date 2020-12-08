#include<iostream>
using namespace std;

int stack[8];
int top = -1;

void push()
{
	cout<<"Enter data to inserted"<<endl;
	int data;
	cin>>data;
	if(top==5){
		cout<<"Stack overflow"<<endl;
	}
	else{
		top++;
		stack[top]=data;
		
	}
}
void pop(){
	int item;
	if(top==-1){
		cout<<"Stack underflow";
	}
	else
	{
		item=stack[top];
		top--;
		cout<<"Deleted item is = "<<item<<endl;
	}
}
void peek(){
	if(top==-1){
		cout<<"Stack is empty"<<endl;
	}
	else
	{
		cout<<"Topmost element is = "<<stack[top]<<endl;
	}
}

void display(){
	for(int i = top ; i>=0;i--){
		cout<<stack[i]<<endl;
	}
}
int main()
{
	cout<<"Enter how many data to be inserted"<<endl;
	int total;
	cin>>total;
	for(int i = 0; i<total ; i++){
		push();
		}
	int choice;
	cout<<"Press 1 for inseting data"<<endl;
	cout<<"Press 2 for deleting data"<<endl;
	cout<<"Press 3 to see peek element of stack"<<endl;
	cout<<"Press 4 for displaying data"<<endl;
	cin>>choice;
	{
	if(choice==1){
		cout<<"Enter how many data to be inserted"<<endl;
		int total;
		cin>>total;
		for(int i = 0; i< total ; i++){
			push();
		}
		cout<<"Modified stack is"<<endl;
		display();
	}
	else if(choice==2){
		cout<<"Enter how many data to be deleted"<<endl;
		int total;
		cin>>total;
		for(int i = 0; i<=total ; i++){
			pop();
		}
		cout<<"Modified stack is"<<endl;
		display();
	}
	else if(choice==3){
		peek();
	}
	else if(choice==4){
		display();
	}
	else{
		cout<<"Wrong Input"<<endl;
	}
}
	return 0;
}
