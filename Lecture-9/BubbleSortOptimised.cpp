#include <iostream>
using namespace std;

int main(){
	
	int a[]={5,1,2,3,4};
	int n = sizeof(a)/sizeof(int);

	for(int i = 0; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	// Loop for iterations
	for(int i = 0 ; i<=n-2 ; i++){
		// We need to write a loop for comparisons
		int cnt = 0;
		for(int j = 0 ; j <= n-2-i ; j++){
			if(a[j]>a[j+1]){
				cnt = cnt+1;
				swap(a[j],a[j+1]);
			}
		}

		if(cnt == 0){
			// that means no swapping took place, hence the array is sorted
			break; // this will stop the loop, or exit you from the loop
		}
	}

	for(int i = 0; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;


	return 0;
}