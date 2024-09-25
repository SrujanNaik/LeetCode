#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
	public:
		std::vector<int> frequencySort(std::vector<int>& nums){
			int freq[200] = {0};
			for(int i = 0;i < nums.size();i++){
				freq[nums[i] + 100]++;
			}

			sort(nums.begin(), nums.end(), [&](int x, int y){
            return (freq[x+100]==freq[y+100])?x>y:freq[x+100]<freq[y+100];
        });

			return nums;
		}
};

int main(){
	std::vector<int> nums = {1,1,2,2,2,3};

	Solution solution;
	std::vector<int> vec = solution.frequencySort(nums);

    // Print the vector using a range-based for loop
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    return 0;
}

