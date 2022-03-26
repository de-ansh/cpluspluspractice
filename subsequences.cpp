#include <bits/stdc++.h>
using namespace std;
//For all sub sequences
/*void Prints(int ind,vector<int> &ds,int s, int arr[], int sum, int n){
	if (ind==n)
	{
		if(s==sum){
			for (auto it: ds) cout<<it<<" ";
			cout<<endl;
		}
		return;
	}
	ds.push_back(arr[ind]);
	s+=arr[ind];
	Prints(ind+1, ds,s, arr, sum, n);
	s-=arr[ind];
	ds.pop_back();
	Prints(ind+1, ds,s,arr,sum, n);
}
*/
//for one
/*
bool Prints(int ind,vector<int> &ds,int s, int arr[], int sum, int n){
	if (ind==n)
	{
		if(s==sum){
			for (auto it: ds) cout<<it<<" ";
			cout<<endl;
			return true;
		}
		return false;
	}
	ds.push_back(arr[ind]);
	s+=arr[ind];
	if(Prints(ind+1, ds,s, arr, sum, n)== true)
		return true;
	s-=arr[ind];
	ds.pop_back();
	if(Prints(ind+1, ds,s,arr,sum, n)==true)
		return true;
	return false;
}*/
//for count
int Prints(int ind,int s, int arr[], int sum, int n){
	if (ind==n)
	{
		if(s==sum)
			return 1;
		else return 0;
	}
	
	s+=arr[ind];
	int l=Prints(ind+1, s, arr, sum, n);
		
	s-=arr[ind];

	int r=Prints(ind+1, s,arr,sum, n);
		
	return l+r;
}
int main(int argc, char const *argv[])
{
	int arr[]={1,2,1};
	int n=3; int sum=2;
	
	cout <<Prints(0,0,arr, sum,n);

	return 0;
}