#include<iostream>

class Solution{
	public:
		int maxVowels(std::string s, int k){
			
			int count = 0,max = 0,i = 0,found = 0;
			
			while(i <= s.size()-k){

				for(int j = i;j < k+i;j++){
					if(count == k){
						return k;
					}
					if(s[j] == 'a' || s[j] == 'e' || s[j] == 'i' || s[j] == 'o' || s[j] == 'u'){
						count++;
						if(max < count){
							max = count;
						}
					}
				}
				i+=found;
				count = 0;
			}
			return max;
		}
};

int main(){
	std::string s = "weallloveyou";
	int k = 7;

	Solution solution;
	std::cout << solution.maxVowels(s,k);

	return 0;
}
