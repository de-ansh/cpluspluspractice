#include <bits/stdc++.h>
using namespace std;
void(int arr[], int n){
	int l=0;
	int r=n-1;
	while(l<r){
		if(arr[l]%2!=){
			swap(arr[l],arr[r]);
			l++;
			r--;
		}
		if(arr[r]%2!=0){
			
		}
	}
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[n];
	oddeven(arr,n);
	return 0;
}