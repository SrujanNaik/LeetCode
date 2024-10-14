#include<iostream>
#include<vector>

class Solution {
public:
	std::vector<int> resultsArray(std::vector<int>& nums, int k) {
        	std::vector<int> result;
		int valid = 1;
		int Snums = nums.size();
		for(int i = k;i < Snums+1;i++){
			for(int j = i-k+1;j < i;j++){
				if(nums[j-1]+1 == nums[j]){
					valid++;
				}
			}
			if(valid == k){
				result.push_back(nums[i-1]);
				valid = 1;
			}else{
				result.push_back(-1);
				valid = 1;
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
