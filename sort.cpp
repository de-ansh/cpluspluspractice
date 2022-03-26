#include <bits/stdc++.h>
using namespace std;
//comparator Function
bool compare(int a, int b)
{
	return a>b;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n,compare);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<"\n";
	}
	return 0;
}