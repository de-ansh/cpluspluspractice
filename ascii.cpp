#include<bits/stdc++.h>
using namespace std;
int main(){
	int arr[26];
	for (int i = 0; i < 26; ++i)
	{
		cin>>arr[i];
	}
	for (int i = 0; i < 26; ++i)
	{
		char c= arr[i]+96;
		cout<<c;
	}
}