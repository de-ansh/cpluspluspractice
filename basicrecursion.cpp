#include<bits/stdc++.h>
using namespace std;
void print(int n){
	if(n<1)	return;
	cout<<n<<" ";
	n--;
	print(n);
}
void f(int n, int i){
	if (i>n) return;
	f(n, i+1);
	cout<<i<<" ";
}
void sum(int n,int sm){
	if(n<1){
		cout<<sm;
		return;
	}
	
	sum(n-1,sm+n);
	
}
int funcsum(int n){
	if(n==0)
		return 1;
	return n*funcsum(n-1);
}
void reverse(int arr[], int i,int n){
	if(i>=n/2)
		return;
	swap(arr[i],arr[n-i-1]);
	reverse(arr,i+1,n);
}
bool palin(string &s, int i){
	if(i>=s.size()/2) return true;
	if (s[i]!=s[s.size()-i-1])	return false;
	
	return palin(s, i+1);
}
int fibo(int n){
	if(n<=1)
		return n;
	int ls=fibo(n-1);
	int sls=fibo(n-2);
	return ls+sls;
}
int main(int argc, char const *argv[])
{
	
	string s;
	int n;
	cin>> n;
	

	
	cout<<fibo(n);
	
	return 0;
}