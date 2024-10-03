#include<iostream>
#include<vector>

class Solution{
	public:
		int maximumWealth(std::vector<std::vector<int>>& accounts){
			int max = 0,sum = 0;
			std::vector<int> customer;
			for(int i = 0;i < accounts.size();i++){
				for(int j = 0;j < accounts[i].size();j++){
					sum += accounts[i][j];
				}
				max = std::max(max,sum);
				sum = 0;
			}
			return max;
		}
};

int main(){
	std::vector<std::vector<int>> accounts = {{1,5},{7,3},{3,5}};
	Solution sol;
	std::cout << sol.maximumWealth(accounts);

	return 0;
}
