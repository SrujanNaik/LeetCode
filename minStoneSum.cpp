#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
	public:
		int minStoneSum(std::vector<int>& piles,int k){
			std::sort(piles.begin(),piles.end(),std::greater<int>());

			int i = 0;
			int total = 0;
			int temp = 0;
			do{
				piles[i] = (piles[i]+2/2)/2;
				k--;
				i++;
			}while(k != 0 && i < piles.size() - 1);

			for(int j = 0;j < piles.size();j++){
				temp = piles[j];
				std::cout << temp;
				total = total + temp;
			}
			return total;
		}
};


int main(){

	std::vector<int> piles = {10000};
	int k = 1;

	Solution solution;
	std::cout << solution.minStoneSum(piles,k);

	return 0;
}
