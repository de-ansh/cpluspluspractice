#include <bits/stdc++.h>
using namespace std;

bool compare(string x, string y) 
{ 
    for (int i = 0; i < min(x.size(), y.size()); i++) { 
        if (h[x[i]] == h[y[i]]) 
            continue; 
        return h[x[i]] < h[y[i]]; 
    } 
    return x.size() < y.size(); 
} 
 
void solve(){ 
  string s; 
  cin>>s; 
  ve<string> arr; 
  ll n; 
  cin>>n; 
  while(n--){ 
    string t; cin>>t; 
    arr.pb(t); 
 
  } 
  h.clear(); 
    for (int i = 0; i < s.size(); i++) 
        h[s[i]] = i;    
    sort(arr.begin(), arr.end(), compare); 
    for (auto x : arr) 
        cout << x <<endl; 
}
 int main()
{
    solve();
    return 0;
}