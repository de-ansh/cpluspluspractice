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
	node *tail=NULL;
	while(data!=0){
		node *newnode=new node(data);
		if (head==NULL)
		{
			head=newnode;
			tail=newnode;
		}
		else{
			/*node *temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}*/
			tail->next=newnode;
			tail=tail->next;
			//tail=newnode;
		}

		cin>>data;

	}
	return head;
}
void  print(node *temp){
	int cnt=0;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
		cnt++;
	}

	cout<<"\n";
	//cout<<cnt;
}
void printIthNode(node *head, int i)
{
    if (head == NULL)
    {
        return;
    }
    node *temp = head;
    while (i-- && temp != NULL)
    {
        temp = temp->next;
    }
    if (temp != NULL)
        cout << temp->data;
}

node *helper(node *curr, node*prev){
        if(curr==NULL)
            return prev;
        node *newnode= curr->next;
        curr->next=prev;
        return helper(newnode,curr); 
    }
node* reverseList(node* head) {
        return helper(head,NULL);
}
node* deleteNode(node* head, int i) {
	int count=0;
	node *temp=head;
	if(i==0){
		head->data=temp->next->data;
		head->next=temp->next->next;
		return head;
	}
	while(temp!=NULL && count<i-1){
		temp=temp->next;
		count++;
	}
	if(temp!=NULL){
		int val = temp ->next->data;
        temp->next=temp->next->next;
        temp->data=val;
	}
     return head;   
}
node* insertNode(node *head, int i, int n){

	node *newnode= new node(n);
	int count=0;
	node *temp=head;
	if(i==0){
		newnode->next=head;
		head=newnode;
		return head;
	}
	while(temp!=NULL && count<i-1){
		temp=temp->next;
		count++;
	}
	if(temp!=NULL){
		newnode->next=temp->next;
		temp->next=newnode;
	}
	return head;
}


int main(int argc, char const *argv[])
{
	/*node n1(1);
	node *head=&n1;
	node *n3=new node(10);
	node *n4=new node(20);
	head->next=n3;
	n3->next=n4;*/

	node *head=takeinput();
	//printIthNode(temp,3);
	//int data, i;
	//cin>>data>>i;
	int i;
	cin>>i;
	//reverseList(temp);
	head=deleteNode(head,i);
	//head=insertNode(head,i,data);
	print(head);

	return 0;
}