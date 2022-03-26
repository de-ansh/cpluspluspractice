#include<bits/stdc++.h>
using namespace std;
/*int search(int arr[],int n, int target){
	
	int low=0,high=n-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid] == target)
			return mid;
		else if(target > arr[mid])
			low=mid+1;
		else
			high=mid-1;
	}
	return -1;
}
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	int arr[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
	}
	int target;
	cin>>target;
	int s=search(arr,n,target);
	cout<<s<<"\n";
	return 0;
}*/
int search(vector<int>& nums, int target){
	int n= nums.size()-1;
	int lo=0; int high =n-1;
	while(lo<=high){
		int mid=(lo+high)/2;
		if(nums[mid]==target)
			return mid;
		else if(nums[mid]<target)
			lo=mid+1;
		else
			high=mid-1;

	}
	return -1;
}
int firstocc(vector<int>& nums, int target){
	int n= nums.size();
	int lo=0; int high=n-1;

	while(lo<=high){
		int mid=(lo+high)/2;
		int ans=-1;
		if (nums[mid]== target)
		{
			ans= mid;
			high=mid-1;
			continue;

		}
		if (nums[mid]<target)
		{
			lo=mid+1;
		}
		else
			high=mid-1;
	}
	return lo;
}
int lastocc(vector<int>& nums, int target){
	int n= nums.size();
	int lo=0; int high=n-1;
	int ans=-1;
	while(lo<=high){
		int mid=(lo+high)/2;
		
		if (nums[mid]== target)
		{
			ans= mid;
			lo=mid+1;
			continue;

		}
		if (nums[mid]<target)
		{
			lo=mid+1;
		}
		else
			high=mid-1;
	}
	return ans;
}
int searchrecur(int low, int high, vector<int>& nums, int target )
{
	if (high<low) return -1;
	int mid=(low+high)/2;
	if (nums[mid]==target) return mid;
	if (nums[mid]>target)  return searchrecur(low,mid-1, nums, target);
	return searchrecur(mid+1,high,nums,target);
}
int main(int argc, char const *argv[])
{
	vector<int> nums;
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int k;
		cin>>k;
		nums.push_back(k);
	}
	int target; cin>>target;
	int s=searchrecur(0,n-1,nums,target);
	cout<<s;
	return 0;
}