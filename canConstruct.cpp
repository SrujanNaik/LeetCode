#include<iostream>
#include<unordered_map>

class Solution{
	public:
		bool canConstruct(std::string ransomNote,std::string magazine){
			std::unordered_map<char,int> freq;

			for(char ch:magazine){
				freq[ch]++;
			}

			for(char ch:ransomNote){
				if(freq[ch] != 0){
					freq[ch]--;
				}
				else{
					return false;
				}
			}

			return true;
		}
};

int main(){
	std::string ransomeNote = "aa";
	std::string magazine = "ab";

	Solution sol;
	std::cout << sol.canConstruct(ransomeNote,magazine);
	return 0;
}
