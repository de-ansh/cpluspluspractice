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
node *takeinput(){
	int data;
	cin>>data;
	node *head=NULL;
	while(data!=0){
		node *newnode=new node(data);
		if (head==NULL)
		{
			head=newnode;
		}
		else{
			node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newnode;
		}

		cin>>data;

	}
	return head;
}
void  print(node *temp){
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
}

int main(int argc, char const *argv[])
{
	/*node n1(1);
	node *head=&n1;
	node *n3=new node(10);
	node *n4=new node(20);
	head->next=n3;
	n3->next=n4;*/

	node *temp=takeinput();
	print(temp);
	return 0;
}