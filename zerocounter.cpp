#include <bits/stdc++.h>
using namespace std;
int zerocounter(int n){
	if(n==0)
		return 0;
	if(n%10==0)
		return 1+ zerocounter(n/10);
	else 

	return zerocounter(n/10);

}
int main(int argc, char const *argv[])
{
	int t; cin>>t;
	while(t--){
		int n;
		cin>>n;
		int t= zerocounter(n);
		cout<<t<<"\n";
		
	}
	return 0;
	
}