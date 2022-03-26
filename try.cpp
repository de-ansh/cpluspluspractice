#include<bits/stdc++.h>
using namespace std;
int min(int a[],int n,int k,int sum )
{   int ans=k+1;
    int low =1; int high=k+1;
    while(low<=high){
        int mid=(low+high)/2;
        int s=0;
        for(int i=0;i<n;i++)
            s+=a[i]/mid;
        if(s<=sum){
             ans=mid;
             high=mid-1;
        }
           
        else 
        low=mid+1;

    }
    return 0;
}
int main(){
    int n; cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n);
    int k=a[n-1];
    int sum;
    cin>>sum;
    int key=min(a,n,k,sum);
    cout<<key;
    return 0;
}