#include<bits/stdc++.h>
using namespace std;
int main(){
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
	bool present=binary_search(arr,arr+n,key);
	if(present)
		cout<<"Present";
	else
		cout<<"Absent";
	return 0;
}
