#include<bits/stdc++.h>
using namespace std;
int Binarysearch(int arr[], int n, int k){
	int low=0, high=n-1;
	while(low<=high){
		int mid= (low+high)/2;
		if(arr[mid]==k)
			return mid;
		if(arr[mid]<k)
			low=mid+1;
		else 
			high= mid-1;
	}
	
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int k;
	cin>>k;
	cout<<Binarysearch(arr,n,k);
	return 0;
}