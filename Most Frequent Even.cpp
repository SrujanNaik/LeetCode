#include<iostream>
#include<vector>

class Solution{
	public:
		void mostFrequentEven(int nums[]){
			for(int i = 0;i < nums.size();i++){
				std::cout << nums[i] << "/n";
			}
		}
};

int main(){
	int nums[7] = {0,1,2,2,4,4,1};
	int solution;

	Solution solution1;
	solution1.mostFrequentEven(nums);

//	std::cout << soulution << '\n';
}


