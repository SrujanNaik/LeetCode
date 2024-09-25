#include<iostream>
#include<vector>
#include<algorithm>

class Solution{
	public:
		int maxWidthOfVerticalArea(std::vector<std::vector<int>>& points){
			int max = 0;
			std::sort(points.begin(),points.end());

			for(int i = 1;i < points.size();i++){
				if(max < points[i][0] - points[i-1][0]){
					max = points [i][0] - points[i-1][0];
				}
			}
			return max;
		}
};

int main(){
	std::vector<std::vector<int>> points = {{3,1},{9,0},{1,0},{1,4},{5,3},{8,8}};

	Solution solution;

	std::cout<< solution.maxWidthOfVerticalArea(points) << std::endl;
}


