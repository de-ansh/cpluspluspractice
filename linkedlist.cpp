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

	node n2(2);
	n1.next=&n2;
	cout<<n1.data<<"->"<<n2.data;	
	return 0;
}