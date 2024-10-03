#include<iostream>
#include<vector>

class Solution{
	public:
		std::vector<int> runningSum(std::vector<int>& nums){
			int temp = 0;
			std::vector<int> runningSum;
			for(int i = 0;i < nums.size();i++){
				temp += nums[i];
				runningSum.push_back(temp);
			}
			return runningSum;
		}
};

int main(){
	std::vector<int> nums = {3,1,2,10,1};
	Solution solution;
	std::vector<int> ans = solution.runningSum(nums);
	for(int i = 0;i < ans.size();i++){
		std::cout << ans[i] << std::endl;
	}

	return 0;
}
