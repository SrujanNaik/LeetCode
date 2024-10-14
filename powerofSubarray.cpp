#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<int> resultsArray(std::vector<int>& nums, int k) {
		int Snums = nums.size();
		int n = Snums;
        	std::vector<int> result(n-k+1,-1);
		int valid = 0;
		for(int i = 0;i < Snums;i++){
			if(i && nums[i-1]+1 == nums[i]){
				valid++;
			}else{
				valid = 0;
			}
			if(valid >= k-1){
				result[i-k+1]=nums[i];
			}
		}
		return result;
   }
};

int main(){
	std::vector<int> nums = {1,2,3,4,3,2,5};
	int k = 3;

	Solution sol;
	std::vector<int> ans = sol.resultsArray(nums,k);
	int Sans = ans.size();
	for(int i = 0;i < Sans;i++){
		std::cout << ans[i] <<"\n";
	}

	return 0;
}
