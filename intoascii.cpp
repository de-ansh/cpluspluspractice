#include<bits/stdc++.h>
using namespace std;
int main(){
  string s;
  cin>>s;
  if(s.size()==1) cout<<s+s+s+s+s+s<<endl;
  if(s.size()==2) cout<<s+s+s<<endl;
  if(s.size()==3) cout<<s+s<<endl;
  return 0;
 }