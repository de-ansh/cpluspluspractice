#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int l,int mid, int h){
	
}
void mergesort(int arr[], int l,int h){
	if(l>=h)
		return;
	int mid=(l+h)/2;
	mergesort(arr,l,mid);
	mergesort(arr,mid,h);
	merge(arr, l, mid, h);

}
int main(int argc, char const *argv[])
{
	int n,l,h;
	cin>>n;
	int arr[n];
	int l=0;
	int h=n-1;
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	mergesort(arr, l,h);
	return 0;
}