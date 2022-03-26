#include<bits/stdc++.h>
using namespace std;

void search(int arr[],int n, int key){
	int i;
	for ( i = 0; i < n; ++i)
	{
		if (arr[i]==key)
		{
			cout<<i;
			break;
		}
	}
	if (i==n)
	{
		cout<<-1;
	}
}
void selectionsort(int a[], int n){
	for (int i = 0; i < n-1; ++i)
	{	int min_index=i;
		for (int j = i; j <= n-1; ++j)
		{
			if (a[j]< a[min_index])
			{
				min_index=j;
			}
		}
		swap(a[i],a[min_index]);
	}
}
void smallandlarge(int arr[], int n){
	int Smallest= INT_MAX;
	int largest= INT_MIN;
	for (int i = 0; i < n; ++i)
	{
		if (arr[i]>largest)
			largest=arr[i];
		if (arr[i]<Smallest)
			Smallest=arr[i];
	}
	cout<<Smallest<<" "<<largest<<"\n";
}
int binary(int arr[], int n, int key){
	int l=0,r=n-1;
	while(l<=r){
		int m= (l+r)/2;
		if(arr[m]==key)
			return m;
		else if(key<arr[m])
			r=m-1;
		else 
			l=m+1;
	}
	return -1;
}
void buublesort(int arr[], int n){
	for (int i = 0; i < n-1; ++i)
	{
		for (int l = 0; l < n-i-1; ++l)
		{
			if(arr[l]>arr[l+1])
				swap(arr[l],arr[l+1]);
		}
	}
}
void insertionsort(int a[], int n){
	for (int i = 0; i < n; ++i)
	{
		int e=a[i];
		int j=i-1;
		while(j>=0 and a[j]>e){
			a[j+1]= a[j];
			j=j-1;
		}
		a[j+1]=e;

	}
}
void subarray(int a[],int n){
	int currentsum=0;
	int maxsum=0;
	int left =-1;
	int right=-1;
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			currentsum=0;
			for (int k = i; k <= j; ++k)
			{
				currentsum += a[k];
			}
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
		cout<<a[i]<<",";
	}
}
void subarraysum(int a[], int n){
	int currentsum=0;
	int maxsum=0;
	int left =-1;
	int right=-1;
	int cumsum[1000]={0};
	for (int i = 0; i < n; ++i)
	{
		for (int j = i; j < n; ++j)
		{
			currentsum=0;
			
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
		cout<<a[i]<<",";
	}
}
int main(){
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	
	
	insertionsort(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<arr[i]<<"\n";
	}
	subarray(arr,n);
	return 0;
}