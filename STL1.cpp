#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
	
		int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<"\n";
	}
	int key;
	cin>>key;
	/*
	bool present=binary_search(arr,arr+n,key);
	if(present)
		cout<<"Present";
	else
		cout<<"Absent";
	*/
	auto it= lower_bound(arr,arr+n,40);
	cout<<(it-arr)<<"\n";
	//upper_bound
	auto ir= upper_bound(arr,arr+n,40);
	cout<<(ir-arr)<<"\n";
	cout<<"occ freq of 40 is "
	return 0;
}