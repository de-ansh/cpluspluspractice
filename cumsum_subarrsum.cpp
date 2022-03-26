#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int currentsum=0;
	int maxsum=0;
	int left =-1;
	int right=-1;
	int cumsum[1000]={0};
	int arr[n];
	cin>>arr[0];
	cumsum[0]=arr[0];
	for (int i = 1; i < n; ++i){
		cin>>arr[i];
		cumsum[i]=cumsum[i-1]+arr[i];
	}
	
	
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<"\n";
	}
	
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			currentsum=0;
			currentsum= cumsum[j]- cumsum[i-1];
			if (currentsum>maxsum)
			{
				maxsum=currentsum;
				left=i;
				right=j;

			}
			
		}
	}
	cout<<maxsum<<"\n";
	for (int i = left; i < right; ++i)
	{
		cout<<arr[i]<<",";
	}
	return 0;
}