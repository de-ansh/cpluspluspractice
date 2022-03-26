#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int a[n+4];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int count[n+1]= {0};
	for (int i = 0; i < n; ++i)
	{
		count[a[i]]++;
	}
	for (int i = 0; i < n+1; ++i)
	{
		if (count[i]>0)
		{
			cout<<i<<"-"<<count[i]<<endl;
		}
	}
	return 0;
}