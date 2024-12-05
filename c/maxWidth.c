#include<stdio.h>

int maxWidthRamp(int* nums,int numsSize){
	int max = 0;
	int stack[numsSize];
	int top = -1;

	stack[++top] = 0;
	for(int i = 1;i < numsSize;i++){
		if(nums[i] < nums[stack[top]]){
			stack[++top] = i;
		}
	}

	for(int i = numsSize-1;i >=0;i--){
		while(top != -1 && nums[i] >= nums[stack[top]]){
			int j = stack[top--];
			max = (max > i-j)?max:i-j;
		}
	}
	return max;
}

int main(){
	int nums[] = {9,8,1,0,1,9,4,0,4,1};
	int numsSize = 10;

	printf("%d",maxWidthRamp(nums,numsSize));

	return 0;
}
