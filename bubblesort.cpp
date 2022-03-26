#include <bits/stdc++.h>
using namespace std;

bool compare(int a,int b){
	return a>b;
}
void bubble_sort(int a[],int n,bool(&cmp)(int a,int b)){
	for (int itr = 1; itr <= n-1; ++itr)
	{
		for (int i = 0; i <=(n-itr-1) ; ++i)
		{
			if (cmp(a[i],a[i+1]))
			{
				swap(a[i],a[i+1]); 
			}
		}
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	bubble_sort(arr,n,compare);
	for (int i = 0; i < n; ++i)
	{
		cout<<" "<<arr[i];
	}
	return 0;
}