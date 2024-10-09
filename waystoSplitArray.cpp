#include <iostream>
#include<vector>

class Solution{
    public:
    int waysToSplitArray(std::vector<int>& nums){
        int rightSubArray = 0,leftSubArray = 0,validSplit = 0;
        for(int i = 0;i < nums.size();i++){
            rightSubArray += nums[i];
        }
        
        for(int i = 0;i < nums.size()-1;i++){
          leftSubArray += nums[i];
          rightSubArray -= nums[i];
          if(leftSubArray >= rightSubArray){
            validSplit++;
          }
        }
        return validSplit;
    }
};

int main() {
    // Write C++ code here
    std::vector<int> nums = {2,3,1,0};
    Solution sol;
    std::cout << sol.waysToSplitArray(nums);

    return 0;
}