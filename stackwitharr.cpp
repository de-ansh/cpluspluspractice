#include<bits/stdc++.h>
using namespace std;
class stackwitharr{
	int *data;
	int nextindex;
	int capacity;
	public:
		stackwitharr(){
			data=new int [4];
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
		void push(int element){
			if(nextindex==capacity){
				int *newdata= new int[2*capacity];
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
		int pop(){
			if(nextindex==0){
				cout<<"stack is empty";
				return INT_MIN;
			}
			nextindex--;
			return data[nextindex];
		}
		int top(){
			return data[nextindex-1];
		}

	};
	int main(){
		stackwitharr s;
		s.push(10);
		s.push(20);
		s.push(30);
		s.push(40);
		s.push(50);

		cout<<s.top()<<endl;

		cout<<s.pop()<<endl;
		cout<<s.isempty()<<endl;
		cout<<s.size()<<endl;
	}