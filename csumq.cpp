#include<bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[n], pre[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	
	for(int i=0;i<n;i++){
		if(i==0) pre[i]=arr[i];
		else
			pre[i]= arr[i]+pre[i-1];
	}

	int q;
	cin>>q;
	
	while(q--){
		int s=0;
		int l,r;
		cin>>l>>r;
		if(l-1>=0)
			s= pre[r]-pre[l-1];
		else
			s=pre[r];
		cout<<s<<endl;
	}
	return 0;


}