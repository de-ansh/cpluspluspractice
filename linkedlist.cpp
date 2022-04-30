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
int ListSize(node *head){
	if(head==NULL)
		return 0;
	else
		return 1+ListSize(head->next);
}
node *InsertNode(node *head, int data, int i)
{
	if(head==NULL)
		return head;
	else 
		head->next=InsertNode(head->next,data, i-1);
}
int index(node * head, int k,int n){
	node *temp=head;
	
	for(int i=0;i<n;i++){
		if(temp->data==k)
			return i;
		else
			temp=temp->next;
	}
	return -1;
}
node * AppendLasttoFirst(node * head,int size, int n){
	int count =size-n;
	int i=0;
	node *temp=head;
	while(i<=count){
		temp=temp->next;
		i++;
	}
	node *h2=temp->next;
	temp->next=NULL;
	node *tail=h2;
	while(tail!=NULL){
		tail=tail->next;
	}
	tail->next=head;
	return h2;

}
 node* deleteDuplicates(node* head) {
        if(head==NULL||head->next==NULL) return head;
        node* temp= head;
        while(temp->next!=NULL){
            if(temp->data==temp->next->data){
                node *del=temp->next;
                temp->next=del->next;
                delete del;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
    }
node* swapNodes(node *head, int k)
        {
            node *fast = head, *slow = head, *n1=head;
            for(int i=0;i<k-1;i++){
                fast=fast->next;
                n1=fast;
            }
            while(fast->next!=NULL){
                fast=fast->next;
                slow=slow->next;
            }
            int n1_val=n1->data;
            n1->data=slow->data;
            slow->data=n1_val;
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
	//int i;
	//cin>>i;
	//reverseList(temp);
	//head=deleteNode(head,i);
	//head=insertNode(head,i,data);
	//print(head);

	cout<<endl;
	int n=ListSize(head);
	//cout<<index(head, 14,n);
	head= swapNodes(head,6);
	print(head);
	return 0;
}