#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n==0 )
		return 0;
	if(n==1)
		return 1;
	int t=fib(n-1);
	int T=fib(n-2);
	return t+T;
}
int main(){
	cout<<fib(6)<<"\n";
	//double *pd = new double;
	
}
