#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	/*auto it = find(arr,arr+n,key);
	int index= it-arr;
	if(index==n)
		cout<<"The element is not present";
	else 
		cout<<index<<"\n";*/
	/*bool present = binary_search(arr,arr+n,key);
	if (present)
	{
		
		cout<<"Present";
	}
	else
		cout<<"absent";*/
	auto it = lower_bound(arr,arr+n,key);
	//cout<<(it-arr)<<"\n";
	auto ir= upper_bound(arr,arr+n,key);
	cout<<(ir-arr)<<"\n";
	cout<<"oocurence freq of 40 "<<(ir-it)<<"\n";
	return 0;
}