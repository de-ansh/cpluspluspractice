#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=1;i<=n;i++)
		cin>>arr[i];
	int q; cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		long long sum=0;
		for (int i = l; i <=r; ++i)
		{
			sum+=arr[i];
		}
		cout<<sum<<"\n";
	}
	return 0;
}