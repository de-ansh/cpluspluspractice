#include <bits/stdc++.h>
using namespace std;
int countsubarrays(){
	int n,k;
	cin>>n>>k;
	int arr[n],sum[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	sum[0]=arr[0];
	for(int i=1;i<n;i++)
		sum[i]=sum[i-1]+arr[i];
	int cnt=0;
	for(int start=0;start<n;start++){
		for(int end=start;end<n;end++){
			int temp=sum[end];
			if(start!=0){
				temp-=sum[start-1];
			}
			if(temp==k)
				cnt++;
		}
	}
	return cnt;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		cout<<countsubarrays()<<" ";
	}
	return 0;
}