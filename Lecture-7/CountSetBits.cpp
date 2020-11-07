// CountSetBits
#include <iostream>
using namespace std;

int main(){
	
	int no;
	cin>>no; // no = 10;
	int set_bitCount = 0; // Variable to count set bits
	
	while(no!=0){
		if((no&1) == 1){
			set_bitCount++;
		}
		no = no>>1;
	}
	cout<<"Set Bits: "<<set_bitCount;
	cout<<endl;
	return 0;
}