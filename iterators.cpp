#include<bits/stdc++.h>
using namespace std;
template<class forwardIterator, class T>
forwardIterator Search(forwardIterator start, forwardIterator end, T key){
	while(start!=end){
		if(*start==key){
			return start;
		}
		start++;
	}
	return end;
}
class book {
public:
	string name;
	int price;
}
int main(int argc, char const *argv[])
{
	list<int>l;
	int n;
	
	for (int i = 0; i < n; ++i)
	{
		l.push_back(i);
	}
	auto it=Search(l.begin(),l.end(),50);
	
	if (it==l.end())
		cout<<"element is not present";
	else 
		cout<<*it<<"\n";


	
	return 0;
}