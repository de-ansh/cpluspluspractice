#include <bits/std++.h>
using namespace std;
void rotate(int mat[][], int n){

}
int main(){
	int n;
	int mat[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cin>>mat[i][j];
	}
	rotate(mat,n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			cout<<mat[i][j];
	}
}