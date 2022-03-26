#include<bits/stdc++.h>
using namespace std;
int fib(int n){
	if(n == 0){
		return 0;
	} 
	if(n==1)
		return 1;
	int t= fib(n-1);
	int d= fib(n-2);
	
	return t+d;
}


int main(int argc, char const *argv[])
{
	
	int d=fib(5);
	cout<<d<<endl;
	return 0;
}
