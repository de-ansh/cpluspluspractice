#include <bits/stdc++.h>
using namespace  std;
bool compare(int a, int b)
{
	return a>b;
}
int solve(){
	int n,k;
	cin>>n>>k;
	int a[n], b[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	for (int i = 0; i < n; ++i)
	{
		cin>>b[i];
	}
	sort(a,a+n);
	sort(b,b+n,compare);
	for (int i = 0; i < n; ++i)
	{
		if(k>0)
        {
            if(a[i]<b[i])
            {
                a[i]=b[i];
                k--;
            }
        }
	}
	int sum=0;
	for (int i = 0; i < n; ++i)
	{
		sum+=a[i];
	}
	cout<<sum<<"\n";
	return 0;
}
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	while(t--){
		solve();
	}
}