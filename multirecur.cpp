#include <bits/stdc++.h>
using namespace std;
int multirecur(int n,int m)
{
	if(n==0 or m==0)
		return 0;
	
	int p=multirecur(m,n-1);
		return p+m;
}
int main(int argc, char const *argv[])
{
	int m,n;
	cin>>m>>n;
	int p=multirecur( m, n);
	cout<<p<<"\n";
	return 0;
}