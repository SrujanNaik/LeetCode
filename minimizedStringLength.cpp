#include<iostream>
#include<algorithm>

class Solution{
	public:
		void minimizedStringLength(std::string s){
			int count = 1;
			std::sort(s.begin(),s.end());

			for(int i = 1;i<s.size();i++){
				if(s[i-1] != s[i]){
					count++;
				}
			}
			std::cout << count;
		}
};

int main(){
	std::string s = "baadccab";

	Solution solution;
	solution.minimizedStringLength(s);

	return 0;
}
