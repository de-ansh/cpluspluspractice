#include<bits/stdc++.h>
using namespace std; 
void binary(int arr[], int n){
    int low=0,mid=0,high=n-1;
    for(int i=0;i<n;i++){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }
        else if(arr[mid]==1)
            mid++;
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
}
int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    binary(arr,n);
    for(auto it: arr)
        cout<<it<<"\n";
    return 0;
}