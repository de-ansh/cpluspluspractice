#include<bits/stdc++.h>
using namespace std;
class stackwitharr{
	int *data;
	int nextindex;
	int capacity;
	public:
		stackwitharr(int totalsize){
			data=new int [totalsize];
			nextindex=0;
			capacity=totalsize;
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
				cout<<"Stack FULL";
				return;
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
		stackwitharr s(4);
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