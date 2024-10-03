#include<iostream>
#include<unordered_map>

class Solution{
	public:
		void maxRepeating(std::string sequence,std::string word){
			 string sub=word;
        int count=0;
        while(sequence.find(sub)!=string::npos){
            count++;
            sub+=word;
        }
        return count;
		}
};

int main(){
	std::string sequence,word;

	sequence = "aaabaaaabaaabaaaabaaaabaaaabaaaaba";
	word = "aaaba";

	Solution solution;
	solution.maxRepeating(sequence,word);
}
