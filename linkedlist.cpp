#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node *next;
	node(int data){
		this->data=data;
		next=NULL;
	}
	
};
int main(int argc, char const *argv[])
{
	node n1(1);
	node *head=&n1;
	node *n3=new node(10);
	node *n4=new node(20);
	head->next=n3;
	n3->next=n4;
	node *temp=head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}	
	return 0;
}