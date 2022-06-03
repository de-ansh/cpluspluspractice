#include <bits/stdc++.h>
using namespace std;
class hero
{
private:
	char level;
public:
	int health;
	
	int getHealth(){
		return health;
	}
	char getlevel(){
		return level;
	}
	void setHealth(int h){
		health=h;
	}
	void setLevel( char l){
		level =l;
	}
	
};
int main(int argc, char const *argv[])
{

	hero h1;
	h1.health=70;
	int h;
	cin>>h;
	char l;
	cin>>l;
	h1.setLevel(l);
	h1.setHealth(h);
	
	cout<<h1.getHealth()<<"\n";
		
	
	return 0;
}