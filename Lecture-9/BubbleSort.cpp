#include <iostream>
using namespace std;

int main(){
	
	int a[]={5,3,2,4,1,10,12,3,4,5,6,8,90,-1,-2,-3,-4};
	int n = sizeof(a)/sizeof(int);

	for(int i = 0; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	// Loop for iterations
	for(int i = 0 ; i<=n-2 ; i++){
		// We need to write a loop for comparisons
		for(int j = 0 ; j <= n-2-i ; j++){
			if(a[j]>a[j+1]){
				swap(a[j],a[j+1]);
			}
		}
	}

	for(int i = 0; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;


	return 0;
}