#include<bits/stdc++.h>
using namespace std;
void learnvector(){
	vector<int>v;
	for(int i=0;i<6;i++)
		v.push_back(i);
	vector<int> v1(5,1);
	//for(vector<int>:: iterator i=v1.begin(); i!=v1.end();i++)
	//	cout<<*(i)<<" ";
	v.swap(v1);
	cout<<v.size();
	for(auto i=v1.begin();i!=v1.end();i++ )
		cout<<*i<<" ";
	v.erase(v.begin()+1); 


}
void learnlist(){
	list<int>l;
	l.push_back(2);
	l.emplace_back(6);
	l.push_front(45);
	l.emplace_front(65);
	for(auto i:l)
		cout<<i<<" ";
}

int main(int argc, char const *argv[])
{
	/*pair<int,int> p= {1,2};
	cout<<p.first<<" "<<p.second<<"\n";
	pair<int, pair<int,int>>p1= {1,{1,2}};
	cout<<p1.first<<" "<<p1.second.second<<" "<<p1.second.first<<"\n";
	pair<int,int>arr[]={{1,2},{2,3},{1,2}};
	for (int i = 0; i < 3; ++i)
	{
		cout<<arr[i].first<<" "<<arr[i].second<<"\n";
	}*/
	learnlist();
	
}