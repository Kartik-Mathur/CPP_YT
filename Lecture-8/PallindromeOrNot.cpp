// PallindromeOrNot/
#include <iostream>
using namespace std;

int main(){
	
	int arr[]={1,2,3,1};
	int n = 4;
	bool isPallindrome = true;

	int i = 0,j=n-1;

	while(i<j){
		if(arr[i] != arr[j]){
			isPallindrome = false;
		}
		i++;
		j--;
	}

	if(isPallindrome == true){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}



	cout<<endl;
	return 0;
}