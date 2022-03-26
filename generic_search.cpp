#include<bits/stdc++.h>
using namespace std;
template<typename T>
int search (T arr[], int n, T key){
	for (int p=0;p<n;p++){
		if(arr[p]==key){
			return p;
		}
	}
}
int main(int argc, char const *argv[])
{
	int a[]= {1,2,3,4,6};
	int n= sizeof(a)/sizeof(int);
	int key=6;
	//cout<<search(a,n,key)<<endl;
	float b[]={1.1,1.2,1.3};
	int m= sizeof(b)/sizeof(float);
	float k= 1.3;
	cout<<search(b,m,k);
}
//Time Complexity is O(1). 