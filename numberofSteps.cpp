#include<iostream>

class Solution{
	public:
		int numberofSteps(int num){
			int count = 0;
			while(num != 0){
				if((num%2) != 0){
					num -= 1;
					count++;
				}
				else{
					num = num/2;
					count++;
				}
			}
			return count;
		}
};

int main(){
	int num = 123;
	Solution sol;
	std::cout << sol.numberofSteps(num);

	return 0;
}
