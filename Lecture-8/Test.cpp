#include <iostream>
using namespace std;

int main(){
	
	int arr[1000];
	// index will start from 0 and last index will be 99
	int n;
	cout<<"Enter value of n(max: 1000)";
	cin>>n;

	// arr[0] = 10;
	// arr[1] = 20;
	// arr[2] = 30;
	// arr[3] = 40;
	// arr[4] = 50;
	// arr[5] = 60;
	for(int i = 0 ; i<n ; i++){
		arr[i] = i+1;
		// cin>>arr[i];
	}

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}	
	cout<<endl;
	// cout<<arr[0]<<endl;
	// cout<<arr[1]<<endl;
	// cout<<arr[2]<<endl;
	// cout<<arr[3]<<endl;
	// cout<<arr[4]<<endl;
	// cout<<arr[5]<<endl;



	return 0;
}