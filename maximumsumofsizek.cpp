#include <bits/stdc++.h>
using namespace std;
int main(){
	int n,k;
	cin>>n>>k;
	int a[n],pre[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++){
		if(i==0) pre[i]=a[i];
		else
			pre[i]= a[i]+pre[i-1];
	}
	int sum=0,maxi=0;
	for(int i=0;i<=n-k;i++)
	{
		int start=i,end=i+k-1;
		if(start-1>=0)
			sum= pre[end]-pre[start-1];
		else
			sum=pre[end];
		if(sum>maxi) maxi=sum;
	}
	cout<<maxi<<" ";
}