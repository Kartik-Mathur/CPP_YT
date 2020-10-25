// NumberPattern
#include <iostream>
using namespace std;

int main(){
	
	int row,n,x,col;
	cin>>n;

	for(row = 1; row<=n ; row = row + 1){

		if(row%2 == 0){
			// row is even
			x = 0;
		}
		else{
			// row is odd
			x = 1;
		}
		for(col = 1;col<=row;col = col + 1){
			cout<<x<<' ';
			x = 1-x;
		}
		cout<<endl;
	}


	cout<<endl;
	return 0;
}