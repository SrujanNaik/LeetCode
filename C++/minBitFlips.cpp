#include<iostream>

int main(){
	int start = 3;
	int goal = 4;

	const int bit_size = 32;
	int Sol = 0;
	int temp = start ^ goal;
	for(int i = 0;i < bit_size;i++){
		if(temp&(1<<i)){
			Sol++;
		}
	}
	std::cout << Sol << "\n";

	return 0;
}
