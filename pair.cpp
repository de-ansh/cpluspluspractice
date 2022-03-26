#include <bits/stdc++.h>
using namespace std;
void explainpari(){
	pair<int,int> p={1,3};
	cout<<p.first<<" "<<p.second<<"\n";
	pair<int,pair<int,int>> r={1,{2,3}};
	cout<<r.first<<" "<<r.second.first<<" "<<r.second.second<<"\n";
	pair<int,int> arr[]={{1,2},{2,5},{5,1}};
	cout<<arr[1].first<<" "<<arr[1].second;
	
}
void explainvec(){
	std::vector<int> v;
	v.push_back(1);//inserts
	v.emplace_back(2);//inserts
	vector<pair<int,int>>v1;
	v1.emplace_back(1,2);
	v1.push_back({2,3});
	vector<int>vv(5,100);//{100,100,100,100,100}
	std::vector<int> v2(5);//{0,0,0,0,0}
	vector<int>v3(5,20);//{20,20,20,20,20}
	vector<int>v4(v3);//{20,20,20,20,20}
	/*vector<int>:: iterator it =v.begin();
	it++;
	cout<<*(it)<<" ";
	it= it+2;
	cout<<*(it)<<" ";
	vector<int>:: iterator it1 =v.end();
	//vector<int>:: iterator it =v.rbegin();
	//vector<int>:: iterator it1 =v.rend();
	for(vector<int> v::iterator it =v.begin() ;it!= v.end(); it++ ){
		cout<<*(it)<<" ";
	}*/
	for(auto i =v.begin(); i!= v.end(); i++){
		cout<<*(i)<<" ";
	}

	
	vv.pop_back();
	vv.swap(v3);
	for(auto it : vv){
		cout<<it<<"\n";
	}
	
	
}
void explainstack(){
	stack<int> s;
	s.push(1);
	s.emplace(2);
	s.push(3);
	cout<<s.back();
}
void explainmap(){
	map<int,int> m{ {1,2} , {2,3} , {3,4} };
    /* creates a map m with keys 1,2,3 and 
        their corresponding values 2,3,4 */  
    
    map<string,int> map1; 
    /*  creates a map with keys of type character and 
      values of type integer */
    
    map1["abc"]=100;    // inserts key = "abc" with value = 100
    map1["b"]=200;      // inserts key = "b" with value = 200
    map1["c"]=300;      // inserts key = "c" with value = 300
    map1["def"]=400;    // inserts key = "def" with value = 400
    
    map<char,int> map2 (map1.begin(), map1.end());
    /* creates a map map2 which have entries copied 
        from map1.begin() to map1.end() */ 
    
    map<char,int> map3 (m);
}

int main(int argc, char const *argv[])
{
	explainstack();
	return 0;
}
