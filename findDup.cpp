#include<bits/stdc++.h>
using namespace std;
int find(int arr[], int n){
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1])
			return i;
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	cout<<find(arr,n);
	return 0;
}