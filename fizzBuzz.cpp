#include<iostream>
#include<vector>


class Solution{
	public:
		std::vector<std::string> fizzBuzz(int n){
			std::vector<std::string> answer;
			int m;
			for(int i = 1;i <= n;i++){
				m = i;
					if (((m%3) == 0) && ((m%5) == 0)){
						answer.push_back("FizzBuzz");
					}
					else if((m%3) == 0){
						answer.push_back("Fizz");
					}
					else if ((m%5) == 0){
						answer.push_back("Buzz");
					}
					else{
						answer.push_back(std::to_string(m));
					}
			}
			return answer;

		}
};

int main(){
	int n = 20;
	Solution solution;
	std::vector<std::string> ans = solution.fizzBuzz(n);
	for(int i = 0;i < ans.size();i++){
		std::cout << ans[i] << " ";
	}

	return 0;
}
