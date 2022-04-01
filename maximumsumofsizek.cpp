#include <bits/stdc++.h>
using namespace std;
int twopointer(int a[], int n,int k){
	int maxi=0,sum=0;
	int l=0,r=k-1;
	for(int i=0;i<k-1;i++)
		sum+=a[i];
	maxi=sum;
	while(r<=n-2){
		r++;
		sum+=a[r];
		sum-=a[l];
		l++;
		
		maxi=max(sum,maxi);
	}
	return maxi;
}
int main(){
	int n,k;
	cin>>n>>k;
	int a[n],pre[n];
	for(int i=0;i<n;i++)
		cin>>a[i];

	//prefixsum approach
	/*for(int i=0;i<n;i++){
		if(i==0) pre[i]=a[i];
		else
			pre[i]= a[i]+pre[i-1];
	}
	int sum=0,maxi=0;//we have assumed this array is containg positive elements only
	//in case of array containing negative we have to initialize maxi with -1e9
	for(int i=0;i<=n-k;i++)
	{
		int start=i,end=i+k-1;
		if(start-1>=0)
			sum= pre[end]-pre[start-1];
		else
			sum=pre[end];
		if(sum>maxi) maxi=sum;
	}
	cout<<maxi<<" ";*/
	int maxi=0,sum=0;
	int l=0,r=k-1;
	for(int i=0;i<=r;i++)
		sum+=a[i];
	maxi=sum;
	while(r<n-1){
		r++;
		sum+=a[r];
		sum-=a[l];
		l++;
		
		maxi=max(sum,maxi);
	}
	cout<<maxi;
	return 0;
	//22.18
}