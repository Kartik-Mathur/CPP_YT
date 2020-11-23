// ReverseAnArray
#include <iostream>
using namespace std;

int main(){
	
	int arr[]={1,2,3,4,5,6,7,8,9};
	int n = 9;
	cout<<"Before reverse : ";
	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}	
	cout<<endl;

	int i = 0, j = n-1;

	while(i<j){
		// int temp = arr[i];
		// arr[i] = arr[j];
		// arr[j] = temp;
		swap(arr[i],arr[j]);
		i++;
		j--;
	}
	cout<<"After reverse : ";

	for(int i = 0 ; i<n ; i++){
		cout<<arr[i]<<' ';
	}	
	cout<<endl;
	return 0;
}