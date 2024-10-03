#include<iostream>

class Solution {
	public:
		int longestAwesome(std::string s){
			int freq[100000] = {0};
			int temp,count = 0;
			for(int i = 0;i < s.size();i++){
				temp = (int)s[i];
				freq[temp]++;
			}

			for(int i = 0;i < s.size();i++){
				temp = (int)s[i];
				if(freq[temp] > 1){
					count+=2;
					freq[temp] -= 2;
				}
			}

			for(int i = 0;i < s.size();i++){
				temp = (int)s[i];
				if(freq[temp] == 1){
					count++;
					break;
				}
			}
			return count;
		}
};

int main(){
	std::string s = "231123";

	Solution solution;
	std::cout << solution.longestAwesome(s);

	return 0;
}
