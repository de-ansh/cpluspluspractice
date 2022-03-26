#include <bits/stdc++.h>
using namespace std;
string removeCharRecursive(string str,
                           char X)
{
    // Base Case
    if (str.length() == 0) {
        return "";
    }
 
    // Check the first character
    // of the given string
    if (str[0] == X) {
 
        // Pass the rest of the string
        // to recursion Function call
        return removeCharRecursive(str.substr(1), X);
    }
 
    // Add the first character of str
    // and string from recursion
    return str[0]
           + removeCharRecursive(str.substr(1), X);
}
/*int lengthstring(char s[]){
	if (s[0]='\0')
		return 0;
	int small= lengthstring(s+1);
	return 1+small;
}
int main(int argc, char const *argv[])
{
	char str [100];
	cin>>str;
	int len = lengthstring(str);
	cout<<len<<"\n";
	//removex(str);
	cout<<str<<"\n";
	len = lengthstring(str);
	cout<<len<<"\n";
	return 0;
}
/int lengthstring(string s){
	if (s[0]='\0')
		return 0;
	int small= lengthstring(s+1);
	return 1+small;
}*/
int main()
{
    // Given String
    string str ;
 	cin>>str;
    // Given character
    char a,X ;
    cin>>a>>X;
 
    // Function Call
   // int len = lengthstring(str);
    //cout<< len<<"\n";
    str = removeCharRecursive(str,a, X);
    cout << str;
    return 0;
}