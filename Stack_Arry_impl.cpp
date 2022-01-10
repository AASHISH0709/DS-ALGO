#include <iostream>
using namespace std;
int stack[100],n=100,top = -1;
void push(int value){
	if(top>=n-1){
		cout<<"overflow"<<endl;
	}
	else{
		top++;
		stack[top]=value;
	}
}
void pop(){
	if(top<0){
		cout<<"stack underflow"<<endl;
	}
	else{
		cout<<"Popping "<<stack[top]<<endl;
		top--;
	}
}
void peek(){
	if(top>=n-1){
		cout<<"overflow"<<endl;
	}
	else if(top<0){
		cout<<"stack underflow"<<endl;
	}
	else{
		cout<<"Peek index is "<<stack[top]<<top<<endl;
	}
}
void display(){
	cout<<"Element are"<<endl;
	if(top>=0){
		for(int i=top;i>=0;i--){
			cout<<stack[i]<<" ";
		}	
	}
	else {
		cout<<"Stack is Empty"<<endl;
	}
}

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	pop();
	push(60);
	pop();
	pop();
	peek();
	display();
}
