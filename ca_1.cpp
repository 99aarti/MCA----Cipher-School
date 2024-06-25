#include<iostream>
using namespace std;

class node{
	public:
		int data;
		node *next;
		
		node(int data){
			this->data = data;
			this->next = NULL; 
		}
};
node *head = NULL;

void insert(int data){
	node *n = new node(data);
	n->next = head;
	head = n;
}

void display(){
	node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<<" ";
		temp = temp->next;
	}
}

void insertAtMid(int data, int k){
	node *n = new node(data);
	node *temp = head;
	node *temp1 = NULL;
	for(int i = 1; i<k-1; i++){
		temp = temp->next ;
	}
	temp1 = temp->next;
	temp->next = n;
	n->next = temp1; 
}

int main(){
	int x;
	insert(45);
	insert(78);
	insert(56);
	insert(23);
	insert(20);
	insert(10);
	display();
	cout<<endl<<"Enter element you want to insert"<<endl;
	cin>>x;
	insertAtMid(x,4);
	cout<<"After inserting the element"<<endl;
	display();
	return 0;
}
