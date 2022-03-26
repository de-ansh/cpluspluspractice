//#include<bits/stdc++.h>
//using namespace std;
/*void search(string text,string pat){
	 int found = text.find(pat);
   	 while (found != string::npos) {
        cout <<  found << endl;
        found = text.find(pat, found + 1);
    }
}
int main(){
	string text = "aabaaacaadaabaaba";
	string pat="aaba";
	search(text,pat);
	
}*/
//#include<iostream>//
//using namespace std;
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fastio ios_base::sync_with_stdio(false); cin.tie(0) ; cout.tie(0);
int main(){
    int n{26};
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    string s = "abcdefghijklmnopqrstuvwxyz";
    for(int i=0;i<n;i++){
        cout<<s[v[i]-1];
    }
    
    return 0;
}