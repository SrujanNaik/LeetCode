#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
	public:
		std::string longestCommonPrefix(std::vector<std::string>& strs){
			std::string ans = "";

			sort(strs.begin(),strs.end());

			int n = strs.size();
			std::string first = strs[0],last = strs[n-1];
			for(int i = 0;i < std::min(first.size(),last.size());i++){
				if(first[i] != last[i]){
					return ans;
				}
				ans += first[i];
			}
			return ans;
		}
};


int main(){

	std::vector<std::string> strs = {"dog","racecar","car"};

	Solution solution;
	std::cout << solution.longestCommonPrefix(strs);

	return 0;
}
