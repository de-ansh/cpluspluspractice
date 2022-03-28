#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int q;
	cin>>q;
	
	while(q--){
		int s=0;
		int l,r;
		cin>>l>>r;
		for(int i=l;i<=r;i++)
			s+=arr[i];
		cout<<s<<endl;
	}
	return 0;
//1.3

}