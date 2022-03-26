#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	int cnt=0;
	cin>>n;
	int arr;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < n; ++i)
	{
		if (arr[0]==arr[i])
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}