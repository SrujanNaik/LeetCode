#include<iostream>
#include<vector>

class Solution{
	public:
		int busyStudent(std::vector<int>& startTime,std::vector<int>& endTime,int queryTime){
			int SStart = startTime.size();
			int count = 0;
			for(int i = 0;i < SStart;i++){
				if(startTime[i] >= queryTime && endTime[i] >= queryTime)
					count++;
			}
			return count;
		}
};

int main(){
	std::vector<int> startTime = {4};
	std::vector<int> endTime = {4};
	int queryTime = 4;

	Solution sol;
	std::cout << sol.busyStudent(startTime,endTime,queryTime);

	return 0;
}
