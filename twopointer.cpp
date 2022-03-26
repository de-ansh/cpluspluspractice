#include <bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>n;
	}
	
	int key;
	cin>>key;
	int l=0;
	int h=n-1;
	while(l<h){
		int currentsum=arr[l]+arr[h];
		if (currentsum>key)
		{
			h--;
		}
		else if (currentsum<key)
		{
			l++;
		}
		else
		{
			cout<<arr[l]<<" "<<arr[h]<<"\n";
			l++;
			h--;
		}

	}
	return 0;
}