#include<bits/stdc++.h>
using namespace std;
int getMinMax(int A[], int n)
{
    int max = 0;
    int min = 0;
    for ( int i = 1 ;i< n;i++ )
    {
        if ( A[i] > max )
            max = i;
        else if ( A[i] < min )
            min = i;
    }
   
  cout<<min+1<<" "<<max+1<<"\n";
   
}
int main(){
	int n=7;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	getMinMax(arr,n);
	sort(arr,arr+n);
	int j=arr[n-1]-arr[0];
	cout<<j<<"\n";
}
