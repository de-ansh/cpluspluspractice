#include<bits/stdc++.h>
using namespace std;
double sum(int n){
	if(n==0)
		return 1;
	double ans= 1/(double)pow(2,n)+sum(n-1);
	return ans;
}
int main(int argc, char const *argv[])
{
	int n; cin>>n;
	cout<<sum(n);
	return 0;
}