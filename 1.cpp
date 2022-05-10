#include<bits/stdc++.h>
using namespace std;
int findDuplicate(int arr[], int n){
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i-1])
            return arr[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<findDuplicate(arr,n);
    return 0;

}