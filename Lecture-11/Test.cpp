#include <iostream>
using namespace std;

int main(){
	
	// int a[][4]={
	// 	{1,2,3,4},
	// 	{5,6,7,8},
	// 	{9,10,11,12},
	// };

	int a[100][100];
	int n,m;
	cin>>n>>m;
	int number = 1;
	for(int row = 0 ; row < n ; row++){
		for(int col = 0 ; col < m ; col++){
			// cin>>a[row][col];
			a[row][col] = number;
			number++;
		}
	}
	cout<<"Printing Row wise : "<<endl;
	for(int row = 0 ; row < n ; row++){
		for(int col = 0 ; col < m ; col++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}
	cout<<"Printing Diagnol "<<endl;
	for(int row = 0 ; row < n ; row++){
		for(int col = 0 ; col < m ; col++){
			if(row>=col){
				cout<<a[row][col]<<' ';
			}
		}
		cout<<endl;
	}

	cout<<"Printing Upper Diagnol "<<endl;
	for(int row = 0 ; row < n ; row++){
		for(int col = 0 ; col < m ; col++){
			if(col>=row){
				cout<<a[row][col]<<' ';
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

	cout<<"Printing Another Pattern "<<endl;
	for(int row = 0 ; row < n ; row++){
		for(int col = 0 ; col < m ; col++){
			if( (row+col) == n-1 || (row == col) ){
				cout<<a[row][col]<<' ';
			}
			else{
				cout<<"  ";
			}
		}
		cout<<endl;
	}

	cout<<"Printing Column wise : "<<endl;
	for(int col = 0 ; col < m ; col++){
		for(int row = 0 ; row < n ; row++){
			cout<<a[row][col]<<' ';
		}
		cout<<endl;
	}

	// Print Wave Pattern
	cout<<"Wave Print Output : ";
	for(int col = 0 ; col < m ; col++){
		if(col%2 == 0){ // column is even
			for(int row = 0 ; row <n ; row++){
				cout<<a[row][col]<<' ';
			}
		}
		else{ // column is odd
			for(int row = n-1 ; row>=0 ; row--){
				cout<<a[row][col]<<' ';
			}
		}
	}
	cout<<endl;
	// a[1][2] = 6;
	// a[2][1] = 8;

	// cout<<a[1][2]<<endl;
	// cout<<a[2][1]<<endl;


	return 0;
}