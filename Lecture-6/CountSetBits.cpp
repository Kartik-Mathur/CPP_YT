// CountSetBits
#include <iostream>
using namespace std;

int main(){
	
	int mask = 1;

	int no = 15;
	int set_bits = 0;

	for(int i = 1; i<= 31; i++){
		if((no&mask)>0){
			set_bits++;
		}
		mask = mask * 2;
	}

	cout<<set_bits<<endl;
	return 0;
}