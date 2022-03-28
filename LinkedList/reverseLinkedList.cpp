#include<iostream>
#include<bits/stdc++.h>
using namespace std;
struct node{
	int val;
	node *next;
	node(){
		val = -1;
		next = NULL;
	}
};

node* rev(node *p){
	if(!p->next){
		return p;
	}
	node *temp = p->next;
	p->next = NULL;
	node* newHead = rev(temp);
	temp->next = p;
	return newHead;
	
}

int main(){
	
	node* head = NULL;
	node *p;
	for(int i = 0;i<5;i++){
		if(head == NULL){
			node *temp = new node;
			int x;
			cin>>x;
			temp->val = x;
			temp->next = NULL;
			head = temp;
			p = head;
		}
		else{
			node *temp = new node;
			int x;
			cin>>x;
			temp->val = x;
			temp->next = NULL;
			p->next = temp;
			p = temp;
		}
	}

	node* last = rev(head);
	cout<<last->val<<endl;
	p = last;
	while(p){
		cout<<p->val<<" ";
		p = p->next;
	}
	return 0;
}
