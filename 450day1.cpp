#include<bits/stdc++.h>
using namespace std;
void method(){
	int n;
 	cin>>n;
 	int arr[n];
 	int brr[n];
 	for (int i = 0; i < n; ++i)
 		cin>>arr[i];
 	for(int i = n-1; i >= 0; i--)
		cout << arr[i] <<"  ";

}
void methodb(){
	int n,l,r;
	
	while(l<r){
		int temp= arr[l];
		arr[l]= arr[r];
		arr[r]=temp;
		l++;
		r--;
	}
	for (int i = 0; i < n; ++i)
		cout<<arr[i];
}
void  methodc(int *a[], int l, int r){
	if (l>=r) 
		return;
	int temp = a[l];
	a[l] = a[r];
	a[r] = temp;
	methodc(arr, l+1,r-1);
}
int main(int argc, char const *argv[])
{	
 	int n;
 	cin>>n;
	int l=0,r=n-1;
	int arr[n];
	for (int i = 0; i < n; ++i)
		cin>>arr[i];
	
 	methodb(arr,l,r);
 	for (int i = 0; i < n; ++i)
 		cout<<arr[i];
 	return 0;
}
//love bubber sheet 
