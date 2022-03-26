#include <bits/stdc++.h>
using namespace std;
/*void bruteprefixsum(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)  cin>>a[i];
	int q;
		cin>>q;
		while(q--){
			int s=0;
			int l,r;
			cin>>l>>r;
			for (int i = l; i <= r; ++i)
			{
				s+=a[i];
			}
			cout<<s<<endl;
		}
}
void prefixsum(){
	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int prefix[n];
	for (int i = 0; i < n; ++i)
	{
		if(i==0) prefix[i]=a[0];
		else 
			prefix[i]=prefix[i-1]+a[i];
	}
	int q; cin>>q;
	
	while(q--){
		int l,r;
		cin>>l>>r;
		int s=prefix[r];
		if (l-1>=0)
		{
			s=s-prefix[l-1];
		}
		cout<<s<<endl;
	}
}*/
void solve(){
    	int n;
		cin>>n;
		int a[n];
		for(int i=0;i<n;i++)cin>>a[i];
		int pre[n];
		pre[0]=a[0];
		for(int i=1;i<n;i++)
		{
			if(a[i]==-1)
			a[i]=pre[i-1]/i;
			pre[i]=a[i]+pre[i-1];
			
		}
		for(int i=0;i<n;i++)
	//	if(a[i]!=-1)
		cout<<a[i]<<" ";
		cout<<endl;
}

int main(int argc, char const *argv[])
{
	int t; cin>>t;
	while(t--){
		solve();
	}
	return 0;
}