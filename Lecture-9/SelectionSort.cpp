// SelectionSort
#include <iostream>
using namespace std;

int main(){
	int a[]= {5,3,1,2,4,10,2,3,4,-1,0,100,19};
	int n = sizeof(a)/sizeof(int);
	for(int i = 0; i < n ; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;

	for(int i = 0 ; i <= n-2 ; i++){
		int mi = i;
		for(int j = i+1;j<n;j++){
			if(a[j]<a[mi]){
				mi=j;
			}
		}
		swap(a[mi],a[i]);
	}

	for(int i = 0; i < n ; i++){
		cout<<a[i]<<' ';
	}

	cout<<endl;
	return 0;
}