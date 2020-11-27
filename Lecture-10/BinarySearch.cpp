// BinarySearch
#include <iostream>
using namespace std;

int main(){
	
	int a[]={1,3,4,5,9};
	int n = sizeof(a)/sizeof(int);
	for(int i = 0; i < n; i++){
		cout<<a[i]<<' ';
	}
	cout<<endl;
	int key;
	cin>>key;


	int s = 0, e = n-1,ans = -1;
	while(s<=e){
		int m = (s+e)/2;
		if(a[m] == key){
			// m index is the answer
			ans = m;
			break; // this will exit us from the loop inside which we have written it
		}
		else if(key>a[m]){
			s = m + 1;
		}
		else{
			e = m-1;
		}
	}
	
	if(ans == -1){
		cout<<"Key not found"<<endl;
	}
	else{
		cout<<"Key found at "<<ans<<endl;
	}

	
	return 0;
}