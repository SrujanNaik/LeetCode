#include<iostream>
#include<vector>

int count = 0;
void backtrack(std::vector<int>& nums,std::vector<int>& current,int index,int max){
	int sol = 0;

	if(index >0){
		for(int nums : current){
			sol |= nums;
		}
		if(sol == max){
			count++;
		}
	}

	for(int i = index;i < nums.size();i++){
		current.push_back(nums[i]);

		backtrack(nums,current,i+1,max);

		current.pop_back();
	}

}

int countMaxOrSubsets(std::vector<int>& nums){
	int Snums = nums.size();
	int sol = 0;
	std::vector<int> current;

	for(int i = 0;i < Snums;i++){
		sol = sol | nums[i];
	}

	backtrack(nums,current,0,sol);

	return count;
}

int main(){
	std::vector<int> nums = {2,2,2};

	std::cout << countMaxOrSubsets(nums);

	return 0;
}
