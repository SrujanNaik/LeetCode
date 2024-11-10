#include<iostream>
#include<vector>

int main(){
	std::vector<int> arr = {1,3,4,8};
	std::vector<std::vector<int>> queries = {
						{0,1},
						{1,2},
						{0,3},
						{3,3}};
	
	std::vector<int> prefix;
	prefix.push_back(arr[0]);

	int S_arr = arr.size();
	for(int i = 1; i < S_arr;i++){
		prefix.push_back(prefix[i-1]^arr[i]);
	}

	std::vector<int> sol;
	for(int i = 0;i < queries.size();i++){
		if(queries[i][0] == 0){
			sol.push_back(prefix[queries[i][1]]);
		}else{
			sol.push_back(prefix[(queries[i][1])]^prefix[queries[i][0]-1]);
		}
	}
	

	for(const auto &num : sol){
		std::cout << num << " ";
	}

	return 0;
}
