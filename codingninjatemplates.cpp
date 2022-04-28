#include<bits/stdc++.h>
using namespace std;
template <typename T>
class stackwithtemplates{
	T *data;
	int nextindex;
	int capacity;
	public:
		stackwitharr(){
			data=new T [4];
			nextindex=0;
			capacity=4;
		}
		int size(){
			return nextindex;
		}
		bool isempty(){
			/*if(nextindex==0){
				return true;
			}
			else 
				return false;
				*/
			return nextindex==0;
		}
		void push(T element){
			if(nextindex==capacity){
				int *newdata= new T[2*capacity];
				for(int i=0;i<capacity;i++){
					newdata[i]=data[i];
				}
				capacity*=2;
				delete []data;
				data=newdata;
			}
			data[nextindex]=element;
			nextindex++;
		}
		T pop(){
			if(nextindex==0){
				cout<<"stack is empty";
				return 0;
			}
			nextindex--;
			return data[nextindex];
		}
		T top(){
			return data[nextindex-1];
		}
};
int main(int argc, char const *argv[])
{
	stackwithtemplates<int> s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(20);
	s.push(60);
	s.push(70);
	cout<<s.top()<<endl;
	cout<<s.isempty()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.top()<<endl;
	cout<<s.size()<<endl;
	return 0;
}