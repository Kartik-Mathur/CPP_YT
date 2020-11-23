// LinearSearch
#include <iostream>
using namespace std;

int main(){
	
	int arr[]={1,4,8,2,6,7};
	int n = 6;

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}	
	cout<<endl;
	
	int key;
	cout<<"Enter the element to search : ";
	cin>>key;

	int ans = -1;
	for(int i = 0; i<n; i++){
		if(arr[i] == key){
			ans = i;
		}
	}

	if(ans == -1){
		cout<<"Key Not Found";
	}
	else{
		cout<<"Key found at index "<<ans;
	}

	cout<<endl;
	return 0;
}