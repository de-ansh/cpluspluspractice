#include <bits/stdc++.h>
using namespace std;
class hero
{
private:
	char level;
public:
	int health;
	/*hero(){
		cout<<"Constructor called"<<"\n";
	}*/
	/*hero(int health){
		this->health=health;
	}
	hero(int health,char level){
		this->health=health;
		this->level=level;
	}*/
	void print(){
		cout<<level<<"\n";
	}
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

	hero *h1= new hero();
	h1->setLevel('B');
	h1->setHealth(70);
		h1->print();
	cout<<h1->getHealth()<<"\n";
	/*h1.health=70;
	int h;
	cin>>h;
	char l;
	cin>>l;
	h1.setLevel(l);
	h1.setHealth(h);
	
	cout<<h1.getHealth()<<"\n";*/

		
	
	return 0;
}
//padding and greedy in oops