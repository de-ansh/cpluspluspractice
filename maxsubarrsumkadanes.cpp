#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int cs=0;int ms=0;
	//kadanes algo
	for (int i = 0; i < n; ++i)
	{
		cs=cs+arr[i];
		if (cs<0)
		{
			cs=0;
		}
		ms= max(ms,cs);
	}
	cout<<"Maximum sum is:"<<ms<<"\n";
}