#include<stdio.h>
#include<stdbool.h>

bool validPartition(int* nums,int numsSize){
	bool dp[4] = {true,false,nums[0]==nums[1],false};
	for(int i = 2;i < numsSize;i++){
		bool two = nums[i-1]==nums[i];
		bool three = (two && nums[i]==nums[i-2]) || ((nums[i]-1 == nums[i-1]) && (nums[i]-2 == nums[i-2]));
		dp[(i+1) %4] = (dp[(i-1) % 4] && two) || (dp[(i-2) % 4] && three);
	}
	return dp[numsSize % 4];
}

int main(){
	int nums[] = {4,4,4,4,5,6};
	int numsSize = sizeof(nums)/sizeof(int);

	printf("%b",validPartition(nums,numsSize));

	return 0;
}
