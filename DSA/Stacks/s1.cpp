#include<iostream>
using namespace std;
class stack{
	public:
		int data;
	
		stack* next;
	stack(int data){
		this->data=data;
		
	}
};
void push(stack* &top,int ele){
	stack* temp=new stack(12);
	
	if(temp==NULL){
		cout<<"over";
	}
	else{
		temp->data=ele;
		temp->next=top;
		top=temp;
	}
	
}
void display(stack* &top){
	
	if(top==NULL)
	cout<<"under";
	else{
		stack* temp=top;
		while(temp->next!=NULL){
			cout<<temp->data<<" ";
			temp=temp->next;
		}
	}
}
int main(){
	stack* node=new stack(10);
	stack* top=node;
	push(top,11);
	display(top);
}
