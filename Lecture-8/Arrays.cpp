// Arrays
#include <iostream>
using namespace std;

int main(){
	
	// int arr[100]={6,5,4,7,8,9,10,1};// 1st Way to initialize the array
	int arr[]={6,5,4,7,8,9,10,1,11};// 1st Way to initialize the array
	// While initializing the size is optional
	int n = 9;

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}	
	cout<<endl;
	// Output : 11 1 10 9 8 7 4 5 6
	for(int i = n-1 ; i>=0 ; i--){
		cout<<arr[i]<<' ';
	}	
	cout<<endl;
	return 0;
}