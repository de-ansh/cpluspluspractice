#include <bits/stdc++.h>
using namespace std;
/*int fact(int n){
	if (n==0)
		return 0;
	int r=n%10;
	if (r==0)
	{
		return fact(n/10)+1;
	}
	else
		return fact(n/10);
}
int multi(int n, int m){
	if(n==1)
		return m;
	int r= m+ multi(n-1,m);
	return r;
}
double geosum(int n){
	if (n==0)
		return 0;
	double ans= 1/(double)pow(2,n) + geosum(n-1);
	return ans;

}
bool isPalRec(char str[],
              int s, int e)
{
     
    // If there is only one character
    if (s == e)
    return true;
 
    // If first and last
    // characters do not match
    if (str[s] != str[e])
    return false;
 
    // If there are more than
    // two characters, check if
    // middle substring is also
    // palindrome or not.
    if (s < e + 1)
    return isPalRec(str, s + 1, e - 1);
 
    return true;
}
 
bool isPalindrome(char str[])
{
    int n = strlen(str);
     
    // An empty string is
    // considered as palindrome
    if (n == 0)
        return true;
     
    return isPalRec(str, 0, n - 1);
}
int sum(int n){
	if(n%10==0)
		return n;
	int t=n%10;
	int s= t+sum(n/10);
	return s;
}
long long expo(int x, int n){
	if(n==0)
		return 1;
	long long ans= x*expo(x,n-1);
	return ans;
}
int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n-1) + fib(n-2);
}

int main(int argc, char const *argv[])
{
	
	cout<<fib(8)<<endl;
	return 0;
}*/
bool issorted(int a[], int n){
	if(n==0||n==1)
		return true;
	if(a[0]>a[1])
		return false;
	bool issmaller= issorted(a+1,n-1);
	return issmaller;
	//if(issmaller) return true;
	//else return false;
}
int array_sum(int a[],int n){
	if(n==0||n==1)
		return a[0];
	int i= a[0]+ array_sum(a+1,n-1);
	return i;
}

int found(int arr[], int size, int x) {
    int rec;
 
    size--;
 
    if (size >= 0) {
        if (arr[size] == x)
            return size;
        else
            rec = found(arr, size, x);
    }
    else
        return -1;
 
    return rec;
}

int first(int a[], int n, int x){
	if(n==0)
		return -1;
	if (a[0]==x)
	{
		return 0;
	}
	int ans= first(a+1,n-1,x);
	if(ans==-1)
		return -1;
	else
		return ans+1;
}
int allindices(int a[], int n, int x)
{
	std::vector<int> v;

	if (n==0)
		return -1;
	int k;
	if(a[0]==x){

		cin>>k;
		v.insert(k);
	}
	int t=allindices(a+1,n-1,x);

	return t;


}
int main(int argc, char const *argv[])
{
	int n,x;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	
	cin>>x;
	/*bool sorted_not=issorted(a,n);
	if (sorted_not)
	{
		cout<<"true";
	}
	else cout<<"false";*/
	int s=allindices(a,n,x);
	

	cout<<s+1;
	return 0;
}