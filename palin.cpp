#include <bits/stdc++.h>
using namespace std;
bool ispalindrome(int x){
	if(x<0)
		return x;
	double log= log10(x);
	int totalDigit= (int)(floor(log))+1;
	int mask= (int) pow(10,totalDigit-1);
	for(int i=0;i<(totalDigit/2);i++){
		int mostsginificantDigit= x/mask;
		int onesplaceDigit= x%10;
		if(mostsginificantDigit!=onesplaceDigit){
			return false;
		}
		x%=mask;
		x/=10;
		mask/=100;
	}
	return true;
}
int reversebit(int x){
	int output =0;
	while(x!=0){
		output=output<<1;
		if(x&1==1){
			output= output|1;
		}
		x=x>>1;
	}
	return output;
}
vector<int> getprimes(int n){
	vector<int> primes;
	int i=2;
	while(i<n){
		int j=2;
		bool isprime= true;
		while(j<i){
			if(i%j==0)
				isprime= false;
			j+=1;

		}
		if(isprime)
			primes.push_back(i);
		i+=1;

	}
	return primes;
}

int main(int argc, char const *argv[])
{
	int x;
	cin>>x;
	vector<int>v= getprimes(x);
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i]<<" ";
	}
	return 0;
} 