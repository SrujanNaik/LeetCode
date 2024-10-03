#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>

class Solution{
	public:
		std::vector<int> addNegabinary(std::vector<int>& arr1,std::vector<int>& arr2){
			int num1 = 0,num2 = 0,j = 0;
			std::vector<int> ans;
			for(int i = arr1.size()-1;i >= 0;i--){
				if(arr1[i] == 1){
					num1 += pow(-2,j);
				}
				j++;
			}
			j = 0;
			for(int i = arr2.size()-1;i >= 0;i--){
				if(arr2[i] == 1){
					num2 += abs(pow(-2,j));
				}
				j++;
			}

			int sol = num1 + num2;

			while(sol != 0){
				std::cout << sol%2;
				ans.push_back(abs(sol%2));
				sol = sol / 2;
			}
			reverse(ans.begin(),ans.end());
			return ans;

		}
};

int main(){
	std::vector<int> arr1 = {1};
	std::vector<int> arr2 = {1};

	Solution solution;
	std::vector<int> sol = solution.addNegabinary(arr1,arr2);
	for(int i = 0;i < sol.size();i++){
		std::cout << sol[i];
	}

	return 0;
}
