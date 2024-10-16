#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
	public:
		int rangeSum(std::vector<int>& nums,int n,int left,int right){
			std::vector<int> Narray;
			int Snums = nums.size();
			long long temp = 0,sol = 0;
			for(int i = 0;i < Snums;i++){
				temp = 0;
				for(int j = i;j < Snums;j++){
					temp += nums[j];
					Narray.push_back(temp);
				}
			}
			auto first = Narray.begin();
			auto last = Narray.end();

			std::sort(first,last);

			for(int i = left-1;i < right;i++){
				sol += Narray[i];
			}
			int mod = 1000000007;
			return (int)sol%mod;
		}
};

int main(){
	std::vector<int> nums = {1,2,3,4};
	int n = 4;
	int left = 4;
	int right = 4;

	Solution sol;
	std::cout << sol.rangeSum(nums,n,left,right);

	return 0;
}
