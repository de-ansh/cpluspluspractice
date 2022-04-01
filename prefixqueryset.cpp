#include<bits/stdc++.h>
//2.03
using namespace std;
//brute force
/*
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){

		cin>>a[i];//n
	}
	
	int q;
	cin>>q;
	while(q--){
		int i,j,k;
		cin>>i>>j>>k;
		for (int l = i; l <=j ; ++l)
		{
			a[l]+=k;
		}
		
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<" ";//n
	}
	return 0;

}*/

//prefixquery
int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	int s[n+1]={0};
	int q;
	cin>>q;
	while(q--){
		int l,r,x;
		cin>>l>>r>>x;
		s[l]+=x;
		s[r+1]-=x;
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+= s[i];
		a[i]+=sum;
	}
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
}