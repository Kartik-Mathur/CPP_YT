// MaximumOccuringCharacter
#include <iostream>
using namespace std;

int main(){
	
	int a[]={1,3,2,4,1,5,1,0,4,5,5,5,5};
	int n = sizeof(a)/sizeof(int);

	int freq[100]={0};

	for(int i = 0 ; i < n ; i++){
		int indx = a[i];
		freq[indx]++;
	}

	// iterator over freq array
	int ans = 0,mx = 0;
	for(int i = 0 ; i <= n ; i++){
		if(freq[i]>mx){
			ans = i;
			mx = freq[i];
		}
	}
	cout<<"Maximum Time occuring integer is "<<ans;


	cout<<endl;
	return 0;
}