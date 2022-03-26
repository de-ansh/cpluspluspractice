#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m ;
	cin>>n>>m;
	int arr[n][m], pre[n][m];
	for(int i=0; i<n; i++){
		for (int j = 0; j < m; ++j)
		{
			cin>>arr[i][j];
		}
	}
	for(int i=0; i<n; i++){
		for (int j = 0; j < m; ++j)
		{
			pre[i][j]=arr[i][j];
			if(i-1>=0) pre[i][j]+= pre[i-1][j];
			if(j-1>=0) pre[i][j]+=pre[i][j-1];
			if(i-1>=0 &&j-1>=0) pre[i][j]-= pre[i-1][j-1];
		}
	}
	int q; cin>>q;
	while(q--){
		int i1,j1, i2,j2;
		cin>>i1>>j1>>i2>>j2;
	}	
		
	
	return 0;
}