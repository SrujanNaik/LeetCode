#include<iostream>
#include<vector>

int main(){
	std::vector<int> nums = {30000,500,100,30000,100,30000,100};

	int temp = 0;
	int count = 0;
	for(int i = 0; i < 32;i++){
		int count = 0;
		for(int j = 0;j < nums.size();j++){
			if(nums[j]&(1<<i)){
				count++;
			}
		}
		if(count %3 != 0){
			temp = temp^(1<<i);
		}
	}

	std::cout << temp;

	return 0;
}
