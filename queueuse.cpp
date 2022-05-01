#include<bits/stdc++.h>
using namespace std;
#include "queueusingarray.h"
int main(int argc, char const *argv[])
{
	Queueusingarr<int> q(10);
	int t;
	cin>>t;
	while(t--){
		int k;
		cin>>k;
		q.enqueue(k);
	}
	q.enqueue(110);
	cout<<q.front()<<endl;
	/*cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;
	cout<<q.dequeue()<<endl;*/
	cout<<q.isempty()<<endl;
	cout<<q.getSize()<<endl;
	return 0;
}