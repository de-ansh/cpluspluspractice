#include<bits/stdc++.h>
using namespace std;
void solve(){
	int n,k;
	cin>>n>>k;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int peaks=0;
	for (int i = 1; i < k-1; ++i)
	{
		if(arr[i]>arr[i+1] && arr[i]>arr[i-1])
			peaks++;
	}
	int maxpeaks=peaks;
	int ind=0;
	int l=0,r=k-1;
	while(r<=n-2){
		if(arr[r]>arr[r-1] && arr[r]>arr[r+1]) peaks++;
		r++;
		l++;
		if (arr[l]>arr[l-1] &&arr[l]>arr[l+1]) peaks--;

		if(peaks>maxpeaks){
			maxpeaks=peaks;
			ind =l;
		}
	}
	cout<<maxpeaks<<" "<<ind+1<<endl;
}
int main(){
	int q;
	cin>>q;
	while(q--){
		solve();
	}

}