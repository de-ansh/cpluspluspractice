#include <bits/stdc++.h>
using namespace std;
void PrintF(int ind,vector<int> &ds, int arr[], int n )
{
	if (ind==n)
	{
		for (auto it:ds)
		{
			cout<<it<<" ";
		}
		if(ds.size()==0){
			cout<<"{}";
		}
		cout<<endl;
		return;
	}
	PrintF(ind+1,ds,arr,n);
	ds.push_back(arr[ind]);
	PrintF(ind+1,ds,arr,n);
	ds.pop_back();
	
}
//we have alot of options for every index tn = O{2^n *n} and stack sapce = O{n}
int main(int argc, char const *argv[])
{
	int arr[] = {3,1,2};
	int n=3;
	vector<int> ds;
	PrintF(0,ds, arr,n);
	return 0;
}