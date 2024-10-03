#include<iostream>
#include<vector>

class Solution{
	public:
		bool validPartition(std::vector<int>& nums){
			int sub[3],track = 1;
			int j = 0;
			int dp = nums[0];
			sub[j++] = nums[0];


			for(int i = 1;i < nums.size();i++){
				if(dp == nums[i] || (((dp + 1) == nums[i]) || ((dp - 1) == nums[i]))){
					sub[j++] = nums[i];
					dp = nums[i];
					track++;
				}
				if(track != j){
					return false;
				}
				if(j == 2||j == 3){
					if((sub[j-1] + 1) == sub[j-2] || (sub[j-1] - 1) == sub[j-2]){
						continue;
					}
					j = 0;
					track = 0;
				}
				std::cout << track;
				std::cout << j << std::endl;
			}
			if((sub[j-1] + 1) == sub[j-2] || (sub[j-1] - 1) == sub[j-2] && (j - 1)==1){
				return false;
			}
			return true;
		}
};

int main(){
	std::vector<int> nums = {4,4,4,5,6};

	Solution solution;
	std::cout << solution.validPartition(nums);

	return 0;
}
