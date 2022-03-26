#include <bits/stdc++.h>
using namespace std;
int sum(int a[], int n){
	if(n==0)
		return -1;
	int su=0;
	su+=a[n];
	sum(a[],n-1);
	return su;
}

int main()
{
	int n; cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cout<<a[i]<<"\n";
	}
	int d=sum(a,n);
	cout<<d<<"\n";
	
	return 0;
}
